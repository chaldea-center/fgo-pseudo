void TerminalPramsManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v1; // x19
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  int32_t v9; // w1
  MissionNaviTransitionBoardItem_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppClass *v17; // x0
  __int64 v18; // x0
  struct TerminalPramsManager_StaticFields *v19; // x8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_string__c *v26; // x0
  System_Collections_Generic_List_object__o *v27; // x19
  MissionNaviTransitionBoardItem_o *p_eventScriptMessages; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_List_int__c *v35; // x0
  struct TerminalPramsManager_StaticFields *v36; // x8
  System_Collections_Generic_List_int__o *v37; // x19
  MissionNaviTransitionBoardItem_o *p_nonFrameInBossHpUiIndex; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_int__o *v45; // x19
  MissionNaviTransitionBoardItem_o *p_RaidBossHpForceHideGroupIndexList; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7

  if ( (byte_596DB2B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DB2B = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->loginQuestNotifiedList,
    (int32_t)v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v9 = (int)StringLiteral_1/*""*/;
  v10 = (MissionNaviTransitionBoardItem_o *)TerminalPramsManager_TypeInfo->static_fields;
  v10[1].fields.sortValue1 = (int64_t)StringLiteral_1/*""*/;
  v10 = (MissionNaviTransitionBoardItem_o *)((char *)v10 + 216);
  BYTE5(v10[-1].fields.sortValue0B) = 0;
  sub_2213A04(v10, v9, v11, v12, v13, v14, v15, v16);
  v17 = float___TypeInfo;
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_E9DA40;
  v18 = sub_2213B20(v17, 3);
  v19 = TerminalPramsManager_TypeInfo->static_fields;
  v19->TipsArchiveScrollValueList = (struct System_Single_array *)v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->TipsArchiveScrollValueList, v18, v20, v21, v22, v23, v24, v25);
  v26 = System_Collections_Generic_List_string__TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v27 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (MissionNaviTransitionBoardItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (MissionNaviTransitionBoardItem_c *)v27;
  sub_2213A04(p_eventScriptMessages, (int32_t)v27, v29, v30, v31, v32, v33, v34);
  v35 = System_Collections_Generic_List_int__TypeInfo;
  v36 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v36->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v36->EVENT_POINT_EFFECT_STATE_ADD = 1;
  v36->_IsTransFromOrdealCall_k__BackingField = 0;
  v36->isInvisibleConnectAndLoad = 0;
  v36->meSceneStatus = 0;
  *(_QWORD *)&v36->ConnectMarkEventId = 0;
  *(_OWORD *)&v36->_ShopFocusItemId_k__BackingField = 0u;
  v36->isCheckHomeExpirationDateEventMap = 1;
  v36->_IsMoveFolderByQuestAfterAction_k__BackingField = 0;
  *(_WORD *)&v36->_IsAutoOpenMasterMissionOnExRoomQuest_k__BackingField = 0;
  v36->_AutoExRoomType_k__BackingField = 0;
  v36->_IsAutoExRoomWin_k__BackingField = 0;
  *(_WORD *)&v36->IsEventMapLoading = 0;
  v37 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v35);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  p_nonFrameInBossHpUiIndex = (MissionNaviTransitionBoardItem_o *)&TerminalPramsManager_TypeInfo->static_fields->nonFrameInBossHpUiIndex;
  p_nonFrameInBossHpUiIndex->klass = (MissionNaviTransitionBoardItem_c *)v37;
  sub_2213A04(p_nonFrameInBossHpUiIndex, (int32_t)v37, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  p_RaidBossHpForceHideGroupIndexList = (MissionNaviTransitionBoardItem_o *)&TerminalPramsManager_TypeInfo->static_fields->RaidBossHpForceHideGroupIndexList;
  p_RaidBossHpForceHideGroupIndexList->klass = (MissionNaviTransitionBoardItem_c *)v45;
  sub_2213A04(p_RaidBossHpForceHideGroupIndexList, (int32_t)v45, v47, v48, v49, v50, v51, v52);
  TerminalPramsManager_TypeInfo->static_fields->_MasterMissionTargetType_k__BackingField = -1;
}


void TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_596DAF8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAF8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_2213CDC(0, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__AddRemainingRaidHpData(
        int64_t remainingHp,
        bool isAllBossDefeated,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *v6; // x22
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  TerminalPramsManager_c *v14; // x0
  MissionNaviTransitionBoardItem_o *p_RemainingRaidHpData_k__BackingField; // x0
  _QWORD *p_image; // x0
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  int v20; // w9
  int v21; // w8
  __int64 v22; // x8
  __int64 v23; // x8
  struct EventInfoRemainingRaidHpData_o *RemainingRaidHpData_k__BackingField; // x21
  __int64 v25; // x8
  int v26; // w9
  __int64 v27; // x8
  int v28; // w9
  __int64 v29; // x8
  __int64 v30; // x8
  int v31; // w9
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x21
  __int64 v35; // x8
  __int64 v36; // x8
  TerminalPramsManager_c *v37; // x0
  struct EventInfoRemainingRaidHpData_o *v38; // x21
  __int64 v39; // x2
  float realtimeSinceStartup; // s0
  int v41; // w8
  struct EventInfoRemainingRaidHpData_o *v42; // x21
  __int64 v43; // x8
  float v44; // s8

  if ( (byte_596DB21 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&EventInfoRemainingRaidHpData_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB21 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
  if ( !byte_596D210 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D210 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_RemainingRaidHpData_k__BackingField )
  {
    v6 = (Il2CppObject *)sub_2213CCC(EventInfoRemainingRaidHpData_TypeInfo);
    System_Object___ctor(v6, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    if ( !byte_596DB6A )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB6A = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
      v14 = TerminalPramsManager_TypeInfo;
    }
    p_RemainingRaidHpData_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v14->static_fields->_RemainingRaidHpData_k__BackingField;
    p_RemainingRaidHpData_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v6;
    sub_2213A04(p_RemainingRaidHpData_k__BackingField, (int32_t)v6, v8, v9, v10, v11, v12, v13);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, isAllBossDefeated, method);
  if ( !byte_596D210 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D210 = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v17 = *(_QWORD *)(p_image[23] + 456LL);
  if ( !v17 )
    goto LABEL_139;
  *(_BYTE *)(v17 + 40) = 0;
  if ( isAllBossDefeated )
  {
    if ( !*((_DWORD *)p_image + 57) )
      j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
    if ( !byte_596D210 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D210 = 1;
    }
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
    }
    v18 = *(_QWORD *)(p_image[23] + 456LL);
    if ( !v18 )
      goto LABEL_139;
    *(_BYTE *)(v18 + 40) = 1;
  }
  if ( !*((_DWORD *)p_image + 57) )
    j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
  if ( !byte_596D210 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D210 = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v19 = *(_QWORD *)(p_image[23] + 456LL);
  if ( !v19 )
    goto LABEL_139;
  v20 = *(_DWORD *)(v19 + 16);
  v21 = *((_DWORD *)p_image + 57);
  if ( v20 <= 0 )
  {
    if ( !v21 )
      j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
    if ( !byte_596D210 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D210 = 1;
    }
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
    }
    v25 = *(_QWORD *)(p_image[23] + 456LL);
    if ( !v25 )
      goto LABEL_139;
    v26 = (unsigned __int8)byte_596D210;
    *(_QWORD *)(v25 + 24) = remainingHp;
    if ( !v26 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
      byte_596D210 = 1;
    }
  }
  else
  {
    if ( !v21 )
      j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
    if ( !byte_596D210 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D210 = 1;
    }
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
    }
    v22 = *(_QWORD *)(p_image[23] + 456LL);
    if ( !v22 )
      goto LABEL_139;
    if ( *(int *)(v22 + 16) < 1 )
      goto LABEL_142;
    if ( !*((_DWORD *)p_image + 57) )
      j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
    if ( !byte_596D210 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D210 = 1;
    }
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
    }
    v23 = *(_QWORD *)(p_image[23] + 456LL);
    if ( !v23 )
      goto LABEL_139;
    if ( *(int *)(v23 + 16) > 1 )
    {
LABEL_142:
      if ( !*((_DWORD *)p_image + 57) )
        j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
      if ( !byte_596D210 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D210 = 1;
      }
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
      if ( *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        RemainingRaidHpData_k__BackingField = TerminalPramsManager_TypeInfo->static_fields->_RemainingRaidHpData_k__BackingField;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
        p_image = &TerminalPramsManager_TypeInfo->_1.image;
        RemainingRaidHpData_k__BackingField = TerminalPramsManager_TypeInfo->static_fields->_RemainingRaidHpData_k__BackingField;
        if ( !byte_596D210 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          p_image = &TerminalPramsManager_TypeInfo->_1.image;
          byte_596D210 = 1;
        }
      }
      if ( !*((_DWORD *)p_image + 57) )
      {
        j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
        p_image = &TerminalPramsManager_TypeInfo->_1.image;
      }
      v30 = *(_QWORD *)(p_image[23] + 456LL);
      if ( !v30 || !RemainingRaidHpData_k__BackingField )
        goto LABEL_139;
      v31 = (unsigned __int8)byte_596D210;
      RemainingRaidHpData_k__BackingField->fields.beforeRemainingRaidHp = *(_QWORD *)(v30 + 32);
      if ( !v31 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        p_image = &TerminalPramsManager_TypeInfo->_1.image;
        byte_596D210 = 1;
      }
      if ( !*((_DWORD *)p_image + 57) )
      {
        j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
        p_image = &TerminalPramsManager_TypeInfo->_1.image;
      }
      v32 = *(_QWORD *)(p_image[23] + 456LL);
      if ( !v32 )
        goto LABEL_139;
      *(_QWORD *)(v32 + 32) = remainingHp;
      goto LABEL_98;
    }
    if ( !*((_DWORD *)p_image + 57) )
      j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
    if ( !byte_596D210 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D210 = 1;
    }
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  if ( !*((_DWORD *)p_image + 57) )
  {
    j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v27 = *(_QWORD *)(p_image[23] + 456LL);
  if ( !v27 )
    goto LABEL_139;
  v28 = (unsigned __int8)byte_596D210;
  *(_QWORD *)(v27 + 32) = remainingHp;
  if ( !v28 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    byte_596D210 = 1;
  }
  if ( !*((_DWORD *)p_image + 57) )
  {
    j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v29 = *(_QWORD *)(p_image[23] + 456LL);
  if ( !v29 )
    goto LABEL_139;
  ++*(_DWORD *)(v29 + 16);
LABEL_98:
  if ( !*((_DWORD *)p_image + 57) )
    j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
  if ( !byte_596D210 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D210 = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v33 = *(_QWORD *)(p_image[23] + 456LL);
  if ( !v33 )
    goto LABEL_139;
  v34 = *(_QWORD *)(v33 + 32);
  if ( !byte_596D210 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    byte_596D210 = 1;
  }
  if ( !*((_DWORD *)p_image + 57) )
  {
    j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v35 = *(_QWORD *)(p_image[23] + 456LL);
  if ( !v35 )
    goto LABEL_139;
  if ( v34 <= *(_QWORD *)(v35 + 24) )
    goto LABEL_119;
  if ( !*((_DWORD *)p_image + 57) )
    j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
  if ( !byte_596D210 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D210 = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v36 = *(_QWORD *)(p_image[23] + 456LL);
  if ( !v36 )
LABEL_139:
    sub_2213CDC(p_image, isAllBossDefeated);
  *(_BYTE *)(v36 + 40) = 1;
LABEL_119:
  if ( !*((_DWORD *)p_image + 57) )
    j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, method);
  if ( !byte_596D210 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D210 = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, method);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v38 = v37->static_fields->_RemainingRaidHpData_k__BackingField;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  if ( !v38 )
    goto LABEL_139;
  v41 = (unsigned __int8)byte_596D210;
  v38->fields.lastUpdateRealtime = realtimeSinceStartup;
  if ( !v41 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D210 = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    v42 = TerminalPramsManager_TypeInfo->static_fields->_RemainingRaidHpData_k__BackingField;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isAllBossDefeated, v39);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    v42 = TerminalPramsManager_TypeInfo->static_fields->_RemainingRaidHpData_k__BackingField;
    if ( !byte_596D210 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
      byte_596D210 = 1;
    }
  }
  if ( !*((_DWORD *)p_image + 57) )
  {
    j_il2cpp_runtime_class_init_0(p_image, isAllBossDefeated, v39);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v43 = *(_QWORD *)(p_image[23] + 456LL);
  if ( !v43 )
    goto LABEL_139;
  v44 = *(float *)(v43 + 48);
  p_image = &BalanceConfig_TypeInfo->_1.image;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isAllBossDefeated, v39);
  if ( !v42 )
    goto LABEL_139;
  v42->fields.decreaseEndRealtime = v44 + (float)BalanceConfig_TypeInfo->static_fields->RequestRaidUpdateEventMap;
  TerminalPramsManager__SaveRaidRemainingCount(remainingHp, (const MethodInfo *)isAllBossDefeated);
}


void TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  int v4; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DAB4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAB4 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596ABDE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596ABDE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v4 = (unsigned __int8)byte_596D5E9;
  v3->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !v4 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596D5E9 = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_IsAutoShortcut_k__BackingField = 0;
  static_fields->mIsAutoOpenMasterMission = 0;
}


void TerminalPramsManager__BlankEarthRank_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAE9 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11952/*"SAVEKEY_BlankEarthRank"*/);
    byte_596DAE9 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB53 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB53 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11952/*"SAVEKEY_BlankEarthRank"*/,
    v3->static_fields->_BlankEarthRank_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAE8 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11953/*"SAVEKEY_BlankEarthSpotId"*/);
    byte_596DAE8 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596CDED )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDED = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11953/*"SAVEKEY_BlankEarthSpotId"*/,
    v3->static_fields->_BlankEarthSpotId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v5; // x0

  if ( (byte_596DAE7 & 1) == 0 )
  {
    sub_2213A60(&CommonUI_CampaignDirectBonusData___TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11954/*"SAVEKEY_CampaignDirectBonus"*/);
    byte_596DAE7 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596A091 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A091 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v3->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_2213B20(CommonUI_CampaignDirectBonusData___TypeInfo, 0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v1, v2);
  v5 = JsonManager__toJson(p_obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11954/*"SAVEKEY_CampaignDirectBonus"*/, v5, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  __int64 v6; // x2
  Il2CppObject *v9; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596DB07 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596DB07 = 1;
  }
  v9 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_16;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0);
  if ( !v5 )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v5,
          &v9,
          (int32_t)Instance,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v6);
  if ( !v9 )
LABEL_16:
    sub_2213CDC(Instance, v4);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v9[1].klass),
            (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}


void TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  const MethodInfo *v6; // x0

  if ( (byte_596DAED & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAED = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596D8C0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8C0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_SelectedStoryQuestId_k__BackingField >= 1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v4, method, v2);
    if ( !byte_596D8C0 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D8C0 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( v5->static_fields->_SelectedStoryQuestId_k__BackingField != questId )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v5, method, v2);
      if ( !byte_596D31D )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D31D = 1;
      }
      v6 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
        v6 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      }
      *((_DWORD *)v6[2].virtualMethodPointer + 8) = 0;
      TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(v6);
    }
  }
}


bool TerminalPramsManager__CheckEventActivityPointSaveData(const MethodInfo *method)
{
  if ( (byte_596DAD2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/);
    sub_2213A60(&StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_596DAD2 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/, 0)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/, 0);
}


bool TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  if ( (byte_596DAD4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_14268/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_596DAD4 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14268/*"TerminalBeforeEventSubmarinePointData"*/, 0);
}


bool TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t parentWarId; // w19
  BalanceConfig_c *v5; // x0

  if ( (byte_596DB15 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596DB15 = 1;
  }
  if ( !warEntity )
    return 0;
  parentWarId = warEntity->fields.parentWarId;
  v5 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v5 = BalanceConfig_TypeInfo;
  }
  return parentWarId == v5->static_fields->OrdealCallWarId;
}


void TerminalPramsManager__CheckResumeEffectNT2(const MethodInfo *method)
{
  __int64 v1; // x19
  const MethodInfo *v2; // x1
  __int64 v3; // x2
  TerminalPramsManager_c *v4; // x0
  ScrTerminalListTop_c *v5; // x8
  System_String_o *NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // x20
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  ScrTerminalListTop_c *v9; // x0
  System_String_o *NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  ScrTerminalListTop_c *v13; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  __int64 v15; // x2
  Il2CppObject *v16; // x20
  TerminalPramsManager_c *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_object__o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_Action_object__o *v27; // x22
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  MissionNaviTransitionBoardItem_c *v35; // x19
  TerminalPramsManager_c *v36; // x0
  MissionNaviTransitionBoardItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v38; // x0

  if ( (byte_596DAF1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_TerminalPramsManager___c__DisplayClass791_0__CheckResumeEffectNT2_b__0__);
    sub_2213A60(&TerminalPramsManager___c__DisplayClass791_0_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_87/*"\r\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DAF1 = 1;
  }
  v1 = sub_2213CCC(TerminalPramsManager___c__DisplayClass791_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass791_0___ctor((TerminalPramsManager___c__DisplayClass791_0_o *)v1, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
  if ( !byte_596DB50 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB50 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v5 = ScrTerminalListTop_TypeInfo;
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v2, v3);
      v5 = ScrTerminalListTop_TypeInfo;
      v4 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v5->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( !*(&v4->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v4, v2, v3);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v2) )
    {
      v9 = ScrTerminalListTop_TypeInfo;
      if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v7, v8);
        v9 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v9->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v7) )
      {
        v13 = ScrTerminalListTop_TypeInfo;
        if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v11, v12);
          v13 = ScrTerminalListTop_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v13->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_39;
        v16 = (Il2CppObject *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))PlayedTerminalEffects_k__BackingField->klass->vtable._3_ToString.methodPtr)(
                                PlayedTerminalEffects_k__BackingField,
                                PlayedTerminalEffects_k__BackingField->klass->vtable._3_ToString.method);
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v15);
        if ( !byte_596DB50 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596DB50 = 1;
        }
        v17 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v15);
          v17 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v17->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_75703400(
                                                        PlayedTerminalEffects_k__BackingField,
                                                        (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                                        0)) == 0
          || (v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           PlayedTerminalEffects_k__BackingField,
                                                                           0xAu,
                                                                           0,
                                                                           0),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                                                            v18,
                                                                            (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_string___)) == 0)
          || (v19 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v16,
                                                                           (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__),
              !v1) )
        {
LABEL_39:
          sub_2213CDC(PlayedTerminalEffects_k__BackingField, v11);
        }
        v26 = (int)StringLiteral_1/*""*/;
        *(_QWORD *)(v1 + 16) = StringLiteral_1/*""*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v1 + 16), v26, v20, v21, v22, v23, v24, v25);
        v27 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v27,
          (Il2CppObject *)v1,
          Method_TerminalPramsManager___c__DisplayClass791_0__CheckResumeEffectNT2_b__0__,
          0);
        System_Collections_Generic_List_object___ForEach(
          v19,
          (System_Action_T__o *)v27,
          (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_string__ForEach__);
        v35 = *(MissionNaviTransitionBoardItem_c **)(v1 + 16);
        if ( !byte_596DB3F )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596DB3F = 1;
        }
        v36 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28, v29);
          v36 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v36->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = v35;
        sub_2213A04(p_PlayedTerminalEffects_k__BackingField, (int32_t)v35, v29, v30, v31, v32, v33, v34);
        TerminalPramsManager__Save_SaveData(v38);
      }
    }
  }
}


void TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAE2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11955/*"SAVEKEY_ClearEventQuestIds"*/);
    byte_596DAE2 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596CEB3 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CEB3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11955/*"SAVEKEY_ClearEventQuestIds"*/,
    v3->static_fields->_ClearEventQuestIds_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAE1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11957/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_2213A60(&StringLiteral_11956/*"SAVEKEY_ConnectMarkAnimationId"*/);
    byte_596DAE1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11957/*"SAVEKEY_ConnectMarkEventId"*/, v3->static_fields->ConnectMarkEventId, 0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11956/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__DeleteClearDatas(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_ClearData_c *v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct System_String_o *v13; // x1

  if ( (byte_596DB0A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_ClearData_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DB0A = 1;
  }
  v3 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !*(&TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_ClearData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
  if ( !byte_596DB65 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB65 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v11 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  v13 = (struct System_String_o *)StringLiteral_1/*""*/;
  static_fields->_isQuestRewardSetted_k__BackingField = 0;
  static_fields->lastPlayBgmName = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->lastPlayBgmName,
    (int32_t)v13,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0
  const MethodInfo *v6; // x0

  if ( (byte_596DAC5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11962/*"SAVEKEY_LastPlayBgmName"*/);
    sub_2213A60(&StringLiteral_14270/*"TerminalEndTime"*/);
    sub_2213A60(&StringLiteral_5373/*"Debug_IsOriginalGuestNPC"*/);
    sub_2213A60(&StringLiteral_11969/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_2213A60(&StringLiteral_8436/*"IsTransitionToTerminalAfterMovie"*/);
    sub_2213A60(&StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/);
    sub_2213A60(&StringLiteral_11954/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_2213A60(&StringLiteral_11963/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_2213A60(&StringLiteral_11974/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_2213A60(&StringLiteral_8406/*"IsPart2FinalChapter"*/);
    sub_2213A60(&StringLiteral_14271/*"TerminalEventDailyPointEventId"*/);
    sub_2213A60(&StringLiteral_5369/*"Debug_GuestNPCInfoList"*/);
    sub_2213A60(&StringLiteral_14268/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_2213A60(&StringLiteral_14277/*"TerminalPhaseCnt"*/);
    sub_2213A60(&StringLiteral_11973/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_2213A60(&StringLiteral_14285/*"TerminalTimeStatusEventId"*/);
    sub_2213A60(&StringLiteral_14269/*"TerminalDispState"*/);
    sub_2213A60(&StringLiteral_11966/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_2213A60(&StringLiteral_14272/*"TerminalIsDoneShortcut"*/);
    sub_2213A60(&StringLiteral_11964/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_2213A60(&StringLiteral_11970/*"SAVEKEY_PlayerGenderType"*/);
    sub_2213A60(&StringLiteral_11975/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_2213A60(&StringLiteral_13131/*"SaveDataDeleteButtonNonRelease"*/);
    sub_2213A60(&StringLiteral_11955/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_2213A60(&StringLiteral_11967/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_2213A60(&StringLiteral_5374/*"Debug_IsQuestReleaseAll"*/);
    sub_2213A60(&StringLiteral_11961/*"SAVEKEY_IsAutoExRoomWin"*/);
    sub_2213A60(&StringLiteral_6484/*"EventInfoJobLevelSnapshot"*/);
    sub_2213A60(&StringLiteral_5371/*"Debug_IsDummyErrorSelect"*/);
    sub_2213A60(&StringLiteral_14280/*"TerminalQuestId"*/);
    sub_2213A60(&StringLiteral_11972/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_2213A60(&StringLiteral_11978/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_2213A60(&StringLiteral_14284/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_2213A60(&StringLiteral_14289/*"TerminalWarId"*/);
    sub_2213A60(&StringLiteral_14282/*"TerminalSpotId"*/);
    sub_2213A60(&StringLiteral_14286/*"TerminalTimeStatusLoopCount"*/);
    sub_2213A60(&StringLiteral_11662/*"RaidRemainingHpForCounter"*/);
    sub_2213A60(&StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_2213A60(&StringLiteral_11953/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_2213A60(&StringLiteral_11958/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_2213A60(&StringLiteral_5372/*"Debug_IsOriginalBattle"*/);
    sub_2213A60(&StringLiteral_14290/*"TerminalWarStartedIds"*/);
    sub_2213A60(&StringLiteral_5368/*"Debug_BattleEnemyList"*/);
    sub_2213A60(&StringLiteral_11957/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_2213A60(&StringLiteral_14288/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_2213A60(&StringLiteral_11956/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_2213A60(&StringLiteral_11968/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_2213A60(&StringLiteral_11951/*"SAVEKEY_AutoExRoomType"*/);
    sub_2213A60(&StringLiteral_14275/*"TerminalLastPlayedQuestId"*/);
    sub_2213A60(&StringLiteral_11960/*"SAVEKEY_IsAutoExRoom"*/);
    sub_2213A60(&StringLiteral_5370/*"Debug_IsBuildInfoDisp"*/);
    sub_2213A60(&StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/);
    sub_2213A60(&StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/);
    sub_2213A60(&StringLiteral_11977/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_596DAC5 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14269/*"TerminalDispState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14289/*"TerminalWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14282/*"TerminalSpotId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14280/*"TerminalQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14275/*"TerminalLastPlayedQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14277/*"TerminalPhaseCnt"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14270/*"TerminalEndTime"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14272/*"TerminalIsDoneShortcut"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14290/*"TerminalWarStartedIds"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5374/*"Debug_IsQuestReleaseAll"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5371/*"Debug_IsDummyErrorSelect"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5370/*"Debug_IsBuildInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5372/*"Debug_IsOriginalBattle"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5373/*"Debug_IsOriginalGuestNPC"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5368/*"Debug_BattleEnemyList"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5369/*"Debug_GuestNPCInfoList"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14285/*"TerminalTimeStatusEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14286/*"TerminalTimeStatusLoopCount"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14271/*"TerminalEventDailyPointEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14284/*"TerminalTimeStatusEventDailyPoint"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14288/*"TerminalTransitionInfoVoiceAssetName"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11960/*"SAVEKEY_IsAutoExRoom"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11951/*"SAVEKEY_AutoExRoomType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11961/*"SAVEKEY_IsAutoExRoomWin"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14268/*"TerminalBeforeEventSubmarinePointData"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11973/*"SAVEKEY_TerminalConquestInfos"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11972/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11974/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11975/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11962/*"SAVEKEY_LastPlayBgmName"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11963/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11969/*"SAVEKEY_PlayedTerminalEffects"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11966/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11967/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11968/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11978/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11957/*"SAVEKEY_ConnectMarkEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11956/*"SAVEKEY_ConnectMarkAnimationId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11977/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11955/*"SAVEKEY_ClearEventQuestIds"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11964/*"SAVEKEY_MapModelClearQuestInfo"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11958/*"SAVEKEY_DataLostBattleAutoReset"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11970/*"SAVEKEY_PlayerGenderType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11954/*"SAVEKEY_CampaignDirectBonus"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11953/*"SAVEKEY_BlankEarthSpotId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8406/*"IsPart2FinalChapter"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8436/*"IsTransitionToTerminalAfterMovie"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6484/*"EventInfoJobLevelSnapshot"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11662/*"RaidRemainingHpForCounter"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13131/*"SaveDataDeleteButtonNonRelease"*/, 0);
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  TerminalPramsManager__InitParameter((const MethodInfo *)v3);
  TerminalPramsManager__DeleteClearDatas(v4);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v5);
  TerminalPramsManager__DeleteQuestRandomGroupList(v6);
}


void TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v8; // x0
  MissionNaviTransitionBoardItem_o *p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_596DB0C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11959/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_596DB0C = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB66 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB66 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v8->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0;
  sub_2213A04(p_EventRaidDefeatedEffectInfo_k__BackingField, 0, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11959/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0);
}


void TerminalPramsManager__DeleteJobLevelSnapshot(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596DABB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_6484/*"EventInfoJobLevelSnapshot"*/);
    byte_596DABB = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB2E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB2E = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_JobLevelSnapshot_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_JobLevelSnapshot_k__BackingField,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6484/*"EventInfoJobLevelSnapshot"*/, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v8; // x0
  MissionNaviTransitionBoardItem_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_596DB11 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11971/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_596DB11 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB68 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB68 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v8->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0;
  sub_2213A04(p_QuestRandomGroupList_k__BackingField, 0, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11971/*"SAVEKEY_QuestRandomGroupList"*/, 0);
}


void TerminalPramsManager__DeleteUserSaveDataDeleteButtonNonRelease(const MethodInfo *method)
{
  if ( (byte_596DB2A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13131/*"SaveDataDeleteButtonNonRelease"*/);
    byte_596DB2A = 1;
  }
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13131/*"SaveDataDeleteButtonNonRelease"*/, 0) )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13131/*"SaveDataDeleteButtonNonRelease"*/, 0);
}


void TerminalPramsManager__DeleteUserSaveDataDeletedState(const MethodInfo *method)
{
  if ( (byte_596DB27 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13132/*"SaveDataDeletedState"*/);
    byte_596DB27 = 1;
  }
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13132/*"SaveDataDeletedState"*/, 0) )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13132/*"SaveDataDeletedState"*/, 0);
}


bool TerminalPramsManager__EnableResumeToBlankEarthMap(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_596DB19 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB19 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !TerminalPramsManager__IsBlankEarthWarByWarId(warId, method) )
    return 1;
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
  if ( TerminalPramsManager__ExistBlankEarthTutorial((const MethodInfo *)v6) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v8);
  return QuestTree__IsActiveWar((QuestTree_o *)Instance, warId, 0);
}


void TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  System_String_o *v7; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596DACE & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_14271/*"TerminalEventDailyPointEventId"*/);
    sub_2213A60(&StringLiteral_14284/*"TerminalTimeStatusEventDailyPoint"*/);
    byte_596DACE = 1;
  }
  BeforeTimeEventDailyPoint_k__BackingField = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB4C )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14271/*"TerminalEventDailyPointEventId"*/,
    v3->static_fields->_EventDailyPointEventId_k__BackingField,
    0);
  if ( !byte_596DB4D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4D = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v6 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v6->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v7 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_14284/*"TerminalTimeStatusEventDailyPoint"*/, v7, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0

  if ( (byte_596DACD & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_14285/*"TerminalTimeStatusEventId"*/);
    sub_2213A60(&StringLiteral_14286/*"TerminalTimeStatusLoopCount"*/);
    byte_596DACD = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D8BB )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8BB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14285/*"TerminalTimeStatusEventId"*/,
    v3->static_fields->_TimeStatusEventId_k__BackingField,
    0);
  if ( !byte_596D8BC )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8BC = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14286/*"TerminalTimeStatusLoopCount"*/,
    v6->static_fields->_TimeStatusLoopCount_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__ExistBlankEarthTutorial(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v7; // x0

  if ( (byte_596DB18 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB18 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( TerminalPramsManager__ExistBlankEarthTutorialAction((const MethodInfo *)v3) )
    return 1;
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  return EventTutorialMaster__IsTutorialAvailableWithTargetId(
           0,
           18,
           v7->static_fields->OrdealCallWarId,
           v7->static_fields->OrdealCallWarId,
           0,
           0,
           0,
           0);
}


bool TerminalPramsManager__ExistBlankEarthTutorialAction(const MethodInfo *method)
{
  __int64 v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_Collections_ICollection_o *AvailableTutorialArray; // x0

  if ( (byte_596DB17 & 1) == 0 )
  {
    sub_2213A60(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    byte_596DB17 = 1;
  }
  v1 = sub_2213CCC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v1, 0);
  if ( !v1 )
    sub_2213CDC(v2, v3);
  *(_QWORD *)(v1 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v1,
                                                                 0);
  return !BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0);
}


float TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int32_t targetFrameRate; // w0

  if ( (byte_596DAC0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    byte_596DAC0 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1, v2);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
  return (float)(1.0 / (float)targetFrameRate) + (float)(1.0 / (float)targetFrameRate);
}


int32_t TerminalPramsManager__GetFolderLastClickedIdx(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596DAF6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAF6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  value = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v4->static_fields->folderLastIdxs;
  if ( !folderLastIdxs )
    return 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs;
    if ( !folderLastIdxs )
      sub_2213CDC(v6, v7);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return 0;
  }
}


float TerminalPramsManager__GetIntpTime_AutoResume(float time, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0

  if ( (byte_596DAC1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAC1 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
  if ( !byte_596CFD8 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFD8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_IsAutoResume_k__BackingField )
    return time;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, v2, v3);
  if ( !byte_596D607 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D607 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( v6->static_fields->_IsMapReturnFolder_k__BackingField )
    return time;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, v2, v3);
  return TerminalPramsManager__GetAutoIntpTime((const MethodInfo *)v6);
}


int32_t TerminalPramsManager__GetQuestReleasedFocusState(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v6; // x1

  if ( (byte_596DAFC & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAFC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v4);
  if ( !QuestFocusStateManager )
    sub_2213CDC(0, v6);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0);
}


int32_t TerminalPramsManager__GetRaidCounterEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596DB22 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    byte_596DB22 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v6);
  if ( !v7 )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    v7,
                                    &entity,
                                    BalanceConfig_TypeInfo->static_fields->Fgo20251220WarId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int32_t)entity[6].klass;
LABEL_12:
    sub_2213CDC(Master_object, v5);
  }
  return 0;
}


bool TerminalPramsManager__HasClearDatas(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_ClearData_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_ClearData_c *v6; // x0
  System_String_o *String_83398240; // x0

  if ( (byte_596DB0B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_ClearData_TypeInfo);
    byte_596DB0B = 1;
  }
  v3 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !*(&TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_ClearData_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v3->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0) )
  {
    v6 = TerminalPramsManager_ClearData_TypeInfo;
    if ( !*(&TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo, v4, v5);
      v6 = TerminalPramsManager_ClearData_TypeInfo;
    }
    String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240(v6->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0);
    return !System_String__IsNullOrEmpty(String_83398240, 0);
  }
  else
  {
    return 0;
  }
}


void TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAC7 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAC7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  TerminalPramsManager__InitParameter((const MethodInfo *)v3);
}


void TerminalPramsManager__InitMessageWindowData(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v8; // x0
  struct System_String_o *v9; // x20
  int v10; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  TerminalPramsManager_c *v19; // x0
  int v20; // w9
  struct TerminalPramsManager_StaticFields *v21; // x0

  if ( (byte_596DAF4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DAF4 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596C1A2 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596C1A2 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  v10 = (unsigned __int8)byte_596D5EC;
  v8->static_fields->_IsDispOnly_k__BackingField = 0;
  if ( !v10 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596D5EC = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int32_t)v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_596D5EB )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5EB = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12, v13);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v20 = (unsigned __int8)byte_596C1A1;
  v19->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !v20 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
    byte_596C1A1 = 1;
  }
  if ( !*(&v19->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v19, v12, v13);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v21 = v19->static_fields;
  v21->_BattleSetupKeep_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v21->_BattleSetupKeep_k__BackingField,
    0,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v8; // x0
  int v9; // w9
  int v10; // w9
  int v11; // w9
  int v12; // w9
  int v13; // w9
  int v14; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x8
  TerminalPramsManager_c *v17; // x0
  int v18; // w9
  int v19; // w9
  int v20; // w9
  int v21; // w9
  int v22; // w9
  struct TerminalPramsManager_StaticFields *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  TerminalPramsManager_c *v31; // x0
  int v32; // w9
  int v33; // w9
  MissionNaviTransitionBoardItem_o *v34; // x0
  int32_t v35; // w1
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  TerminalPramsManager_c *v43; // x0
  int v44; // w9
  int v45; // w9
  int v46; // w9
  int v47; // w9
  int v48; // w9
  MissionNaviTransitionBoardItem_o *p_timeStatusRecord_k__BackingField; // x0
  __int64 v50; // x1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  TerminalPramsManager_c *v57; // x0
  int v58; // w9
  int v59; // w9
  int v60; // w9
  int v61; // w9
  int v62; // w9
  int v63; // w9
  int v64; // w9
  int v65; // w9
  MissionNaviTransitionBoardItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  int32_t v67; // w1
  MissionNaviTransitionBoardItem_o *p_lastPlayBgmName; // x0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  __int64 v75; // x1
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  TerminalPramsManager_c *v82; // x0
  int v83; // w9
  struct TerminalPramsManager_StaticFields *v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  TerminalPramsManager_c *v87; // x0
  int v88; // w9
  int v89; // w9
  int v90; // w9
  const MethodInfo *v91; // x0
  __int64 v92; // x1
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  TerminalPramsManager_c *v99; // x0
  MissionNaviTransitionBoardItem_c *v100; // x20
  int v101; // w9
  MissionNaviTransitionBoardItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  __int64 v103; // x1
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  TerminalPramsManager_c *v110; // x0
  int v111; // w9
  int v112; // w9
  struct TerminalPramsManager_StaticFields *v113; // x8
  int v114; // w9
  int v115; // w9
  int v116; // w9
  int v117; // w9
  int v118; // w9
  int v119; // w9
  int v120; // w9
  int v121; // w9
  int v122; // w9
  int v123; // w9
  int v124; // w9
  int v125; // w9
  int v126; // w9
  int v127; // w9
  MissionNaviTransitionBoardItem_c *v128; // x20
  int v129; // w9
  MissionNaviTransitionBoardItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  __int64 v131; // x1
  System_String_o *v132; // x2
  System_String_o *v133; // x3
  int32_t v134; // w4
  int32_t v135; // w5
  bool v136; // w6
  bool v137; // w7
  TerminalPramsManager_c *v138; // x0
  struct TerminalPramsManager_StaticFields *v139; // x0
  __int64 v140; // x1
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  TerminalPramsManager_c *v147; // x0
  struct TerminalPramsManager_StaticFields *v148; // x0
  __int64 v149; // x1
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  TerminalPramsManager_c *v156; // x0
  int v157; // w9
  struct TerminalPramsManager_StaticFields *v158; // x0
  __int64 v159; // x1
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  MissionNaviTransitionBoardItem_c *v166; // x20
  TerminalPramsManager_c *v167; // x0
  MissionNaviTransitionBoardItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  __int64 v169; // x1
  System_String_o *v170; // x2
  System_String_o *v171; // x3
  int32_t v172; // w4
  int32_t v173; // w5
  bool v174; // w6
  bool v175; // w7
  TerminalPramsManager_c *v176; // x0
  TerminalPramsManager_c *v177; // x0
  int v178; // w9
  struct TerminalPramsManager_StaticFields *v179; // x8
  struct System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x9
  struct System_Collections_Generic_List_int__o *nonFrameInBossHpUiIndex; // x8
  int v182; // w10
  int v183; // w10
  int v184; // w9
  MissionNaviTransitionBoardItem_o *p_ContinueDecideLastChallengeQuestInfo_k__BackingField; // x0
  __int64 v186; // x1
  __int64 v187; // x2
  TerminalPramsManager_c *v188; // x0

  if ( (byte_596DAC6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DAC6 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596AEFA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEFA = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = (unsigned __int8)byte_596A15A;
  v8->static_fields->_WarId_k__BackingField = 0;
  if ( !v9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596A15A = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v10 = (unsigned __int8)byte_596AEF7;
  v8->static_fields->_SpotId_k__BackingField = 0;
  if ( !v10 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596AEF7 = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v11 = (unsigned __int8)byte_596D211;
  v8->static_fields->_QuestId_k__BackingField = 0;
  if ( !v11 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596D211 = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v12 = (unsigned __int8)byte_596DB35;
  v8->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !v12 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596DB35 = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v13 = (unsigned __int8)byte_596D212;
  v8->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !v13 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596D212 = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v14 = (unsigned __int8)byte_596D20A;
  v8->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !v14 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596D20A = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  folderLastIdxs = static_fields->folderLastIdxs;
  static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( folderLastIdxs )
  {
    System_Collections_Generic_Dictionary_int__int___Clear(
      folderLastIdxs,
      (const MethodInfo_3F92DA0 *)Method_System_Collections_Generic_Dictionary_int__int__Clear__);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
  if ( !byte_596D31D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D31D = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v18 = (unsigned __int8)byte_596C384;
  v17->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !v18 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
    byte_596C384 = 1;
  }
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v1, v2);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v19 = (unsigned __int8)byte_596D31E;
  v17->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !v19 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
    byte_596D31E = 1;
  }
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v1, v2);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v20 = (unsigned __int8)byte_596D61F;
  v17->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !v20 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
    byte_596D61F = 1;
  }
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v1, v2);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v21 = (unsigned __int8)byte_596D61D;
  v17->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !v21 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
    byte_596D61D = 1;
  }
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v1, v2);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v22 = (unsigned __int8)byte_596CABA;
  v17->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !v22 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
    byte_596CABA = 1;
  }
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v1, v2);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v23 = v17->static_fields;
  v23->_SelectedBannerEntity_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v23->_SelectedBannerEntity_k__BackingField,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_596AEF9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEF9 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24, v25);
    v31 = TerminalPramsManager_TypeInfo;
  }
  v32 = (unsigned __int8)byte_596AEF8;
  v31->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !v32 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
    byte_596AEF8 = 1;
  }
  if ( !*(&v31->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v31, v24, v25);
    v31 = TerminalPramsManager_TypeInfo;
  }
  v33 = (unsigned __int8)byte_596CEB5;
  v31->static_fields->_EndTime_k__BackingField = 0;
  if ( !v33 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
    byte_596CEB5 = 1;
  }
  if ( !*(&v31->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v31, v24, v25);
    v31 = TerminalPramsManager_TypeInfo;
  }
  v34 = (MissionNaviTransitionBoardItem_o *)v31->static_fields;
  v35 = (int)StringLiteral_1/*""*/;
  v34[1].fields.sortValue1 = (int64_t)StringLiteral_1/*""*/;
  v34 = (MissionNaviTransitionBoardItem_o *)((char *)v34 + 216);
  BYTE4(v34[-2].fields._ClosedMessage_k__BackingField) = 0;
  sub_2213A04(v34, v35, v25, v26, v27, v28, v29, v30);
  if ( !byte_596DB36 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB36 = 1;
  }
  v43 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v36, v37);
    v43 = TerminalPramsManager_TypeInfo;
  }
  v44 = (unsigned __int8)byte_596DB37;
  v43->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !v44 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v43 = TerminalPramsManager_TypeInfo;
    byte_596DB37 = 1;
  }
  if ( !*(&v43->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v43, v36, v37);
    v43 = TerminalPramsManager_TypeInfo;
  }
  v45 = (unsigned __int8)byte_596DB38;
  v43->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !v45 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v43 = TerminalPramsManager_TypeInfo;
    byte_596DB38 = 1;
  }
  if ( !*(&v43->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v43, v36, v37);
    v43 = TerminalPramsManager_TypeInfo;
  }
  v46 = (unsigned __int8)byte_596D624;
  v43->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !v46 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v43 = TerminalPramsManager_TypeInfo;
    byte_596D624 = 1;
  }
  if ( !*(&v43->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v43, v36, v37);
    v43 = TerminalPramsManager_TypeInfo;
  }
  v47 = (unsigned __int8)byte_596D625;
  v43->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !v47 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v43 = TerminalPramsManager_TypeInfo;
    byte_596D625 = 1;
  }
  if ( !*(&v43->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v43, v36, v37);
    v43 = TerminalPramsManager_TypeInfo;
  }
  v48 = (unsigned __int8)byte_596DB39;
  v43->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !v48 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v43 = TerminalPramsManager_TypeInfo;
    byte_596DB39 = 1;
  }
  if ( !*(&v43->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v43, v36, v37);
    v43 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v43->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0;
  sub_2213A04(p_timeStatusRecord_k__BackingField, 0, v37, v38, v39, v40, v41, v42);
  if ( !byte_596DB3A )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB3A = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v50, v51);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v58 = (unsigned __int8)byte_596AEFB;
  v57->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !v58 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
    byte_596AEFB = 1;
  }
  if ( !*(&v57->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v57, v50, v51);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v59 = (unsigned __int8)byte_596AEFC;
  v57->static_fields->_IsAutoExRoom_k__BackingField = 0;
  if ( !v59 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
    byte_596AEFC = 1;
  }
  if ( !*(&v57->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v57, v50, v51);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v60 = (unsigned __int8)byte_596D601;
  v57->static_fields->_AutoExRoomType_k__BackingField = 0;
  if ( !v60 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
    byte_596D601 = 1;
  }
  if ( !*(&v57->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v57, v50, v51);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v61 = (unsigned __int8)byte_596AF01;
  v57->static_fields->_IsAutoExRoomWin_k__BackingField = 0;
  if ( !v61 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
    byte_596AF01 = 1;
  }
  if ( !*(&v57->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v57, v50, v51);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v62 = (unsigned __int8)byte_596DB3B;
  v57->static_fields->_IsAutoOpenMasterMissionOnExRoomQuest_k__BackingField = 0;
  if ( !v62 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
    byte_596DB3B = 1;
  }
  if ( !*(&v57->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v57, v50, v51);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v63 = (unsigned __int8)byte_596DB3C;
  v57->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0;
  if ( !v63 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
    byte_596DB3C = 1;
  }
  if ( !*(&v57->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v57, v50, v51);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v64 = (unsigned __int8)byte_596DB3D;
  v57->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !v64 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
    byte_596DB3D = 1;
  }
  if ( !*(&v57->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v57, v50, v51);
    v57 = TerminalPramsManager_TypeInfo;
  }
  v65 = (unsigned __int8)byte_596CFDB;
  v57->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !v65 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
    byte_596CFDB = 1;
  }
  if ( !*(&v57->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v57, v50, v51);
    v57 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v57->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0;
  sub_2213A04(p_BeforeEventSubmarineSaveData_k__BackingField, 0, v51, v52, v53, v54, v55, v56);
  v67 = (int)StringLiteral_1/*""*/;
  p_lastPlayBgmName = (MissionNaviTransitionBoardItem_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
  sub_2213A04(p_lastPlayBgmName, v67, v69, v70, v71, v72, v73, v74);
  v82 = TerminalPramsManager_TypeInfo;
  v83 = (unsigned __int8)byte_596DB3E;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0;
  if ( !v83 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v82 = TerminalPramsManager_TypeInfo;
    byte_596DB3E = 1;
  }
  if ( !*(&v82->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v82, v75, v76);
    v82 = TerminalPramsManager_TypeInfo;
  }
  v84 = v82->static_fields;
  v84->_SpecifiedChangeSceneInfo_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v84->_SpecifiedChangeSceneInfo_k__BackingField,
    0,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  if ( !byte_596D8CD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8CD = 1;
  }
  v87 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v85, v86);
    v87 = TerminalPramsManager_TypeInfo;
  }
  v88 = (unsigned __int8)byte_596D8CF;
  v87->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !v88 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v87 = TerminalPramsManager_TypeInfo;
    byte_596D8CF = 1;
  }
  if ( !*(&v87->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v87, v85, v86);
    v87 = TerminalPramsManager_TypeInfo;
  }
  v89 = (unsigned __int8)byte_596D8D1;
  v87->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !v89 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v87 = TerminalPramsManager_TypeInfo;
    byte_596D8D1 = 1;
  }
  if ( !*(&v87->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v87, v85, v86);
    v87 = TerminalPramsManager_TypeInfo;
  }
  v90 = (unsigned __int8)byte_596DB32;
  v87->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !v90 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v87 = TerminalPramsManager_TypeInfo;
    byte_596DB32 = 1;
  }
  if ( !*(&v87->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v87, v85, v86);
    v87 = TerminalPramsManager_TypeInfo;
  }
  v87->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v87);
  TerminalPramsManager__ResetResumeScriptWithMap(v91);
  if ( !byte_596D60F )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D60F = 1;
  }
  v99 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v92, v93);
    v99 = TerminalPramsManager_TypeInfo;
  }
  v100 = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
  v101 = (unsigned __int8)byte_596DB3F;
  v99->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  if ( !v101 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v99 = TerminalPramsManager_TypeInfo;
    byte_596DB3F = 1;
  }
  if ( !*(&v99->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v99, v92, v93);
    v99 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v99->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = v100;
  sub_2213A04(p_PlayedTerminalEffects_k__BackingField, (int32_t)v100, v93, v94, v95, v96, v97, v98);
  if ( !byte_596D62B )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D62B = 1;
  }
  v110 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v111 = (unsigned __int8)byte_596D62C;
  v110->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !v111 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D62C = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v112 = (unsigned __int8)byte_596D8BE;
  v110->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !v112 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D8BE = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v113 = v110->static_fields;
  v114 = (unsigned __int8)byte_596A745;
  v113->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v113->ConnectMarkEventId = 0;
  if ( !v114 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596A745 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v115 = (unsigned __int8)byte_596DB40;
  v110->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !v115 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596DB40 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v116 = (unsigned __int8)byte_596DB41;
  v110->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !v116 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596DB41 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v117 = (unsigned __int8)byte_596D8C6;
  v110->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !v117 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D8C6 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v118 = (unsigned __int8)byte_596D614;
  v110->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !v118 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D614 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v119 = (unsigned __int8)byte_596D8C4;
  v110->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !v119 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D8C4 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v120 = (unsigned __int8)byte_596D8C5;
  v110->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !v120 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D8C5 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v121 = (unsigned __int8)byte_596D8C3;
  v110->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !v121 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D8C3 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v122 = (unsigned __int8)byte_596D8C6;
  v110->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !v122 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D8C6 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v123 = (unsigned __int8)byte_596D8B7;
  v110->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !v123 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D8B7 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v124 = (unsigned __int8)byte_596DB42;
  v110->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !v124 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596DB42 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v125 = (unsigned __int8)byte_596D31B;
  v110->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !v125 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D31B = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v126 = (unsigned __int8)byte_596B6DD;
  v110->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !v126 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596B6DD = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v127 = (unsigned __int8)byte_596DB43;
  v110->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !v127 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596DB43 = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v128 = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
  v129 = (unsigned __int8)byte_596D8CB;
  v110->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  if ( !v129 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_596D8CB = 1;
  }
  if ( !*(&v110->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v110, v103, v104);
    v110 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v110->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = v128;
  sub_2213A04(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v128, v104, v105, v106, v107, v108, v109);
  if ( !byte_596DB44 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB44 = 1;
  }
  v138 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v131, v132);
    v138 = TerminalPramsManager_TypeInfo;
  }
  v139 = v138->static_fields;
  v139->_CampaignBonus_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v139->_CampaignBonus_k__BackingField,
    0,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  if ( !byte_596DB45 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB45 = 1;
  }
  v147 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v140, v141);
    v147 = TerminalPramsManager_TypeInfo;
  }
  v148 = v147->static_fields;
  v148->_CampaignDirectBonus_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v148->_CampaignDirectBonus_k__BackingField,
    0,
    v141,
    v142,
    v143,
    v144,
    v145,
    v146);
  if ( !byte_596DB46 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB46 = 1;
  }
  v156 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v149, v150);
    v156 = TerminalPramsManager_TypeInfo;
  }
  v157 = (unsigned __int8)byte_596DB2E;
  v156->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  if ( !v157 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v156 = TerminalPramsManager_TypeInfo;
    byte_596DB2E = 1;
  }
  if ( !*(&v156->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v156, v149, v150);
    v156 = TerminalPramsManager_TypeInfo;
  }
  v158 = v156->static_fields;
  v158->_JobLevelSnapshot_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v158->_JobLevelSnapshot_k__BackingField,
    0,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  v166 = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
  if ( !byte_596A093 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A093 = 1;
  }
  v167 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v159, v160);
    v167 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v167->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = v166;
  sub_2213A04(p_TransitionScrollTabName_k__BackingField, (int32_t)v166, v160, v161, v162, v163, v164, v165);
  if ( !byte_596DB47 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB47 = 1;
  }
  v176 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v169, v170);
    v176 = TerminalPramsManager_TypeInfo;
  }
  if ( v176->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
  {
    System_Collections_Generic_HashSet_object___Clear(
      (System_Collections_Generic_HashSet_object__o *)v176->static_fields->_ForcePlayEventTutorialArray_k__BackingField,
      (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    v176 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v176->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v176, v169, v170);
  if ( !byte_596DB48 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB48 = 1;
  }
  v177 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v169, v170);
    v177 = TerminalPramsManager_TypeInfo;
  }
  v178 = (unsigned __int8)byte_596D5FF;
  v177->static_fields->_IsPart2FinalChapter_k__BackingField = 0;
  if ( !v178 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v177 = TerminalPramsManager_TypeInfo;
    byte_596D5FF = 1;
  }
  if ( !*(&v177->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v177, v169, v170);
    v177 = TerminalPramsManager_TypeInfo;
  }
  v179 = v177->static_fields;
  RaidBossHpForceHideGroupIndexList = v179->RaidBossHpForceHideGroupIndexList;
  v179->_IsTransitionToTerminalAfterMovie_k__BackingField = 0;
  if ( !RaidBossHpForceHideGroupIndexList
    || (nonFrameInBossHpUiIndex = v179->nonFrameInBossHpUiIndex,
        v182 = RaidBossHpForceHideGroupIndexList->fields._version + 1,
        RaidBossHpForceHideGroupIndexList->fields._size = 0,
        RaidBossHpForceHideGroupIndexList->fields._version = v182,
        !nonFrameInBossHpUiIndex) )
  {
    sub_2213CDC(v177, v169);
  }
  v183 = (unsigned __int8)byte_596DB49;
  v184 = nonFrameInBossHpUiIndex->fields._version + 1;
  nonFrameInBossHpUiIndex->fields._size = 0;
  nonFrameInBossHpUiIndex->fields._version = v184;
  if ( !v183 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v177 = TerminalPramsManager_TypeInfo;
    byte_596DB49 = 1;
  }
  if ( !*(&v177->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v177, v169, v170);
    v177 = TerminalPramsManager_TypeInfo;
  }
  p_ContinueDecideLastChallengeQuestInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v177->static_fields->_ContinueDecideLastChallengeQuestInfo_k__BackingField;
  p_ContinueDecideLastChallengeQuestInfo_k__BackingField->klass = 0;
  sub_2213A04(p_ContinueDecideLastChallengeQuestInfo_k__BackingField, 0, v170, v171, v172, v173, v174, v175);
  if ( !byte_596DB4A )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4A = 1;
  }
  v188 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v186, v187);
    v188 = TerminalPramsManager_TypeInfo;
  }
  v188->static_fields->_BlankEarthRank_k__BackingField = 0;
}


void TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  char *v6; // x8

  if ( (byte_596DB1A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB1A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, v1, v2);
      v3 = TerminalPramsManager_TypeInfo;
    }
    TipsArchiveScrollValueList = v3->static_fields->TipsArchiveScrollValueList;
    if ( !TipsArchiveScrollValueList )
LABEL_13:
      sub_2213CDC(v3, v1);
    if ( (__int64)i >= SLODWORD(TipsArchiveScrollValueList->max_length) )
      break;
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, v1, v2);
      v3 = TerminalPramsManager_TypeInfo;
      TipsArchiveScrollValueList = TerminalPramsManager_TypeInfo->static_fields->TipsArchiveScrollValueList;
      if ( !TipsArchiveScrollValueList )
        goto LABEL_13;
    }
    if ( i >= LODWORD(TipsArchiveScrollValueList->max_length) )
      sub_2213CE4(v3);
    v6 = (char *)TipsArchiveScrollValueList + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v5; // x0

  if ( (byte_596DAB0 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAB0 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596CFD8 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFD8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_IsAutoResume_k__BackingField )
    return 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
  if ( !byte_596DB2D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB2D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return v5->static_fields->_IsAutoShortcut_k__BackingField;
}


bool TerminalPramsManager__IsAutoForTimeProgressEvents(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596DAB3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAB3 = 1;
  }
  entity = 0;
  v11 = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596CFD8 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFD8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_IsAutoResume_k__BackingField )
    return 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_34;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 4LL),
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_2213CDC(Instance, v6);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v11,
          (int32_t)entity[6].klass,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v11;
  if ( !v11 )
    goto LABEL_34;
  return EventDetailEntity__IsTimeProgressEvent((EventDetailEntity_o *)v11, 0);
}


bool TerminalPramsManager__IsBlankEarthWarByWarId(int32_t targetWarId, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  void *WarInfoByWarID; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  __int64 v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596DB16 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596DB16 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( v4->static_fields->OrdealCallWarId == targetWarId )
  {
    LOBYTE(WarInfoByWarID) = 1;
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v7);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0);
      if ( WarInfoByWarID )
      {
        v8 = *((_DWORD *)WarInfoByWarID + 31);
        v10 = 0;
        System_Nullable_int____ctor(
          (System_Nullable_int__o)&v10,
          v8,
          (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
        LOBYTE(WarInfoByWarID) = HIDWORD(v10) != 0;
      }
    }
  }
  return (char)WarInfoByWarID;
}


void TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAE4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11958/*"SAVEKEY_DataLostBattleAutoReset"*/);
    byte_596DAE4 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D8C2 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8C2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11958/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v3->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596DB05 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596DB05 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  entity = 0;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->FesWarId != warId )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
            warId,
            (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_2213CDC(Instance, v8);
    }
  }
  return 1;
}


bool TerminalPramsManager__IsMainStoryForQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  __int64 v6; // x2
  int32_t klass_high; // w19
  Il2CppObject *v10; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596DB06 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB06 = 1;
  }
  v10 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0),
        !v5) )
  {
LABEL_16:
    sub_2213CDC(Instance, v4);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v5,
                               &v10,
                               (int32_t)Instance,
                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v10 )
    goto LABEL_16;
  klass_high = HIDWORD(v10[1].klass);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v6);
  return TerminalPramsManager__IsMainStory(klass_high, v4);
}


bool TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2

  if ( (byte_596DB04 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB04 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->NotRequiredPlayWarIds,
         warId,
         (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 0;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
  return TerminalPramsManager__IsMainStory(warId, v5);
}


bool TerminalPramsManager__IsNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_596DAF7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAF7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v4->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_2213CDC(0, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DADD & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11967/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    byte_596DADD = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D612 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D612 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11967/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DADC & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11966/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    byte_596DADC = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D611 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D611 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11966/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DADE & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11968/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    byte_596DADE = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D8BD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8BD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11968/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v3->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
bool TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(int32_t eventId, int32_t day, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0
  __int64 v6; // x8
  char v7; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596DB10 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB10 = 1;
  }
  value = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day, method);
  if ( !byte_596DB67 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB67 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day, method);
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v6 = *(_QWORD *)&v5[2].fields._entries->m_Items[18].fields.hashCode;
  if ( !v6 || (v5 = *(System_Collections_Generic_Dictionary_int__object__o **)(v6 + 16)) == 0 )
    sub_2213CDC(v5, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v5,
         eventId,
         &value,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (char)value;
    if ( value )
      v7 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    v7 = 0;
  }
  return v7 & 1;
}


bool TerminalPramsManager__IsTerminalEffectNT2BoardOpen(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  ScrTerminalListTop_c *v3; // x0
  System_String_o *NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  clsQuestCheck_o *v8; // x19
  __int64 v9; // x2
  clsQuestCheck_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  TerminalPramsManager_c *v13; // x0
  ScrTerminalListTop_c *v14; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v16; // x0

  if ( (byte_596DAF0 & 1) == 0 )
  {
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAF0 = 1;
  }
  v3 = ScrTerminalListTop_TypeInfo;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v1, v2);
    v3 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v3->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v1) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v8 = (clsQuestCheck_o *)Instance;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v6, v7);
  if ( !v8 )
    goto LABEL_34;
  if ( !clsQuestCheck__IsQuestClear(
          v8,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v10 = (clsQuestCheck_o *)Instance;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v6, v9);
  if ( !v10 )
LABEL_34:
    sub_2213CDC(Instance, v6);
  if ( !clsQuestCheck__IsWarClear(
          v10,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v14 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v13->static_fields->_QuestId_k__BackingField;
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v11, v12);
      v14 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v14->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
      if ( !byte_596A92D )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A92D = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
        v16 = TerminalPramsManager_TypeInfo;
      }
      if ( v16->static_fields->_PhaseCnt_k__BackingField == 2 )
        return 1;
    }
  }
  return 0;
}


bool TerminalPramsManager__IsTerminalEffectPlayed(System_String_o *effectName, const MethodInfo *method)
{
  __int64 v3; // x19
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x2
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  System_String_array *v15; // x20
  System_Func_object__bool__o *v16; // x21

  if ( (byte_596DAEE & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_string____91711488);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_TerminalPramsManager___c__DisplayClass788_0__IsTerminalEffectPlayed_b__0__);
    sub_2213A60(&TerminalPramsManager___c__DisplayClass788_0_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_87/*"\r\n"*/);
    byte_596DAEE = 1;
  }
  v3 = sub_2213CCC(TerminalPramsManager___c__DisplayClass788_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass788_0___ctor((TerminalPramsManager___c__DisplayClass788_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 16) = effectName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)effectName, v6, v7, v8, v9, v10, v11);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v12);
  if ( !byte_596DB50 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB50 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v12);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( v13->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v13, v5, v12);
    if ( !byte_596DB50 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB50 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v12);
      v14 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v14->static_fields->_PlayedTerminalEffects_k__BackingField;
    if ( PlayedTerminalEffects_k__BackingField )
    {
      PlayedTerminalEffects_k__BackingField = System_String__Replace_75703400(
                                                PlayedTerminalEffects_k__BackingField,
                                                (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                                0);
      if ( PlayedTerminalEffects_k__BackingField )
      {
        v15 = System_String__Split(PlayedTerminalEffects_k__BackingField, 0xAu, 0, 0);
        v16 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v16,
          (Il2CppObject *)v3,
          Method_TerminalPramsManager___c__DisplayClass788_0__IsTerminalEffectPlayed_b__0__,
          0);
        return BasicHelper__Any_object__58785420(
                 (System_Object_array *)v15,
                 (System_Func_T__bool__o *)v16,
                 (const MethodInfo_380FE8C *)Method_BasicHelper_Any_string____91711488);
      }
    }
LABEL_21:
    sub_2213CDC(PlayedTerminalEffects_k__BackingField, v5);
  }
  return 0;
}


bool TerminalPramsManager__IsUsePopupQuestReward(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  QuestMaster_o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  __int64 v10; // x2
  int klass_high; // w19
  BalanceConfig_c *v12; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x2
  int monitor; // w19
  BalanceConfig_c *v19; // x0
  Il2CppObject *v21; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v22; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *v23; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *v24; // [xsp+20h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_596DB14 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SpotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_596DB14 = 1;
  }
  v24 = 0;
  entity = 0;
  v23 = 0;
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v21 = 0;
  v22 = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_42;
  if ( !QuestMaster__TryGetQuestEntity(Master_object, &entity, questId, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity )
    goto LABEL_42;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0);
  if ( !v9 )
    goto LABEL_42;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v9,
          &v24,
          (int32_t)Master_object,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
    goto LABEL_45;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v10);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v24 || !Master_object )
    goto LABEL_42;
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     &v22,
                                     HIDWORD(v24[1].klass),
                                     (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v24 )
    goto LABEL_42;
  klass_high = HIDWORD(v24[1].klass);
  v12 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v10);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( klass_high != v12->static_fields->OrdealCallWarId )
  {
LABEL_45:
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v10);
    Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SpotMaster___);
    if ( !entity )
      goto LABEL_42;
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0);
    if ( !v14 )
      goto LABEL_42;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v14,
           &v23,
           (int32_t)Master_object,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
      Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !v23 || !Master_object )
        goto LABEL_42;
      Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         &v21,
                                         HIDWORD(v23[1].klass),
                                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_42;
        monitor = (int)v21[3].monitor;
        v19 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v17);
          v19 = BalanceConfig_TypeInfo;
        }
        if ( monitor == v19->static_fields->GrandBoardWarId )
        {
          Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( entity && Master_object )
            return clsQuestCheck__IsConsumeStormPod((clsQuestCheck_o *)Master_object, entity->fields.id, 0);
LABEL_42:
          sub_2213CDC(Master_object, v6);
        }
      }
    }
    return 0;
  }
  Master_object = (QuestMaster_o *)entity;
  if ( !entity )
    goto LABEL_42;
  return QuestEntity__GetTypeFlag(entity, 0) == 4;
}


bool TerminalPramsManager__IsUserSaveDataDeleteButtonNonRelease(const MethodInfo *method)
{
  if ( (byte_596DB28 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13131/*"SaveDataDeleteButtonNonRelease"*/);
    byte_596DB28 = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13131/*"SaveDataDeleteButtonNonRelease"*/, 0)
      || UnityEngine_PlayerPrefs__GetInt_83396820((System_String_o *)StringLiteral_13131/*"SaveDataDeleteButtonNonRelease"*/, 0) == 1;
}


bool TerminalPramsManager__IsUserSaveDataDeleted(const MethodInfo *method)
{
  if ( (byte_596DB25 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13132/*"SaveDataDeletedState"*/);
    byte_596DB25 = 1;
  }
  return UnityEngine_PlayerPrefs__GetInt_83396820((System_String_o *)StringLiteral_13132/*"SaveDataDeletedState"*/, 0) == 1;
}


bool TerminalPramsManager__IsWarStartedId(int32_t war_id, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  System_String_o *mTerminalWarStartedIds; // x0
  System_String_c *klass; // x8
  System_String_o *v6; // x19
  bool v7; // w21
  unsigned __int64 v8; // x22
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  v12 = war_id;
  if ( (byte_596DAF2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_87/*"\r\n"*/);
    byte_596DAF2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v3->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_75703400(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0)) == 0
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0)) == 0 )
  {
    sub_2213CDC(mTerminalWarStartedIds, method);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v6 = mTerminalWarStartedIds;
  v7 = (int)klass > 0;
  if ( (int)klass >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)klass )
        sub_2213CE4(mTerminalWarStartedIds);
      v9 = (System_String_o *)*((_QWORD *)&v6[1].monitor + v8);
      v10 = System_Int32__ToString((int32_t)&v12, 0);
      mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v9, v10, 0);
      if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
        break;
      LODWORD(klass) = v6[1].klass;
      v7 = (__int64)++v8 < (int)klass;
    }
    while ( (__int64)v8 < (int)klass );
  }
  return v7;
}


void TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DADB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_14273/*"TerminalLastPanelEventPoint"*/);
    byte_596DADB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14273/*"TerminalLastPanelEventPoint"*/, v3->static_fields->panelEventPoint, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAD9 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11962/*"SAVEKEY_LastPlayBgmName"*/);
    byte_596DAD9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11962/*"SAVEKEY_LastPlayBgmName"*/, v3->static_fields->lastPlayBgmName, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DADA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11963/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    byte_596DADA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11963/*"SAVEKEY_LastPlayQuestConsumeType"*/, v3->static_fields->lastPlayQuestConsumeAp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_ClearData_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_ClearData_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *String_83398240; // x19
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x19
  TerminalPramsManager_c *v19; // x0
  MissionNaviTransitionBoardItem_o *static_fields; // x8
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *klass; // x0
  struct TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x8
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v39; // x0
  MissionNaviTransitionBoardItem_o *v40; // x8
  char monitor; // w20
  TerminalPramsManager_c *v42; // x0
  char v43; // w21
  int v44; // w9
  struct TerminalPramsManager_StaticFields *v45; // x8
  struct QuestRewardInfo_array *v46; // x9
  struct QuestRewardInfo_array *v47; // x20
  __int64 v48; // x0
  __int64 v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  Il2CppClass *v56; // x8
  TerminalPramsManager_c *v57; // x0
  Il2CppClass *v58; // x20
  struct TerminalPramsManager_StaticFields *v59; // x8
  __int64 v60; // x1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  TerminalPramsManager_c *v67; // x0
  struct UserSuperBossEntity_array *v68; // x8
  struct TerminalPramsManager_StaticFields *v69; // x9
  struct UserSuperBossEntity_array *v70; // x20
  TerminalPramsManager_c *v71; // x0
  struct TerminalPramsManager_StaticFields *v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  Il2CppClass *v81; // x8
  Il2CppClass *v82; // x20
  TerminalPramsManager_c *v83; // x0
  struct TerminalPramsManager_StaticFields *v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  int *v93; // x8
  struct EventPointWinReward_o *v94; // x20
  TerminalPramsManager_c *v95; // x0
  struct TerminalPramsManager_StaticFields *v96; // x8
  __int64 v97; // x1
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  int32_t v104; // w20
  TerminalPramsManager_c *v105; // x0
  int *v106; // x8
  struct EventRaceBoostInfo_o *v107; // x20
  TerminalPramsManager_c *v108; // x0
  struct TerminalPramsManager_StaticFields *v109; // x8
  __int64 v110; // x0
  __int64 v111; // x1
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  Il2CppClass *v118; // x8
  Il2CppClass *v119; // x20
  TerminalPramsManager_c *v120; // x0
  struct TerminalPramsManager_StaticFields *v121; // x8
  __int64 v122; // x0
  __int64 v123; // x1
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  _QWORD *v130; // x8
  struct CostumeReleaseAnnounce_array *v131; // x20
  TerminalPramsManager_c *v132; // x0
  struct TerminalPramsManager_StaticFields *v133; // x8
  __int64 v134; // x0
  __int64 v135; // x1
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  Il2CppClass *v142; // x8
  Il2CppClass *v143; // x20
  TerminalPramsManager_c *v144; // x0
  struct TerminalPramsManager_StaticFields *v145; // x8
  __int64 v146; // x0
  __int64 v147; // x1
  System_String_o *v148; // x2
  System_String_o *v149; // x3
  int32_t v150; // w4
  int32_t v151; // w5
  bool v152; // w6
  bool v153; // w7
  _QWORD *v154; // x8
  __int64 v155; // x9
  __int64 v156; // x9
  MissionNaviTransitionBoardItem_c *v157; // x20
  TerminalPramsManager_c *v158; // x0
  MissionNaviTransitionBoardItem_o *v159; // x8
  __int64 v160; // x0
  __int64 v161; // x1
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  Il2CppClass *v168; // x8
  Il2CppClass *v169; // x20
  TerminalPramsManager_c *v170; // x0
  struct TerminalPramsManager_StaticFields *v171; // x8
  __int64 v172; // x0
  __int64 v173; // x1
  System_String_o *v174; // x2
  System_String_o *v175; // x3
  int32_t v176; // w4
  int32_t v177; // w5
  bool v178; // w6
  bool v179; // w7
  _QWORD *v180; // x8
  struct QuestRewardInfo_array *v181; // x20
  TerminalPramsManager_c *v182; // x0
  struct TerminalPramsManager_StaticFields *v183; // x8
  __int64 v184; // x1
  System_String_o *v185; // x2
  System_String_o *v186; // x3
  int32_t v187; // w4
  int32_t v188; // w5
  bool v189; // w6
  bool v190; // w7
  char v191; // w20
  TerminalPramsManager_c *v192; // x0
  struct WarClearReward_array *v193; // x8
  struct WarClearReward_array *v194; // x20
  TerminalPramsManager_c *v195; // x0
  struct TerminalPramsManager_StaticFields *v196; // x8
  __int64 v197; // x1
  System_String_o *v198; // x2
  System_String_o *v199; // x3
  int32_t v200; // w4
  int32_t v201; // w5
  bool v202; // w6
  bool v203; // w7
  int32_t v204; // w20
  TerminalPramsManager_c *v205; // x0
  char v206; // w21
  int v207; // w9
  struct TerminalPramsManager_StaticFields *v208; // x8
  struct BattleDropItem_array *v209; // x9
  struct BattleDropItem_array *v210; // x20
  __int64 v211; // x0
  __int64 v212; // x1
  System_String_o *v213; // x2
  System_String_o *v214; // x3
  int32_t v215; // w4
  int32_t v216; // w5
  bool v217; // w6
  bool v218; // w7
  Il2CppClass *v219; // x8
  TerminalPramsManager_c *v220; // x0
  Il2CppClass *v221; // x20
  struct TerminalPramsManager_StaticFields *v222; // x8
  __int64 v223; // x1
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  TerminalPramsManager_c *v230; // x0
  int v231; // w10
  Il2CppClass *v232; // x20
  struct TerminalPramsManager_StaticFields *v233; // x8
  __int64 v234; // x1
  System_String_o *v235; // x2
  System_String_o *v236; // x3
  int32_t v237; // w4
  int32_t v238; // w5
  bool v239; // w6
  bool v240; // w7
  char v241; // w20
  TerminalPramsManager_c *v242; // x0
  int32_t monitor_high; // w21
  int v244; // w9
  int32_t v245; // w23
  int v246; // w9
  char v247; // w21
  int v248; // w9
  struct UserEventPointEntity_array *v249; // x20
  int v250; // w9
  struct TerminalPramsManager_StaticFields *v251; // x8
  __int64 v252; // x0
  __int64 v253; // x1
  System_String_o *v254; // x2
  System_String_o *v255; // x3
  int32_t v256; // w4
  int32_t v257; // w5
  bool v258; // w6
  bool v259; // w7
  Il2CppClass *v260; // x8
  Il2CppClass *v261; // x20
  TerminalPramsManager_c *v262; // x0
  struct TerminalPramsManager_StaticFields *v263; // x8
  __int64 v264; // x1
  __int64 v265; // x2
  TerminalPramsManager_c *v266; // x0
  TerminalPramsManager_c *v267; // x0
  TerminalPramsManager_c *v268; // x0

  if ( (byte_596DB09 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_ClearData_TypeInfo);
    sub_2213A60(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB09 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D600 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D600 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_isQuestRewardSetted_k__BackingField )
  {
    v4 = TerminalPramsManager_ClearData_TypeInfo;
    if ( !*(&TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo, v1, v2);
      v4 = TerminalPramsManager_ClearData_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__HasKey(v4->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0) )
    {
      v7 = TerminalPramsManager_ClearData_TypeInfo;
      if ( !*(&TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo, v5, v6);
        v7 = TerminalPramsManager_ClearData_TypeInfo;
      }
      String_83398240 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83398240(
                                          v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0);
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8, v9);
      v18 = JsonManager__Deserialize_object_(
              String_83398240,
              (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v19 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
        v19 = TerminalPramsManager_TypeInfo;
      }
      static_fields = (MissionNaviTransitionBoardItem_o *)v19->static_fields;
      static_fields[4].klass = 0;
      sub_2213A04(static_fields + 4, 0, v12, v13, v14, v15, v16, v17);
      if ( !v18 )
        sub_2213CDC(v21, v22);
      klass = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v18[1].klass;
      if ( !klass )
        sub_2213CDC(0, v22);
      oldUsrSvtData = klass->fields.oldUsrSvtData;
      if ( oldUsrSvtData && oldUsrSvtData->fields.svtId >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(klass, 0);
        v39 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31, v32);
          v39 = TerminalPramsManager_TypeInfo;
        }
        v40 = (MissionNaviTransitionBoardItem_o *)v39->static_fields;
        v40[4].klass = (MissionNaviTransitionBoardItem_c *)Load;
        sub_2213A04(v40 + 4, (int32_t)Load, v32, v33, v34, v35, v36, v37);
      }
      monitor = (char)v18[2].monitor;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22, v23);
      if ( !byte_596D194 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D194 = 1;
      }
      v42 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22, v23);
        v42 = TerminalPramsManager_TypeInfo;
      }
      v43 = BYTE1(v18[2].monitor);
      v44 = (unsigned __int8)byte_596D195;
      v42->static_fields->_IsQuestClear_k__BackingField = monitor;
      if ( !v44 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v42 = TerminalPramsManager_TypeInfo;
        byte_596D195 = 1;
      }
      if ( !*(&v42->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v42, v22, v23);
        v42 = TerminalPramsManager_TypeInfo;
      }
      v45 = v42->static_fields;
      v46 = (struct QuestRewardInfo_array *)v18[1].monitor;
      v45->_IsPhaseClear_k__BackingField = v43;
      if ( !v46 )
        sub_2213CDC(v42, v22);
      if ( v46->max_length )
        v47 = v46;
      else
        v47 = 0;
      if ( !*(&v42->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v42, v22, v23);
        v45 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v45->mQuestRewardInfos = v47;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v45->mQuestRewardInfos,
        (int32_t)v47,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v56 = v18[2].klass;
      if ( !v56 )
        sub_2213CDC(v48, v49);
      v57 = TerminalPramsManager_TypeInfo;
      if ( v56->_1.namespaze )
        v58 = v18[2].klass;
      else
        v58 = 0;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v49, v50);
        v57 = TerminalPramsManager_TypeInfo;
      }
      v59 = v57->static_fields;
      v59->mQuestPhaseRewardInfos = (struct QuestRewardInfo_array *)v58;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v59->mQuestPhaseRewardInfos,
        (int32_t)v58,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      v67 = TerminalPramsManager_TypeInfo;
      v68 = (struct UserSuperBossEntity_array *)v18[3].monitor;
      v69 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v69->clearLastBattleRaidId = *(void **)((char *)&v18[2].monitor + 4);
      v69->joinGroupId = HIDWORD(v18[3].klass);
      if ( !v68 )
        sub_2213CDC(v67, v60);
      if ( v68->max_length )
        v70 = v68;
      else
        v70 = 0;
      if ( !*(&v67->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v67, v60, v61);
      if ( !byte_596DB5D )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB5D = 1;
      }
      v71 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v60, v61);
        v71 = TerminalPramsManager_TypeInfo;
      }
      v72 = v71->static_fields;
      v72->_oldSuperBoss_k__BackingField = v70;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v72->_oldSuperBoss_k__BackingField,
        (int32_t)v70,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      v81 = v18[4].klass;
      if ( !v81 )
        sub_2213CDC(v73, v74);
      if ( v81->_1.namespaze )
        v82 = v18[4].klass;
      else
        v82 = 0;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v74, v75);
      if ( !byte_596DB5E )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB5E = 1;
      }
      v83 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v74, v75);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v84 = v83->static_fields;
      v84->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v82;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v84->_oldPersonalBoss_k__BackingField,
        (int32_t)v82,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      v93 = (int *)v18[4].monitor;
      if ( !v93 )
        sub_2213CDC(v85, v86);
      if ( v93[4] <= 0 )
        v94 = 0;
      else
        v94 = (struct EventPointWinReward_o *)v18[4].monitor;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v86, v87);
      if ( !byte_596DB57 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB57 = 1;
      }
      v95 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v86, v87);
        v95 = TerminalPramsManager_TypeInfo;
      }
      v96 = v95->static_fields;
      v96->_eventPointWinReward_k__BackingField = v94;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v96->_eventPointWinReward_k__BackingField,
        (int32_t)v94,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
      v104 = (int32_t)v18[5].klass;
      if ( !byte_596DB58 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB58 = 1;
      }
      v105 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v97, v98);
        v105 = TerminalPramsManager_TypeInfo;
      }
      v106 = (int *)v18[5].monitor;
      v105->static_fields->_eventPointWinType_k__BackingField = v104;
      if ( !v106 )
        sub_2213CDC(v105, v97);
      if ( v106[4] <= 0 )
        v107 = 0;
      else
        v107 = (struct EventRaceBoostInfo_o *)v106;
      if ( !*(&v105->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v105, v97, v98);
      if ( !byte_596D8CC )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D8CC = 1;
      }
      v108 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v97, v98);
        v108 = TerminalPramsManager_TypeInfo;
      }
      v109 = v108->static_fields;
      v109->_eventRaceBoost_k__BackingField = v107;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v109->_eventRaceBoost_k__BackingField,
        (int32_t)v107,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
      v118 = v18[6].klass;
      if ( !v118 )
        sub_2213CDC(v110, v111);
      if ( v118->_1.namespaze )
        v119 = v18[6].klass;
      else
        v119 = 0;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v111, v112);
      if ( !byte_596D7B5 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D7B5 = 1;
      }
      v120 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v111, v112);
        v120 = TerminalPramsManager_TypeInfo;
      }
      v121 = v120->static_fields;
      v121->_questClearCostumeRelease_k__BackingField = (struct CostumeReleaseAnnounce_array *)v119;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v121->_questClearCostumeRelease_k__BackingField,
        (int32_t)v119,
        v112,
        v113,
        v114,
        v115,
        v116,
        v117);
      v130 = v18[6].monitor;
      if ( !v130 )
        sub_2213CDC(v122, v123);
      if ( v130[3] )
        v131 = (struct CostumeReleaseAnnounce_array *)v18[6].monitor;
      else
        v131 = 0;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v123, v124);
      if ( !byte_596D5FE )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D5FE = 1;
      }
      v132 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v123, v124);
        v132 = TerminalPramsManager_TypeInfo;
      }
      v133 = v132->static_fields;
      v133->_questClearCostumeGet_k__BackingField = v131;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v133->_questClearCostumeGet_k__BackingField,
        (int32_t)v131,
        v124,
        v125,
        v126,
        v127,
        v128,
        v129);
      v142 = v18[7].klass;
      if ( !v142 )
        sub_2213CDC(v134, v135);
      if ( SLODWORD(v142->_1.name) <= 0 )
        v143 = 0;
      else
        v143 = v18[7].klass;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v135, v136);
      if ( !byte_596DB5B )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB5B = 1;
      }
      v144 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v135, v136);
        v144 = TerminalPramsManager_TypeInfo;
      }
      v145 = v144->static_fields;
      v145->_eventTowerReward_k__BackingField = (struct EventTowerReward_o *)v143;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v145->_eventTowerReward_k__BackingField,
        (int32_t)v143,
        v136,
        v137,
        v138,
        v139,
        v140,
        v141);
      v154 = v18[7].monitor;
      if ( !v154 )
        sub_2213CDC(v146, v147);
      v155 = v154[3];
      if ( v155 )
      {
        if ( !(_DWORD)v155 )
          sub_2213CE4(v146);
        v156 = v154[4];
        if ( !v156 )
          sub_2213CDC(v146, v147);
        if ( *(__int64 *)(v156 + 32) <= 0 )
          v157 = 0;
        else
          v157 = (MissionNaviTransitionBoardItem_c *)v18[7].monitor;
      }
      else
      {
        v157 = 0;
      }
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v147, v148);
      if ( !byte_596DB5C )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB5C = 1;
      }
      v158 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v147, v148);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v159 = (MissionNaviTransitionBoardItem_o *)v158->static_fields;
      v159[2].klass = v157;
      sub_2213A04(v159 + 2, (int32_t)v157, v148, v149, v150, v151, v152, v153);
      v168 = v18[8].klass;
      if ( !v168 )
        sub_2213CDC(v160, v161);
      if ( v168->_1.namespaze )
        v169 = v18[8].klass;
      else
        v169 = 0;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v161, v162);
      if ( !byte_596D5F8 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D5F8 = 1;
      }
      v170 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v161, v162);
        v170 = TerminalPramsManager_TypeInfo;
      }
      v171 = v170->static_fields;
      v171->_resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v169;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v171->_resultBoostItemRewardInfo_k__BackingField,
        (int32_t)v169,
        v162,
        v163,
        v164,
        v165,
        v166,
        v167);
      v180 = v18[8].monitor;
      if ( !v180 )
        sub_2213CDC(v172, v173);
      if ( v180[3] )
        v181 = (struct QuestRewardInfo_array *)v18[8].monitor;
      else
        v181 = 0;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v173, v174);
      if ( !byte_596D5F9 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D5F9 = 1;
      }
      v182 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v173, v174);
        v182 = TerminalPramsManager_TypeInfo;
      }
      v183 = v182->static_fields;
      v183->_resultEventBoardGameTokenRewardInfo_k__BackingField = v181;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v183->_resultEventBoardGameTokenRewardInfo_k__BackingField,
        (int32_t)v181,
        v174,
        v175,
        v176,
        v177,
        v178,
        v179);
      v191 = (char)v18[9].klass;
      if ( !byte_596C1A2 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596C1A2 = 1;
      }
      v192 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v184, v185);
        v192 = TerminalPramsManager_TypeInfo;
      }
      v193 = (struct WarClearReward_array *)v18[9].monitor;
      v192->static_fields->_IsDispOnly_k__BackingField = v191;
      if ( !v193 )
        sub_2213CDC(v192, v184);
      if ( v193->max_length )
        v194 = v193;
      else
        v194 = 0;
      if ( !*(&v192->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v192, v184, v185);
      if ( !byte_596D605 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D605 = 1;
      }
      v195 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v184, v185);
        v195 = TerminalPramsManager_TypeInfo;
      }
      v196 = v195->static_fields;
      v196->_warClearReward_k__BackingField = v194;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v196->_warClearReward_k__BackingField,
        (int32_t)v194,
        v185,
        v186,
        v187,
        v188,
        v189,
        v190);
      v204 = (int32_t)v18[10].klass;
      if ( !byte_596ABDC )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596ABDC = 1;
      }
      v205 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v197, v198);
        v205 = TerminalPramsManager_TypeInfo;
      }
      v206 = BYTE4(v18[10].klass);
      v207 = (unsigned __int8)byte_596D603;
      v205->static_fields->_EventActivityPointEffectState_k__BackingField = v204;
      if ( !v207 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v205 = TerminalPramsManager_TypeInfo;
        byte_596D603 = 1;
      }
      if ( !*(&v205->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v205, v197, v198);
        v205 = TerminalPramsManager_TypeInfo;
      }
      v208 = v205->static_fields;
      v209 = (struct BattleDropItem_array *)v18[10].monitor;
      v208->_IsWarBoardClear_k__BackingField = v206;
      if ( !v209 )
        sub_2213CDC(v205, v197);
      if ( v209->max_length )
        v210 = v209;
      else
        v210 = 0;
      if ( !*(&v205->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v205, v197, v198);
        v208 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v208->mQuestResultAfterEventRewardInfos = v210;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v208->mQuestResultAfterEventRewardInfos,
        (int32_t)v210,
        v198,
        v199,
        v200,
        v201,
        v202,
        v203);
      v219 = v18[11].klass;
      if ( !v219 )
        sub_2213CDC(v211, v212);
      v220 = TerminalPramsManager_TypeInfo;
      if ( v219->_1.namespaze )
        v221 = v18[11].klass;
      else
        v221 = 0;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v212, v213);
        v220 = TerminalPramsManager_TypeInfo;
      }
      v222 = v220->static_fields;
      v222->mResultEventPanelRewardInfos = (struct BattleDropItem_array *)v221;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v222->mResultEventPanelRewardInfos,
        (int32_t)v221,
        v213,
        v214,
        v215,
        v216,
        v217,
        v218);
      v230 = TerminalPramsManager_TypeInfo;
      v231 = (unsigned __int8)byte_596D5FC;
      v232 = v18[12].klass;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v18[11].monitor;
      if ( !v231 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v230 = TerminalPramsManager_TypeInfo;
        byte_596D5FC = 1;
      }
      if ( !*(&v230->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v230, v223, v224);
        v230 = TerminalPramsManager_TypeInfo;
      }
      v233 = v230->static_fields;
      v233->_limitImageAnnounces_k__BackingField = (struct LimitImageAnnounce_array *)v232;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v233->_limitImageAnnounces_k__BackingField,
        (int32_t)v232,
        v224,
        v225,
        v226,
        v227,
        v228,
        v229);
      v241 = (char)v18[12].monitor;
      if ( !byte_596D198 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D198 = 1;
      }
      v242 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v234, v235);
        v242 = TerminalPramsManager_TypeInfo;
      }
      monitor_high = HIDWORD(v18[12].monitor);
      v244 = (unsigned __int8)byte_596D5F3;
      v242->static_fields->_IsOrdealCallWarClear_k__BackingField = v241;
      if ( !v244 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v242 = TerminalPramsManager_TypeInfo;
        byte_596D5F3 = 1;
      }
      if ( !*(&v242->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v242, v234, v235);
        v242 = TerminalPramsManager_TypeInfo;
      }
      v245 = (int32_t)v18[13].klass;
      v246 = (unsigned __int8)byte_596D8C9;
      v242->static_fields->_EventMuralId_k__BackingField = monitor_high;
      if ( !v246 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v242 = TerminalPramsManager_TypeInfo;
        byte_596D8C9 = 1;
      }
      if ( !*(&v242->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v242, v234, v235);
        v242 = TerminalPramsManager_TypeInfo;
      }
      v247 = BYTE4(v18[13].klass);
      v248 = (unsigned __int8)byte_596D5F5;
      v242->static_fields->_EventActionQuestId_k__BackingField = v245;
      if ( !v248 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v242 = TerminalPramsManager_TypeInfo;
        byte_596D5F5 = 1;
      }
      if ( !*(&v242->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v242, v234, v235);
        v242 = TerminalPramsManager_TypeInfo;
      }
      v249 = (struct UserEventPointEntity_array *)v18[13].monitor;
      v250 = (unsigned __int8)byte_596DB55;
      v242->static_fields->_PlayHappinessCounterEffect_k__BackingField = v247;
      if ( !v250 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v242 = TerminalPramsManager_TypeInfo;
        byte_596DB55 = 1;
      }
      if ( !*(&v242->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v242, v234, v235);
        v242 = TerminalPramsManager_TypeInfo;
      }
      v251 = v242->static_fields;
      v251->_OldUserEventPoint_k__BackingField = v249;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v251->_OldUserEventPoint_k__BackingField,
        (int32_t)v249,
        v235,
        v236,
        v237,
        v238,
        v239,
        v240);
      v260 = v18[14].klass;
      if ( !v260 )
        sub_2213CDC(v252, v253);
      if ( v260->_1.namespaze )
        v261 = v18[14].klass;
      else
        v261 = 0;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v253, v254);
      if ( !byte_596A930 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A930 = 1;
      }
      v262 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v253, v254);
        v262 = TerminalPramsManager_TypeInfo;
      }
      v263 = v262->static_fields;
      v263->_UseAddRewardItemRewardInfos_k__BackingField = (struct QuestRewardInfo_array *)v261;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v263->_UseAddRewardItemRewardInfos_k__BackingField,
        (int32_t)v261,
        v254,
        v255,
        v256,
        v257,
        v258,
        v259);
      v266 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v18[2].monitor) )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v264, v265);
        if ( !byte_596ABDE )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596ABDE = 1;
        }
        v266 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v264, v265);
          v266 = TerminalPramsManager_TypeInfo;
        }
        v266->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !*(&v266->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v266, v264, v265);
      if ( !byte_596D604 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D604 = 1;
      }
      v267 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v264, v265);
        v267 = TerminalPramsManager_TypeInfo;
      }
      if ( v267->static_fields->_warClearReward_k__BackingField )
        goto LABEL_276;
      if ( !*(&v267->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v267, v264, v265);
      if ( !byte_596D602 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D602 = 1;
      }
      v267 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v264, v265);
        v267 = TerminalPramsManager_TypeInfo;
      }
      if ( v267->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_276:
        if ( !*(&v267->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v267, v264, v265);
        if ( !byte_596DB65 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596DB65 = 1;
        }
        v268 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v264, v265);
          v268 = TerminalPramsManager_TypeInfo;
        }
        v268->static_fields->_isQuestRewardSetted_k__BackingField = 1;
      }
    }
  }
}


void TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  System_String_o *String; // x20
  EventRaidDefeatedEffectInfo_o *v5; // x19
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  TerminalPramsManager_c *v14; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DB0D & 1) == 0 )
  {
    sub_2213A60(&EventRaidDefeatedEffectInfo_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11959/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_596DB0D = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB67 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB67 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11959/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               **(System_String_o ***)(qword_5984390 + 184),
               0);
    v5 = (EventRaidDefeatedEffectInfo_o *)sub_2213CCC(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v5, String, v6);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    if ( !byte_596DB66 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB66 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
      v14 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v5;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
      (int32_t)v5,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
}


void TerminalPramsManager__LoadQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  System_String_o *String; // x20
  System_Collections_Generic_Dictionary_int__int__o *v5; // x19
  System_String_array *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int max_length; // w8
  System_String_array *v15; // x20
  unsigned int v16; // w24
  System_String_array *v17; // x21
  TerminalPramsManager_c *v18; // x0
  MissionNaviTransitionBoardItem_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596DB12 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11971/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_596DB12 = 1;
  }
  *(_QWORD *)result = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596CEB0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CEB0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_QuestRandomGroupList_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11971/*"SAVEKEY_QuestRandomGroupList"*/,
               **(System_String_o ***)(qword_5984390 + 184),
               0);
    v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v5,
      (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0;
    if ( !String )
      goto LABEL_35;
    v6 = System_String__Split(String, 0x2Cu, 0, 0);
    if ( !v6 )
      goto LABEL_35;
    max_length = v6->max_length;
    v15 = v6;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
LABEL_36:
          sub_2213CE4(v6);
        v6 = (System_String_array *)v15->m_Items[v16];
        if ( !v6 )
          break;
        v6 = System_String__Split((System_String_o *)v6, 0x3Au, 0, 0);
        if ( !v6 )
          break;
        v17 = v6;
        if ( SLODWORD(v6->max_length) >= 2 )
        {
          v6 = (System_String_array *)System_Int32__TryParse(v6->m_Items[0], &result[1], 0);
          if ( ((unsigned __int8)v6 & 1) != 0 && result[1] >= 1 )
          {
            if ( (v17->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_36;
            v6 = (System_String_array *)System_Int32__TryParse(v17->m_Items[1], result, 0);
            if ( ((unsigned __int8)v6 & 1) != 0 )
            {
              v8 = (System_String_o *)(unsigned int)result[0];
              if ( result[0] >= 1 )
              {
                if ( !v5 )
                  break;
                System_Collections_Generic_Dictionary_int__int___Add(
                  v5,
                  result[1],
                  result[0],
                  (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
              }
            }
          }
        }
        max_length = v15->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_2213CDC(v6, v7);
    }
LABEL_27:
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    if ( !byte_596DB68 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB68 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
      v18 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v18->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v5;
    sub_2213A04(p_QuestRandomGroupList_k__BackingField, (int32_t)v5, v8, v9, v10, v11, v12, v13);
  }
}


void TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v7; // x1

  if ( (byte_596DAF9 & 1) == 0 )
  {
    sub_2213A60(&QuestFocusStateManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAF9 = 1;
  }
  if ( !*(&QuestFocusStateManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo, v1, v2);
  QuestFocusStateManager__ClearQuestFocusStateDataList(0);
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v4);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_2213CDC(0, v7);
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0);
}


void TerminalPramsManager__LoadRaidRemainingCount(const MethodInfo *method)
{
  System_String_o *String_83398240; // x0
  __int64 v2; // x1
  const MethodInfo *v3; // x2
  int64_t v4; // x19
  int64_t result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596DB24 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11662/*"RaidRemainingHpForCounter"*/);
    byte_596DB24 = 1;
  }
  result = 0;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11662/*"RaidRemainingHpForCounter"*/, 0) )
  {
    result = 0;
    String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240((System_String_o *)StringLiteral_11662/*"RaidRemainingHpForCounter"*/, 0);
    System_Int64__TryParse(String_83398240, &result, 0);
    v4 = result;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
    TerminalPramsManager__AddRemainingRaidHpData(v4, 0, v3);
  }
}


void TerminalPramsManager__LoadSaveDataPlanetEarthSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int32_t Int_83396820; // w19
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DAEC & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/);
    byte_596DAEC = 1;
  }
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/, 0) )
  {
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820((System_String_o *)StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    if ( !byte_596CDEE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDEE = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_PlanetEarthSpotId_k__BackingField = Int_83396820;
  }
}


void TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  System_String_o *v1; // x20
  __int64 v2; // x1
  __int64 v3; // x2
  int32_t Int_83396820; // w20
  TerminalPramsManager_c *v5; // x0
  System_String_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t v9; // w20
  TerminalPramsManager_c *v10; // x0
  System_String_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w20
  TerminalPramsManager_c *v15; // x0
  System_String_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w20
  TerminalPramsManager_c *v20; // x0
  System_String_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w20
  TerminalPramsManager_c *v25; // x0
  System_String_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w20
  TerminalPramsManager_c *v30; // x0
  System_String_o *v31; // x20
  System_String_o *String_83398240; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  int64_t v35; // x20
  TerminalPramsManager_c *v36; // x0
  System_String_o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  int32_t v40; // w20
  TerminalPramsManager_c *v41; // x0
  System_String_o *v42; // x20
  System_String_o *v43; // x0
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  TerminalPramsManager_c *v51; // x8
  System_String_o *v52; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  int32_t v57; // w20
  TerminalPramsManager_c *v58; // x0
  System_String_o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  int32_t v62; // w20
  TerminalPramsManager_c *v63; // x0
  System_String_o *v64; // x20
  __int64 v65; // x1
  __int64 v66; // x2
  int32_t v67; // w20
  TerminalPramsManager_c *v68; // x0
  System_String_o *v69; // x20
  __int64 v70; // x1
  __int64 v71; // x2
  int32_t v72; // w20
  TerminalPramsManager_c *v73; // x0
  System_String_o *v74; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  int32_t v77; // w20
  TerminalPramsManager_c *v78; // x0
  System_String_o *v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  int32_t v82; // w20
  TerminalPramsManager_c *v83; // x0
  System_String_o *v84; // x20
  System_String_o *v85; // x21
  __int64 v86; // x1
  __int64 v87; // x2
  int64_t v88; // x20
  TerminalPramsManager_c *v89; // x0
  System_String_o *v90; // x20
  __int64 v91; // x1
  __int64 v92; // x2
  int32_t v93; // w20
  TerminalPramsManager_c *v94; // x0
  System_String_o *v95; // x20
  __int64 v96; // x1
  __int64 v97; // x2
  int32_t v98; // w20
  TerminalPramsManager_c *v99; // x0
  System_String_o *v100; // x20
  __int64 v101; // x1
  __int64 v102; // x2
  Il2CppObject *v103; // x20
  __int64 v104; // x1
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  Il2CppObject *v111; // x20
  TerminalPramsManager_c *v112; // x0
  MissionNaviTransitionBoardItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v114; // x20
  __int64 v115; // x1
  const MethodInfo *v116; // x2
  int32_t v117; // w20
  TerminalPramsManager_c *v118; // x0
  int v119; // w9
  int32_t WarId_k__BackingField; // w20
  System_String_o *v121; // x20
  __int64 v122; // x1
  __int64 v123; // x2
  Il2CppObject *v124; // x20
  Il2CppObject *v125; // x0
  __int64 v126; // x1
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  TerminalPramsManager_c *v133; // x8
  Il2CppObject *v134; // x20
  MissionNaviTransitionBoardItem_o *p_eventConquestInfos; // x0
  System_String_o *v136; // x20
  int32_t v137; // w0
  __int64 v138; // x1
  __int64 v139; // x2
  TerminalPramsManager_c *v140; // x8
  int32_t v141; // w20
  System_String_o *v142; // x20
  int32_t v143; // w0
  __int64 v144; // x1
  __int64 v145; // x2
  TerminalPramsManager_c *v146; // x8
  int32_t v147; // w20
  System_String_o *v148; // x20
  __int64 v149; // x1
  __int64 v150; // x2
  Il2CppObject *v151; // x20
  Il2CppObject *v152; // x0
  __int64 v153; // x1
  System_String_o *v154; // x2
  System_String_o *v155; // x3
  int32_t v156; // w4
  int32_t v157; // w5
  bool v158; // w6
  bool v159; // w7
  TerminalPramsManager_c *v160; // x8
  Il2CppObject *v161; // x20
  MissionNaviTransitionBoardItem_o *p_eventHarvestGrowthInfo; // x0
  System_String_o *v163; // x20
  System_String_o *v164; // x0
  __int64 v165; // x1
  System_String_o *v166; // x2
  System_String_o *v167; // x3
  int32_t v168; // w4
  int32_t v169; // w5
  bool v170; // w6
  bool v171; // w7
  TerminalPramsManager_c *v172; // x8
  MissionNaviTransitionBoardItem_c *v173; // x20
  MissionNaviTransitionBoardItem_o *p_lastPlayBgmName; // x0
  System_String_o *v175; // x20
  int32_t v176; // w0
  __int64 v177; // x1
  __int64 v178; // x2
  TerminalPramsManager_c *v179; // x8
  int32_t v180; // w20
  System_String_o *v181; // x20
  __int64 v182; // x1
  __int64 v183; // x2
  int32_t v184; // w20
  TerminalPramsManager_c *v185; // x0
  System_String_o *v186; // x20
  int32_t v187; // w0
  __int64 v188; // x1
  __int64 v189; // x2
  TerminalPramsManager_c *v190; // x8
  int32_t v191; // w20
  System_String_o *v192; // x20
  __int64 v193; // x1
  System_String_o *v194; // x2
  System_String_o *v195; // x3
  int32_t v196; // w4
  int32_t v197; // w5
  bool v198; // w6
  bool v199; // w7
  System_String_o *v200; // x20
  TerminalPramsManager_c *v201; // x0
  MissionNaviTransitionBoardItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v203; // x20
  __int64 v204; // x1
  __int64 v205; // x2
  int32_t v206; // w20
  TerminalPramsManager_c *v207; // x0
  System_String_o *v208; // x20
  __int64 v209; // x1
  __int64 v210; // x2
  int32_t v211; // w20
  TerminalPramsManager_c *v212; // x0
  System_String_o *v213; // x20
  __int64 v214; // x1
  __int64 v215; // x2
  int32_t v216; // w20
  TerminalPramsManager_c *v217; // x0
  System_String_o *v218; // x20
  __int64 v219; // x1
  __int64 v220; // x2
  int32_t v221; // w20
  TerminalPramsManager_c *v222; // x0
  System_String_o *v223; // x20
  int32_t v224; // w0
  __int64 v225; // x1
  __int64 v226; // x2
  TerminalPramsManager_c *v227; // x8
  int32_t v228; // w20
  System_String_o *v229; // x20
  int32_t v230; // w0
  __int64 v231; // x1
  __int64 v232; // x2
  TerminalPramsManager_c *v233; // x8
  int32_t v234; // w20
  System_String_o *v235; // x20
  __int64 v236; // x1
  __int64 v237; // x2
  int32_t v238; // w20
  TerminalPramsManager_c *v239; // x0
  System_String_o *v240; // x20
  __int64 v241; // x1
  System_String_o *v242; // x2
  System_String_o *v243; // x3
  int32_t v244; // w4
  int32_t v245; // w5
  bool v246; // w6
  bool v247; // w7
  System_String_o *v248; // x20
  TerminalPramsManager_c *v249; // x0
  MissionNaviTransitionBoardItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v251; // x20
  System_String_o *v252; // x20
  System_String_array *IsNullOrEmpty; // x0
  __int64 v254; // x1
  __int64 v255; // x2
  il2cpp_array_size_t max_length; // x8
  System_String_array *v257; // x20
  int32_t v258; // w21
  TerminalPramsManager_c *v259; // x8
  int v260; // w9
  int32_t v261; // w0
  int32_t v262; // w20
  TerminalPramsManager_c *v263; // x0
  System_String_o *v264; // x20
  __int64 v265; // x1
  __int64 v266; // x2
  int32_t v267; // w20
  TerminalPramsManager_c *v268; // x0
  System_String_o *v269; // x20
  __int64 v270; // x1
  __int64 v271; // x2
  int32_t v272; // w20
  TerminalPramsManager_c *v273; // x0
  System_String_o *v274; // x20
  __int64 v275; // x1
  __int64 v276; // x2
  Il2CppObject *v277; // x20
  __int64 v278; // x1
  System_String_o *v279; // x2
  System_String_o *v280; // x3
  int32_t v281; // w4
  int32_t v282; // w5
  bool v283; // w6
  bool v284; // w7
  Il2CppObject *v285; // x20
  TerminalPramsManager_c *v286; // x0
  struct TerminalPramsManager_StaticFields *v287; // x0
  System_String_o *v288; // x20
  __int64 v289; // x1
  __int64 v290; // x2
  int32_t v291; // w20
  TerminalPramsManager_c *v292; // x0
  System_String_o *v293; // x20
  __int64 v294; // x1
  __int64 v295; // x2
  int32_t v296; // w20
  TerminalPramsManager_c *v297; // x0
  System_String_o *v298; // x20
  __int64 v299; // x1
  __int64 v300; // x2
  int32_t v301; // w20
  TerminalPramsManager_c *v302; // x0
  System_String_o *v303; // x20
  __int64 v304; // x1
  __int64 v305; // x2
  int32_t v306; // w20
  TerminalPramsManager_c *v307; // x0
  System_String_o *v308; // x20
  __int64 v309; // x1
  __int64 v310; // x2
  int32_t v311; // w20
  TerminalPramsManager_c *v312; // x0
  System_String_o *v313; // x20
  __int64 v314; // x1
  __int64 v315; // x2
  int32_t v316; // w20
  TerminalPramsManager_c *v317; // x0
  System_String_o *v318; // x20
  __int64 v319; // x1
  __int64 v320; // x2
  int32_t v321; // w20
  TerminalPramsManager_c *v322; // x0
  System_String_o *v323; // x20
  __int64 v324; // x1
  __int64 v325; // x2
  int32_t v326; // w20
  TerminalPramsManager_c *v327; // x0
  __int64 v328; // x1
  __int64 v329; // x2
  Il2CppObject *v330; // x20
  __int64 v331; // x1
  System_String_o *v332; // x2
  System_String_o *v333; // x3
  int32_t v334; // w4
  int32_t v335; // w5
  bool v336; // w6
  bool v337; // w7
  Il2CppObject *v338; // x20
  TerminalPramsManager_c *v339; // x0
  struct TerminalPramsManager_StaticFields *v340; // x0

  if ( (byte_596DAC8 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    sub_2213A60(&Method_JsonManager_Deserialize_EventConquestInfo_____);
    sub_2213A60(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    sub_2213A60(&Method_JsonManager_Deserialize_EventInfoJobLevelSnapshot___);
    sub_2213A60(&Method_JsonManager_Deserialize_EventSaveData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11962/*"SAVEKEY_LastPlayBgmName"*/);
    sub_2213A60(&StringLiteral_14270/*"TerminalEndTime"*/);
    sub_2213A60(&StringLiteral_11969/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_2213A60(&StringLiteral_8436/*"IsTransitionToTerminalAfterMovie"*/);
    sub_2213A60(&StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/);
    sub_2213A60(&StringLiteral_11954/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_2213A60(&StringLiteral_11963/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_2213A60(&StringLiteral_11976/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_2213A60(&StringLiteral_11974/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_2213A60(&StringLiteral_8406/*"IsPart2FinalChapter"*/);
    sub_2213A60(&StringLiteral_14271/*"TerminalEventDailyPointEventId"*/);
    sub_2213A60(&StringLiteral_14268/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_2213A60(&StringLiteral_14277/*"TerminalPhaseCnt"*/);
    sub_2213A60(&StringLiteral_11973/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_2213A60(&StringLiteral_14285/*"TerminalTimeStatusEventId"*/);
    sub_2213A60(&StringLiteral_14269/*"TerminalDispState"*/);
    sub_2213A60(&StringLiteral_11966/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_2213A60(&StringLiteral_14272/*"TerminalIsDoneShortcut"*/);
    sub_2213A60(&StringLiteral_11964/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_2213A60(&StringLiteral_11970/*"SAVEKEY_PlayerGenderType"*/);
    sub_2213A60(&StringLiteral_11952/*"SAVEKEY_BlankEarthRank"*/);
    sub_2213A60(&StringLiteral_14273/*"TerminalLastPanelEventPoint"*/);
    sub_2213A60(&StringLiteral_11975/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_2213A60(&StringLiteral_11955/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_2213A60(&StringLiteral_11967/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_2213A60(&StringLiteral_5374/*"Debug_IsQuestReleaseAll"*/);
    sub_2213A60(&StringLiteral_11961/*"SAVEKEY_IsAutoExRoomWin"*/);
    sub_2213A60(&StringLiteral_6484/*"EventInfoJobLevelSnapshot"*/);
    sub_2213A60(&StringLiteral_5371/*"Debug_IsDummyErrorSelect"*/);
    sub_2213A60(&StringLiteral_14280/*"TerminalQuestId"*/);
    sub_2213A60(&StringLiteral_11972/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_2213A60(&StringLiteral_11978/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_2213A60(&StringLiteral_14284/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_2213A60(&StringLiteral_14289/*"TerminalWarId"*/);
    sub_2213A60(&StringLiteral_14282/*"TerminalSpotId"*/);
    sub_2213A60(&StringLiteral_14286/*"TerminalTimeStatusLoopCount"*/);
    sub_2213A60(&StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_2213A60(&StringLiteral_11953/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_2213A60(&StringLiteral_11958/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_2213A60(&StringLiteral_14290/*"TerminalWarStartedIds"*/);
    sub_2213A60(&StringLiteral_11957/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_2213A60(&StringLiteral_14274/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_2213A60(&StringLiteral_11956/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_2213A60(&StringLiteral_11968/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_11951/*"SAVEKEY_AutoExRoomType"*/);
    sub_2213A60(&StringLiteral_14275/*"TerminalLastPlayedQuestId"*/);
    sub_2213A60(&StringLiteral_11960/*"SAVEKEY_IsAutoExRoom"*/);
    sub_2213A60(&StringLiteral_5370/*"Debug_IsBuildInfoDisp"*/);
    sub_2213A60(&StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/);
    sub_2213A60(&StringLiteral_11977/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_596DAC8 = 1;
  }
  v1 = (System_String_o *)StringLiteral_14269/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14269/*"TerminalDispState"*/, 0) )
  {
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(v1, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
    if ( !byte_596CEB4 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CEB4 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_DispState_k__BackingField = Int_83396820;
  }
  v6 = (System_String_o *)StringLiteral_14289/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14289/*"TerminalWarId"*/, 0) )
  {
    v9 = UnityEngine_PlayerPrefs__GetInt_83396820(v6, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    if ( !byte_596AEFA )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEFA = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_WarId_k__BackingField = v9;
  }
  v11 = (System_String_o *)StringLiteral_14282/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14282/*"TerminalSpotId"*/, 0) )
  {
    v14 = UnityEngine_PlayerPrefs__GetInt_83396820(v11, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12, v13);
    if ( !byte_596A15A )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A15A = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12, v13);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_SpotId_k__BackingField = v14;
  }
  v16 = (System_String_o *)StringLiteral_14280/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14280/*"TerminalQuestId"*/, 0) )
  {
    v19 = UnityEngine_PlayerPrefs__GetInt_83396820(v16, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17, v18);
    if ( !byte_596AEF7 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEF7 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17, v18);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v20->static_fields->_QuestId_k__BackingField = v19;
  }
  v21 = (System_String_o *)StringLiteral_14275/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14275/*"TerminalLastPlayedQuestId"*/, 0) )
  {
    v24 = UnityEngine_PlayerPrefs__GetInt_83396820(v21, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22, v23);
    if ( !byte_596D211 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D211 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22, v23);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_LastPlayedQuestId_k__BackingField = v24;
  }
  v26 = (System_String_o *)StringLiteral_14277/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14277/*"TerminalPhaseCnt"*/, 0) )
  {
    v29 = UnityEngine_PlayerPrefs__GetInt_83396820(v26, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27, v28);
    if ( !byte_596AEF9 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEF9 = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27, v28);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v30->static_fields->_PhaseCnt_k__BackingField = v29;
  }
  v31 = (System_String_o *)StringLiteral_14270/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14270/*"TerminalEndTime"*/, 0) )
  {
    String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240(v31, 0);
    v35 = 0;
    if ( System_String__op_Inequality(String_83398240, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v33, v34);
      v35 = System_Convert__ToInt64_76689456(String_83398240, 0);
    }
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33, v34);
    if ( !byte_596AEF8 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEF8 = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33, v34);
      v36 = TerminalPramsManager_TypeInfo;
    }
    v36->static_fields->_EndTime_k__BackingField = v35;
  }
  v37 = (System_String_o *)StringLiteral_14272/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14272/*"TerminalIsDoneShortcut"*/, 0) )
  {
    v40 = UnityEngine_PlayerPrefs__GetInt_83396820(v37, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38, v39);
    if ( !byte_596CEB5 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CEB5 = 1;
    }
    v41 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38, v39);
      v41 = TerminalPramsManager_TypeInfo;
    }
    v41->static_fields->_IsDoneShortcut_k__BackingField = v40 != 0;
  }
  v42 = (System_String_o *)StringLiteral_14290/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14290/*"TerminalWarStartedIds"*/, 0) )
  {
    v43 = UnityEngine_PlayerPrefs__GetString_83398240(v42, 0);
    v51 = TerminalPramsManager_TypeInfo;
    v52 = v43;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44, v45);
      v51 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v51->static_fields;
    static_fields->mTerminalWarStartedIds = v52;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->mTerminalWarStartedIds,
      (int32_t)v52,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v54 = (System_String_o *)StringLiteral_5374/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5374/*"Debug_IsQuestReleaseAll"*/, 0) )
  {
    v57 = UnityEngine_PlayerPrefs__GetInt_83396820(v54, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v55, v56);
    if ( !byte_596DB36 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB36 = 1;
    }
    v58 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v55, v56);
      v58 = TerminalPramsManager_TypeInfo;
    }
    v58->static_fields->mDebug_IsQuestReleaseAll = v57 != 0;
  }
  v59 = (System_String_o *)StringLiteral_5371/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5371/*"Debug_IsDummyErrorSelect"*/, 0) )
  {
    v62 = UnityEngine_PlayerPrefs__GetInt_83396820(v59, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v60, v61);
    if ( !byte_596DB37 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB37 = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v60, v61);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->mDebug_IsDummyErrorSelect = v62 != 0;
  }
  v64 = (System_String_o *)StringLiteral_5370/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5370/*"Debug_IsBuildInfoDisp"*/, 0) )
  {
    v67 = UnityEngine_PlayerPrefs__GetInt_83396820(v64, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v65, v66);
    if ( !byte_596DB38 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB38 = 1;
    }
    v68 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v65, v66);
      v68 = TerminalPramsManager_TypeInfo;
    }
    v68->static_fields->mDebug_IsBuildInfoDisp = v67 != 0;
  }
  v69 = (System_String_o *)StringLiteral_14285/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14285/*"TerminalTimeStatusEventId"*/, 0) )
  {
    v72 = UnityEngine_PlayerPrefs__GetInt_83396820(v69, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v70, v71);
    if ( !byte_596D624 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D624 = 1;
    }
    v73 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v70, v71);
      v73 = TerminalPramsManager_TypeInfo;
    }
    v73->static_fields->_TimeStatusEventId_k__BackingField = v72;
  }
  v74 = (System_String_o *)StringLiteral_14286/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14286/*"TerminalTimeStatusLoopCount"*/, 0) )
  {
    v77 = UnityEngine_PlayerPrefs__GetInt_83396820(v74, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v75, v76);
    if ( !byte_596D625 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D625 = 1;
    }
    v78 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v75, v76);
      v78 = TerminalPramsManager_TypeInfo;
    }
    v78->static_fields->_TimeStatusLoopCount_k__BackingField = v77;
  }
  v79 = (System_String_o *)StringLiteral_14271/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14271/*"TerminalEventDailyPointEventId"*/, 0) )
  {
    v82 = UnityEngine_PlayerPrefs__GetInt_83396820(v79, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v80, v81);
    if ( !byte_596DB3A )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB3A = 1;
    }
    v83 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v80, v81);
      v83 = TerminalPramsManager_TypeInfo;
    }
    v83->static_fields->_EventDailyPointEventId_k__BackingField = v82;
  }
  v84 = (System_String_o *)StringLiteral_14284/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14284/*"TerminalTimeStatusEventDailyPoint"*/, 0) )
  {
    v85 = UnityEngine_PlayerPrefs__GetString_83398240(v84, 0);
    v88 = 0;
    if ( !System_String__op_Equality(v85, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v86, v87);
      v88 = System_Convert__ToInt64_76689456(v85, 0);
    }
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v86, v87);
    if ( !byte_596DB3B )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB3B = 1;
    }
    v89 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v86, v87);
      v89 = TerminalPramsManager_TypeInfo;
    }
    v89->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v88;
  }
  v90 = (System_String_o *)StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/, 0) )
  {
    v93 = UnityEngine_PlayerPrefs__GetInt_83396820(v90, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v91, v92);
    if ( !byte_596DB3C )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB3C = 1;
    }
    v94 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v91, v92);
      v94 = TerminalPramsManager_TypeInfo;
    }
    v94->static_fields->_BeforeEventActivityPoint_k__BackingField = v93;
  }
  v95 = (System_String_o *)StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/, 0) )
  {
    v98 = UnityEngine_PlayerPrefs__GetInt_83396820(v95, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v96, v97);
    if ( !byte_596DB3D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB3D = 1;
    }
    v99 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v96, v97);
      v99 = TerminalPramsManager_TypeInfo;
    }
    v99->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v98;
  }
  v100 = (System_String_o *)StringLiteral_14268/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14268/*"TerminalBeforeEventSubmarinePointData"*/, 0) )
  {
    v103 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83398240(v100, 0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v101, v102);
    v111 = JsonManager__Deserialize_object_(
             v103,
             (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v104, v105);
    if ( !byte_596CFDB )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CFDB = 1;
    }
    v112 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v104, v105);
      v112 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v112->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v111;
    sub_2213A04(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v111, v105, v106, v107, v108, v109, v110);
  }
  v114 = (System_String_o *)StringLiteral_11976/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11976/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0) )
  {
    v117 = UnityEngine_PlayerPrefs__GetInt_83396820(v114, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v115, v116);
    if ( !byte_596DB35 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB35 = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v115, v116);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v119 = (unsigned __int8)byte_596A743;
    v118->static_fields->_LastSelectQuestIndex_k__BackingField = v117;
    if ( !v119 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
      byte_596A743 = 1;
    }
    if ( !*(&v118->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v118, v115, v116);
      v118 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v118->static_fields->_WarId_k__BackingField;
    if ( !byte_596DB4B )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
      byte_596DB4B = 1;
    }
    if ( !*(&v118->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v118, v115, v116);
      v118 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v118->static_fields->_LastSelectQuestIndex_k__BackingField,
      v116);
  }
  v121 = (System_String_o *)StringLiteral_11973/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11973/*"SAVEKEY_TerminalConquestInfos"*/, 0) )
  {
    v124 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83398240(v121, 0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v122, v123);
    v125 = JsonManager__Deserialize_object_(
             v124,
             (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v133 = TerminalPramsManager_TypeInfo;
    v134 = v125;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v126, v127);
      v133 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (MissionNaviTransitionBoardItem_o *)&v133->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (MissionNaviTransitionBoardItem_c *)v134;
    sub_2213A04(p_eventConquestInfos, (int32_t)v134, v127, v128, v129, v130, v131, v132);
  }
  v136 = (System_String_o *)StringLiteral_11972/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11972/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0) )
  {
    v137 = UnityEngine_PlayerPrefs__GetInt_83396820(v136, 0);
    v140 = TerminalPramsManager_TypeInfo;
    v141 = v137;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v138, v139);
      v140 = TerminalPramsManager_TypeInfo;
    }
    v140->static_fields->eventConquestInfoDisp = v141 != 0;
  }
  v142 = (System_String_o *)StringLiteral_11974/*"SAVEKEY_TerminalCraftInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11974/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0) )
  {
    v143 = UnityEngine_PlayerPrefs__GetInt_83396820(v142, 0);
    v146 = TerminalPramsManager_TypeInfo;
    v147 = v143;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v144, v145);
      v146 = TerminalPramsManager_TypeInfo;
    }
    v146->static_fields->eventCraftInfoDisp = v147 != 0;
  }
  v148 = (System_String_o *)StringLiteral_11975/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11975/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0) )
  {
    v151 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83398240(v148, 0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v149, v150);
    v152 = JsonManager__Deserialize_object_(
             v151,
             (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v160 = TerminalPramsManager_TypeInfo;
    v161 = v152;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v153, v154);
      v160 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (MissionNaviTransitionBoardItem_o *)&v160->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (MissionNaviTransitionBoardItem_c *)v161;
    sub_2213A04(p_eventHarvestGrowthInfo, (int32_t)v161, v154, v155, v156, v157, v158, v159);
  }
  v163 = (System_String_o *)StringLiteral_11962/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11962/*"SAVEKEY_LastPlayBgmName"*/, 0) )
  {
    v164 = UnityEngine_PlayerPrefs__GetString_83398240(v163, 0);
    v172 = TerminalPramsManager_TypeInfo;
    v173 = (MissionNaviTransitionBoardItem_c *)v164;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v165, v166);
      v172 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (MissionNaviTransitionBoardItem_o *)&v172->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = v173;
    sub_2213A04(p_lastPlayBgmName, (int32_t)v173, v166, v167, v168, v169, v170, v171);
  }
  v175 = (System_String_o *)StringLiteral_11963/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11963/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0) )
  {
    v176 = UnityEngine_PlayerPrefs__GetInt_83396820(v175, 0);
    v179 = TerminalPramsManager_TypeInfo;
    v180 = v176;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v177, v178);
      v179 = TerminalPramsManager_TypeInfo;
    }
    v179->static_fields->lastPlayQuestConsumeAp = v180;
  }
  v181 = (System_String_o *)StringLiteral_14274/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14274/*"TerminalLastPlayedFreeQuestSpotId"*/, 0) )
  {
    v184 = UnityEngine_PlayerPrefs__GetInt_83396820(v181, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v182, v183);
    if ( !byte_596D212 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D212 = 1;
    }
    v185 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v182, v183);
      v185 = TerminalPramsManager_TypeInfo;
    }
    v185->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v184;
  }
  v186 = (System_String_o *)StringLiteral_14273/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14273/*"TerminalLastPanelEventPoint"*/, 0) )
  {
    v187 = UnityEngine_PlayerPrefs__GetInt_83396820(v186, 0);
    v190 = TerminalPramsManager_TypeInfo;
    v191 = v187;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v188, v189);
      v190 = TerminalPramsManager_TypeInfo;
    }
    v190->static_fields->panelEventPoint = v191;
  }
  v192 = (System_String_o *)StringLiteral_11969/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11969/*"SAVEKEY_PlayedTerminalEffects"*/, 0) )
  {
    v200 = UnityEngine_PlayerPrefs__GetString_83398240(v192, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v193, v194);
    if ( !byte_596DB3F )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB3F = 1;
    }
    v201 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v193, v194);
      v201 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v201->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v200;
    sub_2213A04(p_PlayedTerminalEffects_k__BackingField, (int32_t)v200, v194, v195, v196, v197, v198, v199);
  }
  v203 = (System_String_o *)StringLiteral_11966/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11966/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0) )
  {
    v206 = UnityEngine_PlayerPrefs__GetInt_83396820(v203, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v204, v205);
    if ( !byte_596D62B )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D62B = 1;
    }
    v207 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v204, v205);
      v207 = TerminalPramsManager_TypeInfo;
    }
    v207->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v206 != 0;
  }
  v208 = (System_String_o *)StringLiteral_11967/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11967/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0) )
  {
    v211 = UnityEngine_PlayerPrefs__GetInt_83396820(v208, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v209, v210);
    if ( !byte_596D62C )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D62C = 1;
    }
    v212 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v209, v210);
      v212 = TerminalPramsManager_TypeInfo;
    }
    v212->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v211;
  }
  v213 = (System_String_o *)StringLiteral_11968/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11968/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0) )
  {
    v216 = UnityEngine_PlayerPrefs__GetInt_83396820(v213, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v214, v215);
    if ( !byte_596D8BE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D8BE = 1;
    }
    v217 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v214, v215);
      v217 = TerminalPramsManager_TypeInfo;
    }
    v217->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v216 != 0;
  }
  v218 = (System_String_o *)StringLiteral_11978/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11978/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0) )
  {
    v221 = UnityEngine_PlayerPrefs__GetInt_83396820(v218, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v219, v220);
    if ( !byte_596D31D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D31D = 1;
    }
    v222 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v219, v220);
      v222 = TerminalPramsManager_TypeInfo;
    }
    v222->static_fields->_SelectedStoryQuestId_k__BackingField = v221;
  }
  v223 = (System_String_o *)StringLiteral_11957/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11957/*"SAVEKEY_ConnectMarkEventId"*/, 0) )
  {
    v224 = UnityEngine_PlayerPrefs__GetInt_83396820(v223, 0);
    v227 = TerminalPramsManager_TypeInfo;
    v228 = v224;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v225, v226);
      v227 = TerminalPramsManager_TypeInfo;
    }
    v227->static_fields->ConnectMarkEventId = v228;
  }
  v229 = (System_String_o *)StringLiteral_11956/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11956/*"SAVEKEY_ConnectMarkAnimationId"*/, 0) )
  {
    v230 = UnityEngine_PlayerPrefs__GetInt_83396820(v229, 0);
    v233 = TerminalPramsManager_TypeInfo;
    v234 = v230;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v231, v232);
      v233 = TerminalPramsManager_TypeInfo;
    }
    v233->static_fields->ConnectMarkAnimationId = v234;
  }
  v235 = (System_String_o *)StringLiteral_11977/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11977/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0) )
  {
    v238 = UnityEngine_PlayerPrefs__GetInt_83396820(v235, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v236, v237);
    if ( !byte_596C384 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596C384 = 1;
    }
    v239 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v236, v237);
      v239 = TerminalPramsManager_TypeInfo;
    }
    v239->static_fields->_SelectedRecollectionWarId_k__BackingField = v238;
  }
  v240 = (System_String_o *)StringLiteral_11955/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11955/*"SAVEKEY_ClearEventQuestIds"*/, 0) )
  {
    v248 = UnityEngine_PlayerPrefs__GetString_83398240(v240, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v241, v242);
    if ( !byte_596CEB2 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CEB2 = 1;
    }
    v249 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v241, v242);
      v249 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v249->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v248;
    sub_2213A04(p_ClearEventQuestIds_k__BackingField, (int32_t)v248, v242, v243, v244, v245, v246, v247);
  }
  v251 = (System_String_o *)StringLiteral_11964/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11964/*"SAVEKEY_MapModelClearQuestInfo"*/, 0) )
  {
    v252 = UnityEngine_PlayerPrefs__GetString_83398240(v251, 0);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v252, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v252 || (IsNullOrEmpty = System_String__Split(v252, 0x2Cu, 0, 0)) == 0 )
        sub_2213CDC(IsNullOrEmpty, v254);
      max_length = IsNullOrEmpty->max_length;
      v257 = IsNullOrEmpty;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
          sub_2213CE4(IsNullOrEmpty);
        v258 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0);
      }
      else
      {
        v258 = 0;
      }
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v254, v255);
      if ( !byte_596DB40 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB40 = 1;
      }
      v259 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v254, v255);
        v259 = TerminalPramsManager_TypeInfo;
      }
      v260 = v257->max_length;
      v259->static_fields->_MapModelClearQuestId_k__BackingField = v258;
      if ( v260 < 2 )
      {
        v262 = 0;
      }
      else
      {
        v261 = System_Int32__Parse(v257->m_Items[1], 0);
        v259 = TerminalPramsManager_TypeInfo;
        v262 = v261;
      }
      if ( !*(&v259->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v259, v254, v255);
      if ( !byte_596DB41 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB41 = 1;
      }
      v263 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v254, v255);
        v263 = TerminalPramsManager_TypeInfo;
      }
      v263->static_fields->_MapModelClearPhaseCount_k__BackingField = v262;
    }
  }
  v264 = (System_String_o *)StringLiteral_11958/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11958/*"SAVEKEY_DataLostBattleAutoReset"*/, 0) )
  {
    v267 = UnityEngine_PlayerPrefs__GetInt_83396820(v264, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v265, v266);
    if ( !byte_596D8C6 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D8C6 = 1;
    }
    v268 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v265, v266);
      v268 = TerminalPramsManager_TypeInfo;
    }
    v268->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v267 != 0;
  }
  v269 = (System_String_o *)StringLiteral_11970/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11970/*"SAVEKEY_PlayerGenderType"*/, 0) )
  {
    v272 = UnityEngine_PlayerPrefs__GetInt_83396820(v269, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v270, v271);
    if ( !byte_596B6DD )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596B6DD = 1;
    }
    v273 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v270, v271);
      v273 = TerminalPramsManager_TypeInfo;
    }
    v273->static_fields->_PlayerGenderType_k__BackingField = v272;
  }
  v274 = (System_String_o *)StringLiteral_11954/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11954/*"SAVEKEY_CampaignDirectBonus"*/, 0) )
  {
    v277 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83398240(v274, 0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v275, v276);
    v285 = JsonManager__Deserialize_object_(
             v277,
             (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v278, v279);
    if ( !byte_596DB45 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB45 = 1;
    }
    v286 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v278, v279);
      v286 = TerminalPramsManager_TypeInfo;
    }
    v287 = v286->static_fields;
    v287->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v285;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v287->_CampaignDirectBonus_k__BackingField,
      (int32_t)v285,
      v279,
      v280,
      v281,
      v282,
      v283,
      v284);
  }
  v288 = (System_String_o *)StringLiteral_11953/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11953/*"SAVEKEY_BlankEarthSpotId"*/, 0) )
  {
    v291 = UnityEngine_PlayerPrefs__GetInt_83396820(v288, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v289, v290);
    if ( !byte_596CDEF )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDEF = 1;
    }
    v292 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v289, v290);
      v292 = TerminalPramsManager_TypeInfo;
    }
    v292->static_fields->_BlankEarthSpotId_k__BackingField = v291;
  }
  v293 = (System_String_o *)StringLiteral_11952/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11952/*"SAVEKEY_BlankEarthRank"*/, 0) )
  {
    v296 = UnityEngine_PlayerPrefs__GetInt_83396820(v293, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v294, v295);
    if ( !byte_596DB4A )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB4A = 1;
    }
    v297 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v294, v295);
      v297 = TerminalPramsManager_TypeInfo;
    }
    v297->static_fields->_BlankEarthRank_k__BackingField = v296;
  }
  v298 = (System_String_o *)StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/, 0) )
  {
    v301 = UnityEngine_PlayerPrefs__GetInt_83396820(v298, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v299, v300);
    if ( !byte_596CDEE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDEE = 1;
    }
    v302 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v299, v300);
      v302 = TerminalPramsManager_TypeInfo;
    }
    v302->static_fields->_PlanetEarthSpotId_k__BackingField = v301;
  }
  v303 = (System_String_o *)StringLiteral_8406/*"IsPart2FinalChapter"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_8406/*"IsPart2FinalChapter"*/, 0) )
  {
    v306 = UnityEngine_PlayerPrefs__GetInt_83396820(v303, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v304, v305);
    if ( !byte_596DB48 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB48 = 1;
    }
    v307 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v304, v305);
      v307 = TerminalPramsManager_TypeInfo;
    }
    v307->static_fields->_IsPart2FinalChapter_k__BackingField = v306 > 0;
  }
  v308 = (System_String_o *)StringLiteral_8436/*"IsTransitionToTerminalAfterMovie"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_8436/*"IsTransitionToTerminalAfterMovie"*/, 0) )
  {
    v311 = UnityEngine_PlayerPrefs__GetInt_83396820(v308, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v309, v310);
    if ( !byte_596D5FF )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5FF = 1;
    }
    v312 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v309, v310);
      v312 = TerminalPramsManager_TypeInfo;
    }
    v312->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField = v311 > 0;
  }
  v313 = (System_String_o *)StringLiteral_11960/*"SAVEKEY_IsAutoExRoom"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11960/*"SAVEKEY_IsAutoExRoom"*/, 0) )
  {
    v316 = UnityEngine_PlayerPrefs__GetInt_83396820(v313, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v314, v315);
    if ( !byte_596AEFB )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEFB = 1;
    }
    v317 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v314, v315);
      v317 = TerminalPramsManager_TypeInfo;
    }
    v317->static_fields->_IsAutoExRoom_k__BackingField = v316 > 0;
  }
  v318 = (System_String_o *)StringLiteral_11951/*"SAVEKEY_AutoExRoomType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11951/*"SAVEKEY_AutoExRoomType"*/, 0) )
  {
    v321 = UnityEngine_PlayerPrefs__GetInt_83396820(v318, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v319, v320);
    if ( !byte_596AEFC )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEFC = 1;
    }
    v322 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v319, v320);
      v322 = TerminalPramsManager_TypeInfo;
    }
    v322->static_fields->_AutoExRoomType_k__BackingField = v321;
  }
  v323 = (System_String_o *)StringLiteral_11961/*"SAVEKEY_IsAutoExRoomWin"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11961/*"SAVEKEY_IsAutoExRoomWin"*/, 0) )
  {
    v326 = UnityEngine_PlayerPrefs__GetInt_83396820(v323, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v324, v325);
    if ( !byte_596D601 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D601 = 1;
    }
    v327 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v324, v325);
      v327 = TerminalPramsManager_TypeInfo;
    }
    v327->static_fields->_IsAutoExRoomWin_k__BackingField = v326 > 0;
  }
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_6484/*"EventInfoJobLevelSnapshot"*/, 0) )
  {
    v330 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83398240((System_String_o *)StringLiteral_6484/*"EventInfoJobLevelSnapshot"*/, 0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v328, v329);
    v338 = JsonManager__Deserialize_object_(
             v330,
             (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_EventInfoJobLevelSnapshot___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v331, v332);
    if ( !byte_596DB2E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB2E = 1;
    }
    v339 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v331, v332);
      v339 = TerminalPramsManager_TypeInfo;
    }
    v340 = v339->static_fields;
    v340->_JobLevelSnapshot_k__BackingField = (struct EventInfoJobLevelSnapshot_o *)v338;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v340->_JobLevelSnapshot_k__BackingField,
      (int32_t)v338,
      v332,
      v333,
      v334,
      v335,
      v336,
      v337);
  }
}


TerminalTransitionInfo_o *TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  System_String_o *v1; // x20
  __int64 v2; // x19
  int32_t Int_83396820; // w0
  int32_t v4; // w20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  System_String_o *String_83398240; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596DAC9 & 1) == 0 )
  {
    sub_2213A60(&TerminalTransitionInfo_TypeInfo);
    sub_2213A60(&StringLiteral_14288/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_2213A60(&StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/);
    byte_596DAC9 = 1;
  }
  v1 = (System_String_o *)StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/;
  v2 = 0;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/, 0) )
  {
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(v1, 0);
    if ( Int_83396820 < 1 )
    {
      return 0;
    }
    else
    {
      v4 = Int_83396820;
      v2 = sub_2213CCC(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v2, 0);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v2, v5);
      if ( !v2 )
        sub_2213CDC(v6, v7);
      *(_DWORD *)(v2 + 16) = v4;
      v8 = (System_String_o *)StringLiteral_14288/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_14288/*"TerminalTransitionInfoVoiceAssetName"*/, 0) )
      {
        String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240(v8, 0);
        *(_QWORD *)(v2 + 40) = String_83398240;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v2 + 40),
          (int32_t)String_83398240,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
    }
  }
  return (TerminalTransitionInfo_o *)v2;
}


void TerminalPramsManager__MapModelClearQuestInfo_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x19
  TerminalPramsManager_c *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596DAE3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11964/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596DAE3 = 1;
  }
  MapModelClearQuestId_k__BackingField = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D0BA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0BA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v3->static_fields->_MapModelClearQuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  if ( !byte_596D0BB )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0BB = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v7 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v7->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v8 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  v9 = System_String__Concat_75694928(v6, (System_String_o *)StringLiteral_869/*","*/, v8, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11964/*"SAVEKEY_MapModelClearQuestInfo"*/, v9, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__PlanetEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAEA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/);
    byte_596DAEA = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596CDEC )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDEC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/,
    v3->static_fields->_PlanetEarthSpotId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0

  if ( (byte_596DACF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11976/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_2213A60(&StringLiteral_14274/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_2213A60(&StringLiteral_14275/*"TerminalLastPlayedQuestId"*/);
    byte_596DACF = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D269 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D269 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14275/*"TerminalLastPlayedQuestId"*/,
    v3->static_fields->_LastPlayedQuestId_k__BackingField,
    0);
  if ( !byte_596DB4B )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4B = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11976/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v6->static_fields->_LastSelectQuestIndex_k__BackingField,
    0);
  if ( !byte_596CEAD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CEAD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14274/*"TerminalLastPlayedFreeQuestSpotId"*/,
    v9->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__PlaySystemSE(int32_t seKind, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  int v5; // w8
  TerminalPramsManager_c *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_596DAC4 & 1) == 0 )
  {
    sub_2213A60(&Method_TerminalPramsManager_PlaySystemSE__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAC4 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596DB33 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB33 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = *(&v4->_2.cctor_finished + 1);
  if ( v4->static_fields->_IsAutoNoSe_k__BackingField )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(v4, method, v2);
    if ( !byte_596DB34 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB34 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsAutoNoSe_k__BackingField = 0;
  }
  else
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(v4, method, v2);
    if ( !TerminalPramsManager__IsAuto((const MethodInfo *)v4) )
    {
      v7 = Method_TerminalPramsManager_PlaySystemSE__;
      if ( (*((_BYTE *)Method_TerminalPramsManager_PlaySystemSE__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_TerminalPramsManager_PlaySystemSE__);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, seKind, 0, 0);
    }
  }
}


void TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(System_String_o *effectName, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  TerminalPramsManager_c *v11; // x0
  MissionNaviTransitionBoardItem_c *v12; // x20
  TerminalPramsManager_c *v13; // x0
  MissionNaviTransitionBoardItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x19
  TerminalPramsManager_c *v24; // x0
  MissionNaviTransitionBoardItem_o *v25; // x0
  const MethodInfo *v26; // x0

  if ( (byte_596DAEF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DAEF = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectName, method) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    if ( !byte_596DB50 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB50 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
      v11 = TerminalPramsManager_TypeInfo;
    }
    if ( !v11->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      v12 = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
      if ( !*(&v11->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v11, v4, v5);
      if ( !byte_596DB3F )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB3F = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
        v13 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v13->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = v12;
      sub_2213A04(p_PlayedTerminalEffects_k__BackingField, (int32_t)v12, v5, v6, v7, v8, v9, v10);
      v11 = TerminalPramsManager_TypeInfo;
    }
    if ( !*(&v11->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v11, v4, v5);
    if ( !byte_596DB50 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB50 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v23 = System_String__Concat_75694928(
            v15->static_fields->_PlayedTerminalEffects_k__BackingField,
            effectName,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0);
    if ( !byte_596DB3F )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB3F = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16, v17);
      v24 = TerminalPramsManager_TypeInfo;
    }
    v25 = (MissionNaviTransitionBoardItem_o *)&v24->static_fields->_PlayedTerminalEffects_k__BackingField;
    v25->klass = (MissionNaviTransitionBoardItem_c *)v23;
    sub_2213A04(v25, (int32_t)v23, v17, v18, v19, v20, v21, v22);
    TerminalPramsManager__Save_SaveData(v26);
  }
}


void TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAE5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11970/*"SAVEKEY_PlayerGenderType"*/);
    byte_596DAE5 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB51 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB51 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11970/*"SAVEKEY_PlayerGenderType"*/,
    v3->static_fields->_PlayerGenderType_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__ReceiveQuestEndResultInfo(
        BattleResultComponent_resultData_array *result,
        bool isWin,
        const MethodInfo *method)
{
  BattleResultComponent_resultData_array *v4; // x19
  BattleResultComponent_resultData_o *v5; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  _DWORD *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  BattleResultComponent_resultData_o *v16; // x8
  struct UserServantCollectionEntity_array *v17; // x27
  int max_length; // w8
  UserServantCollectionMaster_o *v19; // x20
  unsigned int v20; // w28
  UserServantCollectionEntity_o *v21; // x22
  __int64 v22; // x25
  __int64 v23; // x26
  struct DeckData_o *myDeck; // x24
  UserServantCollectionEntity_o *EntityDefinitely; // x25
  UserServantCollectionEntity_o *v26; // x24
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  _DWORD *v34; // x25
  _DWORD *v35; // x25
  __int64 v36; // x9
  int32_t friendshipExceedCount; // w10
  TerminalPramsManager_c *v38; // x0
  MissionNaviTransitionBoardItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v40; // x2
  int v41; // w8
  BattleResultComponent_resultData_o *v42; // x9
  struct UserServantEntity_array *oldUserSvt; // x9
  il2cpp_array_size_t v44; // x10
  UserServantEntity_o *v45; // x19
  __int64 v46; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x24
  __int128 v48; // q1
  UserServantEntity_o *v49; // x26
  __int64 v50; // x24
  __int64 v51; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v52; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_dispLimitCount; // x19
  __int64 v54; // x25
  __int64 v55; // x27
  __int64 v56; // x2
  int v57; // w8
  unsigned int v58; // w9
  UserServantCollectionEntity_o *v59; // x25
  struct DeckData_o *userId; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  int32_t SvtId; // w27
  __int64 v64; // x28
  __int64 v65; // x29
  __int64 v66; // x23
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  int v73; // w27
  int32_t LimitCount; // w0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  int v81; // w8
  int32_t exceedCount; // w9
  __int64 v83; // x1
  __int64 v84; // x2
  Il2CppObject *Master_object; // x26
  NetworkManager_c *v86; // x0
  __int64 v87; // x28
  __int64 v88; // x29
  int64_t userIdNumber; // x27
  UserServantCollectionEntity_o *v90; // x26
  Il2CppObject *v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x26
  __int64 v95; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v96; // x24
  TerminalPramsManager_c *v97; // x0
  MissionNaviTransitionBoardItem_o *v98; // x0
  BattleResultComponent_resultData_o *v99; // x23
  const MethodInfo *v100; // x2
  BattleResultComponent_resultData_o *v101; // x8
  struct UserQuestEntity_array *oldUserQuest; // x8
  il2cpp_array_size_t v103; // x9
  UserQuestEntity_o *v104; // x23
  TerminalPramsManager_c *v105; // x0
  int v106; // w9
  int v107; // w9
  int v108; // w9
  BattleResultComponent_resultData_array *v109; // x27
  int32_t questId; // w19
  TerminalPramsManager_c *v111; // x0
  __int64 v112; // x1
  __int64 v113; // x2
  int32_t QuestPhase; // w24
  TerminalPramsManager_c *v115; // x0
  int32_t v116; // w24
  __int64 v117; // x2
  Il2CppObject *MasterData_object; // x25
  UserQuestEntity_o *v119; // x0
  __int64 v120; // x1
  __int64 v121; // x2
  UserQuestEntity_o *v122; // x26
  int32_t v123; // w25
  __int64 v124; // x1
  __int64 v125; // x2
  bool v126; // w19
  TerminalPramsManager_c *v127; // x0
  int v128; // w9
  int v129; // w9
  int v130; // w9
  const MethodInfo *v131; // x2
  TerminalPramsManager_c *v132; // x0
  __int64 v133; // x1
  const MethodInfo *v134; // x2
  System_String_o *ValidMessage; // x8
  TerminalPramsManager_c *v136; // x0
  TerminalPramsManager_c *v137; // x0
  TerminalPramsManager_c *v138; // x0
  const MethodInfo *v139; // x0
  TerminalPramsManager_c *v140; // x0
  CondType_c *v141; // x8
  bool v142; // w0
  const MethodInfo *v143; // x1
  int32_t v144; // w24
  const MethodInfo *v145; // x1
  __int64 v146; // x2
  WarEntity_o *v147; // x25
  BalanceConfig_c *v148; // x0
  bool v149; // w8
  TerminalPramsManager_c *v150; // x0
  TerminalPramsManager_c *v151; // x0
  __int64 v152; // x2
  bool v153; // w8
  int v154; // w9
  TerminalPramsManager_c *v155; // x0
  char v156; // w19
  int v157; // w9
  const MethodInfo *v158; // x1
  __int64 v159; // x2
  bool HasFlag; // w8
  int v161; // w9
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  BattleResultComponent_resultData_o *v168; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  System_String_o *v170; // x2
  System_String_o *v171; // x3
  int32_t v172; // w4
  int32_t v173; // w5
  bool v174; // w6
  bool v175; // w7
  BattleResultComponent_resultData_o *v176; // x8
  MissionNaviTransitionBoardItem_c *resultEventPanelRewardInfos; // x24
  TerminalPramsManager_c *v178; // x0
  MissionNaviTransitionBoardItem_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v180; // x0
  MissionNaviTransitionBoardItem_o *p_eventConquestInfos; // x0
  __int64 v182; // x1
  __int64 v183; // x2
  DataManager_c *v184; // x0
  BattleResultComponent_resultData_o *v185; // x8
  System_String_o *v186; // x2
  System_String_o *v187; // x3
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7
  BattleResultComponent_resultData_o *v192; // x8
  MissionNaviTransitionBoardItem_c *eventConquestInfos; // x24
  TerminalPramsManager_c *v194; // x0
  MissionNaviTransitionBoardItem_o *v195; // x0
  bool Farm; // w19
  TerminalPramsManager_c *v197; // x0
  bool v198; // w19
  BattleResultComponent_resultData_o *v199; // x8
  int v200; // w9
  int32_t v201; // w24
  WarEntity_o *v202; // x8
  int32_t id; // w19
  BattleResultComponent_resultData_o *v204; // x8
  const MethodInfo_47A29F8 *v205; // x0
  Il2CppObject *v206; // x24
  __int64 v207; // x1
  __int64 v208; // x2
  Il2CppObject *v209; // x25
  BattleResultComponent_resultData_o *v210; // x8
  System_String_o *v211; // x2
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  System_String_o *v217; // x2
  System_String_o *v218; // x3
  int32_t v219; // w4
  int32_t v220; // w5
  bool v221; // w6
  bool v222; // w7
  MissionNaviTransitionBoardItem_c *oldUserEventPoint; // x25
  BattleResultComponent_resultData_o *v224; // x8
  TerminalPramsManager_c *v225; // x0
  MissionNaviTransitionBoardItem_o *p_OldUserEventPoint_k__BackingField; // x0
  BattleResultComponent_resultData_o *v227; // x8
  BattleResultComponent_resultData_o *v228; // x8
  int v229; // w8
  BattleResultComponent_resultData_array *v230; // x25
  unsigned int v231; // w9
  Il2CppClass **v232; // x8
  Il2CppClass *v233; // x26
  BattleResultComponent_resultData_o *v234; // x8
  __int64 v235; // x2
  int32_t RaidGroupDeadQuestId; // w27
  BattleResultComponent_resultData_o *v237; // x8
  int v238; // w8
  BattleResultComponent_resultData_array *v239; // x27
  unsigned int v240; // w9
  int v241; // w19
  struct TerminalPramsManager_StaticFields *v242; // x8
  int32_t name_high; // w19
  BattleResultComponent_resultData_o *v244; // x8
  int v245; // w9
  BattleResultComponent_resultData_array *v246; // x25
  unsigned int v247; // w8
  BattleResultComponent_resultData_o *v248; // x9
  BattleResultComponent_resultData_o *v249; // x19
  int32_t RaidDeadQuestId; // w26
  struct TerminalPramsManager_StaticFields *v251; // x8
  __int64 v252; // x2
  BattleResultComponent_resultData_o *v253; // x8
  TerminalPramsManager_c *v254; // x8
  bool v255; // w24
  TerminalPramsManager_c *v256; // x0
  int32_t v257; // w19
  __int64 v258; // x2
  __int64 v259; // x1
  __int64 v260; // x2
  Il2CppObject *v261; // x24
  long double v262; // q0
  int32_t v263; // w25
  __int64 v264; // x1
  __int64 v265; // x2
  bool v266; // w24
  long double v267; // q0
  int32_t v268; // w21
  __int64 v269; // x2
  long double v270; // q0
  BattleResultComponent_resultData_o *v271; // x8
  struct UserEventPointEntity_array *v272; // x8
  int v273; // w9
  int v274; // w11
  UserEventPointEntity_o *v275; // x28
  BattleResultComponent_resultData_o *v276; // x8
  int32_t eventActivityPointAddFlag; // w19
  TerminalPramsManager_c *v278; // x0
  BattleResultComponent_resultData_o *v279; // x8
  int32_t eventId; // w24
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v282; // x0
  long double v283; // q0
  __int64 v284; // x1
  __int64 v285; // x2
  long double v286; // q0
  Il2CppObject *v287; // x24
  __int64 v288; // x1
  __int64 v289; // x2
  long double v290; // q0
  long double v291; // q0
  __int64 v292; // x2
  int v293; // w8
  System_String_o **v294; // x10
  System_String_o **v295; // x9
  System_String_o *v296; // x25
  System_String_o *v297; // x22
  System_String_o **v298; // x8
  System_String_o *v299; // x26
  int32_t klass; // w27
  __int64 v301; // x2
  System_Collections_Generic_List_object__o *v302; // x27
  TerminalPramsManager___c_c *v303; // x8
  struct TerminalPramsManager___c_StaticFields *v304; // x9
  System_Predicate_object__o *_9__803_0; // x24
  System_String_o *v306; // x19
  Il2CppObject *v307; // x26
  struct TerminalPramsManager___c_StaticFields *v308; // x0
  System_String_o *v309; // x2
  System_String_o *v310; // x3
  int32_t v311; // w4
  int32_t v312; // w5
  bool v313; // w6
  bool v314; // w7
  __int64 v315; // x1
  __int64 v316; // x2
  long double v317; // q0
  __int64 v318; // x27
  __int64 v319; // x1
  __int64 v320; // x2
  System_String_o *v321; // x24
  System_String_o *v322; // x2
  System_String_o *v323; // x3
  int32_t v324; // w4
  int32_t v325; // w5
  bool v326; // w6
  bool v327; // w7
  int32_t v328; // w24
  int32_t v329; // w25
  long double v330; // q0
  char v331; // w26
  char v332; // w0
  TerminalPramsManager_c *v333; // x0
  __int64 v334; // x2
  Il2CppObject *v335; // x24
  BattleResultComponent_resultData_o *v336; // x8
  TerminalPramsManager_c *v337; // x0
  int v338; // w9
  __int64 v339; // x2
  Il2CppObject *v340; // x24
  int v341; // w21
  TerminalPramsManager_c *v342; // x0
  MissionNaviTransitionBoardItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  System_String_o *v344; // x2
  System_String_o *v345; // x3
  int32_t v346; // w4
  int32_t v347; // w5
  bool v348; // w6
  bool v349; // w7
  BattleResultComponent_resultData_o *v350; // x8
  struct CostumeReleaseAnnounce_array *costumeReleaseAnnounce; // x8
  BattleResultComponent_resultData_o *v352; // x8
  MissionNaviTransitionBoardItem_c *v353; // x24
  TerminalPramsManager_c *v354; // x0
  MissionNaviTransitionBoardItem_o *v355; // x0
  TerminalPramsManager_c *v356; // x0
  MissionNaviTransitionBoardItem_o *p_questClearCostumeGet_k__BackingField; // x0
  System_String_o *v358; // x2
  System_String_o *v359; // x3
  int32_t v360; // w4
  int32_t v361; // w5
  bool v362; // w6
  bool v363; // w7
  BattleResultComponent_resultData_o *v364; // x8
  MissionNaviTransitionBoardItem_c *costumeGetAnnounce; // x24
  TerminalPramsManager_c *v366; // x0
  MissionNaviTransitionBoardItem_o *v367; // x0
  TerminalPramsManager_c *v368; // x0
  MissionNaviTransitionBoardItem_o *p_eventPointWinReward_k__BackingField; // x0
  System_String_o *v370; // x2
  System_String_o *v371; // x3
  int32_t v372; // w4
  int32_t v373; // w5
  bool v374; // w6
  bool v375; // w7
  TerminalPramsManager_c *v376; // x0
  int32_t v377; // w24
  QuestGroupMaster_o *v378; // x25
  int32_t GroupId; // w0
  __int64 v380; // x1
  __int64 v381; // x2
  TerminalPramsManager_c *v382; // x8
  int32_t v383; // w26
  int v384; // w25
  Il2CppObject *v385; // x26
  BattleResultComponent_resultData_o *v386; // x8
  __int64 v387; // x2
  EventPointEntity_o *v388; // x25
  int32_t v389; // w24
  int v390; // w9
  struct TerminalPramsManager_StaticFields *v391; // x8
  BattleResultComponent_resultData_o *v392; // x8
  struct EventPointWinReward_array *eventPointWinReward; // x8
  il2cpp_array_size_t v394; // x9
  MissionNaviTransitionBoardItem_c *v395; // x24
  TerminalPramsManager_c *v396; // x0
  MissionNaviTransitionBoardItem_o *v397; // x0
  TerminalPramsManager_c *v398; // x0
  int32_t v399; // w19
  BattleResultComponent_resultData_array *v400; // x27
  TerminalPramsManager_c *v401; // x0
  MissionNaviTransitionBoardItem_o *p_eventRaceBoost_k__BackingField; // x0
  System_String_o *v403; // x2
  System_String_o *v404; // x3
  int32_t v405; // w4
  int32_t v406; // w5
  bool v407; // w6
  bool v408; // w7
  int v409; // w8
  BattleResultComponent_resultData_o *v410; // x9
  struct EventRaceBoostInfo_o *raceResult; // x23
  TerminalPramsManager_c *v412; // x0
  MissionNaviTransitionBoardItem_o *v413; // x0
  __int64 v414; // x19
  BattleResultComponent_resultData_o *v415; // x9
  struct EventTowerReward_array *eventTowerReward; // x9
  il2cpp_array_size_t v417; // x10
  EventTowerReward_o *v418; // x23
  TerminalPramsManager_c *v419; // x0
  MissionNaviTransitionBoardItem_o *p_eventTowerReward_k__BackingField; // x0
  System_String_o *v421; // x2
  System_String_o *v422; // x3
  int32_t v423; // w4
  int32_t v424; // w5
  bool v425; // w6
  bool v426; // w7
  BattleResultComponent_resultData_o *v427; // x8
  MissionNaviTransitionBoardItem_c *resultEventTowerRewardInfos; // x23
  TerminalPramsManager_c *v429; // x0
  MissionNaviTransitionBoardItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v431; // x9
  MissionNaviTransitionBoardItem_c *resultBoostItemRewardInfos; // x23
  TerminalPramsManager_c *v433; // x0
  MissionNaviTransitionBoardItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v435; // x9
  MissionNaviTransitionBoardItem_c *resultEventBoardGameTokenRewardInfos; // x23
  TerminalPramsManager_c *v437; // x0
  MissionNaviTransitionBoardItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v439; // x8
  MissionNaviTransitionBoardItem_c *warClearReward; // x23
  TerminalPramsManager_c *v441; // x0
  MissionNaviTransitionBoardItem_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v443; // x0
  struct TerminalPramsManager_StaticFields *v444; // x0
  __int64 v445; // x1
  System_String_o *v446; // x2
  System_String_o *v447; // x3
  int32_t v448; // w4
  int32_t v449; // w5
  bool v450; // w6
  bool v451; // w7
  TerminalPramsManager_c *v452; // x0
  struct TerminalPramsManager_StaticFields *v453; // x0
  __int64 v454; // x2
  Il2CppObject *Instance; // x23
  int32_t WarID_ByQuestID; // w23
  WarEntity_o *WarEntityByWarID; // x0
  __int64 v458; // x1
  __int64 v459; // x2
  int32_t v460; // w23
  System_String_o *v461; // x2
  System_String_o *v462; // x3
  int32_t v463; // w4
  int32_t v464; // w5
  bool v465; // w6
  bool v466; // w7
  int v467; // w8
  BattleResultComponent_resultData_o *v468; // x9
  BattleResultComponent_resultData_o *v469; // x8
  struct UserSuperBossEntity_array *oldUserEventSuperBoss; // x22
  TerminalPramsManager_c *v471; // x0
  struct TerminalPramsManager_StaticFields *v472; // x0
  MissionNaviTransitionBoardItem_o *p_oldPersonalBoss_k__BackingField; // x0
  BattleResultComponent_resultData_o *v474; // x8
  TerminalPramsManager_c *v475; // x0
  struct TerminalPramsManager_StaticFields *v476; // x0
  struct QuestRewardInfo_array *v477; // x8
  bool v478; // w19
  BalanceConfig_c *v479; // x8
  int32_t v480; // w19
  TerminalPramsManager_c *v481; // x0
  struct TerminalPramsManager_StaticFields *v482; // x8
  Il2CppObject *v483; // x0
  TerminalPramsManager_c *v484; // x0
  BalanceConfig_c *v485; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v487; // x0
  BalanceConfig_c *v488; // x8
  int32_t PhaseCnt_k__BackingField; // w19
  TerminalPramsManager_c *v490; // x0
  BalanceConfig_c *v491; // x8
  int32_t v492; // w19
  __int64 v493; // x2
  Il2CppObject *v494; // x22
  struct DeckData_o *v495; // x21
  System_String_o *v496; // x2
  System_String_o *v497; // x3
  int32_t v498; // w4
  int32_t v499; // w5
  bool v500; // w6
  bool v501; // w7
  UserSuperBossEntity_o *v502; // x22
  BattleResultComponent_resultData_array *v503; // x21
  __int64 v504; // x1
  System_String_o *v505; // x2
  System_String_o *v506; // x3
  int32_t v507; // w4
  int32_t v508; // w5
  bool v509; // w6
  bool v510; // w7
  TerminalPramsManager_c *v511; // x0
  struct TerminalPramsManager_StaticFields *v512; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v514; // x21
  __int64 v515; // x2
  Il2CppObject *v516; // x22
  int32_t ScriptQuestId; // w22
  __int64 v518; // x1
  __int64 v519; // x2
  Il2CppObject *v520; // x23
  TerminalPramsManager_c *v521; // x0
  int32_t v522; // w27
  __int64 v523; // x1
  __int64 v524; // x2
  int32_t winResult; // w24
  __int64 v526; // x1
  System_String_o *v527; // x2
  System_String_o *v528; // x3
  int32_t v529; // w4
  int32_t v530; // w5
  bool v531; // w6
  bool v532; // w7
  __int64 v533; // x1
  __int64 v534; // x2
  Il2CppObject *v535; // x23
  TerminalPramsManager_c *v536; // x0
  int32_t v537; // w19
  __int64 v538; // x1
  __int64 v539; // x2
  int32_t v540; // w21
  TerminalPramsManager_c *v541; // x0
  int32_t v542; // w1
  MissionNaviTransitionBoardItem_o *p_lastPlayBgmName; // x0
  const MethodInfo *v544; // x0
  __int64 v545; // x2
  Il2CppObject *v546; // x21
  int32_t v547; // w22
  System_String_o *v548; // x2
  System_String_o *v549; // x3
  int32_t v550; // w4
  int32_t v551; // w5
  bool v552; // w6
  bool v553; // w7
  TerminalPramsManager_c *v554; // x0
  il2cpp_array_size_t *p_max_length; // x0
  BattleResultComponent_resultData_o *v556; // x8
  int32_t v557; // w22
  TerminalPramsManager_c *v558; // x0
  int32_t v559; // w23
  __int64 v560; // x1
  System_String_o *v561; // x2
  System_String_o *v562; // x3
  int32_t v563; // w4
  int32_t v564; // w5
  bool v565; // w6
  bool v566; // w7
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v568; // x0
  struct TerminalPramsManager_StaticFields *v569; // x0
  const MethodInfo *v570; // x0
  System_String_o *v571; // x2
  System_String_o *v572; // x3
  int32_t v573; // w4
  int32_t v574; // w5
  bool v575; // w6
  bool v576; // w7
  BattleResultComponent_resultData_o *v577; // x8
  int32_t eventMuralId; // w19
  TerminalPramsManager_c *v579; // x0
  MissionNaviTransitionBoardItem_o *p_eventHarvestGrowthInfo; // x0
  __int64 v581; // x1
  __int64 v582; // x2
  TerminalPramsManager_c *v583; // x0
  BattleResultComponent_resultData_array *v584; // x22
  int32_t ScriptIntParam; // w23
  int32_t v586; // w0
  int32_t v587; // w25
  __int64 v588; // x24
  System_String_o *v589; // x2
  System_String_o *v590; // x3
  int32_t v591; // w4
  int32_t v592; // w5
  bool v593; // w6
  bool v594; // w7
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v596; // x0
  MissionNaviTransitionBoardItem_o *v597; // x0
  __int64 v598; // x2
  Il2CppObject *v599; // x22
  __int64 v600; // x2
  QuestEntity_o *QuestEntity; // x22
  TerminalPramsManager_c *v602; // x0
  __int64 v603; // x1
  __int64 v604; // x2
  int32_t SpotId; // w21
  BattleResultComponent_resultData_o *v606; // x8
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x21
  _DWORD *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v609; // x0
  System_String_o *v610; // x2
  System_String_o *v611; // x3
  int32_t v612; // w4
  int32_t v613; // w5
  bool v614; // w6
  bool v615; // w7
  TerminalPramsManager_c *v616; // x0
  TerminalPramsManager_c *v617; // x0
  bool IsPhaseClear_k__BackingField; // w21
  TerminalPramsManager_c *v619; // x0
  int v620; // w9
  __int64 v621; // x1
  __int64 v622; // x2
  TerminalPramsManager_c *v623; // x0
  TerminalPramsManager_c *v624; // x0
  TerminalPramsManager_c *v625; // x0
  __int64 v626; // x1
  __int64 v627; // x2
  System_String_o *v628; // x21
  TerminalPramsManager_c *v629; // x0
  System_String_o *v630; // x0
  __int64 v631; // x1
  System_String_o *v632; // x2
  System_String_o *v633; // x3
  int32_t v634; // w4
  int32_t v635; // w5
  bool v636; // w6
  bool v637; // w7
  System_String_o *v638; // x21
  TerminalPramsManager_c *v639; // x0
  MissionNaviTransitionBoardItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v641; // x8
  MissionNaviTransitionBoardItem_c *limitImageAnnounces; // x21
  TerminalPramsManager_c *v643; // x0
  MissionNaviTransitionBoardItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v645; // x1
  __int64 v646; // x2
  __int64 v647; // x21
  TerminalPramsManager_c *v648; // x0
  System_String_o *v649; // x2
  System_String_o *v650; // x3
  int32_t v651; // w4
  int32_t v652; // w5
  bool v653; // w6
  bool v654; // w7
  System_String_o *v655; // x2
  System_String_o *v656; // x3
  int32_t v657; // w4
  int32_t v658; // w5
  bool v659; // w6
  bool v660; // w7
  int32_t v661; // w1
  __int64 v662; // x1
  __int64 v663; // x2
  TerminalPramsManager_c *v664; // x0
  System_String_o *v665; // x2
  System_String_o *v666; // x3
  int32_t v667; // w4
  int32_t v668; // w5
  bool v669; // w6
  bool v670; // w7
  System_String_o *v671; // x2
  System_String_o *v672; // x3
  int32_t v673; // w4
  int32_t v674; // w5
  bool v675; // w6
  bool v676; // w7
  int32_t v677; // w1
  __int64 v678; // x1
  __int64 v679; // x2
  TerminalPramsManager_c *v680; // x0
  int v681; // w9
  System_String_o *v682; // x2
  System_String_o *v683; // x3
  int32_t v684; // w4
  int32_t v685; // w5
  bool v686; // w6
  bool v687; // w7
  System_String_o *v688; // x2
  System_String_o *v689; // x3
  int32_t v690; // w4
  int32_t v691; // w5
  bool v692; // w6
  bool v693; // w7
  int32_t v694; // w1
  __int64 v695; // x1
  __int64 v696; // x2
  TerminalPramsManager_c *v697; // x0
  System_String_o *v698; // x2
  System_String_o *v699; // x3
  int32_t v700; // w4
  int32_t v701; // w5
  bool v702; // w6
  bool v703; // w7
  System_String_o *v704; // x0
  const MethodInfo *v705; // x1
  const MethodInfo *v706; // x0
  const MethodInfo *v707; // x0
  const MethodInfo *v708; // x0
  const MethodInfo *v709; // x0
  const MethodInfo *v710; // x0
  __int64 v711; // x1
  __int64 v712; // x2
  TerminalPramsManager_c *v713; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t v715; // w21
  const MethodInfo *v716; // x0
  __int64 v717; // x1
  __int64 v718; // x2
  TerminalPramsManager_c *v719; // x0
  int v720; // w9
  int v721; // w9
  int v722; // w9
  __int64 v723; // x0
  bool v724; // [xsp+14h] [xbp-10Ch]
  BattleResultComponent_resultData_array *resulta; // [xsp+18h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v726; // [xsp+20h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v727; // [xsp+40h] [xbp-E0h]
  _BYTE v728[4]; // [xsp+6Ch] [xbp-B4h] BYREF
  UserSuperBossEntity_o *v729; // [xsp+70h] [xbp-B0h] BYREF
  Il2CppObject *v730; // [xsp+78h] [xbp-A8h] BYREF
  Il2CppObject *v731; // [xsp+80h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v732; // [xsp+88h] [xbp-98h] BYREF
  int v733; // [xsp+94h] [xbp-8Ch] BYREF
  Il2CppObject *v734; // [xsp+98h] [xbp-88h] BYREF
  Il2CppObject *v735; // [xsp+A0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-78h] BYREF
  int v737; // [xsp+B4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v738; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v739; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v740; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v741; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v742; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v743; // 0:x0.16

  v4 = result;
  if ( (byte_596DAFD & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&EventHarvestGrowthInfo_TypeInfo);
    sub_2213A60(&EventSaveData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_2213A60(&QuestClearHeroineInfo_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__803_0__);
    sub_2213A60(&TerminalPramsManager___c_TypeInfo);
    sub_2213A60(&UserServantCollectionEntity___TypeInfo);
    sub_2213A60(&UserServantCollectionEntity_TypeInfo);
    sub_2213A60(&UserServantEntity_TypeInfo);
    sub_2213A60(&UserSuperBossEntity___TypeInfo);
    sub_2213A60(&StringLiteral_6552/*"ExRoom_QuestWinShowStarted"*/);
    sub_2213A60(&StringLiteral_20879/*"harvestGrowthAfterQuestId"*/);
    sub_2213A60(&StringLiteral_11961/*"SAVEKEY_IsAutoExRoomWin"*/);
    sub_2213A60(&StringLiteral_17409/*"afterActionBk"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_20880/*"harvestGrowthBeforeQuestId"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_6925/*"False"*/);
    result = (BattleResultComponent_resultData_array *)sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596DAFD = 1;
  }
  v738 = 0;
  v737 = 0;
  v735 = 0;
  entity = 0;
  v734 = 0;
  v733 = 0;
  v731 = 0;
  v732 = 0;
  v729 = 0;
  v730 = 0;
  v728[0] = 0;
  if ( !v4 )
    goto LABEL_1208;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_1209;
  v5 = v4->m_Items[0];
  if ( !v5 )
    goto LABEL_1208;
  oldUserSvtCollection = v5->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1208;
  v9 = (_DWORD *)sub_2213B20(UserServantCollectionEntity___TypeInfo, LODWORD(oldUserSvtCollection->max_length));
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !LODWORD(v4->max_length) )
    goto LABEL_1209;
  v16 = v4->m_Items[0];
  resulta = v4;
  if ( !v16 )
    goto LABEL_1208;
  v17 = v16->fields.oldUserSvtCollection;
  v724 = isWin;
  v737 = 0;
  if ( !v17 )
    goto LABEL_1208;
  max_length = v17->max_length;
  if ( max_length >= 1 )
  {
    v19 = (UserServantCollectionMaster_o *)result;
    v20 = 0;
    while ( v20 < max_length )
    {
      v21 = v17->m_Items[v20];
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isWin, v10);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isWin, v10);
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      }
      if ( !v21 )
        goto LABEL_1208;
      v22 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
      myDeck = result->m_Items[19]->fields.myDeck;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isWin, v10);
      *(_QWORD *)&v739.fields.currentCryptoKey = v22;
      *(_QWORD *)&v739.fields.fakeValue = v23;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                           v739,
                                                           0);
      if ( !v19 )
        goto LABEL_1208;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v19, (int64_t)myDeck, (int32_t)result, 0);
      v26 = (UserServantCollectionEntity_o *)sub_2213CCC(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_50146596(v26, EntityDefinitely, 0);
      if ( !v9 )
        goto LABEL_1208;
      if ( v26 )
      {
        result = (BattleResultComponent_resultData_array *)sub_2213BB4(v26, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
        if ( !result )
          goto LABEL_1210;
      }
      if ( v20 >= v9[6] )
        break;
      v34 = &v9[2 * v20];
      *((_QWORD *)v34 + 4) = v26;
      v35 = v34 + 8;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9[2 * v20 + 8], (int32_t)v26, v27, v28, v29, v30, v31, v32);
      if ( v20 >= v9[6] )
        break;
      if ( !*(_QWORD *)v35 )
        goto LABEL_1208;
      *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*(_QWORD *)v35 + 92LL) = v21->fields.friendship;
      if ( v20 >= v9[6] )
        break;
      if ( !*(_QWORD *)v35 )
        goto LABEL_1208;
      *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*(_QWORD *)v35 + 108LL) = v21->fields.friendshipRank;
      if ( v20 >= v9[6] )
        break;
      v36 = *(_QWORD *)v35;
      if ( !*(_QWORD *)v35 )
        goto LABEL_1208;
      max_length = v17->max_length;
      friendshipExceedCount = v21->fields.friendshipExceedCount;
      v737 = ++v20;
      *(_DWORD *)(v36 + 124) = friendshipExceedCount;
      if ( (int)v20 >= max_length )
        goto LABEL_36;
    }
LABEL_1209:
    sub_2213CE4(result);
  }
LABEL_36:
  v38 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v10);
    v38 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = (MissionNaviTransitionBoardItem_o *)&v38->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0;
  sub_2213A04(p_mQuestClearHeroineInfo, 0, v10, v11, v12, v13, v14, v15);
  v41 = v4->max_length;
  if ( !v41 )
    goto LABEL_1209;
  v42 = v4->m_Items[0];
  if ( !v42 )
    goto LABEL_1208;
  oldUserSvt = v42->fields.oldUserSvt;
  if ( oldUserSvt )
  {
    v44 = oldUserSvt->max_length;
    if ( v44 )
    {
      if ( !(_DWORD)v44 )
        goto LABEL_1209;
      v45 = oldUserSvt->m_Items[0];
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1208;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !v45 )
        goto LABEL_1208;
      v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      v48 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
      *(_OWORD *)&v727.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v727.fields.fakeValue = v48;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isWin, v46);
      v726 = v727;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                           &v726,
                                                           0);
      if ( !v47 )
        goto LABEL_1208;
      v49 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v47,
                                     (int64_t)result,
                                     (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v50 = sub_2213CCC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_50173628((UserServantEntity_o *)v50, v49, 0);
      if ( !v50 )
        goto LABEL_1208;
      *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v50 + 96) = v45->fields.limitCount;
      *(_DWORD *)(v50 + 400) = v45->fields.lv;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
      *(_QWORD *)(v50 + 436) = *(_QWORD *)&v45->fields.treasureDeviceLv1;
      v54 = *(_QWORD *)&v45->fields.dispLimitCount.fields.currentCryptoKey;
      v55 = *(_QWORD *)&v45->fields.dispLimitCount.fields.fakeValue;
      p_dispLimitCount = &v45->fields.dispLimitCount;
      if ( !*(&v52->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v52, isWin, v51);
      *(_QWORD *)&v740.fields.currentCryptoKey = v54;
      *(_QWORD *)&v740.fields.fakeValue = v55;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                           v740,
                                                           0);
      if ( (int)result >= 1 )
        *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v50 + 128) = *p_dispLimitCount;
      v737 = 0;
      if ( !v9 )
        goto LABEL_1208;
      v57 = v9[6];
      if ( v57 >= 1 )
      {
        v58 = 0;
        while ( v58 < v57 )
        {
          v59 = *(UserServantCollectionEntity_o **)&v9[2 * v58 + 8];
          if ( !v59 )
            goto LABEL_1208;
          userId = (struct DeckData_o *)v59->fields.userId;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isWin, v56);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isWin, v56);
            result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          }
          if ( userId == result->m_Items[19]->fields.myDeck )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v59, 0);
            v64 = *(_QWORD *)(v50 + 80);
            v65 = *(_QWORD *)(v50 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61, v62);
            *(_QWORD *)&v741.fields.currentCryptoKey = v64;
            *(_QWORD *)&v741.fields.fakeValue = v65;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                 v741,
                                                                 0);
            if ( SvtId == (_DWORD)result )
              goto LABEL_70;
          }
          v57 = v9[6];
          v58 = ++v737;
          if ( v737 >= v57 )
            goto LABEL_69;
        }
        goto LABEL_1209;
      }
LABEL_69:
      v59 = 0;
LABEL_70:
      v66 = sub_2213CCC(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v66, 0);
      if ( !v66 )
        goto LABEL_1208;
      *(_QWORD *)(v66 + 16) = v50;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 16), v50, v67, v68, v69, v70, v71, v72);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount((UserServantEntity_o *)v50, 0);
      if ( !v49 )
        goto LABEL_1208;
      v73 = (int)result;
      LimitCount = UserServantEntity__getLimitCount(v49, 0);
      *(_DWORD *)(v66 + 28) = 0;
      *(_DWORD *)(v66 + 32) = 0;
      v81 = *(_DWORD *)(v50 + 440);
      exceedCount = v49->fields.exceedCount;
      *(_BYTE *)(v66 + 25) = 0;
      v4 = resulta;
      *(_BYTE *)(v66 + 24) = v73 != LimitCount;
      *(_DWORD *)(v66 + 36) = -1;
      *(_BYTE *)(v66 + 40) = 0;
      *(_BYTE *)(v66 + 41) = v81 != exceedCount;
      if ( v59 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isWin, v75);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v83, v84);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        v86 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v83, v84);
          v86 = NetworkManager_TypeInfo;
        }
        v87 = *(_QWORD *)(v50 + 80);
        v88 = *(_QWORD *)(v50 + 88);
        userIdNumber = v86->static_fields->userIdNumber;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v83, v84);
        *(_QWORD *)&v742.fields.currentCryptoKey = v87;
        *(_QWORD *)&v742.fields.fakeValue = v88;
        result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                             v742,
                                                             0);
        if ( !Master_object )
          goto LABEL_1208;
        v90 = UserServantCollectionMaster__GetEntityDefinitely(
                (UserServantCollectionMaster_o *)Master_object,
                userIdNumber,
                (int32_t)result,
                0);
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v59, 0);
        if ( !v90 )
          goto LABEL_1208;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v90, 0) )
          *(_DWORD *)(v66 + 36) = UserServantCollectionEntity__getFriendShipRank(v59, 0);
        v4 = resulta;
        if ( v59->fields.friendshipExceedCount != v90->fields.friendshipExceedCount )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isWin, v75);
          v91 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
          v94 = *(_QWORD *)(v50 + 80);
          v95 = *(_QWORD *)(v50 + 88);
          v96 = (DataMasterBase_TMaster__TEntity__PKType__o *)v91;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v92, v93);
          *(_QWORD *)&v743.fields.currentCryptoKey = v94;
          *(_QWORD *)&v743.fields.fakeValue = v95;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                               v743,
                                                               0);
          if ( !v96 )
            goto LABEL_1208;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v96,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          v4 = resulta;
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1208;
            *(_DWORD *)(v66 + 36) = v59->fields.friendshipExceedCount + HIDWORD(entity[6].klass);
            *(_BYTE *)(v66 + 40) = 1;
          }
        }
      }
      v97 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v75);
        v97 = TerminalPramsManager_TypeInfo;
      }
      v98 = (MissionNaviTransitionBoardItem_o *)&v97->static_fields->mQuestClearHeroineInfo;
      v98->klass = (MissionNaviTransitionBoardItem_c *)v66;
      sub_2213A04(v98, v66, v75, v76, v77, v78, v79, v80);
      v41 = v4->max_length;
    }
  }
  if ( !v41 )
    goto LABEL_1209;
  v99 = v4->m_Items[0];
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v40);
  TerminalPramsManager__SetBattleResultCampaignBonus(v99, (const MethodInfo *)isWin);
  if ( !LODWORD(v4->max_length) )
    goto LABEL_1209;
  v101 = v4->m_Items[0];
  if ( !v101 )
    goto LABEL_1208;
  oldUserQuest = v101->fields.oldUserQuest;
  if ( oldUserQuest && (v103 = oldUserQuest->max_length) != 0 )
  {
    if ( !(_DWORD)v103 )
      goto LABEL_1209;
    v104 = oldUserQuest->m_Items[0];
  }
  else
  {
    v104 = 0;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v100);
  if ( !byte_596D195 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D195 = 1;
  }
  v105 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v100);
    v105 = TerminalPramsManager_TypeInfo;
  }
  v106 = (unsigned __int8)byte_596D194;
  v105->static_fields->_IsPhaseClear_k__BackingField = v104 != 0;
  if ( !v106 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v105 = TerminalPramsManager_TypeInfo;
    byte_596D194 = 1;
  }
  if ( !*(&v105->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v105, isWin, v100);
    v105 = TerminalPramsManager_TypeInfo;
  }
  v107 = (unsigned __int8)byte_596D31B;
  v105->static_fields->_IsQuestClear_k__BackingField = 0;
  if ( !v107 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v105 = TerminalPramsManager_TypeInfo;
    byte_596D31B = 1;
  }
  if ( !*(&v105->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v105, isWin, v100);
    v105 = TerminalPramsManager_TypeInfo;
  }
  v108 = (unsigned __int8)byte_596D193;
  v105->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !v108 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v105 = TerminalPramsManager_TypeInfo;
    byte_596D193 = 1;
  }
  if ( !*(&v105->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v105, isWin, v100);
    v105 = TerminalPramsManager_TypeInfo;
  }
  if ( v105->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !*(&v105->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v105, isWin, v100);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v100);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v104 )
        goto LABEL_1208;
    }
    else
    {
      if ( !v104 )
        goto LABEL_1208;
      questId = v104->fields.questId;
      if ( !HIDWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result, isWin, v100);
      if ( !byte_596AEF7 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596AEF7 = 1;
      }
      v111 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v100);
        v111 = TerminalPramsManager_TypeInfo;
      }
      v111->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v104, 0);
      if ( !byte_596AEF9 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596AEF9 = 1;
      }
      v115 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v112, v113);
        v115 = TerminalPramsManager_TypeInfo;
      }
      v115->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v116 = v104->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1208;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)result,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isWin, v117);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isWin, v117);
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_1208;
    v119 = UserQuestMaster__GetEntity(
             (UserQuestMaster_o *)MasterData_object,
             (int64_t)result->m_Items[19]->fields.myDeck,
             v116,
             0);
    if ( v119 )
    {
      v122 = v119;
      v123 = UserQuestEntity__getQuestPhase(v119, 0);
      if ( UserQuestEntity__getClearNum(v104, 0) || UserQuestEntity__getClearNum(v122, 0) != 1 )
        v126 = UserQuestEntity__IsResetStatus(v104, 0) && !UserQuestEntity__IsResetStatus(v122, 0);
      else
        v126 = 1;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v124, v125);
      if ( !byte_596D194 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D194 = 1;
      }
      v127 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v124, v125);
        v127 = TerminalPramsManager_TypeInfo;
      }
      v109 = resulta;
      v128 = (unsigned __int8)byte_596DB43;
      v127->static_fields->_IsQuestClear_k__BackingField = v126;
      if ( !v128 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v127 = TerminalPramsManager_TypeInfo;
        byte_596DB43 = 1;
      }
      if ( !*(&v127->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v127, v124, v125);
        v127 = TerminalPramsManager_TypeInfo;
      }
      v129 = (unsigned __int8)byte_596DB40;
      v127->static_fields->_EventUIEffectClearQuestId_k__BackingField = v116;
      if ( !v129 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v127 = TerminalPramsManager_TypeInfo;
        byte_596DB40 = 1;
      }
      if ( !*(&v127->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v127, v124, v125);
        v127 = TerminalPramsManager_TypeInfo;
      }
      v130 = (unsigned __int8)byte_596DB41;
      v127->static_fields->_MapModelClearQuestId_k__BackingField = v116;
      if ( !v130 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v127 = TerminalPramsManager_TypeInfo;
        byte_596DB41 = 1;
      }
      if ( !*(&v127->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v127, v124, v125);
        v127 = TerminalPramsManager_TypeInfo;
      }
      v127->static_fields->_MapModelClearPhaseCount_k__BackingField = v123;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v127);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1208;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v116, v123, 0, 0);
      TerminalPramsManager__SendClearQuestToAdManager(v116, v123, v131);
    }
    else
    {
      v109 = resulta;
      v123 = 0;
    }
    v132 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v120, v121);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v132);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1208;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1208;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v116, v123, 3, 0);
    v136 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v133, v134);
      if ( !byte_596C1A2 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596C1A2 = 1;
      }
      v136 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v133, v134);
        v136 = TerminalPramsManager_TypeInfo;
      }
      v136->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !*(&v136->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v136, v133, v134);
    if ( !byte_596DB54 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB54 = 1;
    }
    v137 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v133, v134);
      v137 = TerminalPramsManager_TypeInfo;
    }
    if ( v137->static_fields->_QuestReleaseFocusQuestId_k__BackingField >= 1 )
    {
      if ( !*(&v137->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v137, v133, v134);
      if ( !byte_596DB54 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB54 = 1;
      }
      v138 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v133, v134);
        v138 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v138->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v134);
      TerminalPramsManager__SaveQuestReleasedFocusState(v139);
      if ( !byte_596D61D )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D61D = 1;
      }
      v137 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v133, v134);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v137->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
    }
    if ( !*(&v137->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v137, v133, v134);
    if ( !byte_596D8C9 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D8C9 = 1;
    }
    v140 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v133, v134);
      v140 = TerminalPramsManager_TypeInfo;
    }
    v141 = CondType_TypeInfo;
    v140->static_fields->_EventActionQuestId_k__BackingField = v116;
    if ( !*(&v141->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v141, v133, v134);
    v142 = CondType__IsOpenedSaveDeleteButton(0);
    TerminalPramsManager__SaveUserSaveDataDeleteButtonNonRelease(!v142, v143);
    v105 = TerminalPramsManager_TypeInfo;
  }
  else
  {
    v109 = resulta;
  }
  if ( !*(&v105->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v105, isWin, v100);
  if ( !byte_596D196 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D196 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v100);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
  {
    if ( !v104 )
      goto LABEL_1208;
    v144 = v104->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1208;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1208;
    v147 = WarMaster__getByLastQuestId((WarMaster_o *)result, v144, 0);
    if ( v147 )
    {
      v148 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v145, v146);
        v148 = BalanceConfig_TypeInfo;
      }
      v149 = System_Linq_Enumerable__Contains_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v148->static_fields->MainInterludeMapReturnWarIds,
               v147->fields.id,
               (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
      v150 = TerminalPramsManager_TypeInfo;
      if ( v149 )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v145, v146);
        if ( !byte_596D197 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596D197 = 1;
        }
        v150 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v145, v146);
          v150 = TerminalPramsManager_TypeInfo;
        }
        v147 = 0;
        v150->static_fields->_IsWarClear_k__BackingField = 0;
      }
    }
    else
    {
      v150 = TerminalPramsManager_TypeInfo;
    }
    if ( !*(&v150->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v150, v145, v146);
    if ( !byte_596D197 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D197 = 1;
    }
    v151 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v145, v146);
      v151 = TerminalPramsManager_TypeInfo;
    }
    v151->static_fields->_IsWarClear_k__BackingField = v147 != 0;
    v153 = TerminalPramsManager__CheckIsOrdealCallWarClear(v147, v145);
    v154 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
    if ( v153 )
    {
      if ( !v154 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v152);
      if ( !byte_596D198 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D198 = 1;
      }
      v155 = TerminalPramsManager_TypeInfo;
      v156 = 1;
    }
    else
    {
      if ( !v154 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v152);
      if ( !byte_596D198 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D198 = 1;
      }
      v155 = TerminalPramsManager_TypeInfo;
      v156 = 0;
    }
    if ( !*(&v155->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v155, isWin, v152);
      v155 = TerminalPramsManager_TypeInfo;
    }
    v157 = *(&v155->_2.cctor_finished + 1);
    v155->static_fields->_IsOrdealCallWarClear_k__BackingField = v156;
    if ( !v157 )
      j_il2cpp_runtime_class_init_0(v155, isWin, v152);
    if ( !byte_596D199 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D199 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v152);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v147 )
        goto LABEL_1208;
      if ( !WarEntity__IsEvent(v147, 0) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1208;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v147->fields.id, -1, 0, 0);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1208;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v144, -1, 0, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v158, v159);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v144, v158);
    if ( !byte_596D199 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D199 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v100);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v147 )
        goto LABEL_1208;
      HasFlag = WarEntity__HasFlag(v147, 128, 0);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v100);
        if ( !byte_596D60F )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596D60F = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v100);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v161 = (unsigned __int8)byte_596D31B;
        *((_BYTE *)&result->m_Items[19][1].fields.followerSupportDeckId + 5) = 1;
        if ( !v161 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_596D31B = 1;
        }
        if ( !HIDWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result, isWin, v100);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 1;
      }
    }
  }
  if ( !HIDWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result, isWin, v100);
  TerminalPramsManager__SetQuestRewardInfo(v109, 1, v100);
  if ( !LODWORD(v109->max_length) )
    goto LABEL_1209;
  v168 = v109->m_Items[0];
  if ( !v168 )
    goto LABEL_1208;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = v168->fields.panelEventPoint;
  static_fields->mResultEventPanelRewardInfos = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->mResultEventPanelRewardInfos,
    0,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  if ( !LODWORD(v109->max_length) )
    goto LABEL_1209;
  v176 = v109->m_Items[0];
  if ( !v176 )
    goto LABEL_1208;
  resultEventPanelRewardInfos = (MissionNaviTransitionBoardItem_c *)v176->fields.resultEventPanelRewardInfos;
  if ( resultEventPanelRewardInfos && resultEventPanelRewardInfos->_1.namespaze )
  {
    v178 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v170);
      v178 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (MissionNaviTransitionBoardItem_o *)&v178->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = resultEventPanelRewardInfos;
    sub_2213A04(
      p_mResultEventPanelRewardInfos,
      (int32_t)resultEventPanelRewardInfos,
      v170,
      v171,
      v172,
      v173,
      v174,
      v175);
  }
  v180 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v170);
    v180 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (MissionNaviTransitionBoardItem_o *)&v180->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0;
  sub_2213A04(p_eventConquestInfos, 0, v170, v171, v172, v173, v174, v175);
  v184 = DataManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !*(&v184->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v184, v182, v183);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !LODWORD(v109->max_length) )
    goto LABEL_1209;
  v185 = v109->m_Items[0];
  if ( !v185 || !result )
    goto LABEL_1208;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v735,
                                                       v185->fields.eventId,
                                                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !LODWORD(v109->max_length) )
    goto LABEL_1209;
  v192 = v109->m_Items[0];
  if ( !v192 )
    goto LABEL_1208;
  eventConquestInfos = (MissionNaviTransitionBoardItem_c *)v192->fields.eventConquestInfos;
  if ( eventConquestInfos && eventConquestInfos->_1.namespaze )
  {
    v194 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v186);
      v194 = TerminalPramsManager_TypeInfo;
    }
    v195 = (MissionNaviTransitionBoardItem_o *)&v194->static_fields->eventConquestInfos;
    v195->klass = eventConquestInfos;
    sub_2213A04(v195, (int32_t)eventConquestInfos, v186, v187, v188, v189, v190, v191);
    if ( v735 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v735, 0);
    else
      Farm = 0;
    v197 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v186);
      v197 = TerminalPramsManager_TypeInfo;
    }
    v197->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v735;
  if ( v735 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v735, 0);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v186);
      if ( !byte_596D196 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D196 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v186);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v198 = 1;
      }
      else
      {
        if ( !HIDWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result, isWin, v186);
        if ( !byte_596D193 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596D193 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v186);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v198 = BYTE6(result->m_Items[19]->fields.oldUserGame) != 0;
      }
      if ( !HIDWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result, isWin, v186);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.resultEventBoardGameTokenRewardInfos) = v198;
    }
  }
  if ( !LODWORD(v109->max_length) )
    goto LABEL_1209;
  v199 = v109->m_Items[0];
  if ( !v199 )
    goto LABEL_1208;
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( v199->fields.isEffectDisappearBanner )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v186);
    if ( !byte_596D62B )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D62B = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v186);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v200 = (unsigned __int8)byte_596D196;
    LOBYTE(result->m_Items[19][1].fields.battleId) = 1;
    if ( !v200 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_596D196 = 1;
    }
    if ( !HIDWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result, isWin, v186);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v104 )
        goto LABEL_1208;
      v201 = v104->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1208;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1208;
      v202 = WarMaster__getByLastQuestId((WarMaster_o *)result, v201, 0);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( v202 )
      {
        id = v202->fields.id;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v186);
        if ( !byte_596D62C )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596D62C = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v186);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        result->m_Items[19][1].fields.eventId = id;
      }
    }
  }
  if ( !HIDWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result, isWin, v186);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v204 = result->m_Items[19];
  v205 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  v204->fields.resultEventBoardGameTokenRewardInfos = (struct QuestRewardInfo_array *)-1LL;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance(v205);
  if ( !result )
    goto LABEL_1208;
  v206 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1208;
  v209 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v207, v208);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !LODWORD(v109->max_length) )
    goto LABEL_1209;
  v210 = v109->m_Items[0];
  if ( !v210 || !v209 )
    goto LABEL_1208;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v209,
          &v734,
          v210->fields.eventId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_578;
  result = (BattleResultComponent_resultData_array *)v734;
  if ( !v734 )
    goto LABEL_1208;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v734, 0);
  oldUserEventPoint = 0;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !LODWORD(resulta->max_length) )
      goto LABEL_1209;
    v224 = resulta->m_Items[0];
    if ( !v224 )
      goto LABEL_1208;
    oldUserEventPoint = (MissionNaviTransitionBoardItem_c *)v224->fields.oldUserEventPoint;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v217);
  if ( !byte_596DB55 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB55 = 1;
  }
  v225 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v217);
    v225 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v225->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = oldUserEventPoint;
  sub_2213A04(p_OldUserEventPoint_k__BackingField, (int32_t)oldUserEventPoint, v217, v218, v219, v220, v221, v222);
  if ( !LODWORD(resulta->max_length) )
    goto LABEL_1209;
  v227 = resulta->m_Items[0];
  if ( !v227 || !v206 )
    goto LABEL_1208;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v206,
                                                       v227->fields.eventId,
                                                       0);
  if ( (int)result >= 1 )
  {
    if ( !LODWORD(resulta->max_length) )
      goto LABEL_1209;
    v228 = resulta->m_Items[0];
    if ( !v228 )
      goto LABEL_1208;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v206,
                                                         v228->fields.eventId,
                                                         0);
    v737 = 0;
    if ( !result )
      goto LABEL_1208;
    v229 = result->max_length;
    v230 = result;
    if ( v229 < 1 )
      goto LABEL_578;
    v231 = 0;
    while ( 1 )
    {
      if ( v231 >= v229 )
        goto LABEL_1209;
      v232 = &v230->obj.klass + (int)v231;
      v233 = v232[4];
      if ( !v233 )
        goto LABEL_1208;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v232[4],
                                                           0);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !LODWORD(resulta->max_length) )
          goto LABEL_1209;
        v234 = resulta->m_Items[0];
        if ( !v234 )
          goto LABEL_1208;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v206,
                                 v234->fields.eventId,
                                 (int32_t)v233->_1.namespaze,
                                 0);
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v235);
        if ( !byte_596A92E )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596A92E = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v235);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1208;
          result = (BattleResultComponent_resultData_array *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)result,
                                                               RaidGroupDeadQuestId,
                                                               0,
                                                               0);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
        }
      }
      if ( !LODWORD(resulta->max_length) )
        goto LABEL_1209;
      v237 = resulta->m_Items[0];
      if ( !v237 )
        goto LABEL_1208;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           (EventRaidMaster_o *)v206,
                                                           v237->fields.eventId,
                                                           HIDWORD(v233->_1.name),
                                                           0);
      v733 = 0;
      if ( !result )
        goto LABEL_1208;
      v238 = result->max_length;
      v239 = result;
      if ( v238 >= 1 )
      {
        v240 = 0;
        while ( 1 )
        {
          if ( v240 >= v238 )
            goto LABEL_1209;
          v241 = *((_DWORD *)v239->m_Items + (int)v240);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
          if ( !byte_596A92E )
          {
            sub_2213A60(&TerminalPramsManager_TypeInfo);
            byte_596A92E = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v242 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v241 == v242->_QuestId_k__BackingField )
            break;
          v238 = v239->max_length;
          v240 = ++v733;
          if ( v733 >= v238 )
            goto LABEL_435;
        }
        name_high = HIDWORD(v233->_1.name);
        if ( !HIDWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result, isWin, v211);
          v242 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v242->clearBattleRaidId = name_high;
      }
LABEL_435:
      v229 = v230->max_length;
      v231 = ++v737;
      if ( v737 >= v229 )
        goto LABEL_578;
    }
    v256 = TerminalPramsManager_TypeInfo;
    v257 = HIDWORD(v233->_1.name);
    goto LABEL_493;
  }
  result = (BattleResultComponent_resultData_array *)v734;
  if ( !v734 )
    goto LABEL_1208;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v734,
                                                       0);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v734;
    if ( !v734 )
      goto LABEL_1208;
    if ( !EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)v734, 0) )
      goto LABEL_465;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isWin, v252);
    result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventUiMaster___);
    if ( !LODWORD(resulta->max_length) )
      goto LABEL_1209;
    v253 = resulta->m_Items[0];
    if ( !v253 || !result )
      goto LABEL_1208;
    result = (BattleResultComponent_resultData_array *)EventUiMaster__HasEntity(
                                                         (EventUiMaster_o *)result,
                                                         v253->fields.eventId,
                                                         0);
    if ( ((unsigned __int8)result & 1) == 0 )
    {
      if ( !LODWORD(resulta->max_length) )
        goto LABEL_1209;
      v276 = resulta->m_Items[0];
      if ( !v276 )
        goto LABEL_1208;
      eventActivityPointAddFlag = v276->fields.eventActivityPointAddFlag;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
      if ( !byte_596ABDC )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596ABDC = 1;
      }
      v278 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
        v278 = TerminalPramsManager_TypeInfo;
      }
      v278->static_fields->_EventActivityPointEffectState_k__BackingField = eventActivityPointAddFlag;
    }
    else
    {
LABEL_465:
      result = (BattleResultComponent_resultData_array *)v734;
      if ( !v734 )
        goto LABEL_1208;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v734, 0) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
        if ( !byte_596DB56 )
        {
          result = (BattleResultComponent_resultData_array *)sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596DB56 = 1;
        }
        v254 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
          v254 = TerminalPramsManager_TypeInfo;
        }
        if ( v254->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v255 = 0;
        }
        else
        {
          if ( !LODWORD(resulta->max_length) )
            goto LABEL_1209;
          v279 = resulta->m_Items[0];
          if ( !v279 )
            goto LABEL_1208;
          eventId = v279->fields.eventId;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, isWin, v211);
          IsUserEventStatus = CondType__IsUserEventStatus(eventId, 7, 0);
          v254 = TerminalPramsManager_TypeInfo;
          v255 = IsUserEventStatus;
        }
        if ( !*(&v254->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v254, isWin, v211);
        if ( !byte_596D8D1 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596D8D1 = 1;
        }
        v282 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
          v282 = TerminalPramsManager_TypeInfo;
        }
        v282->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v255;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v734;
        if ( !v734 )
          goto LABEL_1208;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v734, 0) )
          goto LABEL_496;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isWin, v258);
        v261 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v262 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v259, v260);
        v263 = sub_2909608(0, v262);
        result = (BattleResultComponent_resultData_array *)sub_2909718(0);
        if ( !v261 )
          goto LABEL_1208;
        if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)v261, &v732, v263, (_DWORD)result + 1, 0) )
        {
          result = (BattleResultComponent_resultData_array *)v732;
          if ( !v732 )
            goto LABEL_1208;
          v266 = QuestPhaseEntity__PlayHappinessCounterEffect(v732, 0);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v267 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v264, v265);
          sub_2A29C54(v266, 0, v267);
        }
        else
        {
LABEL_496:
          result = (BattleResultComponent_resultData_array *)v734;
          if ( !v734 )
            goto LABEL_1208;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v734,
                                                               0);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !LODWORD(resulta->max_length) )
              goto LABEL_1209;
            v271 = resulta->m_Items[0];
            if ( !v271 )
              goto LABEL_1208;
            v272 = v271->fields.oldUserEventPoint;
            if ( !v272 )
            {
LABEL_1211:
              v737 = 0;
              sub_2213CDC(result, isWin);
            }
            v273 = v272->max_length;
            if ( v273 < 1 )
            {
LABEL_508:
              v737 = v273 & ~(v273 >> 31);
            }
            else
            {
              v274 = 0;
              while ( 1 )
              {
                if ( v273 == v274 )
                {
                  v737 = v272->max_length;
                  sub_2213CE4(result);
                }
                if ( !v734 )
                  goto LABEL_1211;
                v275 = v272->m_Items[v274];
                if ( !v275 )
                {
                  v737 = v274;
                  sub_2213CDC(result, isWin);
                }
                if ( LODWORD(v734[1].klass) == v275->fields.eventId )
                  break;
                if ( (v273 & ~(v273 >> 31)) == ++v274 )
                  goto LABEL_508;
              }
              v737 = v274;
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v270 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v269);
              if ( !sub_2A29BB4(0, v270) )
              {
                v287 = (Il2CppObject *)sub_2213CCC(EventSaveData_TypeInfo);
                System_Object___ctor(v287, 0);
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v290 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v288, v289);
                sub_2A29AF0(v287, 0, v290);
              }
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v286 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v284, v285);
              result = (BattleResultComponent_resultData_array *)sub_2A29BB4(0, v286);
              if ( !result )
                goto LABEL_1208;
              LODWORD(result->bounds) = v275->fields.eventId;
              result = (BattleResultComponent_resultData_array *)sub_2A29BB4(0, v291);
              if ( !result )
                goto LABEL_1208;
              result = (BattleResultComponent_resultData_array *)result->max_length;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0)) != 0 )
              {
                v293 = result->max_length;
                v294 = (System_String_o **)&result->m_Items[1];
                v295 = (System_String_o **)&StringLiteral_1198/*"0"*/;
                if ( v293 <= 1 )
                  v294 = (System_String_o **)&StringLiteral_1198/*"0"*/;
                v296 = *v294;
                if ( v293 > 2 )
                  v295 = (System_String_o **)&result->m_Items[2];
                v297 = *v295;
                v298 = v293 <= 3 ? (System_String_o **)&StringLiteral_6925/*"False"*/ : (System_String_o **)&result->m_Items[3];
              }
              else
              {
                v297 = (System_String_o *)StringLiteral_1198/*"0"*/;
                v298 = (System_String_o **)&StringLiteral_6925/*"False"*/;
                v296 = (System_String_o *)StringLiteral_1198/*"0"*/;
              }
              if ( !v734 )
                goto LABEL_1208;
              v299 = *v298;
              klass = (int32_t)v734[1].klass;
              if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, isWin, v292);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   klass,
                                                                   0);
              v302 = (System_Collections_Generic_List_object__o *)result;
              v303 = TerminalPramsManager___c_TypeInfo;
              if ( !*(&TerminalPramsManager___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo, isWin, v301);
                v303 = TerminalPramsManager___c_TypeInfo;
              }
              v304 = v303->static_fields;
              _9__803_0 = (System_Predicate_object__o *)v304->__9__803_0;
              if ( !_9__803_0 )
              {
                v306 = v299;
                if ( !*(&v303->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v303, isWin, v301);
                  v304 = TerminalPramsManager___c_TypeInfo->static_fields;
                }
                v307 = (Il2CppObject *)v304->__9;
                _9__803_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__803_0,
                  v307,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__803_0__,
                  0);
                v308 = TerminalPramsManager___c_TypeInfo->static_fields;
                v308->__9__803_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__803_0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v308->__9__803_0,
                  (int32_t)_9__803_0,
                  v309,
                  v310,
                  v311,
                  v312,
                  v313,
                  v314);
                v299 = v306;
              }
              if ( !v302 )
                goto LABEL_1208;
              if ( System_Collections_Generic_List_object___Find(
                     v302,
                     (System_Predicate_T__o *)_9__803_0,
                     (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v317 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v315, v316);
                v733 = sub_2909608(0, v317);
                v296 = System_Int32__ToString((int32_t)&v733, 0);
              }
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v317 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v315, v316);
              v318 = sub_2A29BB4(0, v317);
              v321 = System_Int64__ToString((int64_t)&v275->fields.value, 0);
              if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v319, v320);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_46736808(
                                                                   v321,
                                                                   v296,
                                                                   v297,
                                                                   v299,
                                                                   0);
              if ( !v318 )
                goto LABEL_1208;
              *(_QWORD *)(v318 + 24) = result;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v318 + 24),
                (int32_t)result,
                v322,
                v323,
                v324,
                v325,
                v326,
                v327);
            }
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v270 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v269);
            v328 = sub_2909608(0, v270);
            v329 = sub_2909718(0);
            v331 = sub_29095B8(0, v330);
            v332 = sub_2A29C04(0);
            SubmarineSaveParamsManager__SaveClearQuestInfo(v328, v329, v331 & 1, v332 & 1, 0);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v734;
            if ( !v734 )
              goto LABEL_1208;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v734, 0) )
            {
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v283 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
              sub_2A29B54(1, 0, v283);
            }
          }
        }
      }
    }
    goto LABEL_578;
  }
  if ( !LODWORD(resulta->max_length) )
    goto LABEL_1209;
  v244 = resulta->m_Items[0];
  if ( !v244 )
    goto LABEL_1208;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       (EventRaidMaster_o *)v206,
                                                       v244->fields.eventId,
                                                       0);
  v737 = 0;
  if ( !result )
    goto LABEL_1208;
  v245 = result->max_length;
  v246 = result;
  if ( v245 >= 1 )
  {
    v247 = 0;
    while ( 1 )
    {
      if ( v247 >= v245 || !LODWORD(resulta->max_length) )
        goto LABEL_1209;
      v248 = resulta->m_Items[0];
      if ( !v248 )
        goto LABEL_1208;
      v249 = v246->m_Items[v247];
      if ( !v249 )
        goto LABEL_1208;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v206,
                          v248->fields.eventId,
                          v249->fields.eventId,
                          0);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
      if ( !byte_596A92E )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A92E = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v251 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v251->_QuestId_k__BackingField )
        break;
      v245 = v246->max_length;
      v247 = ++v737;
      if ( v737 >= v245 )
        goto LABEL_578;
    }
    v268 = v249->fields.eventId;
    if ( !HIDWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result, isWin, v211);
      v251 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v251->clearBattleRaidId = v268;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1208;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0) )
    {
      v256 = TerminalPramsManager_TypeInfo;
      v257 = v249->fields.eventId;
LABEL_493:
      if ( !*(&v256->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v256, isWin, v211);
        v256 = TerminalPramsManager_TypeInfo;
      }
      v256->static_fields->clearLastBattleRaidId = v257;
    }
  }
LABEL_578:
  v333 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
    v333 = TerminalPramsManager_TypeInfo;
  }
  if ( v333->static_fields->clearLastBattleRaidId >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isWin, v211);
    v335 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v334);
    if ( !byte_596A743 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A743 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v334);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v335 )
      goto LABEL_1208;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v335,
           &v731,
           HIDWORD(result->m_Items[19]->klass),
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
      if ( !*(&TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo, isWin, v211);
        result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
      }
      if ( !LODWORD(resulta->max_length) )
        goto LABEL_1209;
      v336 = resulta->m_Items[0];
      if ( !v336 )
        goto LABEL_1208;
      UnityEngine_PlayerPrefs__SetInt(result->m_Items[19]->fields.eventEndTitle, v336->fields.eventId, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
  if ( !byte_596D603 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D603 = 1;
  }
  v337 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
    v337 = TerminalPramsManager_TypeInfo;
  }
  v338 = (unsigned __int8)byte_596A92E;
  v337->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !v338 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v337 = TerminalPramsManager_TypeInfo;
    byte_596A92E = 1;
  }
  if ( !*(&v337->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v337, isWin, v211);
    v337 = TerminalPramsManager_TypeInfo;
  }
  if ( v337->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1208;
    v340 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v339);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v339);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v340 )
      goto LABEL_1208;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v340,
                                                         result->m_Items[19]->fields.eventId,
                                                         0);
    if ( !result )
      goto LABEL_1208;
    v341 = (int)result->m_Items[1];
    if ( !byte_596D603 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D603 = 1;
    }
    v337 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
      v337 = TerminalPramsManager_TypeInfo;
    }
    v337->static_fields->_IsWarBoardClear_k__BackingField = v341 == 7;
  }
  if ( !*(&v337->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v337, isWin, v211);
  if ( !byte_596D7B5 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D7B5 = 1;
  }
  v342 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v211);
    v342 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v342->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0;
  sub_2213A04(p_questClearCostumeRelease_k__BackingField, 0, v211, v212, v213, v214, v215, v216);
  if ( !LODWORD(resulta->max_length) )
    goto LABEL_1209;
  v350 = resulta->m_Items[0];
  if ( !v350 )
    goto LABEL_1208;
  costumeReleaseAnnounce = v350->fields.costumeReleaseAnnounce;
  if ( costumeReleaseAnnounce && costumeReleaseAnnounce->max_length )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v344);
    if ( !byte_596D5F2 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5F2 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v344);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !LOBYTE(result->m_Items[19]->fields.resultQuestPhaseRewardInfos) )
    {
      if ( !LODWORD(resulta->max_length) )
        goto LABEL_1209;
      v352 = resulta->m_Items[0];
      if ( !v352 )
        goto LABEL_1208;
      v353 = (MissionNaviTransitionBoardItem_c *)v352->fields.costumeReleaseAnnounce;
      if ( !HIDWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result, isWin, v344);
      if ( !byte_596D7B5 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D7B5 = 1;
      }
      v354 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v344);
        v354 = TerminalPramsManager_TypeInfo;
      }
      v355 = (MissionNaviTransitionBoardItem_o *)&v354->static_fields->_questClearCostumeRelease_k__BackingField;
      v355->klass = v353;
      sub_2213A04(v355, (int32_t)v353, v344, v345, v346, v347, v348, v349);
    }
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v344);
  if ( !byte_596D5FE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5FE = 1;
  }
  v356 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v344);
    v356 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v356->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0;
  sub_2213A04(p_questClearCostumeGet_k__BackingField, 0, v344, v345, v346, v347, v348, v349);
  if ( !LODWORD(resulta->max_length) )
    goto LABEL_1209;
  v364 = resulta->m_Items[0];
  if ( !v364 )
    goto LABEL_1208;
  costumeGetAnnounce = (MissionNaviTransitionBoardItem_c *)v364->fields.costumeGetAnnounce;
  if ( costumeGetAnnounce && costumeGetAnnounce->_1.namespaze )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v358);
    if ( !byte_596D5FE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5FE = 1;
    }
    v366 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v358);
      v366 = TerminalPramsManager_TypeInfo;
    }
    v367 = (MissionNaviTransitionBoardItem_o *)&v366->static_fields->_questClearCostumeGet_k__BackingField;
    v367->klass = costumeGetAnnounce;
    sub_2213A04(v367, (int32_t)costumeGetAnnounce, v358, v359, v360, v361, v362, v363);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v358);
  if ( !byte_596DB57 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB57 = 1;
  }
  v368 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v358);
    v368 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v368->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0;
  sub_2213A04(p_eventPointWinReward_k__BackingField, 0, v358, v359, v360, v361, v362, v363);
  if ( !byte_596DB58 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB58 = 1;
  }
  v376 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v370);
    v376 = TerminalPramsManager_TypeInfo;
  }
  v376->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v104 && v734 && HIDWORD(v734[9].klass) == 4 )
  {
    v377 = v104->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1208;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1208;
    v378 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v377, 4, 0);
    v382 = TerminalPramsManager_TypeInfo;
    v383 = GroupId;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v380, v381);
      v382 = TerminalPramsManager_TypeInfo;
    }
    v382->static_fields->joinGroupId = v383;
    v384 = QuestGroupMaster__GetGroupId(v378, v377, 3, 0);
    if ( !byte_596D196 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D196 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v370);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) && v384 >= 1 )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1208;
      v385 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1208;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !LODWORD(resulta->max_length) )
        goto LABEL_1209;
      v386 = resulta->m_Items[0];
      if ( !v386 || !result )
        goto LABEL_1208;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v384,
                                                           v386->fields.eventId,
                                                           0);
      v388 = (EventPointEntity_o *)result;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v387);
      if ( !v388 )
        goto LABEL_1208;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v388,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0);
      if ( !v385 )
        goto LABEL_1208;
      v389 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v385,
               v377,
               (unsigned __int8)result & 1,
               0);
      if ( !byte_596DB58 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB58 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v370);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v390 = (unsigned __int8)byte_596DB59;
      result->m_Items[19]->fields.followerStatus = v389;
      if ( !v390 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_596DB59 = 1;
      }
      if ( !HIDWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result, isWin, v370);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v391 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v391->_eventPointWinType_k__BackingField )
      {
        if ( !HIDWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result, isWin, v370);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v391 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v391->joinGroupId = -1;
      }
    }
    if ( !LODWORD(resulta->max_length) )
      goto LABEL_1209;
    v392 = resulta->m_Items[0];
    if ( !v392 )
      goto LABEL_1208;
    eventPointWinReward = v392->fields.eventPointWinReward;
    if ( eventPointWinReward )
    {
      v394 = eventPointWinReward->max_length;
      if ( v394 )
      {
        if ( !(_DWORD)v394 )
          goto LABEL_1209;
        v395 = (MissionNaviTransitionBoardItem_c *)eventPointWinReward->m_Items[0];
        if ( !HIDWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result, isWin, v370);
        if ( !byte_596DB57 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596DB57 = 1;
        }
        v396 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v370);
          v396 = TerminalPramsManager_TypeInfo;
        }
        v397 = (MissionNaviTransitionBoardItem_o *)&v396->static_fields->_eventPointWinReward_k__BackingField;
        v397->klass = v395;
        sub_2213A04(v397, (int32_t)v395, v370, v371, v372, v373, v374, v375);
      }
    }
  }
  if ( v104 && v734 )
  {
    v398 = TerminalPramsManager_TypeInfo;
    if ( HIDWORD(v734[9].klass) == 6 )
    {
      v399 = v104->fields.questId;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v370);
      if ( !byte_596DB5A )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB5A = 1;
      }
      v398 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v370);
        v398 = TerminalPramsManager_TypeInfo;
      }
      v398->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v399;
    }
  }
  else
  {
    v398 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v398->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v398, isWin, v370);
  v400 = resulta;
  if ( !byte_596D8CC )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8CC = 1;
  }
  v401 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v370);
    v401 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v401->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0;
  sub_2213A04(p_eventRaceBoost_k__BackingField, 0, v370, v371, v372, v373, v374, v375);
  v409 = resulta->max_length;
  if ( !v409 )
    goto LABEL_1209;
  v410 = resulta->m_Items[0];
  if ( !v410 )
    goto LABEL_1208;
  raceResult = v410->fields.raceResult;
  if ( raceResult && raceResult->fields.termId >= 1 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
    if ( !byte_596D8CC )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D8CC = 1;
    }
    v412 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
      v412 = TerminalPramsManager_TypeInfo;
    }
    v413 = (MissionNaviTransitionBoardItem_o *)&v412->static_fields->_eventRaceBoost_k__BackingField;
    v413->klass = (MissionNaviTransitionBoardItem_c *)raceResult;
    sub_2213A04(v413, (int32_t)raceResult, v403, v404, v405, v406, v407, v408);
    if ( !byte_596D8B1 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D8B1 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v414 = *(_QWORD *)&result->m_Items[19]->fields.followerSupportDeckId;
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_596A92E = 1;
    }
    if ( !HIDWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result, isWin, v403);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v414 )
      goto LABEL_1208;
    v409 = resulta->max_length;
    *(_DWORD *)(v414 + 28) = result->m_Items[19]->fields.eventId;
  }
  if ( !v409 )
    goto LABEL_1209;
  v415 = resulta->m_Items[0];
  if ( !v415 )
    goto LABEL_1208;
  eventTowerReward = v415->fields.eventTowerReward;
  if ( eventTowerReward )
  {
    v417 = eventTowerReward->max_length;
    if ( v417 )
    {
      if ( !(_DWORD)v417 )
        goto LABEL_1209;
      v418 = eventTowerReward->m_Items[0];
      if ( !v418 )
        goto LABEL_1208;
      if ( v418->fields.eventId >= 1 )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
        if ( !byte_596DB5B )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596DB5B = 1;
        }
        v419 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
          v419 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v419->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v418;
        sub_2213A04(p_eventTowerReward_k__BackingField, (int32_t)v418, v403, v404, v405, v406, v407, v408);
        if ( !LODWORD(resulta->max_length) )
          goto LABEL_1209;
        v427 = resulta->m_Items[0];
        if ( !v427 )
          goto LABEL_1208;
        resultEventTowerRewardInfos = (MissionNaviTransitionBoardItem_c *)v427->fields.resultEventTowerRewardInfos;
        if ( !byte_596DB5C )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596DB5C = 1;
        }
        v429 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v421);
          v429 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v429->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = resultEventTowerRewardInfos;
        sub_2213A04(
          p_resultEventTowerRewardInfo_k__BackingField,
          (int32_t)resultEventTowerRewardInfos,
          v421,
          v422,
          v423,
          v424,
          v425,
          v426);
        v409 = resulta->max_length;
      }
    }
  }
  if ( !v409 )
    goto LABEL_1209;
  v431 = resulta->m_Items[0];
  if ( !v431 )
    goto LABEL_1208;
  resultBoostItemRewardInfos = (MissionNaviTransitionBoardItem_c *)v431->fields.resultBoostItemRewardInfos;
  if ( resultBoostItemRewardInfos && resultBoostItemRewardInfos->_1.namespaze )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
    if ( !byte_596D5F8 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5F8 = 1;
    }
    v433 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
      v433 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v433->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = resultBoostItemRewardInfos;
    sub_2213A04(
      p_resultBoostItemRewardInfo_k__BackingField,
      (int32_t)resultBoostItemRewardInfos,
      v403,
      v404,
      v405,
      v406,
      v407,
      v408);
    v409 = resulta->max_length;
  }
  if ( !v409 )
    goto LABEL_1209;
  v435 = resulta->m_Items[0];
  if ( !v435 )
    goto LABEL_1208;
  resultEventBoardGameTokenRewardInfos = (MissionNaviTransitionBoardItem_c *)v435->fields.resultEventBoardGameTokenRewardInfos;
  if ( resultEventBoardGameTokenRewardInfos && resultEventBoardGameTokenRewardInfos->_1.namespaze )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
    if ( !byte_596D5F9 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5F9 = 1;
    }
    v437 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
      v437 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v437->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = resultEventBoardGameTokenRewardInfos;
    sub_2213A04(
      p_resultEventBoardGameTokenRewardInfo_k__BackingField,
      (int32_t)resultEventBoardGameTokenRewardInfos,
      v403,
      v404,
      v405,
      v406,
      v407,
      v408);
    v409 = resulta->max_length;
  }
  if ( !v409 )
    goto LABEL_1209;
  v439 = resulta->m_Items[0];
  if ( !v439 )
    goto LABEL_1208;
  warClearReward = (MissionNaviTransitionBoardItem_c *)v439->fields.warClearReward;
  if ( warClearReward && warClearReward->_1.namespaze )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
    if ( !byte_596D605 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D605 = 1;
    }
    v441 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
      v441 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v441->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = warClearReward;
    sub_2213A04(p_warClearReward_k__BackingField, (int32_t)warClearReward, v403, v404, v405, v406, v407, v408);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
  if ( !byte_596DB5D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB5D = 1;
  }
  v443 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v403);
    v443 = TerminalPramsManager_TypeInfo;
  }
  v444 = v443->static_fields;
  v444->_oldSuperBoss_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v444->_oldSuperBoss_k__BackingField,
    0,
    v403,
    v404,
    v405,
    v406,
    v407,
    v408);
  if ( !byte_596DB5E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB5E = 1;
  }
  v452 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v445, v446);
    v452 = TerminalPramsManager_TypeInfo;
  }
  v453 = v452->static_fields;
  v453->_oldPersonalBoss_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v453->_oldPersonalBoss_k__BackingField,
    0,
    v446,
    v447,
    v448,
    v449,
    v450,
    v451);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v454);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_1208;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, result->m_Items[19]->fields.eventId, 0);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1208;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0);
  if ( WarEntityByWarID )
    v460 = WarEntityByWarID->fields.eventId;
  else
    v460 = 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v458, v459);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1208;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v730,
                                                       v460,
                                                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v724 )
    goto LABEL_1216;
  if ( !LODWORD(resulta->max_length) )
    goto LABEL_1209;
  result = (BattleResultComponent_resultData_array *)resulta->m_Items[0];
  if ( !result )
    goto LABEL_1208;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1216:
    v467 = resulta->max_length;
    if ( !v467 )
      goto LABEL_1209;
    v468 = resulta->m_Items[0];
    if ( !v468 )
      goto LABEL_1208;
    if ( v468->fields.oldUserEventSuperBoss )
    {
      result = (BattleResultComponent_resultData_array *)v730;
      if ( v730
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v730,
                                                                 0),
            v467 = resulta->max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !LODWORD(resulta->max_length) )
          goto LABEL_1209;
        v469 = resulta->m_Items[0];
        if ( !v469 )
          goto LABEL_1208;
        oldUserEventSuperBoss = v469->fields.oldUserEventSuperBoss;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
        if ( !byte_596DB5E )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596DB5E = 1;
        }
        v471 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
          v471 = TerminalPramsManager_TypeInfo;
        }
        v472 = v471->static_fields;
        v472->_oldPersonalBoss_k__BackingField = oldUserEventSuperBoss;
        p_oldPersonalBoss_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v472->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !v467 )
          goto LABEL_1209;
        v474 = resulta->m_Items[0];
        if ( !v474 )
          goto LABEL_1208;
        oldUserEventSuperBoss = v474->fields.oldUserEventSuperBoss;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
        if ( !byte_596DB5D )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596DB5D = 1;
        }
        v475 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
          v475 = TerminalPramsManager_TypeInfo;
        }
        v476 = v475->static_fields;
        v476->_oldSuperBoss_k__BackingField = oldUserEventSuperBoss;
        p_oldPersonalBoss_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v476->_oldSuperBoss_k__BackingField;
      }
      sub_2213A04(p_oldPersonalBoss_k__BackingField, (int32_t)oldUserEventSuperBoss, v461, v462, v463, v464, v465, v466);
    }
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
  if ( !byte_596DB5F )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB5F = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.resultBoostItemRewardInfos )
    goto LABEL_1217;
  if ( !HIDWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result, isWin, v461);
  if ( !byte_596DB5F )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB5F = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v477 = result->m_Items[19]->fields.resultBoostItemRewardInfos;
  if ( !v477 )
    goto LABEL_1208;
  if ( v477->max_length )
  {
    v478 = 1;
  }
  else
  {
LABEL_1217:
    if ( !HIDWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result, isWin, v461);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v479 = BalanceConfig_TypeInfo;
    v480 = result->m_Items[19]->fields.eventId;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWin, v461);
      v479 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v478 = v480 == v479->static_fields->OrtFirstQuestId;
  }
  if ( !HIDWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result, isWin, v461);
  if ( !byte_596D614 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D614 = 1;
  }
  v481 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
    v481 = TerminalPramsManager_TypeInfo;
  }
  v482 = v481->static_fields;
  v483 = v730;
  v482->_isIncomingCall_k__BackingField = v478;
  if ( v483 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v483, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    v484 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
      v484 = TerminalPramsManager_TypeInfo;
    }
    v485 = BalanceConfig_TypeInfo;
    QuestId_k__BackingField = v484->static_fields->_QuestId_k__BackingField;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWin, v461);
      v485 = BalanceConfig_TypeInfo;
    }
    if ( QuestId_k__BackingField == v485->static_fields->OrtLateQuestId )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
      if ( !byte_596A92D )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A92D = 1;
      }
      v487 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
        v487 = TerminalPramsManager_TypeInfo;
      }
      v488 = BalanceConfig_TypeInfo;
      PhaseCnt_k__BackingField = v487->static_fields->_PhaseCnt_k__BackingField;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWin, v461);
        v488 = BalanceConfig_TypeInfo;
      }
      if ( PhaseCnt_k__BackingField + 1 == v488->static_fields->OrtLatePhaseBreak )
        goto LABEL_1218;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
      if ( !byte_596A92D )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A92D = 1;
      }
      v490 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v461);
        v490 = TerminalPramsManager_TypeInfo;
      }
      v491 = BalanceConfig_TypeInfo;
      v492 = v490->static_fields->_PhaseCnt_k__BackingField;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWin, v461);
        v491 = BalanceConfig_TypeInfo;
      }
      if ( v492 + 1 == v491->static_fields->OrtLatePhaseDead )
      {
LABEL_1218:
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isWin, v461);
        v494 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isWin, v493);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isWin, v493);
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        }
        v495 = result->m_Items[19]->fields.myDeck;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isWin, v493);
        if ( !v494 )
          goto LABEL_1208;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v494,
               &v729,
               (int64_t)v495,
               v460,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0) )
        {
          result = (BattleResultComponent_resultData_array *)sub_2213B20(UserSuperBossEntity___TypeInfo, 1);
          if ( !result )
            goto LABEL_1208;
          v502 = v729;
          v503 = result;
          if ( v729 )
          {
            result = (BattleResultComponent_resultData_array *)sub_2213BB4(v729, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1210:
              v723 = sub_2213D00(result, v33);
              sub_2213BA0(v723, 0);
            }
          }
          if ( !LODWORD(v503->max_length) )
            goto LABEL_1209;
          v503->m_Items[0] = (BattleResultComponent_resultData_o *)v502;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)v503->m_Items,
            (int32_t)v502,
            v496,
            v497,
            v498,
            v499,
            v500,
            v501);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v504, v505);
          if ( !byte_596DB5E )
          {
            sub_2213A60(&TerminalPramsManager_TypeInfo);
            byte_596DB5E = 1;
          }
          v511 = TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v504, v505);
            v511 = TerminalPramsManager_TypeInfo;
          }
          v512 = v511->static_fields;
          v512->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v503;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v512->_oldPersonalBoss_k__BackingField,
            (int32_t)v503,
            v505,
            v506,
            v507,
            v508,
            v509,
            v510);
        }
      }
    }
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, isWin, v461);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0);
  if ( TalkResumeInfo )
  {
    v514 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1208;
    v516 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v515);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v515);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v516 )
      goto LABEL_1208;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v516, result->m_Items[19]->fields.eventId, 0);
    v520 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_596A92D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92D = 1;
    }
    v521 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v518, v519);
      v521 = TerminalPramsManager_TypeInfo;
    }
    v522 = v521->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v514, 0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v523, v524);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v522 + 1,
                                                         winResult,
                                                         0);
    if ( !v520 )
      goto LABEL_1208;
    v400 = resulta;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v520, (System_String_o *)result, 0) )
      goto LABEL_972;
    v535 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v533, v534);
    if ( !byte_596A92D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92D = 1;
    }
    v536 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v533, v534);
      v536 = TerminalPramsManager_TypeInfo;
    }
    v537 = v536->static_fields->_PhaseCnt_k__BackingField;
    v540 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v514, 0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v538, v539);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v537 + 1,
                                                         v540,
                                                         0);
    if ( !v535 )
      goto LABEL_1208;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v535, (System_String_o *)result, 0) )
    {
LABEL_972:
      v541 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v526, v527);
        v541 = TerminalPramsManager_TypeInfo;
      }
      v542 = (int)StringLiteral_1/*""*/;
      p_lastPlayBgmName = (MissionNaviTransitionBoardItem_o *)&v541->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
      sub_2213A04(p_lastPlayBgmName, v542, v527, v528, v529, v530, v531, v532);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v544);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1208;
  v546 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v545);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v545);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v547 = result->m_Items[19]->fields.eventId;
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !HIDWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result, isWin, v545);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v546 )
    goto LABEL_1208;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v546,
    &v738,
    v547,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0);
  if ( !byte_596DB60 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB60 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v548);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( result->m_Items[19]->fields.eventTowerReward )
  {
    if ( !HIDWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result, isWin, v548);
    if ( !byte_596DB60 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB60 = 1;
    }
    v554 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v548);
      v554 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v554->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1208;
    result->max_length = 0;
    p_max_length = &result->max_length;
    *(p_max_length - 1) = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_max_length, 0, v548, v549, v550, v551, v552, v553);
  }
  if ( !LODWORD(v400->max_length) )
    goto LABEL_1209;
  v556 = v400->m_Items[0];
  if ( !v556 )
    goto LABEL_1208;
  v557 = v556->fields.eventId;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v548);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v558 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v548);
    v558 = TerminalPramsManager_TypeInfo;
  }
  v559 = v558->static_fields->_QuestId_k__BackingField;
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v558 = TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !*(&v558->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v558, isWin, v548);
    v558 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v546,
                         v557,
                         v559,
                         v558->static_fields->_PhaseCnt_k__BackingField + 1,
                         0);
  if ( !byte_596DB3E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB3E = 1;
  }
  v568 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v560, v561);
    v568 = TerminalPramsManager_TypeInfo;
  }
  v569 = v568->static_fields;
  v569->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v569->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)SpecifiedSceneInfo,
    v561,
    v562,
    v563,
    v564,
    v565,
    v566);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v570);
  if ( !LODWORD(v400->max_length) )
    goto LABEL_1209;
  v577 = v400->m_Items[0];
  if ( !v577 )
    goto LABEL_1208;
  eventMuralId = v577->fields.eventMuralId;
  v579 = TerminalPramsManager_TypeInfo;
  if ( eventMuralId )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v571);
    if ( !byte_596D5F3 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5F3 = 1;
    }
    v579 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v571);
      v579 = TerminalPramsManager_TypeInfo;
    }
    v579->static_fields->_EventMuralId_k__BackingField = eventMuralId;
  }
  if ( !*(&v579->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v579, isWin, v571);
    v579 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (MissionNaviTransitionBoardItem_o *)&v579->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0;
  sub_2213A04(p_eventHarvestGrowthInfo, 0, v571, v572, v573, v574, v575, v576);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v583 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v581, v582);
    v583 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v546,
                                                       v583->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0);
  if ( !result )
    goto LABEL_1208;
  v584 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_20880/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0);
  v586 = QuestPhaseEntity__getScriptIntParam((QuestPhaseEntity_o *)v584, (System_String_o *)StringLiteral_20879/*"harvestGrowthAfterQuestId"*/, -1, 0);
  if ( ScriptIntParam >= 1 )
  {
    v587 = v586;
    if ( v586 >= 1 )
    {
      v588 = sub_2213CCC(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v588, 0);
      if ( !v588 )
        goto LABEL_1208;
      bounds = v584->bounds;
      v596 = TerminalPramsManager_TypeInfo;
      *(_DWORD *)(v588 + 24) = ScriptIntParam;
      *(_DWORD *)(v588 + 28) = v587;
      *(_QWORD *)(v588 + 16) = bounds;
      if ( !*(&v596->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v596, isWin, v589);
        v596 = TerminalPramsManager_TypeInfo;
      }
      v597 = (MissionNaviTransitionBoardItem_o *)&v596->static_fields->eventHarvestGrowthInfo;
      v597->klass = (MissionNaviTransitionBoardItem_c *)v588;
      sub_2213A04(v597, v588, v589, v590, v591, v592, v593, v594);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1208;
  v599 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v598);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v598);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v599 )
    goto LABEL_1208;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v599, result->m_Items[19]->fields.eventId, 0);
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( QuestEntity )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v600);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    v602 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v600);
      v602 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v546,
           v602->static_fields->_QuestId_k__BackingField,
           0) )
    {
      SpotId = QuestEntity__getSpotId(QuestEntity, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v603, v604);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( !LODWORD(v400->max_length) )
        goto LABEL_1209;
      v606 = v400->m_Items[0];
      if ( !v606 || !result )
        goto LABEL_1208;
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                             (UserEventCooltimeRewardMaster_o *)result,
                             v606->fields.eventId,
                             SpotId,
                             0);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( CurrentLevelEntity )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v600);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = result->m_Items[19][1].fields.resultBoostItemRewardInfos;
        if ( eventAreaImproveResultInfo )
        {
          if ( !HIDWORD(result->m_Items[24]) )
          {
            j_il2cpp_runtime_class_init_0(result, isWin, v600);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1208;
          }
          eventAreaImproveResultInfo[7] = CurrentLevelEntity->fields.lv;
        }
      }
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
  }
  if ( !HIDWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result, isWin, v600);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v609 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v600);
    v609 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__SaveLastClearedGrandWar(v609->static_fields->_WarId_k__BackingField, (const MethodInfo *)isWin);
  if ( !byte_596AEFD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEFD = 1;
  }
  v616 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v610);
    v616 = TerminalPramsManager_TypeInfo;
  }
  if ( v616->static_fields->_IsAutoExRoom_k__BackingField )
  {
    if ( !*(&v616->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v616, isWin, v610);
    if ( !byte_596D196 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D196 = 1;
    }
    v617 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v610);
      v617 = TerminalPramsManager_TypeInfo;
    }
    if ( v617->static_fields->_IsQuestClear_k__BackingField )
    {
      IsPhaseClear_k__BackingField = 1;
    }
    else
    {
      if ( !*(&v617->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v617, isWin, v610);
      if ( !byte_596D193 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D193 = 1;
      }
      v617 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v610);
        v617 = TerminalPramsManager_TypeInfo;
      }
      IsPhaseClear_k__BackingField = v617->static_fields->_IsPhaseClear_k__BackingField;
    }
    if ( !*(&v617->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v617, isWin, v610);
    if ( !byte_596D601 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D601 = 1;
    }
    v619 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v610);
      v619 = TerminalPramsManager_TypeInfo;
    }
    v620 = (unsigned __int8)byte_596AEFE;
    v619->static_fields->_IsAutoExRoomWin_k__BackingField = IsPhaseClear_k__BackingField;
    if ( !v620 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v619 = TerminalPramsManager_TypeInfo;
      byte_596AEFE = 1;
    }
    if ( !*(&v619->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v619, isWin, v610);
      v619 = TerminalPramsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_11961/*"SAVEKEY_IsAutoExRoomWin"*/,
      v619->static_fields->_IsAutoExRoomWin_k__BackingField,
      0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v621, v622);
    if ( !byte_596AEFE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEFE = 1;
    }
    v623 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v621, v622);
      v623 = TerminalPramsManager_TypeInfo;
    }
    if ( v623->static_fields->_IsAutoExRoomWin_k__BackingField )
    {
      if ( !*(&v623->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v623, v621, v622);
      if ( !byte_596AEFF )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596AEFF = 1;
      }
      v624 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v621, v622);
        v624 = TerminalPramsManager_TypeInfo;
      }
      if ( v624->static_fields->_AutoExRoomType_k__BackingField == 2 )
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_6552/*"ExRoom_QuestWinShowStarted"*/, 1, 0);
    }
    UnityEngine_PlayerPrefs__Save(0);
  }
  result = (BattleResultComponent_resultData_array *)v738;
  if ( v738 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v738, 0);
    if ( !result )
      goto LABEL_1208;
    if ( result->max_length )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v610);
      if ( !byte_596A92E )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A92E = 1;
      }
      v625 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v610);
        v625 = TerminalPramsManager_TypeInfo;
      }
      v737 = v625->static_fields->_QuestId_k__BackingField;
      v628 = System_Int32__ToString((int32_t)&v737, 0);
      if ( !byte_596A92D )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A92D = 1;
      }
      v629 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v626, v627);
        v629 = TerminalPramsManager_TypeInfo;
      }
      v737 = v629->static_fields->_PhaseCnt_k__BackingField + 1;
      v630 = System_Int32__ToString((int32_t)&v737, 0);
      v638 = System_String__Concat_75694928(v628, (System_String_o *)StringLiteral_869/*","*/, v630, 0);
      if ( !byte_596D8CB )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D8CB = 1;
      }
      v639 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v631, v632);
        v639 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v639->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v638;
      sub_2213A04(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v638, v632, v633, v634, v635, v636, v637);
    }
  }
  if ( !LODWORD(v400->max_length) )
    goto LABEL_1209;
  v641 = v400->m_Items[0];
  if ( !v641 )
    goto LABEL_1208;
  limitImageAnnounces = (MissionNaviTransitionBoardItem_c *)v641->fields.limitImageAnnounces;
  if ( limitImageAnnounces && limitImageAnnounces->_1.namespaze )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v610);
    if ( !byte_596D5FC )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5FC = 1;
    }
    v643 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isWin, v610);
      v643 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v643->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = limitImageAnnounces;
    sub_2213A04(p_limitImageAnnounces_k__BackingField, (int32_t)limitImageAnnounces, v610, v611, v612, v613, v614, v615);
  }
  v647 = sub_2213B20(string___TypeInfo, 7);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v645, v646);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v648 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v645, v646);
    v648 = TerminalPramsManager_TypeInfo;
  }
  v737 = v648->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v737, 0);
  if ( !v647 )
LABEL_1208:
    sub_2213CDC(result, isWin);
  if ( !*(_DWORD *)(v647 + 24) )
    goto LABEL_1209;
  *(_QWORD *)(v647 + 32) = result;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v647 + 32), (int32_t)result, v649, v650, v651, v652, v653, v654);
  if ( (*(_DWORD *)(v647 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_1209;
  v661 = StringLiteral_869/*","*/;
  *(_QWORD *)(v647 + 40) = StringLiteral_869/*","*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v647 + 40), v661, v655, v656, v657, v658, v659, v660);
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92D = 1;
  }
  v664 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v662, v663);
    v664 = TerminalPramsManager_TypeInfo;
  }
  v737 = v664->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v737, 0);
  if ( *(_DWORD *)(v647 + 24) <= 2u )
    goto LABEL_1209;
  *(_QWORD *)(v647 + 48) = result;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v647 + 48), (int32_t)result, v665, v666, v667, v668, v669, v670);
  if ( (*(_DWORD *)(v647 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_1209;
  v677 = StringLiteral_869/*","*/;
  *(_QWORD *)(v647 + 56) = StringLiteral_869/*","*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v647 + 56), v677, v671, v672, v673, v674, v675, v676);
  if ( !byte_596D196 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D196 = 1;
  }
  v680 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v678, v679);
    v680 = TerminalPramsManager_TypeInfo;
  }
  v681 = *(_DWORD *)(qword_5984328 + 228);
  v728[0] = v680->static_fields->_IsQuestClear_k__BackingField;
  if ( !v681 )
    j_il2cpp_runtime_class_init_0(qword_5984328, v678, v679);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v728, 0);
  if ( *(_DWORD *)(v647 + 24) <= 4u )
    goto LABEL_1209;
  *(_QWORD *)(v647 + 64) = result;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v647 + 64), (int32_t)result, v682, v683, v684, v685, v686, v687);
  if ( *(_DWORD *)(v647 + 24) <= 5u )
    goto LABEL_1209;
  v694 = StringLiteral_869/*","*/;
  *(_QWORD *)(v647 + 72) = StringLiteral_869/*","*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v647 + 72), v694, v688, v689, v690, v691, v692, v693);
  if ( !byte_596D193 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D193 = 1;
  }
  v697 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v695, v696);
    v697 = TerminalPramsManager_TypeInfo;
  }
  v728[0] = v697->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v728, 0);
  if ( *(_DWORD *)(v647 + 24) <= 6u )
    goto LABEL_1209;
  *(_QWORD *)(v647 + 80) = result;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v647 + 80), (int32_t)result, v698, v699, v700, v701, v702, v703);
  v704 = System_String__Concat_75697120((System_String_array *)v647, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_17409/*"afterActionBk"*/, v704, 0);
  TerminalPramsManager__SaveClearDatas(v400, v705);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v706);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v707);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v708);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v709);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v710);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v713 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v711, v712);
    v713 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v713->static_fields->_WarId_k__BackingField;
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v713 = TerminalPramsManager_TypeInfo;
    byte_596A92E = 1;
  }
  if ( !*(&v713->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v713, v711, v712);
    v713 = TerminalPramsManager_TypeInfo;
  }
  v715 = v713->static_fields->_QuestId_k__BackingField;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v711, v712);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(WarId_k__BackingField, v715, 0, 0);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v716) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v717, v718);
    if ( !byte_596AEFA )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEFA = 1;
    }
    v719 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v717, v718);
      v719 = TerminalPramsManager_TypeInfo;
    }
    v720 = (unsigned __int8)byte_596ABDE;
    v719->static_fields->_WarId_k__BackingField = 0;
    if ( !v720 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v719 = TerminalPramsManager_TypeInfo;
      byte_596ABDE = 1;
    }
    if ( !*(&v719->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v719, v717, v718);
      v719 = TerminalPramsManager_TypeInfo;
    }
    v721 = (unsigned __int8)byte_596D5E4;
    v719->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !v721 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v719 = TerminalPramsManager_TypeInfo;
      byte_596D5E4 = 1;
    }
    if ( !*(&v719->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v719, v717, v718);
      v719 = TerminalPramsManager_TypeInfo;
    }
    v722 = (unsigned __int8)byte_596D8BE;
    v719->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !v722 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v719 = TerminalPramsManager_TypeInfo;
      byte_596D8BE = 1;
    }
    if ( !*(&v719->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v719, v717, v718);
      v719 = TerminalPramsManager_TypeInfo;
    }
    v719->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v719);
  }
}


void TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  const MethodInfo *v3; // x0

  if ( (byte_596DAB1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAB1 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596CDEF )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDEF = 1;
  }
  v3 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_DWORD *)v3[2].virtualMethodPointer + 133) = 0;
  TerminalPramsManager__BlankEarthSpotId_SaveData(v3);
}


void TerminalPramsManager__ResetExRoomTransitionInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  int v4; // w9
  int v5; // w9

  if ( (byte_596DB1F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB1F = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596AF01 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AF01 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v4 = (unsigned __int8)byte_596AEFB;
  v3->static_fields->_IsAutoOpenMasterMissionOnExRoomQuest_k__BackingField = 0;
  if ( !v4 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596AEFB = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v5 = (unsigned __int8)byte_596AEFC;
  v3->static_fields->_IsAutoExRoom_k__BackingField = 0;
  if ( !v5 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596AEFC = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_AutoExRoomType_k__BackingField = 0;
  TerminalPramsManager__SaveExRoomTransitionInfo((const MethodInfo *)v3);
}


void TerminalPramsManager__ResetPlanetEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  const MethodInfo *v3; // x0

  if ( (byte_596DAB2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAB2 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596CDEE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDEE = 1;
  }
  v3 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_DWORD *)v3[2].virtualMethodPointer + 140) = 0;
  TerminalPramsManager__PlanetEarthSpotId_SaveData(v3);
}


void TerminalPramsManager__ResetResumeScriptWithMap(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v8; // x0
  int v9; // w9
  int v10; // w9
  MissionNaviTransitionBoardItem_o *p_TalkScriptInfo_k__BackingField; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  TerminalPramsManager_c *v14; // x0

  if ( (byte_596DABF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DABF = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB30 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB30 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = (unsigned __int8)byte_596DB31;
  v8->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !v9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596DB31 = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v10 = (unsigned __int8)byte_596D62A;
  v8->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !v10 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596D62A = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v8->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0;
  sub_2213A04(p_TalkScriptInfo_k__BackingField, 0, v2, v3, v4, v5, v6, v7);
  if ( !byte_596DB32 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB32 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12, v13);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
}


void TerminalPramsManager__SaveClearDatas(BattleResultComponent_resultData_array *result, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  QuestRewardInfo_array *UseAddRewardItemRewardInfos_k__BackingField; // x20
  BattleResultComponent_resultData_o *v7; // x0
  bool v8; // w8
  TerminalPramsManager_c *v9; // x0
  bool IsUsePopupQuestReward; // w8
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  _BOOL4 IsQuestClear_k__BackingField; // w24
  struct TerminalPramsManager_StaticFields *v13; // x8
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v15; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  LimitImageAnnounce_array *limitImageAnnounces; // x21
  _BOOL4 IsOrdealCallWarClear_k__BackingField; // w26
  int32_t eventMuralId; // w28
  bool isWarBoardClear; // w20
  bool dispOnly; // w23
  bool v22; // zf
  int32_t eventActionQuestId; // w24
  bool v24; // w27
  TerminalPramsManager_ClearData_o *v25; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  TerminalPramsManager_c *v28; // x8
  TerminalPramsManager_ClearData_c *v29; // x0
  int v30; // w9
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v32; // x1
  int32_t panelEventPoint; // [xsp+C4h] [xbp-FCh]
  BattleDropItem_array *mResultEventPanelRewardInfos; // [xsp+C8h] [xbp-F8h]
  BattleDropItem_array *questResultAfterEventRewardInfos; // [xsp+D0h] [xbp-F0h]
  int32_t eventActivityPointEffectState; // [xsp+DCh] [xbp-E4h]
  WarClearReward_array *warClearRewardIn; // [xsp+E0h] [xbp-E0h]
  QuestRewardInfo_array *resultEventTowerRewardInfo_k__BackingField; // [xsp+E8h] [xbp-D8h]
  EventTowerReward_o *evTowerReward; // [xsp+F0h] [xbp-D0h]
  CostumeReleaseAnnounce_array *questClearCostumeGet_k__BackingField; // [xsp+F8h] [xbp-C8h]
  CostumeReleaseAnnounce_array *questClearCostumeRelease; // [xsp+100h] [xbp-C0h]
  EventRaceBoostInfo_o *evRace; // [xsp+108h] [xbp-B8h]
  int32_t evpWinType; // [xsp+114h] [xbp-ACh]
  EventPointWinReward_o *eventPointWinReward_k__BackingField; // [xsp+118h] [xbp-A8h]
  UserSuperBossEntity_array *oldPersonalBoss; // [xsp+120h] [xbp-A0h]
  UserSuperBossEntity_array *oldSuperBoss; // [xsp+128h] [xbp-98h]
  _BOOL4 IsPhaseClear_k__BackingField; // [xsp+130h] [xbp-90h]
  int32_t groupjoin; // [xsp+134h] [xbp-8Ch]
  int32_t raidId; // [xsp+138h] [xbp-88h]
  int32_t lastRaidId; // [xsp+13Ch] [xbp-84h]
  QuestClearHeroineInfo_o *mQuestClearHeroineInfo; // [xsp+140h] [xbp-80h]
  QuestRewardInfo_array *mQuestPhaseRewardInfos; // [xsp+148h] [xbp-78h]
  QuestRewardInfo_array *useAddRewardItemRewardInfos; // [xsp+150h] [xbp-70h]

  if ( (byte_596DB08 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_ClearData_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB08 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v4->static_fields->mQuestRewardInfos;
  if ( !byte_596A92F )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596A92F = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UseAddRewardItemRewardInfos_k__BackingField = v4->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  if ( result )
  {
    if ( !LODWORD(result->max_length) )
      sub_2213CE4(v4);
    v7 = result->m_Items[0];
    if ( !v7 )
      sub_2213CDC(0, method);
    v8 = BattleResultComponent_resultData__checkResultDispFlag(v7, 2048, 0);
    v4 = TerminalPramsManager_TypeInfo;
    if ( v8 )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      if ( !byte_596A92E )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A92E = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
        v9 = TerminalPramsManager_TypeInfo;
      }
      IsUsePopupQuestReward = TerminalPramsManager__IsUsePopupQuestReward(
                                v9->static_fields->_QuestId_k__BackingField,
                                method);
      v4 = TerminalPramsManager_TypeInfo;
      UseAddRewardItemRewardInfos_k__BackingField = 0;
      if ( IsUsePopupQuestReward )
        mQuestRewardInfos = 0;
    }
  }
  useAddRewardItemRewardInfos = UseAddRewardItemRewardInfos_k__BackingField;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_596D196 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D196 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v4->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_596D193 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D193 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v13 = v4->static_fields;
  IsPhaseClear_k__BackingField = v13->_IsPhaseClear_k__BackingField;
  lastRaidId = v13->clearLastBattleRaidId;
  raidId = v13->clearBattleRaidId;
  groupjoin = v13->joinGroupId;
  if ( !byte_596DB61 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596DB61 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v4->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_596DB5F )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596DB5F = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v4->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_596DB62 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596DB62 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v4->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_596DB59 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596DB59 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v4->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_596D8B1 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D8B1 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  evRace = v4->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_596D5FA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D5FA = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v4->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_596D5F1 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D5F1 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v4->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_596D5F6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D5F6 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v4->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_596DB63 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596DB63 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v4->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_596C19E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596C19E = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v4->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_596D604 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D604 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v4->static_fields->_warClearReward_k__BackingField;
  if ( !byte_596DB64 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596DB64 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v4->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_596D5F2 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D5F2 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v15 = v4->static_fields;
  IsWarBoardClear_k__BackingField = v15->_IsWarBoardClear_k__BackingField;
  mResultEventPanelRewardInfos = v15->mResultEventPanelRewardInfos;
  questResultAfterEventRewardInfos = v15->mQuestResultAfterEventRewardInfos;
  panelEventPoint = v15->panelEventPoint;
  if ( !byte_596D5FB )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D5FB = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v4->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_596CDF6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596CDF6 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v4->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_596ABE0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596ABE0 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  eventMuralId = v4->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_596D8C1 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D8C1 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  dispOnly = IsDispOnly_k__BackingField;
  v22 = !IsQuestClear_k__BackingField;
  eventActionQuestId = v4->static_fields->_EventActionQuestId_k__BackingField;
  v24 = !v22;
  v25 = (TerminalPramsManager_ClearData_o *)sub_2213CCC(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_44212888(
    v25,
    mQuestClearHeroineInfo,
    mQuestRewardInfos,
    mQuestPhaseRewardInfos,
    v24,
    IsPhaseClear_k__BackingField,
    lastRaidId,
    raidId,
    groupjoin,
    oldSuperBoss,
    oldPersonalBoss,
    eventPointWinReward_k__BackingField,
    evpWinType,
    evRace,
    questClearCostumeRelease,
    questClearCostumeGet_k__BackingField,
    evTowerReward,
    resultEventTowerRewardInfo_k__BackingField,
    dispOnly,
    warClearRewardIn,
    eventActivityPointEffectState,
    isWarBoardClear,
    questResultAfterEventRewardInfos,
    mResultEventPanelRewardInfos,
    panelEventPoint,
    limitImageAnnounces,
    IsOrdealCallWarClear_k__BackingField,
    eventMuralId,
    eventActionQuestId,
    useAddRewardItemRewardInfos,
    0);
  if ( !byte_596DB65 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB65 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26, v27);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v29 = TerminalPramsManager_ClearData_TypeInfo;
  v30 = *(&TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished + 1);
  v28->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  if ( !v30 )
  {
    j_il2cpp_runtime_class_init_0(v29, v26, v27);
    v29 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v29->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v26, v27);
  v32 = JsonManager__toJson((Il2CppObject *)v25, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v32, 0);
}


void TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v5; // x0

  if ( (byte_596DB0F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11959/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_596DB0F = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB67 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB67 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_2213CDC(0, v1);
  v5 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11959/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v5, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveExRoomTransitionInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0

  if ( (byte_596DB20 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11951/*"SAVEKEY_AutoExRoomType"*/);
    sub_2213A60(&StringLiteral_11960/*"SAVEKEY_IsAutoExRoom"*/);
    byte_596DB20 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596AEFD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEFD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11960/*"SAVEKEY_IsAutoExRoom"*/,
    v3->static_fields->_IsAutoExRoom_k__BackingField,
    0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
  if ( !byte_596AEFF )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEFF = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11951/*"SAVEKEY_AutoExRoomType"*/,
    v6->static_fields->_AutoExRoomType_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveIsPart2FinalChapter(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DB1D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_8406/*"IsPart2FinalChapter"*/);
    byte_596DB1D = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB52 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB52 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8406/*"IsPart2FinalChapter"*/,
    v3->static_fields->_IsPart2FinalChapter_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveIsTransitionToTerminalAfterMovie(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DB1E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_8436/*"IsTransitionToTerminalAfterMovie"*/);
    byte_596DB1E = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D5F0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5F0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8436/*"IsTransitionToTerminalAfterMovie"*/,
    v3->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveJobLevelSnapshot(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  EventJobQuestMaster_o *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventJobQuestEntity__o *EntitiesByQuestId; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x2
  int32_t v13; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Item; // x23
  EventJobQuestMaster_o *v17; // x25
  __int64 v18; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  __int64 v29; // x21
  const MethodInfo_4485784 *v30; // x1
  System_Object_array *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  TerminalPramsManager_c *v45; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  TerminalPramsManager_c *v49; // x0
  Il2CppObject *JobLevelSnapshot_k__BackingField; // x19
  System_String_o *v51; // x0
  TerminalPramsManager_c *v52; // x0
  TerminalPramsManager_c *v53; // x0
  int32_t v54; // [xsp+4h] [xbp-6Ch]
  UserEventJobEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596DABA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventJobQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventJobMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventInfoJobLevelSnapshot_TypeInfo);
    sub_2213A60(&EventInfoJobLevelSnapshot_JobEntry_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoJobLevelSnapshot_JobEntry__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoJobLevelSnapshot_JobEntry__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoJobLevelSnapshot_JobEntry___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoJobLevelSnapshot_JobEntry__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobQuestEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobQuestEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoJobLevelSnapshot_JobEntry__TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_6484/*"EventInfoJobLevelSnapshot"*/);
    byte_596DABA = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (EventJobQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventJobQuestMaster___);
  if ( !Master_object )
    goto LABEL_47;
  EntitiesByQuestId = EventJobQuestMaster__GetEntitiesByQuestId(Master_object, questId, 0);
  if ( EntitiesByQuestId
    && (v10 = (System_Collections_Generic_List_object__o *)EntitiesByQuestId, EntitiesByQuestId->fields._size) )
  {
    v54 = questId;
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoJobLevelSnapshot_JobEntry__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoJobLevelSnapshot_JobEntry___ctor__);
    if ( v10->fields._size >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v10,
                 v13,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventJobQuestEntity__get_Item__);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
        Master_object = (EventJobQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventJobMaster___);
        if ( !Item || !Master_object )
          break;
        Master_object = (EventJobQuestMaster_o *)UserEventJobMaster__TryGetEntity(
                                                   (UserEventJobMaster_o *)Master_object,
                                                   &entity,
                                                   (int32_t)Item[1].klass,
                                                   0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          Master_object = (EventJobQuestMaster_o *)entity;
          if ( !entity )
            break;
          Master_object = (EventJobQuestMaster_o *)UserEventJobEntity__GetJobInfo(entity, HIDWORD(Item[1].klass), 0);
          if ( Master_object )
          {
            v17 = Master_object;
            v18 = sub_2213CCC(EventInfoJobLevelSnapshot_JobEntry_TypeInfo);
            EventInfoJobLevelSnapshot_JobEntry___ctor((EventInfoJobLevelSnapshot_JobEntry_o *)v18, 0);
            if ( !v18 )
              break;
            *(_QWORD *)(v18 + 16) = Item[1].klass;
            *(_DWORD *)(v18 + 24) = *(&v17->fields._MasterKind_k__BackingField + 1);
            if ( !v11 )
              break;
            items = v11->fields._items;
            v26 = Method_System_Collections_Generic_List_EventInfoJobLevelSnapshot_JobEntry__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)v18,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v18;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), v18, v19, v20, v21, v22, v23, v24);
            }
          }
        }
        if ( ++v13 >= v10->fields._size )
          goto LABEL_24;
      }
LABEL_47:
      sub_2213CDC(Master_object, v6);
    }
LABEL_24:
    if ( !v11 )
      goto LABEL_47;
    if ( v11->fields._size )
    {
      v29 = sub_2213CCC(EventInfoJobLevelSnapshot_TypeInfo);
      EventInfoJobLevelSnapshot___ctor((EventInfoJobLevelSnapshot_o *)v29, 0);
      if ( !v29 )
        goto LABEL_47;
      v30 = (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventInfoJobLevelSnapshot_JobEntry__ToArray__;
      *(_DWORD *)(v29 + 16) = v54;
      v31 = System_Collections_Generic_List_object___ToArray(v11, v30);
      *(_QWORD *)(v29 + 24) = v31;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 24), (int32_t)v31, v32, v33, v34, v35, v36, v37);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38, v39);
      if ( !byte_596DB2E )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB2E = 1;
      }
      v45 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38, v39);
        v45 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v45->static_fields;
      static_fields->_JobLevelSnapshot_k__BackingField = (struct EventInfoJobLevelSnapshot_o *)v29;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&static_fields->_JobLevelSnapshot_k__BackingField,
        v29,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      if ( !byte_596DB2F )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB2F = 1;
      }
      v49 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v47, v48);
        v49 = TerminalPramsManager_TypeInfo;
      }
      JobLevelSnapshot_k__BackingField = (Il2CppObject *)v49->static_fields->_JobLevelSnapshot_k__BackingField;
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v47, v48);
      v51 = JsonManager__toJson(JobLevelSnapshot_k__BackingField, 0, 0, 0);
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_6484/*"EventInfoJobLevelSnapshot"*/, v51, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
    else
    {
      v53 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v12);
      TerminalPramsManager__DeleteJobLevelSnapshot((const MethodInfo *)v53);
    }
  }
  else
  {
    v52 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v9);
    TerminalPramsManager__DeleteJobLevelSnapshot((const MethodInfo *)v52);
  }
}


void TerminalPramsManager__SaveLastClearedGrandWar(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int monitor; // w20
  BalanceConfig_c *v9; // x0
  GrandQuestRootComponent_c *v10; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596DB1B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&GrandQuestRootComponent_TypeInfo);
    byte_596DB1B = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    warId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_15:
    sub_2213CDC(Master_object, v6);
  monitor = (int)entity[3].monitor;
  v9 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v7);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( monitor == v9->static_fields->GrandBoardWarId )
  {
    v10 = GrandQuestRootComponent_TypeInfo;
    if ( !*(&GrandQuestRootComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo, v6, v7);
      v10 = GrandQuestRootComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v10->static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR, warId, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__SaveQuestInfo_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0

  if ( (byte_596DACC & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_14277/*"TerminalPhaseCnt"*/);
    sub_2213A60(&StringLiteral_14280/*"TerminalQuestId"*/);
    byte_596DACC = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14280/*"TerminalQuestId"*/,
    v3->static_fields->_QuestId_k__BackingField,
    0);
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92D = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14277/*"TerminalPhaseCnt"*/,
    v6->static_fields->_PhaseCnt_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int v3; // w9
  System_String_o *v4; // x19
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *QuestRandomGroupList_k__BackingField; // x0
  int key; // w20
  int key_high; // w27
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x2
  System_String_o *v11; // x1
  __int64 v12; // x20
  int v13; // [xsp+8h] [xbp-88h] BYREF
  int v14; // [xsp+Ch] [xbp-84h] BYREF
  __int64 v15; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v16; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596DB13 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11971/*"SAVEKEY_QuestRandomGroupList"*/);
    sub_2213A60(&StringLiteral_26573/*"{0}:{1}"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596DB13 = 1;
  }
  v3 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v17, 0, 32);
  v4 = **(System_String_o ***)(qword_5984390 + 184);
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596CEB0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CEB0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v5->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_2213CDC(0, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v17,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_3F92FF8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  v15 = 0;
  v16 = &v17;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v17,
            (const MethodInfo_4156B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v17.fields._current.fields.key;
    key_high = HIDWORD(v17.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(v4, 0) )
      v4 = System_String__Concat_75651716(v4, (System_String_o *)StringLiteral_869/*","*/, 0);
    v14 = key;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v14);
    v13 = key_high;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v13);
    v11 = System_String__Format_75697880((System_String_o *)StringLiteral_26573/*"{0}:{1}"*/, v9, v10, 0);
    v4 = System_String__Concat_75651716(v4, v11, 0);
  }
  v12 = v15;
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    v16,
    (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( v12 )
    sub_2213CD4(v12);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11971/*"SAVEKEY_QuestRandomGroupList"*/, v4, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v5; // x1

  if ( (byte_596DAFA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAFA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_2213CDC(0, v5);
  QuestFocusStateManager__WriteData(QuestFocusStateManager, 0);
}


void TerminalPramsManager__SaveRaidRemainingCount(int64_t remainingHp, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  System_String_o *v4; // x0
  int64_t v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596DB23 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    sub_2213A60(&StringLiteral_11662/*"RaidRemainingHpForCounter"*/);
    byte_596DB23 = 1;
  }
  v5 = remainingHp;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v5);
  v4 = System_String__Format((System_String_o *)StringLiteral_26484/*"{0}"*/, v3, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11662/*"RaidRemainingHpForCounter"*/, v4, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveTerminalWarIdKey(int32_t warId, const MethodInfo *method)
{
  if ( (byte_596DAEB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_14289/*"TerminalWarId"*/);
    byte_596DAEB = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14289/*"TerminalWarId"*/, warId, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveUserSaveDataDeleteButtonNonRelease(bool isNonRelesase, const MethodInfo *method)
{
  if ( (byte_596DB29 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13131/*"SaveDataDeleteButtonNonRelease"*/);
    byte_596DB29 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13131/*"SaveDataDeleteButtonNonRelease"*/, isNonRelesase, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveUserSaveDataDeletedState(bool isDeleted, const MethodInfo *method)
{
  if ( (byte_596DB26 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13132/*"SaveDataDeletedState"*/);
    byte_596DB26 = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13132/*"SaveDataDeletedState"*/, isDeleted, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__Save_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  TerminalPramsManager_c *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  TerminalPramsManager_c *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  TerminalPramsManager_c *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  TerminalPramsManager_c *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  TerminalPramsManager_c *v24; // x0
  System_String_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  TerminalPramsManager_c *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  TerminalPramsManager_c *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  TerminalPramsManager_c *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  TerminalPramsManager_c *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  TerminalPramsManager_c *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  TerminalPramsManager_c *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  TerminalPramsManager_c *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  TerminalPramsManager_c *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  TerminalPramsManager_c *v52; // x0
  System_String_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  TerminalPramsManager_c *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  TerminalPramsManager_c *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  TerminalPramsManager_c *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  TerminalPramsManager_c *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  TerminalPramsManager_c *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  TerminalPramsManager_c *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  TerminalPramsManager_c *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  TerminalPramsManager_c *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  TerminalPramsManager_c *v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  TerminalPramsManager_c *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  System_String_o *v86; // x19
  TerminalPramsManager_c *v87; // x0
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  TerminalPramsManager_c *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  TerminalPramsManager_c *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  TerminalPramsManager_c *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  TerminalPramsManager_c *v101; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF
  int64_t EndTime_k__BackingField; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596DACA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_14270/*"TerminalEndTime"*/);
    sub_2213A60(&StringLiteral_11969/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_2213A60(&StringLiteral_8436/*"IsTransitionToTerminalAfterMovie"*/);
    sub_2213A60(&StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/);
    sub_2213A60(&StringLiteral_8406/*"IsPart2FinalChapter"*/);
    sub_2213A60(&StringLiteral_14271/*"TerminalEventDailyPointEventId"*/);
    sub_2213A60(&StringLiteral_14277/*"TerminalPhaseCnt"*/);
    sub_2213A60(&StringLiteral_14285/*"TerminalTimeStatusEventId"*/);
    sub_2213A60(&StringLiteral_14269/*"TerminalDispState"*/);
    sub_2213A60(&StringLiteral_11966/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_2213A60(&StringLiteral_14272/*"TerminalIsDoneShortcut"*/);
    sub_2213A60(&StringLiteral_11964/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_2213A60(&StringLiteral_11970/*"SAVEKEY_PlayerGenderType"*/);
    sub_2213A60(&StringLiteral_11955/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_2213A60(&StringLiteral_11967/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_2213A60(&StringLiteral_11961/*"SAVEKEY_IsAutoExRoomWin"*/);
    sub_2213A60(&StringLiteral_14280/*"TerminalQuestId"*/);
    sub_2213A60(&StringLiteral_11978/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_2213A60(&StringLiteral_14284/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_2213A60(&StringLiteral_14289/*"TerminalWarId"*/);
    sub_2213A60(&StringLiteral_14282/*"TerminalSpotId"*/);
    sub_2213A60(&StringLiteral_14286/*"TerminalTimeStatusLoopCount"*/);
    sub_2213A60(&StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_2213A60(&StringLiteral_11953/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_2213A60(&StringLiteral_11958/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_2213A60(&StringLiteral_14290/*"TerminalWarStartedIds"*/);
    sub_2213A60(&StringLiteral_11957/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_11956/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_2213A60(&StringLiteral_11968/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_2213A60(&StringLiteral_11951/*"SAVEKEY_AutoExRoomType"*/);
    sub_2213A60(&StringLiteral_11960/*"SAVEKEY_IsAutoExRoom"*/);
    sub_2213A60(&StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/);
    sub_2213A60(&StringLiteral_11977/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_596DACA = 1;
  }
  EndTime_k__BackingField = 0;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D0B9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0B9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14269/*"TerminalDispState"*/,
    v3->static_fields->_DispState_k__BackingField,
    0);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14289/*"TerminalWarId"*/, v6->static_fields->_WarId_k__BackingField, 0);
  if ( !byte_596D0BD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0BD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14282/*"TerminalSpotId"*/, v9->static_fields->_SpotId_k__BackingField, 0);
  if ( !byte_596CDED )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDED = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
    v12 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11953/*"SAVEKEY_BlankEarthSpotId"*/,
    v12->static_fields->_BlankEarthSpotId_k__BackingField,
    0);
  if ( !byte_596CDEC )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDEC = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v14);
    v15 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11965/*"SAVEKEY_PlanetEarthSpotId"*/,
    v15->static_fields->_PlanetEarthSpotId_k__BackingField,
    0);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16, v17);
    v18 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14280/*"TerminalQuestId"*/,
    v18->static_fields->_QuestId_k__BackingField,
    0);
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92D = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19, v20);
    v21 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14277/*"TerminalPhaseCnt"*/,
    v21->static_fields->_PhaseCnt_k__BackingField,
    0);
  if ( !byte_596D0BE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0BE = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22, v23);
    v24 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v24->static_fields->_EndTime_k__BackingField;
  v25 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_14270/*"TerminalEndTime"*/, v25, 0);
  if ( !byte_596D620 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D620 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26, v27);
    v28 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14272/*"TerminalIsDoneShortcut"*/,
    v28->static_fields->_IsDoneShortcut_k__BackingField,
    0);
  v31 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29, v30);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_14290/*"TerminalWarStartedIds"*/,
    v31->static_fields->mTerminalWarStartedIds,
    0);
  if ( !byte_596D8BB )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8BB = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v32, v33);
    v34 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14285/*"TerminalTimeStatusEventId"*/,
    v34->static_fields->_TimeStatusEventId_k__BackingField,
    0);
  if ( !byte_596D8BC )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8BC = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v35, v36);
    v37 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14286/*"TerminalTimeStatusLoopCount"*/,
    v37->static_fields->_TimeStatusLoopCount_k__BackingField,
    0);
  if ( !byte_596DB4C )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4C = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38, v39);
    v40 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14271/*"TerminalEventDailyPointEventId"*/,
    v40->static_fields->_EventDailyPointEventId_k__BackingField,
    0);
  if ( !byte_596AEFD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEFD = 1;
  }
  v43 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41, v42);
    v43 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11960/*"SAVEKEY_IsAutoExRoom"*/,
    v43->static_fields->_IsAutoExRoom_k__BackingField,
    0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44, v45);
  if ( !byte_596AEFF )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEFF = 1;
  }
  v46 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44, v45);
    v46 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11951/*"SAVEKEY_AutoExRoomType"*/,
    v46->static_fields->_AutoExRoomType_k__BackingField,
    0);
  if ( !byte_596AEFE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEFE = 1;
  }
  v49 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v47, v48);
    v49 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11961/*"SAVEKEY_IsAutoExRoomWin"*/,
    v49->static_fields->_IsAutoExRoomWin_k__BackingField,
    0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v50, v51);
  if ( !byte_596DB4D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4D = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v50, v51);
    v52 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v52->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v53 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_14284/*"TerminalTimeStatusEventDailyPoint"*/, v53, 0);
  if ( !byte_596DB4E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4E = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v54, v55);
    v56 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/,
    v56->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0);
  if ( !byte_596DB4F )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4F = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v57, v58);
    v59 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/,
    v59->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0);
  if ( !byte_596DB50 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB50 = 1;
  }
  v62 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v60, v61);
    v62 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11969/*"SAVEKEY_PlayedTerminalEffects"*/,
    v62->static_fields->_PlayedTerminalEffects_k__BackingField,
    0);
  if ( !byte_596D611 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D611 = 1;
  }
  v65 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63, v64);
    v65 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11966/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v65->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v66, v67);
  if ( !byte_596D612 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D612 = 1;
  }
  v68 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v66, v67);
    v68 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11967/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v68->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0);
  if ( !byte_596D8BD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8BD = 1;
  }
  v71 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v69, v70);
    v71 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11968/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v71->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v72, v73);
  if ( !byte_596D8C0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8C0 = 1;
  }
  v74 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v72, v73);
    v74 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11978/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v74->static_fields->_SelectedStoryQuestId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11957/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11956/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0);
  if ( !byte_596D5E6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5E6 = 1;
  }
  v77 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v75, v76);
    v77 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11977/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v77->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0);
  if ( !byte_596CEB3 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CEB3 = 1;
  }
  v80 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v78, v79);
    v80 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11955/*"SAVEKEY_ClearEventQuestIds"*/,
    v80->static_fields->_ClearEventQuestIds_k__BackingField,
    0);
  if ( !byte_596D0BA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0BA = 1;
  }
  v83 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v81, v82);
    v83 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v83->static_fields->_MapModelClearQuestId_k__BackingField;
  v86 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  if ( !byte_596D0BB )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0BB = 1;
  }
  v87 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v84, v85);
    v87 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v87->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v88 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  v89 = System_String__Concat_75694928(v86, (System_String_o *)StringLiteral_869/*","*/, v88, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11964/*"SAVEKEY_MapModelClearQuestInfo"*/, v89, 0);
  if ( !byte_596D8C2 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8C2 = 1;
  }
  v92 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v90, v91);
    v92 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11958/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v92->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v93, v94);
  if ( !byte_596DB51 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB51 = 1;
  }
  v95 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v93, v94);
    v95 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11970/*"SAVEKEY_PlayerGenderType"*/,
    v95->static_fields->_PlayerGenderType_k__BackingField,
    0);
  if ( !byte_596DB52 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB52 = 1;
  }
  v98 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v96, v97);
    v98 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8406/*"IsPart2FinalChapter"*/,
    v98->static_fields->_IsPart2FinalChapter_k__BackingField,
    0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v99, v100);
  if ( !byte_596D5F0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5F0 = 1;
  }
  v101 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v99, v100);
    v101 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8436/*"IsTransitionToTerminalAfterMovie"*/,
    v101->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SendClearQuestToAdManager(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  bool IsMainStoryForQuestId; // w21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w1

  if ( (byte_596DB02 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB02 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&questPhase, method);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( IsMainStoryForQuestId )
    {
      if ( Instance )
      {
        v10 = 10;
LABEL_14:
        AdManager__TrackEvent((AdManager_o *)Instance, v10, 10, questId, questPhase, 0, 0);
        return;
      }
    }
    else if ( Instance )
    {
      v10 = 9;
      goto LABEL_14;
    }
    sub_2213CDC(Instance, v9);
  }
}


void TerminalPramsManager__SendOpenedQuestIdToAdManager(int32_t clearedQuestId, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  __int64 v13; // x2
  int32_t klass_high; // w21
  Il2CppObject *MasterData_object; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v25; // x8
  struct TerminalPramsManager___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__809_0; // x21
  Il2CppObject *v28; // x22
  struct TerminalPramsManager___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  System_Func_T__TResult__o *v37; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_object__bool__o *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  TerminalPramsManager___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x19
  struct TerminalPramsManager___c_StaticFields *v45; // x9
  System_Func_object__int__o *_9__809_3; // x20
  Il2CppObject *v47; // x21
  struct TerminalPramsManager___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  TerminalPramsManager___c_c *v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x19
  struct TerminalPramsManager___c_StaticFields *v60; // x9
  System_Func_int__int__o *_9__809_4; // x20
  Il2CppObject *v62; // x21
  struct TerminalPramsManager___c_StaticFields *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  int32_t v71; // w0
  int32_t v72; // w19
  Il2CppObject *v73; // [xsp+0h] [xbp-40h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596DB03 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__QuestEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_QuestEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_Func_QuestEntity__int__TypeInfo);
    sub_2213A60(&System_Func_QuestEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_int__QuestEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__809_0__);
    sub_2213A60(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__809_3__);
    sub_2213A60(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__809_4__);
    sub_2213A60(&Method_TerminalPramsManager___c__DisplayClass809_0__SendOpenedQuestIdToAdManager_b__1__);
    sub_2213A60(&Method_TerminalPramsManager___c__DisplayClass809_0__SendOpenedQuestIdToAdManager_b__2__);
    sub_2213A60(&TerminalPramsManager___c__DisplayClass809_0_TypeInfo);
    sub_2213A60(&TerminalPramsManager___c_TypeInfo);
    byte_596DB03 = 1;
  }
  v73 = 0;
  entity = 0;
  v3 = sub_2213CCC(TerminalPramsManager___c__DisplayClass809_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass809_0___ctor((TerminalPramsManager___c__DisplayClass809_0_o *)v3, 0);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v3 )
      goto LABEL_43;
    *(_QWORD *)(v3 + 16) = Instance;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Instance, v6, v7, v8, v9, v10, v11);
    Instance = *(DataManager_o **)(v3 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_43;
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0);
    if ( !v12 )
      goto LABEL_43;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v12,
                                  &v73,
                                  (int32_t)Instance,
                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v73 )
      goto LABEL_43;
    klass_high = HIDWORD(v73[1].klass);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v13);
    if ( TerminalPramsManager__IsMustPlayMainStory(klass_high, v5) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_43;
      if ( QuestEntity__GetTypeFlag(entity, 0) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v3 + 24) = MasterData_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v3 + 24),
        (int32_t)MasterData_object,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_43;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0);
      v25 = TerminalPramsManager___c_TypeInfo;
      if ( !*(&TerminalPramsManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo, v22, v23);
        v25 = TerminalPramsManager___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__809_0 = static_fields->__9__809_0;
      if ( !_9__809_0 )
      {
        if ( !*(&v25->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v25, v22, v23);
          static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__809_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__809_0,
          v28,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__809_0__,
          0);
        v29 = TerminalPramsManager___c_TypeInfo->static_fields;
        v29->__9__809_0 = _9__809_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v29->__9__809_0,
          (int32_t)_9__809_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      v36 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__809_0,
              (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
      v37 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v37,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass809_0__SendOpenedQuestIdToAdManager_b__1__,
        0);
      v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v36,
                                                                   (System_Func_TSource__TResult__o *)v37,
                                                                   (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v39 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v39,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass809_0__SendOpenedQuestIdToAdManager_b__2__,
        0);
      v40 = System_Linq_Enumerable__Where_object_(
              v38,
              (System_Func_TSource__bool__o *)v39,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v43 = TerminalPramsManager___c_TypeInfo;
      v44 = v40;
      if ( !*(&TerminalPramsManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo, v41, v42);
        v43 = TerminalPramsManager___c_TypeInfo;
      }
      v45 = v43->static_fields;
      _9__809_3 = (System_Func_object__int__o *)v45->__9__809_3;
      if ( !_9__809_3 )
      {
        if ( !*(&v43->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v43, v41, v42);
          v45 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v47 = (Il2CppObject *)v45->__9;
        _9__809_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__809_3,
          v47,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__809_3__,
          0);
        v48 = TerminalPramsManager___c_TypeInfo->static_fields;
        v48->__9__809_3 = (struct System_Func_QuestEntity__int__o *)_9__809_3;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v48->__9__809_3,
          (int32_t)_9__809_3,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
      }
      v55 = System_Linq_Enumerable__Select_object__int_(
              v44,
              (System_Func_TSource__TResult__o *)_9__809_3,
              (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v58 = TerminalPramsManager___c_TypeInfo;
      v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v55;
      if ( !*(&TerminalPramsManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo, v56, v57);
        v58 = TerminalPramsManager___c_TypeInfo;
      }
      v60 = v58->static_fields;
      _9__809_4 = v60->__9__809_4;
      if ( !_9__809_4 )
      {
        if ( !*(&v58->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v58, v56, v57);
          v60 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v62 = (Il2CppObject *)v60->__9;
        _9__809_4 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__809_4,
          v62,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__809_4__,
          0);
        v63 = TerminalPramsManager___c_TypeInfo->static_fields;
        v63->__9__809_4 = _9__809_4;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v63->__9__809_4,
          (int32_t)_9__809_4,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69);
      }
      v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v59,
                                                                   (System_Func_TSource__TKey__o *)_9__809_4,
                                                                   (const MethodInfo_3889074 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v71 = System_Linq_Enumerable__FirstOrDefault_int_(
              v70,
              (const MethodInfo_388115C *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v71 )
      {
        v72 = v71;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v72, 0);
          return;
        }
LABEL_43:
        sub_2213CDC(Instance, v5);
      }
    }
  }
}


void TerminalPramsManager__SendResumeQuestToAdManager(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x19
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = questId;
  v7 = questPhase;
  if ( (byte_596DB01 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&StringLiteral_20676/*"game.resume_quest_id"*/);
    sub_2213A60(&StringLiteral_20677/*"game.resume_quest_phase"*/);
    byte_596DB01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  if ( !Instance
    || (CrashReporter__AddCustomKey((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_20676/*"game.resume_quest_id"*/, v4, 0),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
        v4 = System_Int32__ToString((int32_t)&v7, 0),
        !v6) )
  {
    sub_2213CDC(v4, v5);
  }
  CrashReporter__AddCustomKey((CrashReporter_o *)v6, (System_String_o *)StringLiteral_20677/*"game.resume_quest_phase"*/, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SendStartQuestToAdManager(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  bool IsMainStoryForQuestId; // w21
  AdManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w1
  Il2CppObject *v11; // x19
  Il2CppObject *v12; // x19
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = questId;
  v13 = questPhase;
  if ( (byte_596DB00 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_20670/*"game.last_quest_id"*/);
    sub_2213A60(&StringLiteral_20672/*"game.last_quest_phase"*/);
    byte_596DB00 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&questPhase, method);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = (AdManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( IsMainStoryForQuestId )
    {
      if ( !Instance )
        goto LABEL_17;
      v10 = 10;
    }
    else
    {
      if ( !Instance )
        goto LABEL_17;
      v10 = 9;
    }
    AdManager__TrackEvent(Instance, v10, 9, questId, questPhase, 0, 0);
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    Instance = (AdManager_o *)System_Int32__ToString((int32_t)&v14, 0);
    if ( v11 )
    {
      CrashReporter__AddCustomKey(
        (CrashReporter_o *)v11,
        (System_String_o *)StringLiteral_20670/*"game.last_quest_id"*/,
        (System_String_o *)Instance,
        0);
      v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      Instance = (AdManager_o *)System_Int32__ToString((int32_t)&v13, 0);
      if ( v12 )
      {
        CrashReporter__AddCustomKey(
          (CrashReporter_o *)v12,
          (System_String_o *)StringLiteral_20672/*"game.last_quest_phase"*/,
          (System_String_o *)Instance,
          0);
        return;
      }
    }
LABEL_17:
    sub_2213CDC(Instance, v9);
  }
}


void TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A2F30 *v6; // x0
  QuestTree_o *Instance; // x0
  __int64 v8; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  MapControl_QuestInfo_o *v12; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v14; // x0
  DataManager_c *v15; // x8
  Il2CppObject *Master_object; // x21
  bool v17; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  int v20; // w8
  TerminalPramsManager_c *v21; // x0
  struct TerminalPramsManager_StaticFields *v22; // x8
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  unsigned __int64 v26; // x21
  TerminalPramsManager_c *v27; // x0
  int v28; // w9
  int32_t v29; // w22
  TerminalPramsManager_c *v30; // x0
  int32_t questPhase; // w21
  int v32; // w9
  int64_t endTime; // x20
  int v34; // w9
  int v35; // w9
  struct TerminalPramsManager_StaticFields *v36; // x8
  const MethodInfo_47A2F30 *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x2
  Il2CppObject *v41; // x20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w8
  int v44; // w9
  TerminalPramsManager_c *v45; // x0
  int v46; // w20
  TerminalSceneComponent_c *v47; // x8
  TerminalSceneComponent_c *v48; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v50; // x2
  __int64 v51; // x8
  UnityEngine_Object_o *v52; // x20
  __int64 v53; // x2
  __int64 v54; // x8
  ScrTerminalListTop_o *v55; // x20
  __int64 v56; // x8
  UnityEngine_Object_o *v57; // x20
  __int64 v58; // x8
  const MethodInfo *v59; // x0
  unsigned __int64 v60; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596DAB9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596DAB9 = 1;
  }
  entity = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596D198 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D198 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  v6 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__;
  static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance(v6) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0);
    if ( !QuestInfo )
      return;
    v12 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
    if ( !byte_596AEFA )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEFA = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
      v14 = TerminalPramsManager_TypeInfo;
    }
    v15 = DataManager_TypeInfo;
    v14->static_fields->_WarId_k__BackingField = warId;
    if ( !*(&v15->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v15, v10, v11);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v12, 0);
    if ( !Master_object )
      goto LABEL_148;
    v17 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v12, 0);
    v20 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
    if ( v17 )
    {
      if ( !v20 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18, v19);
      if ( !byte_596CDEF )
      {
LABEL_39:
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596CDEF = 1;
      }
    }
    else
    {
      if ( !v20 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18, v19);
      if ( !byte_596A15A )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A15A = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18, v19);
        v21 = TerminalPramsManager_TypeInfo;
      }
      v22 = v21->static_fields;
      WarInfo_k__BackingField = v12->fields._WarInfo_k__BackingField;
      v22->_SpotId_k__BackingField = (int)Master_object;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0)) != 0 )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v60 = 0;
        System_Nullable_int____ctor(
          (System_Nullable_int__o)&v60,
          parentBlankEarthSpotId,
          (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
        v26 = v60;
      }
      else
      {
        v26 = 0;
      }
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18, v19);
      Master_object = (Il2CppObject *)HIDWORD(v26);
      if ( !byte_596CDEF )
        goto LABEL_39;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18, v19);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v28 = *(&v27->_2.cctor_finished + 1);
    v29 = v12->fields.questId;
    v27->static_fields->_BlankEarthSpotId_k__BackingField = (int)Master_object;
    if ( !v28 )
      j_il2cpp_runtime_class_init_0(v27, v18, v19);
    if ( !byte_596AEF7 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEF7 = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18, v19);
      v30 = TerminalPramsManager_TypeInfo;
    }
    questPhase = v12->fields.questPhase;
    v32 = (unsigned __int8)byte_596AEF9;
    v30->static_fields->_QuestId_k__BackingField = v29;
    if ( !v32 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
      byte_596AEF9 = 1;
    }
    if ( !*(&v30->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v30, v18, v19);
      v30 = TerminalPramsManager_TypeInfo;
    }
    endTime = v12->fields.endTime;
    v34 = (unsigned __int8)byte_596AEF8;
    v30->static_fields->_PhaseCnt_k__BackingField = questPhase;
    if ( !v34 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
      byte_596AEF8 = 1;
    }
    if ( !*(&v30->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v30, v18, v19);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v35 = (unsigned __int8)byte_596D61F;
    v30->static_fields->_EndTime_k__BackingField = endTime;
    if ( !v35 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
      byte_596D61F = 1;
    }
    if ( !*(&v30->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v30, v18, v19);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v36 = v30->static_fields;
    v37 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__;
    v36->_IsForceFocusTerminalQuestId_k__BackingField = 1;
    if ( !SingletonTemplate_object___get_Instance(v37) )
      goto LABEL_151;
    v41 = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v40);
    if ( !byte_596A743 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A743 = 1;
    }
    Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v40);
      Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v41 )
      goto LABEL_148;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                         (QuestTree_o *)v41,
                         *(_DWORD *)(Instance[1].fields.forceUpdateTime + 4),
                         0);
    if ( WarEntityByWarID )
    {
      IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0);
      v44 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
      if ( IsFolder )
      {
        if ( !v44 )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38, v39);
        if ( !byte_596CEB4 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596CEB4 = 1;
        }
        v45 = TerminalPramsManager_TypeInfo;
        v46 = 3;
      }
      else
      {
        if ( !v44 )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38, v39);
        if ( !byte_596CEB4 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596CEB4 = 1;
        }
        v45 = TerminalPramsManager_TypeInfo;
        v46 = 2;
      }
    }
    else
    {
LABEL_151:
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38, v39);
      if ( !byte_596CEB4 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596CEB4 = 1;
      }
      v45 = TerminalPramsManager_TypeInfo;
      v46 = 1;
    }
    if ( !*(&v45->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v45, v38, v39);
      v45 = TerminalPramsManager_TypeInfo;
    }
    v47 = TerminalSceneComponent_TypeInfo;
    v45->static_fields->_DispState_k__BackingField = v46;
    if ( !*(&v47->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v47, v38, v39);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v48 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v38, v39);
      v48 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v48->static_fields->mInstance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v39);
    if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
      goto LABEL_140;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v50);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v50);
      Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    }
    v51 = *(_QWORD *)Instance[1].fields.forceUpdateTime;
    if ( v51 )
    {
      v52 = *(UnityEngine_Object_o **)(v51 + 256);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v50);
      if ( UnityEngine_Object__op_Inequality(v52, 0, 0) )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v53);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v53);
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v54 = *(_QWORD *)Instance[1].fields.forceUpdateTime;
        if ( !v54 )
          goto LABEL_148;
        v55 = *(ScrTerminalListTop_o **)(v54 + 256);
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v53);
        if ( !byte_596A743 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596A743 = 1;
        }
        Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v53);
          Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v55 )
          goto LABEL_148;
        ScrTerminalListTop__RequestChangeTerminalListBG(v55, *(_DWORD *)(Instance[1].fields.forceUpdateTime + 4), 0);
      }
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v53);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v53);
        Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
      }
      v56 = *(_QWORD *)Instance[1].fields.forceUpdateTime;
      if ( v56 )
      {
        v57 = *(UnityEngine_Object_o **)(v56 + 240);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v53);
        if ( !UnityEngine_Object__op_Inequality(v57, 0, 0) )
          goto LABEL_140;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v50);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v50);
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v58 = *(_QWORD *)Instance[1].fields.forceUpdateTime;
        if ( v58 )
        {
          Instance = *(QuestTree_o **)(v58 + 240);
          if ( Instance )
          {
            TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Instance, 0);
LABEL_140:
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v50);
            if ( !byte_596ABDE )
            {
              sub_2213A60(&TerminalPramsManager_TypeInfo);
              byte_596ABDE = 1;
            }
            v59 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v50);
              v59 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
            }
            *((_BYTE *)v59[2].virtualMethodPointer + 781) = 1;
            TerminalPramsManager__Save_SaveData(v59);
            return;
          }
        }
      }
    }
LABEL_148:
    sub_2213CDC(Instance, v8);
  }
}


void TerminalPramsManager__SetAutoResumeByWarId(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  int v5; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A2F30 *v7; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x21
  TitleInfoControl_o *v13; // x0
  WarEntity_o *WarEntityByWarID; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  BalanceConfig_c *v17; // x0
  TerminalPramsManager_c *v18; // x0
  int32_t parentBlankEarthSpotId; // w20
  TerminalPramsManager_c *v20; // x0
  TerminalSceneComponent_c *v21; // x8
  int v22; // w10
  TerminalSceneComponent_c *v23; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v25; // x2
  System_String_c *klass; // x8
  UnityEngine_Object_o *v27; // x20
  __int64 v28; // x2
  System_String_c *v29; // x8
  ScrTerminalListTop_o *v30; // x20
  System_String_c *v31; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_String_c *v33; // x8
  const MethodInfo *v34; // x0

  if ( (byte_596DABC & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596DABC = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596D198 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D198 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = (unsigned __int8)byte_596AEFA;
  v4->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !v5 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596AEFA = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  v7 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__;
  static_fields->_WarId_k__BackingField = warId;
  if ( SingletonTemplate_object___get_Instance(v7) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
    if ( !byte_596A743 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A743 = 1;
    }
    v13 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
      v13 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Instance )
      goto LABEL_104;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                         (QuestTree_o *)Instance,
                         HIDWORD(v13->fields.particleAssetName->klass),
                         0);
  }
  else
  {
    WarEntityByWarID = 0;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v9);
  TerminalPramsManager__UpdateDispState(WarEntityByWarID, v8);
  v17 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15, v16);
    v17 = BalanceConfig_TypeInfo;
  }
  if ( v17->static_fields->GrandBoardWarId == warId )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
    if ( !byte_596B2FC )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596B2FC = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 1;
  }
  if ( WarEntityByWarID )
    parentBlankEarthSpotId = WarEntityByWarID->fields.parentBlankEarthSpotId;
  else
    parentBlankEarthSpotId = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
  if ( !byte_596CDEF )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDEF = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v21 = TerminalSceneComponent_TypeInfo;
  v22 = *(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1);
  v20->static_fields->_BlankEarthSpotId_k__BackingField = parentBlankEarthSpotId;
  if ( !v22 )
    j_il2cpp_runtime_class_init_0(v21, v15, v16);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v23 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15, v16);
    v23 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v23->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v25);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v13 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v25);
      v13 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v13->fields.particleAssetName->klass;
    if ( !klass )
      goto LABEL_104;
    v27 = *(UnityEngine_Object_o **)&klass->_2.element_size;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v25);
    if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v28);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v13 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v28);
        v13 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v29 = v13->fields.particleAssetName->klass;
      if ( !v29 )
        goto LABEL_104;
      v30 = *(ScrTerminalListTop_o **)&v29->_2.element_size;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v28);
      if ( !byte_596A743 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A743 = 1;
      }
      v13 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v28);
        v13 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v30 )
        goto LABEL_104;
      ScrTerminalListTop__RequestChangeTerminalListBG(v30, HIDWORD(v13->fields.particleAssetName->klass), 0);
    }
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v28);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v13 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v28);
      v13 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v31 = v13->fields.particleAssetName->klass;
    if ( !v31 )
      goto LABEL_104;
    genericContainerHandle = (UnityEngine_Object_o *)v31->_2.genericContainerHandle;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v28);
    if ( UnityEngine_Object__op_Inequality(genericContainerHandle, 0, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v25);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v13 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v25);
        v13 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v33 = v13->fields.particleAssetName->klass;
      if ( v33 )
      {
        v13 = (TitleInfoControl_o *)v33->_2.genericContainerHandle;
        if ( v13 )
        {
          TitleInfoControl__CloseEventBannerWindow(v13, 0);
          goto LABEL_97;
        }
      }
LABEL_104:
      sub_2213CDC(v13, v10);
    }
  }
LABEL_97:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v25);
  if ( !byte_596ABDE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596ABDE = 1;
  }
  v34 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v25);
    v34 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v34[2].virtualMethodPointer + 781) = 1;
  TerminalPramsManager__Save_SaveData(v34);
}


void TerminalPramsManager__SetAutoResumeForFolder(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  int v5; // w9
  int v6; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A2F30 *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *v14; // x8
  int32_t PrioredParentId; // w20
  Il2CppObject *v16; // x0
  __int64 v17; // x2
  TerminalPramsManager_c *v18; // x0
  struct TerminalPramsManager_StaticFields *v19; // x8
  __int64 v20; // x1
  __int64 v21; // x2
  TerminalPramsManager_c *v22; // x0
  BalanceConfig_c *v23; // x0
  TerminalPramsManager_c *v24; // x0
  int32_t monitor_high; // w20
  TerminalPramsManager_c *v26; // x0
  TerminalSceneComponent_c *v27; // x8
  int v28; // w10
  TerminalSceneComponent_c *v29; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v31; // x2
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  UnityEngine_Object_o *v33; // x20
  __int64 v34; // x2
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v35; // x8
  ScrTerminalListTop_o *v36; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v37; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v39; // x8
  const MethodInfo *v40; // x0
  WarEntity_o *WarEntityByWarID; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596DABE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596DABE = 1;
  }
  WarEntityByWarID = 0;
  entity = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596D198 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D198 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = (unsigned __int8)byte_596AEFA;
  v4->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !v5 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596AEFA = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v6 = (unsigned __int8)byte_596CEB4;
  v4->static_fields->_WarId_k__BackingField = 0;
  if ( !v6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596CEB4 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  v8 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__;
  static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance(v8);
  if ( Instance )
  {
    entity = (Il2CppObject *)QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0);
    if ( entity )
      goto LABEL_25;
  }
  else
  {
    entity = 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_135;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    warId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !entity )
    return;
LABEL_25:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
  if ( !byte_596B2FE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596B2FE = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v14 = v13->static_fields;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  v14->_CaldeaGateFolderFocusWarId_k__BackingField = warId;
  if ( !Master_object )
    goto LABEL_135;
  PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)Master_object, 0);
  v16 = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( v16 )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v16, PrioredParentId, 0);
    if ( WarEntityByWarID )
      goto LABEL_40;
  }
  else
  {
    WarEntityByWarID = 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v17);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_135;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&WarEntityByWarID,
    PrioredParentId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !WarEntityByWarID )
    return;
LABEL_40:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v17);
  if ( !byte_596AEFA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEFA = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v17);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v19 = v18->static_fields;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntityByWarID;
  v19->_WarId_k__BackingField = PrioredParentId;
  if ( !Master_object )
    goto LABEL_135;
  if ( WarEntity__IsFolder((WarEntity_o *)Master_object, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20, v21);
    if ( !byte_596CEB4 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CEB4 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20, v21);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_DispState_k__BackingField = 3;
  }
  v23 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20, v21);
    v23 = BalanceConfig_TypeInfo;
  }
  if ( PrioredParentId == v23->static_fields->GrandBoardWarId )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20, v21);
    if ( !byte_596B2FC )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596B2FC = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20, v21);
      v24 = TerminalPramsManager_TypeInfo;
    }
    v24->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 1;
  }
  if ( entity )
    monitor_high = HIDWORD(entity[7].monitor);
  else
    monitor_high = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20, v21);
  if ( !byte_596CDEF )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDEF = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20, v21);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v27 = TerminalSceneComponent_TypeInfo;
  v28 = *(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1);
  v26->static_fields->_BlankEarthSpotId_k__BackingField = monitor_high;
  if ( !v28 )
    j_il2cpp_runtime_class_init_0(v27, v20, v21);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v29 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20, v21);
    v29 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v29->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    goto LABEL_127;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v31);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v31);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_135;
  v33 = *(UnityEngine_Object_o **)&klass->_2.element_size;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v31);
  if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v34);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v34);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v35 = Master_object[2].fields.list->klass;
    if ( !v35 )
      goto LABEL_135;
    v36 = *(ScrTerminalListTop_o **)&v35->_2.element_size;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v34);
    if ( !byte_596A743 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A743 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v34);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v36 )
      goto LABEL_135;
    ScrTerminalListTop__RequestChangeTerminalListBG(v36, HIDWORD(Master_object[2].fields.list->klass), 0);
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v34);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v34);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v37 = Master_object[2].fields.list->klass;
  if ( !v37 )
    goto LABEL_135;
  genericContainerHandle = (UnityEngine_Object_o *)v37->_2.genericContainerHandle;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v34);
  if ( !UnityEngine_Object__op_Inequality(genericContainerHandle, 0, 0) )
    goto LABEL_127;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v31);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v31);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v39 = Master_object[2].fields.list->klass;
  if ( !v39 || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v39->_2.genericContainerHandle) == 0 )
LABEL_135:
    sub_2213CDC(Master_object, v10);
  TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Master_object, 0);
LABEL_127:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v31);
  if ( !byte_596ABDE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596ABDE = 1;
  }
  v40 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v31);
    v40 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v40[2].virtualMethodPointer + 781) = 1;
  TerminalPramsManager__Save_SaveData(v40);
}


void TerminalPramsManager__SetBattleResultCampaignBonus(
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleResultComponent_resultData_o *v8; // x19
  struct CommonUI_CampaignDirectBonusData_array *campaignDirectBonus; // x20
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  const MethodInfo *v12; // x0
  CommonUI_CampaignBonusData_array *campaignbonus; // x19

  v8 = result;
  if ( (byte_596DAFE & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAFE = 1;
  }
  if ( !v8 )
    sub_2213CDC(result, method);
  campaignDirectBonus = v8->fields.campaignDirectBonus;
  if ( campaignDirectBonus && campaignDirectBonus->max_length )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    if ( !byte_596DB45 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB45 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      v10 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
      (int32_t)campaignDirectBonus,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    TerminalPramsManager__CampaignDirectBonus_SaveData(v12);
  }
  campaignbonus = v8->fields.campaignbonus;
  if ( campaignbonus && campaignbonus->max_length )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    TerminalPramsManager__SetCampaignBonus(campaignbonus, method);
  }
}


void TerminalPramsManager__SetCampaignBonus(
        CommonUI_CampaignBonusData_array *campaignBonuses,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596DAE6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAE6 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596DB44 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB44 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_CampaignBonus_k__BackingField,
    (int32_t)campaignBonuses,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SetFolderLastClickedIdx(int32_t warId, int32_t idx, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *v6; // x21
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  TerminalPramsManager_c *v14; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  TerminalPramsManager_c *v19; // x0

  if ( (byte_596DAF5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAF5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&idx, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->folderLastIdxs )
  {
    v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v6,
      (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v14 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
      v14 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->folderLastIdxs = v6;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->folderLastIdxs,
      (int32_t)v6,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&idx, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v5->static_fields->folderLastIdxs;
  if ( !folderLastIdxs
    || (System_Collections_Generic_Dictionary_int__int___Remove(
          folderLastIdxs,
          warId,
          (const MethodInfo_3F93FF4 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0) )
  {
    sub_2213CDC(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_596DB35 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB35 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17, v18);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SetForcePlayEventTutorialArray(int32_t eventId, int32_t flagType, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_HashSet_object__o *v6; // x21
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  TerminalPramsManager_c *v14; // x0
  MissionNaviTransitionBoardItem_o *p_ForcePlayEventTutorialArray_k__BackingField; // x0
  System_Collections_Generic_Dictionary_int__int__o *v16; // x21
  System_Collections_Generic_HashSet_object__o *ForcePlayEventTutorialArray_k__BackingField; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  TerminalPramsManager_c *v20; // x0

  if ( (byte_596DB1C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Dictionary_int__int____ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_Dictionary_int__int___TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB1C = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&flagType, method);
  if ( !byte_596DB47 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB47 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&flagType, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
  {
    v6 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_Dictionary_int__int___TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_Dictionary_int__int____ctor__);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    if ( !byte_596DB69 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB69 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
      v14 = TerminalPramsManager_TypeInfo;
    }
    p_ForcePlayEventTutorialArray_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v14->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
    p_ForcePlayEventTutorialArray_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v6;
    sub_2213A04(p_ForcePlayEventTutorialArray_k__BackingField, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  }
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v16 )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___Add(
    v16,
    eventId,
    flagType,
    (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18, v19);
  if ( !byte_596DB47 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB47 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18, v19);
    v20 = TerminalPramsManager_TypeInfo;
  }
  ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_object__o *)v20->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
  if ( !ForcePlayEventTutorialArray_k__BackingField )
LABEL_26:
    sub_2213CDC(ForcePlayEventTutorialArray_k__BackingField, v18);
  System_Collections_Generic_HashSet_object___Add(
    ForcePlayEventTutorialArray_k__BackingField,
    (Il2CppObject *)v16,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Add__);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SetQuestReleasedFocusState(int32_t questId, int32_t state, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v7; // x1

  if ( (byte_596DAFB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAFB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&state, method);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_2213CDC(0, v7);
  QuestFocusStateManager__SetFocusState(QuestFocusStateManager, questId, state, 0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SetQuestRewardInfo(
        BattleResultComponent_resultData_array *result,
        bool isDispQuestClearReward,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v10; // x0
  MissionNaviTransitionBoardItem_o *p_mQuestRewardInfos; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  BattleResultComponent_resultData_o *v20; // x8
  struct QuestRewardInfo_array *rewardInfos; // x21
  bool v22; // w8
  _BOOL4 v23; // w23
  TerminalPramsManager_c *v24; // x0
  MissionNaviTransitionBoardItem_o *v25; // x0
  TerminalPramsManager_c *v26; // x0
  MissionNaviTransitionBoardItem_o *p_mQuestPhaseRewardInfos; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  BattleResultComponent_resultData_o *v34; // x8
  MissionNaviTransitionBoardItem_c *resultQuestPhaseRewardInfos; // x20
  TerminalPramsManager_c *v36; // x0
  MissionNaviTransitionBoardItem_o *v37; // x0
  TerminalPramsManager_c *v38; // x0
  MissionNaviTransitionBoardItem_o *p_mQuestResultAfterEventRewardInfos; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int max_length; // w8
  BattleResultComponent_resultData_o *v47; // x9
  struct BattleDropItem_array *resultAfterEventRewardInfos; // x20
  _BOOL4 v49; // w9
  TerminalPramsManager_c *v50; // x0
  MissionNaviTransitionBoardItem_o *v51; // x0
  BattleResultComponent_resultData_o *v52; // x8
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct QuestRewardInfo_array *resultUseRewardAddItemRewardInfos; // x20
  BattleResultComponent_resultData_o *v60; // x8
  TerminalPramsManager_c *v61; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DAFF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAFF = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isDispQuestClearReward, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (MissionNaviTransitionBoardItem_o *)&v10->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0;
  sub_2213A04(p_mQuestRewardInfos, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( !result )
    goto LABEL_48;
  if ( !LODWORD(result->max_length) )
    goto LABEL_49;
  v20 = result->m_Items[0];
  if ( !v20 )
    goto LABEL_48;
  rewardInfos = v20->fields.rewardInfos;
  if ( rewardInfos )
    v22 = LODWORD(rewardInfos->max_length) != 0;
  else
    v22 = 0;
  v23 = isDispQuestClearReward;
  if ( v22 && isDispQuestClearReward )
  {
    v24 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v14);
      v24 = TerminalPramsManager_TypeInfo;
    }
    v25 = (MissionNaviTransitionBoardItem_o *)&v24->static_fields->mQuestRewardInfos;
    v25->klass = (MissionNaviTransitionBoardItem_c *)rewardInfos;
    sub_2213A04(v25, (int32_t)rewardInfos, v14, v15, v16, v17, v18, v19);
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v14);
    v26 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (MissionNaviTransitionBoardItem_o *)&v26->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0;
  sub_2213A04(p_mQuestPhaseRewardInfos, 0, v14, v15, v16, v17, v18, v19);
  if ( !LODWORD(result->max_length) )
    goto LABEL_49;
  v34 = result->m_Items[0];
  if ( !v34 )
    goto LABEL_48;
  resultQuestPhaseRewardInfos = (MissionNaviTransitionBoardItem_c *)v34->fields.resultQuestPhaseRewardInfos;
  if ( resultQuestPhaseRewardInfos && resultQuestPhaseRewardInfos->_1.namespaze )
  {
    v36 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v28);
      v36 = TerminalPramsManager_TypeInfo;
    }
    v37 = (MissionNaviTransitionBoardItem_o *)&v36->static_fields->mQuestPhaseRewardInfos;
    v37->klass = resultQuestPhaseRewardInfos;
    sub_2213A04(v37, (int32_t)resultQuestPhaseRewardInfos, v28, v29, v30, v31, v32, v33);
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v28);
    v38 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (MissionNaviTransitionBoardItem_o *)&v38->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0;
  sub_2213A04(p_mQuestResultAfterEventRewardInfos, 0, v28, v29, v30, v31, v32, v33);
  max_length = result->max_length;
  if ( !max_length )
    goto LABEL_49;
  v47 = result->m_Items[0];
  if ( !v47 )
    goto LABEL_48;
  resultAfterEventRewardInfos = v47->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos )
    v49 = LODWORD(resultAfterEventRewardInfos->max_length) != 0;
  else
    v49 = 0;
  if ( v49 && v23 )
  {
    v50 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v40);
      v50 = TerminalPramsManager_TypeInfo;
    }
    v51 = (MissionNaviTransitionBoardItem_o *)&v50->static_fields->mQuestResultAfterEventRewardInfos;
    v51->klass = (MissionNaviTransitionBoardItem_c *)resultAfterEventRewardInfos;
    sub_2213A04(v51, (int32_t)resultAfterEventRewardInfos, v40, v41, v42, v43, v44, v45);
    max_length = result->max_length;
  }
  if ( !max_length )
    goto LABEL_49;
  v52 = result->m_Items[0];
  if ( !v52 )
    goto LABEL_48;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)v52->fields.resultUseRewardAddItemRewardInfos,
                    0);
  resultUseRewardAddItemRewardInfos = 0;
  if ( IsNullOrEmpty )
    goto LABEL_41;
  if ( !LODWORD(result->max_length) )
LABEL_49:
    sub_2213CE4(IsNullOrEmpty);
  v60 = result->m_Items[0];
  if ( !v60 )
LABEL_48:
    sub_2213CDC(IsNullOrEmpty, v13);
  resultUseRewardAddItemRewardInfos = v60->fields.resultUseRewardAddItemRewardInfos;
LABEL_41:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v53);
  if ( !byte_596A930 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A930 = 1;
  }
  v61 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v53);
    v61 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v61->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = resultUseRewardAddItemRewardInfos;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    (int32_t)resultUseRewardAddItemRewardInfos,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
}


void TerminalPramsManager__SetWarStartedId(int32_t war_id, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = war_id;
  if ( (byte_596DAF3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    byte_596DAF3 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !TerminalPramsManager__IsWarStartedId(war_id, method) )
  {
    v6 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
      v6 = TerminalPramsManager_TypeInfo;
    }
    mTerminalWarStartedIds = v6->static_fields->mTerminalWarStartedIds;
    v8 = System_Int32__ToString((int32_t)&v18, 0);
    v9 = System_String__Concat_75694928(mTerminalWarStartedIds, v8, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v9;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->mTerminalWarStartedIds,
      (int32_t)v9,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    TerminalPramsManager__Save_SaveData(v17);
  }
}


void TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DACB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_14282/*"TerminalSpotId"*/);
    byte_596DACB = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D0BD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0BD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14282/*"TerminalSpotId"*/, v3->static_fields->_SpotId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0

  if ( (byte_596DAD1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/);
    sub_2213A60(&StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_596DAD1 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596DB4E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14266/*"TerminalBeforeEventActivityPoint"*/,
    v3->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0);
  if ( !byte_596DB4F )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB4F = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_14267/*"TerminalBeforeEventActivityPointGauge"*/,
    v6->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAD6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11972/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_596DAD6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11972/*"SAVEKEY_TerminalConquestInfoDisp"*/, v3->static_fields->eventConquestInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0

  if ( (byte_596DAD5 & 1) == 0 )
  {
    sub_2213A60(&EventConquestInfo___TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11973/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_2213A60(&StringLiteral_11972/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_596DAD5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v3->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, v1, v2);
      eventConquestInfos = TerminalPramsManager_TypeInfo->static_fields->eventConquestInfos;
    }
  }
  else
  {
    eventConquestInfos = (struct EventConquestInfo_array *)sub_2213B20(EventConquestInfo___TypeInfo, 0);
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v1, v2);
  v5 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11973/*"SAVEKEY_TerminalConquestInfos"*/, v5, 0);
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11972/*"SAVEKEY_TerminalConquestInfoDisp"*/, v8->static_fields->eventConquestInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAD7 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11974/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    byte_596DAD7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11974/*"SAVEKEY_TerminalCraftInfoDisp"*/, v3->static_fields->eventCraftInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *eventHarvestGrowthInfo; // x19
  System_String_o *v5; // x0

  if ( (byte_596DAD8 & 1) == 0 )
  {
    sub_2213A60(&EventHarvestGrowthInfo_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11975/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    byte_596DAD8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = (Il2CppObject *)v3->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, v1, v2);
      eventHarvestGrowthInfo = (Il2CppObject *)TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (Il2CppObject *)sub_2213CCC(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0);
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v1, v2);
  v5 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11975/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v5, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v6; // x0

  if ( (byte_596DAD3 & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_14268/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_596DAD3 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596CFDA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFDA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v3, v1, v2);
    if ( !byte_596CFDA )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CFDA = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
      v4 = TerminalPramsManager_TypeInfo;
    }
    BeforeEventSubmarineSaveData_k__BackingField = (Il2CppObject *)v4->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v1, v2);
    v6 = JsonManager__toJson(BeforeEventSubmarineSaveData_k__BackingField, 0, 0, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_14268/*"TerminalBeforeEventSubmarinePointData"*/, v6, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAE0 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11977/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_596DAE0 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D5E6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5E6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11977/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v3->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DADF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11978/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    byte_596DADF = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_596D8C0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D8C0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11978/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v3->static_fields->_SelectedStoryQuestId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  if ( (byte_596DAD0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_14288/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_2213A60(&StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/);
    byte_596DAD0 = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/, terminalTransitionInfo->fields.missionId, 0);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_14288/*"TerminalTransitionInfoVoiceAssetName"*/,
      terminalTransitionInfo->fields.voiceAssetName,
      0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__UpdateDispState(WarEntity_o *warEntity, const MethodInfo *method)
{
  __int64 v2; // x2
  bool IsFolder; // w8
  int v5; // w9
  TerminalPramsManager_c *v6; // x0
  int v7; // w19

  if ( (byte_596DABD & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DABD = 1;
  }
  if ( warEntity )
  {
    IsFolder = WarEntity__IsFolder(warEntity, 0);
    v5 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
    if ( IsFolder )
    {
      if ( !v5 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      if ( !byte_596CEB4 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596CEB4 = 1;
      }
      v6 = TerminalPramsManager_TypeInfo;
      v7 = 3;
    }
    else
    {
      if ( !v5 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      if ( !byte_596CEB4 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596CEB4 = 1;
      }
      v6 = TerminalPramsManager_TypeInfo;
      v7 = 2;
    }
  }
  else
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    if ( !byte_596CEB4 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CEB4 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    v7 = 1;
  }
  if ( !*(&v6->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v6, method, v2);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_DispState_k__BackingField = v7;
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__UpdateEventRaidDefeatedEffectInfo(int32_t eventId, int32_t day, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0
  __int64 v6; // x8
  System_Collections_Generic_List_int__o *v7; // x21
  __int64 v8; // x2
  __int64 v9; // x8
  Il2CppClass *klass; // x8
  _QWORD *v11; // x9
  __int64 entries_low; // x10
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596DB0E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB0E = 1;
  }
  value = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day, method);
  if ( !byte_596DB67 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB67 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day, method);
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  v6 = *(_QWORD *)&v5[2].fields._entries->m_Items[18].fields.hashCode;
  if ( !v6 )
    goto LABEL_30;
  v5 = *(System_Collections_Generic_Dictionary_int__object__o **)(v6 + 16);
  if ( !v5 )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          v5,
          eventId,
          &value,
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v7;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day, v8);
    if ( !byte_596DB67 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB67 = 1;
    }
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&day, v8);
      v5 = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    }
    v9 = *(_QWORD *)&v5[2].fields._entries->m_Items[18].fields.hashCode;
    if ( v9 )
    {
      v5 = *(System_Collections_Generic_Dictionary_int__object__o **)(v9 + 16);
      if ( v5 )
      {
        System_Collections_Generic_Dictionary_int__object___Add(
          v5,
          eventId,
          value,
          (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_2213CDC(v5, *(_QWORD *)&day);
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
LABEL_24:
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  klass = value[1].klass;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(value[1].monitor);
  if ( !klass )
    goto LABEL_30;
  entries_low = SLODWORD(v5->fields._entries);
  if ( (unsigned int)entries_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v5,
      day,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(v5->fields._entries) = entries_low + 1;
    *((_DWORD *)&klass->_1.byval_arg.data + entries_low) = day;
  }
}


int32_t TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9A0 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9A0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_AfterActionFocusQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_AutoExRoomType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA82 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA82 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_AutoExRoomType_k__BackingField;
}


BattleSetupInfo_o *TerminalPramsManager__get_BattleSetupKeep(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9C2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9C2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BattleSetupKeep_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeClearQuest(const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  Il2CppClass *klass; // x8
  __int64 v5; // x8
  Il2CppClass *v6; // x8
  __int64 v7; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v9; // x0

  if ( (byte_596D9FC & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D9FC = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v2, v3);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v2, v3);
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[1].fields.sendData->klass;
    if ( !klass )
      goto LABEL_31;
    v5 = *(_QWORD *)&klass->_2.static_fields_size;
    if ( !v5 )
      goto LABEL_31;
    if ( *(_DWORD *)(v5 + 420) )
    {
      if ( !HIDWORD(Instance[2].klass) )
        j_il2cpp_runtime_class_init_0(Instance, v2, v3);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v2, v3);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v6 = Instance[1].fields.sendData->klass;
      if ( v6 )
      {
        v7 = *(_QWORD *)&v6->_2.static_fields_size;
        if ( v7 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v7 + 420);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_31:
      sub_2213CDC(Instance, v2);
    }
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_QuestId_k__BackingField = &v9->static_fields->_QuestId_k__BackingField;
  return *p_QuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeEventActivityPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA17 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA17 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BeforeEventActivityPoint_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeEventActivityPointGauge(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA19 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA19 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
}


EventSaveData_o *TerminalPramsManager__get_BeforeEventSubmarineSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA1D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA1D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeQuestStartWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA9A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA9A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BeforeQuestStartWarId_k__BackingField;
}


int64_t TerminalPramsManager__get_BeforeTimeEventDailyPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA0B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA0B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
}


int32_t TerminalPramsManager__get_BlankEarthAfterActionFocusSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA3F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA3F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField;
}


int32_t TerminalPramsManager__get_BlankEarthRank(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA43 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA43 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BlankEarthRank_k__BackingField;
}


int32_t TerminalPramsManager__get_BlankEarthSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA3D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA3D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BlankEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *TerminalPramsManager__get_BlankEarthTransformData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA41 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA41 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_BlankEarthTransformData_k__BackingField;
}


int32_t TerminalPramsManager__get_CaldeaGateFolderFocusWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA59 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA59 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
}


CommonUI_CampaignBonusData_array *TerminalPramsManager__get_CampaignBonus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9E0 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9E0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_CampaignBonus_k__BackingField;
}


CommonUI_CampaignDirectBonusData_array *TerminalPramsManager__get_CampaignDirectBonus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9E2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9E2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_CampaignDirectBonus_k__BackingField;
}


System_String_o *TerminalPramsManager__get_ClearEventQuestIds(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA15 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA15 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_ClearEventQuestIds_k__BackingField;
}


CommonUI_LastChallengeQuestInfo_o *TerminalPramsManager__get_ContinueDecideLastChallengeQuestInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAAE & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAAE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_ContinueDecideLastChallengeQuestInfo_k__BackingField;
}


int32_t TerminalPramsManager__get_CurrentWaveNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA5D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA5D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_CurrentWaveNum_k__BackingField;
}


int32_t TerminalPramsManager__get_DataLostBattleEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9CE & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9CE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_DataLostBattleEventId_k__BackingField;
}


float TerminalPramsManager__get_DataLostBattleResetFadeInTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9D6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9D6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_DataLostBattleResetFadeInTime_k__BackingField;
}


int32_t TerminalPramsManager__get_DataLostBattleWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9D0 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9D0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_DataLostBattleWarId_k__BackingField;
}


bool TerminalPramsManager__get_Debug_IsBuildInfoDisp(const MethodInfo *method)
{
  return 0;
}


bool TerminalPramsManager__get_Debug_IsDummyErrorSelect(const MethodInfo *method)
{
  return 0;
}


bool TerminalPramsManager__get_Debug_IsQuestReleaseAll(const MethodInfo *method)
{
  return 0;
}


bool TerminalPramsManager__get_Debug_IsSpeedUp(const MethodInfo *method)
{
  return 0;
}


bool TerminalPramsManager__get_Debug_IsWarStartActionSkip(const MethodInfo *method)
{
  return 0;
}


int32_t TerminalPramsManager__get_DispState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D97E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D97E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_DispState_k__BackingField;
}


int64_t TerminalPramsManager__get_EndTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9C4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9C4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EndTime_k__BackingField;
}


int32_t TerminalPramsManager__get_EventActionQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9E4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9E4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventActionQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_EventActivityPointEffectState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA1B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA1B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventActivityPointEffectState_k__BackingField;
}


int32_t TerminalPramsManager__get_EventBoardGameSquareIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA25 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA25 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventBoardGameSquareIndex_k__BackingField;
}


int32_t TerminalPramsManager__get_EventDailyPointEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA0D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA0D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventDailyPointEventId_k__BackingField;
}


int32_t TerminalPramsManager__get_EventDailyPointItem(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA09 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA09 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventDailyPointItem_k__BackingField;
}


int32_t TerminalPramsManager__get_EventMuralId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9AE & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9AE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventMuralId_k__BackingField;
}


EventRaidDefeatedEffectInfo_o *TerminalPramsManager__get_EventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA21 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA21 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
}


int32_t TerminalPramsManager__get_EventUIEffectClearQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA4D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA4D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventUIEffectClearQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_EventUiWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA9C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA9C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_EventUiWarId_k__BackingField;
}


System_Collections_Generic_HashSet_Dictionary_int__int___o *TerminalPramsManager__get_ForcePlayEventTutorialArray(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAA6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAA6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
}


int32_t TerminalPramsManager__get_FriendshipQuestDialogOpenId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA90 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA90 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_FriendshipQuestDialogOpenId_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoExRoom(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA80 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA80 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoExRoom_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoExRoomWin(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA84 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA84 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoExRoomWin_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA76 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA76 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoFolder_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoNoSe(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA7A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA7A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoNoSe_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoOpenMasterMission(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAB5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAB5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->mIsAutoOpenMasterMission;
}


bool TerminalPramsManager__get_IsAutoOpenMasterMissionOnExRoomQuest(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA7C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA7C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoOpenMasterMissionOnExRoomQuest_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoResume(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA70 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA70 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoResume_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoShortcut(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA72 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA72 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoShortcut_k__BackingField;
}


bool TerminalPramsManager__get_IsBackQuestBoardDisable(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA98 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA98 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsBackQuestBoardDisable_k__BackingField;
}


bool TerminalPramsManager__get_IsBlankEarthShortcutMoving(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA45 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA45 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsBlankEarthShortcutMoving_k__BackingField;
}


bool TerminalPramsManager__get_IsCheckHomeExpirationDateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA7E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA7E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->isCheckHomeExpirationDateEventMap;
}


bool TerminalPramsManager__get_IsDataLostBattleAutoReset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9CC & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9CC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDataLostBattleAutoReset_k__BackingField;
}


bool TerminalPramsManager__get_IsDataLostBattleNoticePause(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9D8 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9D8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDataLostBattleNoticePause_k__BackingField;
}


bool TerminalPramsManager__get_IsDataLostBattleResetFadeIn(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9D4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9D4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField;
}


bool TerminalPramsManager__get_IsDirectTransition(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA55 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA55 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDirectTransition_k__BackingField;
}


bool TerminalPramsManager__get_IsDispDone_AutoWebView(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9A2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9A2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDispDone_AutoWebView_k__BackingField;
}


bool TerminalPramsManager__get_IsDispDone_UIStandFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9A4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9A4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDispDone_UIStandFigure_k__BackingField;
}


bool TerminalPramsManager__get_IsDispOnly(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9B6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9B6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDispOnly_k__BackingField;
}


bool TerminalPramsManager__get_IsDispUIStandFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9A6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9A6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDispUIStandFigure_k__BackingField;
}


bool TerminalPramsManager__get_IsDoneShortcut(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D98C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D98C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsDoneShortcut_k__BackingField;
}


bool TerminalPramsManager__get_IsErrorDialogReturnTerminal(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAA0 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAA0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsErrorDialogReturnTerminal_k__BackingField;
}


bool TerminalPramsManager__get_IsEventBoardGameDiceBtnActive(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA27 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA27 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField;
}


bool TerminalPramsManager__get_IsFirstFadeMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAAA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAAA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsFirstFadeMap_k__BackingField;
}


bool TerminalPramsManager__get_IsForceFocusTerminalQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D994 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D994 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsForceFocusTerminalQuestId_k__BackingField;
}


bool TerminalPramsManager__get_IsFromRecollectionBoard(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D992 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D992 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsFromRecollectionBoard_k__BackingField;
}


bool TerminalPramsManager__get_IsInvisibleConnectAndLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA68 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA68 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->isInvisibleConnectAndLoad;
}


bool TerminalPramsManager__get_IsLoadingWebView(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAAC & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAAC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsLoadingWebView_k__BackingField;
}


bool TerminalPramsManager__get_IsMainInterludeWarClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9AC & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9AC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsMainInterludeWarClear_k__BackingField;
}


bool TerminalPramsManager__get_IsMapReturnFolder(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA74 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA74 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsMapReturnFolder_k__BackingField;
}


bool TerminalPramsManager__get_IsMoveFolderByQuestAfterAction(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA78 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA78 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField;
}


bool TerminalPramsManager__get_IsMoveToGrandQuestClassSelect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAA4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAA4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField;
}


bool TerminalPramsManager__get_IsNoResumeFromChapterStart(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAA8 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAA8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsNoResumeFromChapterStart_k__BackingField;
}


bool TerminalPramsManager__get_IsOrdealCallWarClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9AA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9AA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsOrdealCallWarClear_k__BackingField;
}


bool TerminalPramsManager__get_IsPart2FinalChapter(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA61 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA61 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPart2FinalChapter_k__BackingField;
}


bool TerminalPramsManager__get_IsPhaseClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9B4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9B4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPhaseClear_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayEventBoardGameArrivalEffectAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9BA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9BA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayEventBoardGameDiceBtnActiveEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA29 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA29 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayGetEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9DC & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9DC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayGetEffect_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayScriptWithMap(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9B8 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9B8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayScriptWithMap_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayTerminalEffectDisappear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA37 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA37 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField;
}


int32_t TerminalPramsManager__get_IsPlayTerminalEffectDisappearWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA39 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA39 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayTerminalEffectNt2AfterAction(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA3B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA3B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayedEntryBanner(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9DA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9DA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsPlayedEntryBanner_k__BackingField;
}


bool TerminalPramsManager__get_IsQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9B2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9B2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsQuestClear_k__BackingField;
}


bool TerminalPramsManager__get_IsScriptDisp(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9BC & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9BC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsScriptDisp_k__BackingField;
}


bool TerminalPramsManager__get_IsSkipNoticeLoginQuestAtOnce(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA96 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA96 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField;
}


bool TerminalPramsManager__get_IsStopMasterFaceOverwrite(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9D2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9D2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsStopMasterFaceOverwrite_k__BackingField;
}


bool TerminalPramsManager__get_IsTopLastIdxNextBoardRequest(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA86 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA86 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField;
}


bool TerminalPramsManager__get_IsTransFromOrdealCall(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA53 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA53 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsTransFromOrdealCall_k__BackingField;
}


bool TerminalPramsManager__get_IsTransOrdealCall(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA51 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA51 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsTransOrdealCall_k__BackingField;
}


bool TerminalPramsManager__get_IsTransitionToTerminalAfterMovie(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA63 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA63 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField;
}


bool TerminalPramsManager__get_IsWarBoardClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9C6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9C6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsWarBoardClear_k__BackingField;
}


bool TerminalPramsManager__get_IsWarClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9A8 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9A8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsWarClear_k__BackingField;
}


EventInfoJobLevelSnapshot_o *TerminalPramsManager__get_JobLevelSnapshot(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9E6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9E6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_JobLevelSnapshot_k__BackingField;
}


int32_t TerminalPramsManager__get_LastPlayedFreeQuestSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D99C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D99C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
}


int32_t TerminalPramsManager__get_LastPlayedQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D99A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D99A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayedQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_LastSelectQuestIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D99E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D99E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_LastSelectQuestIndex_k__BackingField;
}


int32_t TerminalPramsManager__get_LimitCountUnSealQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA92 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA92 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_LimitCountUnSealQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_MapModelClearPhaseCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9CA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9CA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_MapModelClearPhaseCount_k__BackingField;
}


int32_t TerminalPramsManager__get_MapModelClearQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9C8 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9C8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_MapModelClearQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_MasterMissionTargetType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAB7 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAB7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_MasterMissionTargetType_k__BackingField;
}


int32_t TerminalPramsManager__get_MessageDispType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9BE & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9BE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_MessageDispType_k__BackingField;
}


System_String_o *TerminalPramsManager__get_NoticeLastModified(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA4B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA4B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_NoticeLastModified_k__BackingField;
}


UserEventPointEntity_array *TerminalPramsManager__get_OldUserEventPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA5F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA5F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_OldUserEventPoint_k__BackingField;
}


int32_t TerminalPramsManager__get_OverwriteClearedWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA65 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA65 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_OverwriteClearedWarId_k__BackingField;
}


int32_t TerminalPramsManager__get_PhaseCnt(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D98A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D98A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_PhaseCnt_k__BackingField;
}


int32_t TerminalPramsManager__get_PlanetEarthSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA47 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA47 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_PlanetEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *TerminalPramsManager__get_PlanetEarthTransformData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA49 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA49 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_PlanetEarthTransformData_k__BackingField;
}


bool TerminalPramsManager__get_PlayHappinessCounterEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9B0 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9B0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_PlayHappinessCounterEffect_k__BackingField;
}


System_String_o *TerminalPramsManager__get_PlayedTerminalEffects(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA35 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA35 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_PlayedTerminalEffects_k__BackingField;
}


int32_t TerminalPramsManager__get_PlayerGenderType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9DE & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9DE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_PlayerGenderType_k__BackingField;
}


QuestFocusStateManager_o *TerminalPramsManager__get_QuestFocusStateManager(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  QuestFocusStateManager_o *v4; // x19
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  TerminalPramsManager_c *v12; // x0
  MissionNaviTransitionBoardItem_o *p_questFocusStateManager; // x0

  if ( (byte_596DA67 & 1) == 0 )
  {
    sub_2213A60(&QuestFocusStateManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA67 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->questFocusStateManager )
  {
    v4 = (QuestFocusStateManager_o *)sub_2213CCC(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v4, 0);
    v12 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
      v12 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (MissionNaviTransitionBoardItem_o *)&v12->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (MissionNaviTransitionBoardItem_c *)v4;
    sub_2213A04(p_questFocusStateManager, (int32_t)v4, v6, v7, v8, v9, v10, v11);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->questFocusStateManager;
}


int32_t TerminalPramsManager__get_QuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D988 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D988 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_QuestMessageScriptQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA88 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA88 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestMessageScriptQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_QuestMessageScriptQuestPhase(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA8A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA8A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestMessageScriptQuestPhase_k__BackingField;
}


System_Collections_Generic_Dictionary_int__int__o *TerminalPramsManager__get_QuestRandomGroupList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA33 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA33 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestRandomGroupList_k__BackingField;
}


int32_t TerminalPramsManager__get_QuestReleaseFocusQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D996 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D996 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestReleaseFocusQuestId_k__BackingField;
}


System_String_o *TerminalPramsManager__get_QuestWindowMessage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9C0 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9C0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_QuestWindowMessage_k__BackingField;
}


EventInfoRemainingRaidHpData_o *TerminalPramsManager__get_RemainingRaidHpData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA1F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA1F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_RemainingRaidHpData_k__BackingField;
}


System_String_o *TerminalPramsManager__get_SceneMoveQuestClearedInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA4F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA4F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
}


BannerEntity_o *TerminalPramsManager__get_SelectedBannerEntity(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D998 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D998 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SelectedBannerEntity_k__BackingField;
}


int32_t TerminalPramsManager__get_SelectedRecollectionWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D990 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D990 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SelectedRecollectionWarId_k__BackingField;
}


int32_t TerminalPramsManager__get_SelectedStoryQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D98E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D98E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SelectedStoryQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_ShopFocusItemId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA57 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA57 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_ShopFocusItemId_k__BackingField;
}


SpecifiedSceneInfo_o *TerminalPramsManager__get_SpecifiedChangeSceneInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9EA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9EA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
}


int32_t TerminalPramsManager__get_SpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D986 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D986 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SpotId_k__BackingField;
}


int32_t TerminalPramsManager__get_SummonId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D984 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D984 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SummonId_k__BackingField;
}


int32_t TerminalPramsManager__get_SummonType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D982 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D982 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_SummonType_k__BackingField;
}


BattleScriptRootComponent_TalkScriptInfo_o *TerminalPramsManager__get_TalkScriptInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA8C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA8C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_TalkScriptInfo_k__BackingField;
}


int32_t TerminalPramsManager__get_TerminalTopFocusWarIdByShortcut(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA5B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA5B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_TerminalTopFocusWarIdByShortcut_k__BackingField;
}


int32_t TerminalPramsManager__get_TimeStatusEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA11 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA11 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_TimeStatusEventId_k__BackingField;
}


int32_t TerminalPramsManager__get_TimeStatusLoopCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA13 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA13 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_TimeStatusLoopCount_k__BackingField;
}


System_String_o *TerminalPramsManager__get_TransitionScrollTabName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA9E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA9E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_TransitionScrollTabName_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_UseAddRewardItemRewardInfos(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAA2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAA2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
}


WarBoardDataEntity_o *TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA2B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA2B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_WarBoardData_k__BackingField;
}


int32_t TerminalPramsManager__get_WarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D980 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D980 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_WarId_k__BackingField;
}


float TerminalPramsManager__get_ZoomSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  MapZoom_c *v4; // x8
  float ZOOM_DEFAULT; // s8

  if ( (byte_596D9E8 & 1) == 0 )
  {
    sub_2213A60(&MapZoom_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9E8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->mZoomSize <= 0.0 )
  {
    v4 = MapZoom_TypeInfo;
    if ( !*(&MapZoom_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo, v1, v2);
      v4 = MapZoom_TypeInfo;
      v3 = TerminalPramsManager_TypeInfo;
    }
    ZOOM_DEFAULT = v4->static_fields->ZOOM_DEFAULT;
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, v1, v2);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->mZoomSize = ZOOM_DEFAULT;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->mZoomSize;
}


EventDailyPoint_o *TerminalPramsManager__get_eventDailyPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA07 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA07 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_eventDailyPoint_k__BackingField;
}


EventPointWinReward_o *TerminalPramsManager__get_eventPointWinReward(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9F2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9F2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_eventPointWinReward_k__BackingField;
}


int32_t TerminalPramsManager__get_eventPointWinType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9F0 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9F0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_eventPointWinType_k__BackingField;
}


EventRaceBoostInfo_o *TerminalPramsManager__get_eventRaceBoost(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9F4 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9F4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_eventRaceBoost_k__BackingField;
}


EventTowerReward_o *TerminalPramsManager__get_eventTowerReward(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9FD & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9FD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_eventTowerReward_k__BackingField;
}


bool TerminalPramsManager__get_isFortificationCheck(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA2F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA2F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isFortificationCheck_k__BackingField;
}


bool TerminalPramsManager__get_isIncomingCall(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA23 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA23 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isIncomingCall_k__BackingField;
}


bool TerminalPramsManager__get_isPlayRiverActionCheck(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA31 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA31 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isPlayRiverActionCheck_k__BackingField;
}


bool TerminalPramsManager__get_isQuestRewardSetted(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA6E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA6E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isQuestRewardSetted_k__BackingField;
}


bool TerminalPramsManager__get_isWarBoardPlay(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA2D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA2D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isWarBoardPlay_k__BackingField;
}


LimitImageAnnounce_array *TerminalPramsManager__get_limitImageAnnounces(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA8E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA8E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_limitImageAnnounces_k__BackingField;
}


UserSuperBossEntity_array *TerminalPramsManager__get_oldPersonalBoss(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9EE & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9EE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_oldPersonalBoss_k__BackingField;
}


int32_t TerminalPramsManager__get_oldQuestIdForHeaderEvent(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9FA & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9FA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_oldQuestIdForHeaderEvent_k__BackingField;
}


UserSuperBossEntity_array *TerminalPramsManager__get_oldSuperBoss(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9EC & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9EC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_oldSuperBoss_k__BackingField;
}


CostumeReleaseAnnounce_array *TerminalPramsManager__get_questClearCostumeGet(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9F8 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9F8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_questClearCostumeGet_k__BackingField;
}


CostumeReleaseAnnounce_array *TerminalPramsManager__get_questClearCostumeRelease(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9F6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9F6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_questClearCostumeRelease_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_resultBoostItemRewardInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA01 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA01 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_resultBoostItemRewardInfo_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_resultEventBoardGameTokenRewardInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA03 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA03 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_resultEventTowerRewardInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596D9FF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9FF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_resultEventTowerRewardInfo_k__BackingField;
}


TimeStatusRecord_o *TerminalPramsManager__get_timeStatusRecord(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA05 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA05 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_timeStatusRecord_k__BackingField;
}


UpdateProfileDialogInfoEntity_array *TerminalPramsManager__get_updateProfileInfoEntity(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA94 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA94 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_updateProfileInfoEntity_k__BackingField;
}


WarClearReward_array *TerminalPramsManager__get_warClearReward(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DA0F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA0F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_warClearReward_k__BackingField;
}


int32_t TerminalPramsManager__mfGetSceneStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_596DAC3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAC3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->meSceneStatus;
}


void TerminalPramsManager__mfSetSceneStatus(int32_t eSceneStatus, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DAC2 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAC2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->meSceneStatus = eSceneStatus;
}


void TerminalPramsManager__set_AfterActionFocusQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9A1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9A1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_AfterActionFocusQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_AutoExRoomType(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA83 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA83 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_AutoExRoomType_k__BackingField = value;
}


void TerminalPramsManager__set_BattleSetupKeep(BattleSetupInfo_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596D9C3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9C3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_BattleSetupKeep_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA18 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA18 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BeforeEventActivityPoint_k__BackingField = value;
}


void TerminalPramsManager__set_BeforeEventActivityPointGauge(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA1A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA1A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BeforeEventActivityPointGauge_k__BackingField = value;
}


void TerminalPramsManager__set_BeforeEventSubmarineSaveData(EventSaveData_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA1E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA1E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_BeforeEventSubmarineSaveData_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_BeforeQuestStartWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA9B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA9B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BeforeQuestStartWarId_k__BackingField = value;
}


void TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA0C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA0C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthAfterActionFocusSpotId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA40 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA40 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthRank(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA44 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA44 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BlankEarthRank_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthSpotId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA3E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA3E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_BlankEarthSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthTransformData(BlankEarthTransform_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA42 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA42 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_BlankEarthTransformData_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_CaldeaGateFolderFocusWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA5A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA5A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = value;
}


void TerminalPramsManager__set_CampaignBonus(CommonUI_CampaignBonusData_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596D9E1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9E1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_CampaignBonus_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596D9E3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9E3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA16 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA16 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_ClearEventQuestIds_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_ContinueDecideLastChallengeQuestInfo(
        CommonUI_LastChallengeQuestInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DAAF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAAF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ContinueDecideLastChallengeQuestInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_ContinueDecideLastChallengeQuestInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_CurrentWaveNum(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA5E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA5E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_CurrentWaveNum_k__BackingField = value;
}


void TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9CF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9CF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DataLostBattleEventId_k__BackingField = value;
}


void TerminalPramsManager__set_DataLostBattleResetFadeInTime(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_596D9D7 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9D7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = value;
}


void TerminalPramsManager__set_DataLostBattleWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9D1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9D1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DataLostBattleWarId_k__BackingField = value;
}


void TerminalPramsManager__set_Debug_IsBuildInfoDisp(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA6D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA6D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->mDebug_IsBuildInfoDisp = value;
}


void TerminalPramsManager__set_Debug_IsDummyErrorSelect(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA6C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA6C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->mDebug_IsDummyErrorSelect = value;
}


void TerminalPramsManager__set_Debug_IsQuestReleaseAll(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA6A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA6A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->mDebug_IsQuestReleaseAll = value;
}


void TerminalPramsManager__set_Debug_IsWarStartActionSkip(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA6B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA6B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->mDebug_IsWarStartActionSkip = value;
}


void TerminalPramsManager__set_DispState(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D97F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D97F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DispState_k__BackingField = value;
}


void TerminalPramsManager__set_EndTime(int64_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9C5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9C5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EndTime_k__BackingField = value;
}


void TerminalPramsManager__set_EventActionQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9E5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9E5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventActionQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_EventActivityPointEffectState(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA1C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA1C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventActivityPointEffectState_k__BackingField = value;
}


void TerminalPramsManager__set_EventBoardGameSquareIndex(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA26 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA26 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventBoardGameSquareIndex_k__BackingField = value;
}


void TerminalPramsManager__set_EventDailyPointEventId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA0E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA0E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventDailyPointEventId_k__BackingField = value;
}


void TerminalPramsManager__set_EventDailyPointItem(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA0A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA0A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventDailyPointItem_k__BackingField = value;
}


void TerminalPramsManager__set_EventMuralId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9AF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9AF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventMuralId_k__BackingField = value;
}


void TerminalPramsManager__set_EventRaidDefeatedEffectInfo(
        EventRaidDefeatedEffectInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA22 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA22 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA4E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA4E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventUIEffectClearQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_EventUiWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA9D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA9D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EventUiWarId_k__BackingField = value;
}


void TerminalPramsManager__set_ForcePlayEventTutorialArray(
        System_Collections_Generic_HashSet_Dictionary_int__int___o *value,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DAA7 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAA7 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ForcePlayEventTutorialArray_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_ForcePlayEventTutorialArray_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_FriendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA91 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA91 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_FriendshipQuestDialogOpenId_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoExRoom(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA81 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA81 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoExRoom_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoExRoomWin(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA85 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA85 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoExRoomWin_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoFolder(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA77 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA77 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoFolder_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoNoSe(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA7B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA7B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoNoSe_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoOpenMasterMission(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DAB6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAB6 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596ABDE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596ABDE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_IsAutoResume_k__BackingField = value;
  static_fields->mIsAutoOpenMasterMission = value;
}


void TerminalPramsManager__set_IsAutoOpenMasterMissionOnExRoomQuest(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA7D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA7D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoOpenMasterMissionOnExRoomQuest_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoResume(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA71 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA71 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoShortcut(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA73 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA73 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoShortcut_k__BackingField = value;
}


void TerminalPramsManager__set_IsBackQuestBoardDisable(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA99 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA99 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsBackQuestBoardDisable_k__BackingField = value;
}


void TerminalPramsManager__set_IsBlankEarthShortcutMoving(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA46 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA46 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = value;
}


void TerminalPramsManager__set_IsCheckHomeExpirationDateEventMap(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA7F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA7F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->isCheckHomeExpirationDateEventMap = value;
}


void TerminalPramsManager__set_IsDataLostBattleAutoReset(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9CD & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9CD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField = value;
}


void TerminalPramsManager__set_IsDataLostBattleNoticePause(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9D9 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9D9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleNoticePause_k__BackingField = value;
}


void TerminalPramsManager__set_IsDataLostBattleResetFadeIn(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9D5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9D5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = value;
}


void TerminalPramsManager__set_IsDirectTransition(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA56 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA56 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDirectTransition_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispDone_AutoWebView(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9A3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9A3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDispDone_AutoWebView_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispDone_UIStandFigure(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9A5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9A5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDispDone_UIStandFigure_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispOnly(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9B7 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9B7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDispOnly_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispUIStandFigure(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9A7 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9A7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDispUIStandFigure_k__BackingField = value;
}


void TerminalPramsManager__set_IsDoneShortcut(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D98D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D98D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDoneShortcut_k__BackingField = value;
}


void TerminalPramsManager__set_IsErrorDialogReturnTerminal(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DAA1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAA1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsErrorDialogReturnTerminal_k__BackingField = value;
}


void TerminalPramsManager__set_IsEventBoardGameDiceBtnActive(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA28 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA28 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = value;
}


void TerminalPramsManager__set_IsFirstFadeMap(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DAAB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAAB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsFirstFadeMap_k__BackingField = value;
}


void TerminalPramsManager__set_IsForceFocusTerminalQuestId(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D995 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D995 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_IsFromRecollectionBoard(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D993 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D993 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsFromRecollectionBoard_k__BackingField = value;
}


void TerminalPramsManager__set_IsInvisibleConnectAndLoad(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA69 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA69 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->isInvisibleConnectAndLoad = value;
}


void TerminalPramsManager__set_IsLoadingWebView(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DAAD & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAAD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsLoadingWebView_k__BackingField = value;
}


void TerminalPramsManager__set_IsMainInterludeWarClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9AD & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9AD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsMainInterludeWarClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsMapReturnFolder(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA75 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA75 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsMapReturnFolder_k__BackingField = value;
}


void TerminalPramsManager__set_IsMoveFolderByQuestAfterAction(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA79 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA79 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = value;
}


void TerminalPramsManager__set_IsMoveToGrandQuestClassSelect(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DAA5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAA5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = value;
}


void TerminalPramsManager__set_IsNoResumeFromChapterStart(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DAA9 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAA9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsNoResumeFromChapterStart_k__BackingField = value;
}


void TerminalPramsManager__set_IsOrdealCallWarClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9AB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9AB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsOrdealCallWarClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsPart2FinalChapter(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA62 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA62 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPart2FinalChapter_k__BackingField = value;
}


void TerminalPramsManager__set_IsPhaseClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9B5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9B5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPhaseClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayEventBoardGameArrivalEffectAuto(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9BB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9BB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayEventBoardGameDiceBtnActiveEffect(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA2A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA2A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayGetEffect(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9DD & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9DD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayGetEffect_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayScriptWithMap(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9B9 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9B9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayScriptWithMap_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayTerminalEffectDisappear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA38 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA38 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayTerminalEffectDisappearWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA3A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA3A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayTerminalEffectNt2AfterAction(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA3C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA3C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayedEntryBanner(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9DB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9DB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsPlayedEntryBanner_k__BackingField = value;
}


void TerminalPramsManager__set_IsQuestClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9B3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9B3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsQuestClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsScriptDisp(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9BD & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9BD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsScriptDisp_k__BackingField = value;
}


void TerminalPramsManager__set_IsSkipNoticeLoginQuestAtOnce(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA97 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA97 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = value;
}


void TerminalPramsManager__set_IsStopMasterFaceOverwrite(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9D3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9D3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = value;
}


void TerminalPramsManager__set_IsTopLastIdxNextBoardRequest(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA87 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA87 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = value;
}


void TerminalPramsManager__set_IsTransFromOrdealCall(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA54 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA54 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsTransFromOrdealCall_k__BackingField = value;
}


void TerminalPramsManager__set_IsTransOrdealCall(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA52 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA52 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsTransOrdealCall_k__BackingField = value;
}


void TerminalPramsManager__set_IsTransitionToTerminalAfterMovie(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA64 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA64 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField = value;
}


void TerminalPramsManager__set_IsWarBoardClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9C7 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9C7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsWarBoardClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsWarClear(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9A9 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9A9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsWarClear_k__BackingField = value;
}


void TerminalPramsManager__set_JobLevelSnapshot(EventInfoJobLevelSnapshot_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596D9E7 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9E7 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_JobLevelSnapshot_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_JobLevelSnapshot_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_LastPlayedFreeQuestSpotId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D99D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D99D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_LastPlayedQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D99B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D99B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayedQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_LastSelectQuestIndex(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D99F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D99F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastSelectQuestIndex_k__BackingField = value;
}


void TerminalPramsManager__set_LimitCountUnSealQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA93 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA93 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LimitCountUnSealQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_MapModelClearPhaseCount(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9CB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9CB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_MapModelClearPhaseCount_k__BackingField = value;
}


void TerminalPramsManager__set_MapModelClearQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9C9 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9C9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_MapModelClearQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_MasterMissionTargetType(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DAB8 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAB8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_MasterMissionTargetType_k__BackingField = value;
}


void TerminalPramsManager__set_MessageDispType(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9BF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9BF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_MessageDispType_k__BackingField = value;
}


void TerminalPramsManager__set_NoticeLastModified(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA4C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA4C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_NoticeLastModified_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_OldUserEventPoint(UserEventPointEntity_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA60 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA60 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_OldUserEventPoint_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_OverwriteClearedWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA66 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA66 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_OverwriteClearedWarId_k__BackingField = value;
}


void TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D98B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D98B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_PhaseCnt_k__BackingField = value;
}


void TerminalPramsManager__set_PlanetEarthSpotId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA48 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA48 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_PlanetEarthSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_PlanetEarthTransformData(BlankEarthTransform_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA4A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA4A = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_PlanetEarthTransformData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_PlanetEarthTransformData_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_PlayHappinessCounterEffect(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9B1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9B1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_PlayHappinessCounterEffect_k__BackingField = value;
}


void TerminalPramsManager__set_PlayedTerminalEffects(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA36 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA36 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_PlayedTerminalEffects_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9DF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9DF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_PlayerGenderType_k__BackingField = value;
}


void TerminalPramsManager__set_QuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D989 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D989 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestId_k__BackingField = value;
}


void TerminalPramsManager__set_QuestMessageScriptQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA89 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA89 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_QuestMessageScriptQuestPhase(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA8B & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA8B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = value;
}


void TerminalPramsManager__set_QuestRandomGroupList(
        System_Collections_Generic_Dictionary_int__int__o *value,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  MissionNaviTransitionBoardItem_o *static_fields; // x8

  if ( (byte_596DA34 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA34 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (MissionNaviTransitionBoardItem_o *)v9->static_fields;
  static_fields[3].klass = (MissionNaviTransitionBoardItem_c *)value;
  sub_2213A04(static_fields + 3, (int32_t)value, v2, v3, v4, v5, v6, v7);
}


void TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D997 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D997 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestReleaseFocusQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_QuestWindowMessage(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596D9C1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9C1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_RemainingRaidHpData(EventInfoRemainingRaidHpData_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA20 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA20 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_RemainingRaidHpData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_RemainingRaidHpData_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA50 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA50 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_SceneMoveQuestClearedInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_SelectedBannerEntity(BannerEntity_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596D999 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D999 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D991 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D991 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SelectedRecollectionWarId_k__BackingField = value;
}


void TerminalPramsManager__set_SelectedStoryQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D98F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D98F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SelectedStoryQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_ShopFocusItemId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA58 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA58 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_ShopFocusItemId_k__BackingField = value;
}


void TerminalPramsManager__set_SpecifiedChangeSceneInfo(SpecifiedSceneInfo_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596D9EB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9EB = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D987 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D987 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SpotId_k__BackingField = value;
}


void TerminalPramsManager__set_SummonId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D985 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D985 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SummonId_k__BackingField = value;
}


void TerminalPramsManager__set_SummonType(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D983 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D983 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SummonType_k__BackingField = value;
}


void TerminalPramsManager__set_TalkScriptInfo(
        BattleScriptRootComponent_TalkScriptInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA8D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA8D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_TalkScriptInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_TerminalTopFocusWarIdByShortcut(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA5C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA5C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_TerminalTopFocusWarIdByShortcut_k__BackingField = value;
}


void TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA12 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA12 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_TimeStatusEventId_k__BackingField = value;
}


void TerminalPramsManager__set_TimeStatusLoopCount(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA14 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA14 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_TimeStatusLoopCount_k__BackingField = value;
}


void TerminalPramsManager__set_TransitionScrollTabName(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA9F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA9F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_TransitionScrollTabName_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_UseAddRewardItemRewardInfos(QuestRewardInfo_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DAA3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DAA3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_WarBoardData(WarBoardDataEntity_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA2C & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA2C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_WarBoardData_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D981 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D981 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_WarId_k__BackingField = value;
}


void TerminalPramsManager__set_ZoomSize(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  TerminalPramsManager_c *v5; // x0

  if ( (byte_596D9E9 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9E9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2, v3);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->mZoomSize = value;
}


void TerminalPramsManager__set_eventDailyPoint(EventDailyPoint_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA08 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA08 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_eventDailyPoint_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596D9F3 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9F3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_eventPointWinReward_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9F1 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9F1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_eventPointWinType_k__BackingField = value;
}


void TerminalPramsManager__set_eventRaceBoost(EventRaceBoostInfo_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596D9F5 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9F5 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_eventRaceBoost_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596D9FE & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9FE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_eventTowerReward_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_isFortificationCheck(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA30 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA30 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isFortificationCheck_k__BackingField = value;
}


void TerminalPramsManager__set_isIncomingCall(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA24 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA24 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isIncomingCall_k__BackingField = value;
}


void TerminalPramsManager__set_isPlayRiverActionCheck(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA32 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA32 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isPlayRiverActionCheck_k__BackingField = value;
}


void TerminalPramsManager__set_isQuestRewardSetted(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA6F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA6F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isQuestRewardSetted_k__BackingField = value;
}


void TerminalPramsManager__set_isWarBoardPlay(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596DA2E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA2E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_isWarBoardPlay_k__BackingField = value;
}


void TerminalPramsManager__set_limitImageAnnounces(LimitImageAnnounce_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA8F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA8F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_limitImageAnnounces_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596D9EF & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9EF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_oldPersonalBoss_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0

  if ( (byte_596D9FB & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9FB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = value;
}


void TerminalPramsManager__set_oldSuperBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_596D9ED & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9ED = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_oldSuperBoss_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_questClearCostumeGet(CostumeReleaseAnnounce_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596D9F9 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9F9 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_questClearCostumeGet_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_questClearCostumeRelease(CostumeReleaseAnnounce_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596D9F7 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D9F7 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_questClearCostumeRelease_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_resultBoostItemRewardInfo(QuestRewardInfo_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA02 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA02 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_resultBoostItemRewardInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_resultEventBoardGameTokenRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA04 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA04 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_resultEventTowerRewardInfo(QuestRewardInfo_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  MissionNaviTransitionBoardItem_o *static_fields; // x8

  if ( (byte_596DA00 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA00 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (MissionNaviTransitionBoardItem_o *)v9->static_fields;
  static_fields[2].klass = (MissionNaviTransitionBoardItem_c *)value;
  sub_2213A04(static_fields + 2, (int32_t)value, v2, v3, v4, v5, v6, v7);
}


void TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA06 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA06 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_timeStatusRecord_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA95 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA95 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_updateProfileInfoEntity_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596DA10 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DA10 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_warClearReward_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596DB71 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_ClearData_TypeInfo);
    sub_2213A60(&StringLiteral_13922/*"TERMINAL_CLEAR_REWARD_DISP"*/);
    byte_596DB71 = 1;
  }
  v7 = StringLiteral_13922/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13922/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  __int64 v87; // x1
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  TerminalPramsManager_c *v94; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7

  if ( (byte_596DB6F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB6F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.qClearHeroineInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v3, v4, v5, v6, v7, v8);
  this->fields.questRewardInfos = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.questRewardInfos, 0, v9, v10, v11, v12, v13, v14);
  this->fields.questPhaseRewardInfos = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.questPhaseRewardInfos, 0, v15, v16, v17, v18, v19, v20);
  this->fields.questResultAfterEventRewardInfos = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questResultAfterEventRewardInfos,
    0,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resultEventPanelRewardInfos = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultEventPanelRewardInfos,
    0,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.panelEventPoint = 0;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mOldSuperBoss, 0, v33, v34, v35, v36, v37, v38);
  this->fields.oldPersonalBoss = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.oldPersonalBoss, 0, v39, v40, v41, v42, v43, v44);
  this->fields.evPointWinReward = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.evPointWinReward, 0, v45, v46, v47, v48, v49, v50);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.evRaceBoost, 0, v51, v52, v53, v54, v55, v56);
  this->fields.questClearCostume = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.questClearCostume, 0, v57, v58, v59, v60, v61, v62);
  this->fields.questClearCostumeGetInfo = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questClearCostumeGetInfo,
    0,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.eventTowerReward = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventTowerReward, 0, v69, v70, v71, v72, v73, v74);
  this->fields.resultEventTowerRewardInfo = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultEventTowerRewardInfo,
    0,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.warClearReward = 0;
  this->fields.isDispOnly = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.warClearReward, 0, v81, v82, v83, v84, v85, v86);
  v94 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v87, v88);
    v94 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v94->static_fields;
  this->fields.limitImageAnnounces = 0;
  this->fields.EventActivityPointEffectState = static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.limitImageAnnounces, 0, v88, v89, v90, v91, v92, v93);
  this->fields.isOrdealCallWarClear = 0;
  this->fields.eventMuralId = 0;
  this->fields.playHappinessCounterEffect = 0;
  this->fields.oldUserEventPoint = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.oldUserEventPoint, 0, v96, v97, v98, v99, v100, v101);
  this->fields.UseAddRewardItemRewardInfos = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.UseAddRewardItemRewardInfos,
    0,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
}


void TerminalPramsManager_ClearData___ctor_44212888(
        TerminalPramsManager_ClearData_o *this,
        QuestClearHeroineInfo_o *qcrHeroineInfo,
        QuestRewardInfo_array *qri,
        QuestRewardInfo_array *questPhaseRewardInfos,
        bool qClear,
        bool pclear,
        int32_t lastRaidId,
        int32_t raidId,
        int32_t groupjoin,
        UserSuperBossEntity_array *oldSuperBoss,
        UserSuperBossEntity_array *oldPersonalBoss,
        EventPointWinReward_o *evpWinReward,
        int32_t evpWinType,
        EventRaceBoostInfo_o *evRace,
        CostumeReleaseAnnounce_array *questClearCostumeRelease,
        CostumeReleaseAnnounce_array *questClearCostumeGet,
        EventTowerReward_o *evTowerReward,
        QuestRewardInfo_array *resultEvTowerRewardInfo,
        bool dispOnly,
        WarClearReward_array *warClearRewardIn,
        int32_t eventActivityPointEffectState,
        bool isWarBoardClear,
        BattleDropItem_array *questResultAfterEventRewardInfos,
        BattleDropItem_array *resultEventPanelRewardInfos,
        int32_t panelEventPoint,
        LimitImageAnnounce_array *limitImageAnnounces,
        bool isOrdealCallWarClear,
        int32_t eventMuralId,
        int32_t eventActionQuestId,
        QuestRewardInfo_array *useAddRewardItemRewardInfos,
        const MethodInfo *method)
{
  struct CostumeReleaseAnnounce_array *v31; // x25
  struct CostumeReleaseAnnounce_array *v32; // x28
  struct UserSuperBossEntity_array *v35; // x24
  struct UserSuperBossEntity_array *v40; // x21
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v41; // x0
  const MethodInfo *v42; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v43; // x26
  __int64 v44; // x0
  __int64 v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  bool v52; // w29
  bool v53; // w27
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  struct QuestRewardInfo_array *v114; // x1
  __int64 v115; // x1
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  TerminalPramsManager_c *v122; // x0
  TerminalPramsManager_c *v123; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  System_String_o *v125; // x2
  System_String_o *v126; // x3
  int32_t v127; // w4
  int32_t v128; // w5
  bool v129; // w6
  bool v130; // w7
  __int64 v131; // x1
  System_String_o *v132; // x2
  System_String_o *v133; // x3
  int32_t v134; // w4
  int32_t v135; // w5
  bool v136; // w6
  bool v137; // w7
  TerminalPramsManager_c *v138; // x0
  TerminalPramsManager_c *v139; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  struct WarClearReward_array *v147; // x1
  System_String_o *v148; // x2
  System_String_o *v149; // x3
  int32_t v150; // w4
  int32_t v151; // w5
  bool v152; // w6
  bool v153; // w7
  struct BattleDropItem_array *v154; // x1
  System_String_o *v155; // x2
  System_String_o *v156; // x3
  int32_t v157; // w4
  int32_t v158; // w5
  bool v159; // w6
  bool v160; // w7
  struct BattleDropItem_array *v161; // x1
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  struct LimitImageAnnounce_array *v168; // x1
  __int64 v169; // x1
  System_String_o *v170; // x2
  System_String_o *v171; // x3
  int32_t v172; // w4
  int32_t v173; // w5
  bool v174; // w6
  bool v175; // w7
  TerminalPramsManager_c *v176; // x0
  int v177; // w9
  int v178; // w9
  int v179; // w9
  int v180; // w9
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1
  System_String_o *v182; // x2
  System_String_o *v183; // x3
  int32_t v184; // w4
  int32_t v185; // w5
  bool v186; // w6
  bool v187; // w7
  long double v188; // q0
  struct QuestRewardInfo_array *v189; // x1
  _QWORD *v190; // x20
  __int64 v191; // x8
  __int64 v192; // x0
  __int64 v193; // x0

  v31 = questClearCostumeRelease;
  v32 = questClearCostumeGet;
  v35 = oldSuperBoss;
  v40 = oldPersonalBoss;
  if ( (byte_596DB70 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_QuestRewardInfo___);
    sub_2213A60(&BattleDropItem___TypeInfo);
    sub_2213A60(&CostumeReleaseAnnounce___TypeInfo);
    sub_2213A60(&LimitImageAnnounce___TypeInfo);
    sub_2213A60(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
    sub_2213A60(&QuestRewardInfo___TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&UserSuperBossEntity___TypeInfo);
    sub_2213A60(&WarClearReward___TypeInfo);
    byte_596DB70 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v41 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_2213CCC(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v43 = v41;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_44212148(v41, qcrHeroineInfo, v42);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_2213CDC(v44, v45);
  }
  System_Object___ctor((Il2CppObject *)v41, 0);
  v43->fields.oldUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->fields, 0, v125, v126, v127, v128, v129, v130);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  v52 = qClear;
  v53 = pclear;
  this->fields.qClearHeroineInfo = v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v43, v46, v47, v48, v49, v50, v51);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_2213B20(QuestRewardInfo___TypeInfo, 0);
  this->fields.questRewardInfos = qri;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRewardInfos,
    (int32_t)qri,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_2213B20(QuestRewardInfo___TypeInfo, 0);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questPhaseRewardInfos,
    (int32_t)questPhaseRewardInfos,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.questClear = v52;
  this->fields.phaseClear = v53;
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v35 = (struct UserSuperBossEntity_array *)sub_2213B20(UserSuperBossEntity___TypeInfo, 0);
  this->fields.mOldSuperBoss = v35;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mOldSuperBoss,
    (int32_t)v35,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  if ( !oldPersonalBoss )
    v40 = (struct UserSuperBossEntity_array *)sub_2213B20(UserSuperBossEntity___TypeInfo, 0);
  this->fields.oldPersonalBoss = v40;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.oldPersonalBoss,
    (int32_t)v40,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields.evPointWinReward = evpWinReward;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.evPointWinReward,
    (int32_t)evpWinReward,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.evRaceBoost,
    (int32_t)evRace,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  if ( !questClearCostumeRelease )
    v31 = (struct CostumeReleaseAnnounce_array *)sub_2213B20(CostumeReleaseAnnounce___TypeInfo, 0);
  this->fields.questClearCostume = v31;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questClearCostume,
    (int32_t)v31,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  if ( !questClearCostumeGet )
    v32 = (struct CostumeReleaseAnnounce_array *)sub_2213B20(CostumeReleaseAnnounce___TypeInfo, 0);
  this->fields.questClearCostumeGetInfo = v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questClearCostumeGetInfo,
    (int32_t)v32,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields.eventTowerReward = evTowerReward;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventTowerReward,
    (int32_t)evTowerReward,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  v114 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v114 = (struct QuestRewardInfo_array *)sub_2213B20(QuestRewardInfo___TypeInfo, 0);
  this->fields.resultEventTowerRewardInfo = v114;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultEventTowerRewardInfo,
    (int32_t)v114,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v115, v116);
  if ( !byte_596D5F7 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5F7 = 1;
  }
  v122 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v115, v116);
    v122 = TerminalPramsManager_TypeInfo;
  }
  if ( v122->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !*(&v122->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v122, v115, v116);
    if ( !byte_596D5F7 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5F7 = 1;
    }
    v123 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v115, v116);
      v123 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v123->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_2213B20(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultBoostItemRewardInfo,
    (int32_t)resultBoostItemRewardInfo_k__BackingField,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v131, v132);
  if ( !byte_596D5EE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5EE = 1;
  }
  v138 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v131, v132);
    v138 = TerminalPramsManager_TypeInfo;
  }
  if ( v138->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !*(&v138->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v138, v131, v132);
    if ( !byte_596D5EE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5EE = 1;
    }
    v139 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v131, v132);
      v139 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v139->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_2213B20(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int32_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  v147 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v147 = (struct WarClearReward_array *)sub_2213B20(WarClearReward___TypeInfo, 0);
  this->fields.warClearReward = v147;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.warClearReward,
    (int32_t)v147,
    v141,
    v142,
    v143,
    v144,
    v145,
    v146);
  v154 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v154 = (struct BattleDropItem_array *)sub_2213B20(BattleDropItem___TypeInfo, 0);
  this->fields.questResultAfterEventRewardInfos = v154;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questResultAfterEventRewardInfos,
    (int32_t)v154,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  v161 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v161 = (struct BattleDropItem_array *)sub_2213B20(BattleDropItem___TypeInfo, 0);
  this->fields.resultEventPanelRewardInfos = v161;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultEventPanelRewardInfos,
    (int32_t)v161,
    v155,
    v156,
    v157,
    v158,
    v159,
    v160);
  v168 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v168 = (struct LimitImageAnnounce_array *)sub_2213B20(LimitImageAnnounce___TypeInfo, 0);
  this->fields.limitImageAnnounces = v168;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.limitImageAnnounces,
    (int32_t)v168,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v169, v170);
  if ( !byte_596CDF6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CDF6 = 1;
  }
  v176 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v169, v170);
    v176 = TerminalPramsManager_TypeInfo;
  }
  v177 = (unsigned __int8)byte_596ABE0;
  this->fields.isOrdealCallWarClear = v176->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !v177 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v176 = TerminalPramsManager_TypeInfo;
    byte_596ABE0 = 1;
  }
  if ( !*(&v176->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v176, v169, v170);
    v176 = TerminalPramsManager_TypeInfo;
  }
  v178 = (unsigned __int8)byte_596D8C1;
  this->fields.eventMuralId = v176->static_fields->_EventMuralId_k__BackingField;
  if ( !v178 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v176 = TerminalPramsManager_TypeInfo;
    byte_596D8C1 = 1;
  }
  if ( !*(&v176->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v176, v169, v170);
    v176 = TerminalPramsManager_TypeInfo;
  }
  v179 = (unsigned __int8)byte_596D5F4;
  this->fields.eventActionQuestId = v176->static_fields->_EventActionQuestId_k__BackingField;
  if ( !v179 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v176 = TerminalPramsManager_TypeInfo;
    byte_596D5F4 = 1;
  }
  if ( !*(&v176->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v176, v169, v170);
    v176 = TerminalPramsManager_TypeInfo;
  }
  v180 = (unsigned __int8)byte_596CFD9;
  this->fields.playHappinessCounterEffect = v176->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !v180 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v176 = TerminalPramsManager_TypeInfo;
    byte_596CFD9 = 1;
  }
  if ( !*(&v176->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v176, v169, v170);
    v176 = TerminalPramsManager_TypeInfo;
  }
  OldUserEventPoint_k__BackingField = v176->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.oldUserEventPoint,
    (int32_t)OldUserEventPoint_k__BackingField,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  v189 = useAddRewardItemRewardInfos;
  if ( !useAddRewardItemRewardInfos )
  {
    v190 = Method_System_Array_Empty_QuestRewardInfo___;
    v191 = *((_QWORD *)Method_System_Array_Empty_QuestRewardInfo___ + 7);
    if ( !v191 )
    {
      sub_224B964(Method_System_Array_Empty_QuestRewardInfo___);
      v191 = v190[7];
    }
    v192 = *(_QWORD *)(v191 + 16);
    if ( (*(_WORD *)(v192 + 309) & 1) == 0 )
      v192 = sub_224B908(v188);
    if ( !*(_DWORD *)(v192 + 228) )
      *(__n128 *)&v188 = j_il2cpp_runtime_class_init_0(v192, v189, v182);
    v193 = *(_QWORD *)(v190[7] + 16LL);
    if ( (*(_WORD *)(v193 + 309) & 1) == 0 )
      v193 = sub_224B908(v188);
    v189 = **(struct QuestRewardInfo_array ***)(v193 + 184);
  }
  this->fields.UseAddRewardItemRewardInfos = v189;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.UseAddRewardItemRewardInfos,
    (int32_t)v189,
    v182,
    v183,
    v184,
    v185,
    v186,
    v187);
}


void TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalPramsManager_OldHeroineLawData___ctor_44211388(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int128 v8; // q1
  int v9; // w8
  __int128 v10; // q1
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v14; // x0
  __int64 v15; // x21
  __int64 v16; // x22
  __int128 v17; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_596DB6B & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596DB6B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !uSvtEnt )
    sub_2213CDC(v5, v6);
  v8 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  v9 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v8;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
  v19 = v20;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v19, 0);
  v10 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v18, 0);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.userId = v13;
  v15 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !*(&v14->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v14, v11, v12);
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                              uSvtEnt->fields.limitCount,
                              0);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                   uSvtEnt->fields.imageLimitCount,
                                   0);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                  uSvtEnt->fields.dispLimitCount,
                                  0);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                  uSvtEnt->fields.iconLimitCount,
                                  0);
  v17 = *(_OWORD *)&uSvtEnt->fields.lv;
  this->fields.createdAt = uSvtEnt->fields.createdAt;
  *(_OWORD *)&this->fields.lv = v17;
  *(_OWORD *)&this->fields.adjustAtk = *(_OWORD *)&uSvtEnt->fields.adjustAtk;
  *(_OWORD *)&this->fields.skillLv3 = *(_OWORD *)&uSvtEnt->fields.skillLv3;
}


UserServantEntity_o *TerminalPramsManager_OldHeroineLawData__GetLoad(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t id; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v7; // x0
  __int64 v8; // x1
  __int128 v9; // q1
  __int64 v10; // x1
  __int64 v11; // x2
  __int128 v12; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v13; // x0
  int32_t svtId; // w21
  int64_t createdAt; // x8
  __int128 v17; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596DB6C & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&UserServantEntity_TypeInfo);
    byte_596DB6C = 1;
  }
  v3 = sub_2213CCC(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v3, 0);
  id = this->fields.id;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v19, id, 0);
  if ( !v3 )
    sub_2213CDC(v7, v8);
  v9 = *(_OWORD *)&v19.fields.fakeValue;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&v19.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 32) = v9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v18, this->fields.userId, 0);
  v12 = *(_OWORD *)&v18.fields.fakeValue;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  *(_OWORD *)(v3 + 48) = *(_OWORD *)&v18.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 64) = v12;
  svtId = this->fields.svtId;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, v10, v11);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 80) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    svtId,
                                                                    0);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 96) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    this->fields.limitCount,
                                                                    0);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 112) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.imageLimitCount,
                                                                     0);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.dispLimitCount,
                                                                     0);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 144) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.commandCardLimitCount,
                                                                     0);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.iconLimitCount,
                                                                     0);
  createdAt = this->fields.createdAt;
  *(_OWORD *)(v3 + 400) = *(_OWORD *)&this->fields.lv;
  v17 = *(_OWORD *)&this->fields.adjustAtk;
  *(_QWORD *)(v3 + 456) = createdAt;
  *(_OWORD *)(v3 + 416) = v17;
  *(_OWORD *)(v3 + 432) = *(_OWORD *)&this->fields.skillLv3;
  return (UserServantEntity_o *)v3;
}


void TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.oldUsrSvtData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v3, v4, v5, v6, v7, v8);
}


void TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_44212148(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        QuestClearHeroineInfo_o *qClearHeroineInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  UserServantEntity_o *oldUsrSvtData; // x21
  TerminalPramsManager_OldHeroineLawData_o *v8; // x22
  const MethodInfo *v9; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_Fields *p_fields; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596DB6D & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_OldHeroineLawData_TypeInfo);
    byte_596DB6D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !qClearHeroineInfo )
    sub_2213CDC(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_2213CCC(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_44211388(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_fields, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  *(_WORD *)&p_fields->isChangeLimitcnt = *(_WORD *)&qClearHeroineInfo->fields.isChangeLimitcnt;
  *(_QWORD *)&p_fields->treasureDvcId = *(_QWORD *)&qClearHeroineInfo->fields.treasureDvcId;
  p_fields->oldFriendShipRank = qClearHeroineInfo->fields.oldFriendShipRank;
  *(_WORD *)&p_fields->isFriendShipExceed = *(_WORD *)&qClearHeroineInfo->fields.isFriendShipExceed;
}


QuestClearHeroineInfo_o *TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596DB6E & 1) == 0 )
  {
    sub_2213A60(&QuestClearHeroineInfo_TypeInfo);
    byte_596DB6E = 1;
  }
  v3 = sub_2213CCC(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v3, 0);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_2213CDC(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)oldUsrSvtData, v6, v7, v8, v9, v10, v11);
  *(_WORD *)(v3 + 24) = *(_WORD *)&this->fields.isChangeLimitcnt;
  *(_QWORD *)(v3 + 28) = *(_QWORD *)&this->fields.treasureDvcId;
  *(_DWORD *)(v3 + 36) = this->fields.oldFriendShipRank;
  *(_WORD *)(v3 + 40) = *(_WORD *)&this->fields.isFriendShipExceed;
  return (QuestClearHeroineInfo_o *)v3;
}


void TerminalPramsManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596DB72 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager___c_TypeInfo);
    byte_596DB72 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TerminalPramsManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__803_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_596DB73 & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB73 = 1;
  }
  if ( !n )
    sub_2213CDC(this, n);
  questId = n->fields.questId;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, n, method);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, n, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return questId == v5->static_fields->_QuestId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
bool TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__809_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_596DB74 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB74 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&v, method);
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0);
}


int32_t TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__809_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_2213CDC(this, 0);
  return v->fields.id;
}


int32_t TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__809_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void TerminalPramsManager___c__DisplayClass788_0___ctor(
        TerminalPramsManager___c__DisplayClass788_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TerminalPramsManager___c__DisplayClass788_0___IsTerminalEffectPlayed_b__0(
        TerminalPramsManager___c__DisplayClass788_0_o *this,
        System_String_o *playedEffectName,
        const MethodInfo *method)
{
  return System_String__op_Equality(playedEffectName, this->fields.effectName, 0);
}


void TerminalPramsManager___c__DisplayClass791_0___ctor(
        TerminalPramsManager___c__DisplayClass791_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalPramsManager___c__DisplayClass791_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass791_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  struct System_String_o *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596DB75 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    byte_596DB75 = 1;
  }
  v5 = System_String__Concat_75694928(this->fields.effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  this->fields.effectIdsStr = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


void TerminalPramsManager___c__DisplayClass809_0___ctor(
        TerminalPramsManager___c__DisplayClass809_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
QuestEntity_o *TerminalPramsManager___c__DisplayClass809_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass809_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_2213CDC(0, *(_QWORD *)&v);
  return QuestMaster__getQuestEntity(questMaster, v, 0);
}


bool TerminalPramsManager___c__DisplayClass809_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass809_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  NetworkManager_c *v6; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596DB76 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596DB76 = 1;
  }
  userQuestMaster = this->fields.userQuestMaster;
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v, method);
    v6 = NetworkManager_TypeInfo;
  }
  if ( !v || !userQuestMaster )
    goto LABEL_15;
  v6 = (NetworkManager_c *)UserQuestMaster__TryGetEntity(
                             userQuestMaster,
                             &entity,
                             v6->static_fields->userIdNumber,
                             v->fields.id,
                             0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( entity )
      return entity->fields.clearNum == 0;
LABEL_15:
    sub_2213CDC(v6, v);
  }
  return 1;
}