void TerminalPramsManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v1; // x19
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct TerminalPramsManager_StaticFields *v9; // x0
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  struct TerminalPramsManager_StaticFields *v18; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x19
  GrandQuestFolderBoardItem_o *p_eventScriptMessages; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct TerminalPramsManager_StaticFields *v33; // x8
  System_Collections_Generic_List_int__o *v34; // x19
  GrandQuestFolderBoardItem_o *p_nonFrameInBossHpUiIndex; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Collections_Generic_List_int__o *v42; // x19
  GrandQuestFolderBoardItem_o *p_RaidBossHpForceHideGroupIndexList; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7

  if ( (byte_4D29BDE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&float___TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29BDE = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->loginQuestNotifiedList,
    (int32_t)v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v9 = TerminalPramsManager_TypeInfo->static_fields;
  v9->_IsMainInterludeWarClear_k__BackingField = 0;
  v10 = StringLiteral_1/*""*/;
  v9->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->mTerminalWarStartedIds, v10, v11, v12, v13, v14, v15, v16);
  *(_OWORD *)&TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = xmmword_CFEEF0;
  v17 = sub_1C94140(float___TypeInfo, 3);
  v18 = TerminalPramsManager_TypeInfo->static_fields;
  v18->TipsArchiveScrollValueList = (struct System_Single_array *)v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v18->TipsArchiveScrollValueList, v17, v19, v20, v21, v22, v23, v24);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v25 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (GrandQuestFolderBoardItem_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (GrandQuestFolderBoardItem_c *)v25;
  sub_1C9403C(p_eventScriptMessages, (int32_t)v25, v27, v28, v29, v30, v31, v32);
  v33 = TerminalPramsManager_TypeInfo->static_fields;
  *(_QWORD *)&v33->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v33->EVENT_POINT_EFFECT_STATE_ADD = 1;
  v33->_IsTransFromOrdealCall_k__BackingField = 0;
  v33->isInvisibleConnectAndLoad = 0;
  *(_QWORD *)&v33->ConnectMarkEventId = 0;
  v33->meSceneStatus = 0;
  *(_OWORD *)&v33->_ShopFocusItemId_k__BackingField = 0u;
  v33->isCheckHomeExpirationDateEventMap = 1;
  v33->_IsMoveFolderByQuestAfterAction_k__BackingField = 0;
  *(_WORD *)&v33->IsEventMapLoading = 0;
  v34 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  p_nonFrameInBossHpUiIndex = (GrandQuestFolderBoardItem_o *)&TerminalPramsManager_TypeInfo->static_fields->nonFrameInBossHpUiIndex;
  p_nonFrameInBossHpUiIndex->klass = (GrandQuestFolderBoardItem_c *)v34;
  sub_1C9403C(p_nonFrameInBossHpUiIndex, (int32_t)v34, v36, v37, v38, v39, v40, v41);
  v42 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  p_RaidBossHpForceHideGroupIndexList = (GrandQuestFolderBoardItem_o *)&TerminalPramsManager_TypeInfo->static_fields->RaidBossHpForceHideGroupIndexList;
  p_RaidBossHpForceHideGroupIndexList->klass = (GrandQuestFolderBoardItem_c *)v42;
  sub_1C9403C(p_RaidBossHpForceHideGroupIndexList, (int32_t)v42, v44, v45, v46, v47, v48, v49);
  TerminalPramsManager_TypeInfo->static_fields->_MasterMissionTargetType_k__BackingField = -1;
}


void TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4D29BB6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BB6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C942F0(0, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__AddRemainingRaidHpData(
        int64_t remainingHp,
        bool isAllBossDefeated,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *v6; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalPramsManager_c *v13; // x0
  GrandQuestFolderBoardItem_o *p_RemainingRaidHpData_k__BackingField; // x0
  _QWORD *p_image; // x0
  __int64 v16; // x8
  __int64 v17; // x8
  int v18; // w21
  __int64 v19; // x8
  __int64 v20; // x8
  struct EventInfoRemainingRaidHpData_o *RemainingRaidHpData_k__BackingField; // x21
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x20
  __int64 v28; // x8
  __int64 v29; // x8
  TerminalPramsManager_c *v30; // x0
  struct EventInfoRemainingRaidHpData_o *v31; // x20
  float realtimeSinceStartup; // s0
  struct EventInfoRemainingRaidHpData_o *v33; // x20
  __int64 v34; // x8
  float v35; // s8

  if ( (byte_4D29BDC & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&EventInfoRemainingRaidHpData_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BDC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2933D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2933D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_RemainingRaidHpData_k__BackingField )
  {
    v6 = (Il2CppObject *)sub_1C942E4(EventInfoRemainingRaidHpData_TypeInfo);
    System_Object___ctor(v6, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29C1A )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C1A = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    p_RemainingRaidHpData_k__BackingField = (GrandQuestFolderBoardItem_o *)&v13->static_fields->_RemainingRaidHpData_k__BackingField;
    p_RemainingRaidHpData_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v6;
    sub_1C9403C(p_RemainingRaidHpData_k__BackingField, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( isAllBossDefeated )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2933D )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2933D = 1;
    }
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
    }
    v16 = *(_QWORD *)(p_image[23] + 440LL);
    if ( !v16 )
      goto LABEL_125;
    *(_BYTE *)(v16 + 40) = 1;
  }
  if ( !*((_DWORD *)p_image + 56) )
    j_il2cpp_runtime_class_init_0(p_image);
  if ( !byte_4D2933D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2933D = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v17 = *(_QWORD *)(p_image[23] + 440LL);
  if ( !v17 )
    goto LABEL_125;
  v18 = *(_DWORD *)(v17 + 16);
  if ( !*((_DWORD *)p_image + 56) )
    j_il2cpp_runtime_class_init_0(p_image);
  if ( !byte_4D2933D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2933D = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v19 = *(_QWORD *)(p_image[23] + 440LL);
  if ( !v19 )
    goto LABEL_125;
  if ( v18 <= 0 )
  {
    *(_QWORD *)(v19 + 24) = remainingHp;
    if ( !byte_4D2933D )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
      byte_4D2933D = 1;
    }
  }
  else
  {
    if ( *(int *)(v19 + 16) < 1 )
      goto LABEL_128;
    if ( !*((_DWORD *)p_image + 56) )
      j_il2cpp_runtime_class_init_0(p_image);
    if ( !byte_4D2933D )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2933D = 1;
    }
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
    }
    v20 = *(_QWORD *)(p_image[23] + 440LL);
    if ( !v20 )
      goto LABEL_125;
    if ( *(int *)(v20 + 16) > 1 )
    {
LABEL_128:
      if ( !*((_DWORD *)p_image + 56) )
        j_il2cpp_runtime_class_init_0(p_image);
      if ( !byte_4D2933D )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D2933D = 1;
      }
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
      if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        RemainingRaidHpData_k__BackingField = TerminalPramsManager_TypeInfo->static_fields->_RemainingRaidHpData_k__BackingField;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        p_image = &TerminalPramsManager_TypeInfo->_1.image;
        RemainingRaidHpData_k__BackingField = TerminalPramsManager_TypeInfo->static_fields->_RemainingRaidHpData_k__BackingField;
        if ( !byte_4D2933D )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          p_image = &TerminalPramsManager_TypeInfo->_1.image;
          byte_4D2933D = 1;
        }
      }
      if ( !*((_DWORD *)p_image + 56) )
      {
        j_il2cpp_runtime_class_init_0(p_image);
        p_image = &TerminalPramsManager_TypeInfo->_1.image;
      }
      v24 = *(_QWORD *)(p_image[23] + 440LL);
      if ( !v24 || !RemainingRaidHpData_k__BackingField )
        goto LABEL_125;
      RemainingRaidHpData_k__BackingField->fields.beforeRemainingRaidHp = *(_QWORD *)(v24 + 32);
      if ( !byte_4D2933D )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        p_image = &TerminalPramsManager_TypeInfo->_1.image;
        byte_4D2933D = 1;
      }
      if ( !*((_DWORD *)p_image + 56) )
      {
        j_il2cpp_runtime_class_init_0(p_image);
        p_image = &TerminalPramsManager_TypeInfo->_1.image;
      }
      v25 = *(_QWORD *)(p_image[23] + 440LL);
      if ( !v25 )
        goto LABEL_125;
      *(_QWORD *)(v25 + 32) = remainingHp;
      goto LABEL_84;
    }
    if ( !*((_DWORD *)p_image + 56) )
      j_il2cpp_runtime_class_init_0(p_image);
    if ( !byte_4D2933D )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2933D = 1;
    }
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  if ( !*((_DWORD *)p_image + 56) )
  {
    j_il2cpp_runtime_class_init_0(p_image);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v22 = *(_QWORD *)(p_image[23] + 440LL);
  if ( !v22 )
    goto LABEL_125;
  *(_QWORD *)(v22 + 32) = remainingHp;
  if ( !byte_4D2933D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    byte_4D2933D = 1;
  }
  if ( !*((_DWORD *)p_image + 56) )
  {
    j_il2cpp_runtime_class_init_0(p_image);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v23 = *(_QWORD *)(p_image[23] + 440LL);
  if ( !v23 )
    goto LABEL_125;
  ++*(_DWORD *)(v23 + 16);
LABEL_84:
  if ( !*((_DWORD *)p_image + 56) )
    j_il2cpp_runtime_class_init_0(p_image);
  if ( !byte_4D2933D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2933D = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v26 = *(_QWORD *)(p_image[23] + 440LL);
  if ( !v26 )
    goto LABEL_125;
  v27 = *(_QWORD *)(v26 + 32);
  if ( !byte_4D2933D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    byte_4D2933D = 1;
  }
  if ( !*((_DWORD *)p_image + 56) )
  {
    j_il2cpp_runtime_class_init_0(p_image);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v28 = *(_QWORD *)(p_image[23] + 440LL);
  if ( !v28 )
    goto LABEL_125;
  if ( v27 <= *(_QWORD *)(v28 + 24) )
    goto LABEL_105;
  if ( !*((_DWORD *)p_image + 56) )
    j_il2cpp_runtime_class_init_0(p_image);
  if ( !byte_4D2933D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2933D = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v29 = *(_QWORD *)(p_image[23] + 440LL);
  if ( !v29 )
LABEL_125:
    sub_1C942F0(p_image, isAllBossDefeated);
  *(_BYTE *)(v29 + 40) = 1;
LABEL_105:
  if ( !*((_DWORD *)p_image + 56) )
    j_il2cpp_runtime_class_init_0(p_image);
  if ( !byte_4D2933D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2933D = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  v31 = v30->static_fields->_RemainingRaidHpData_k__BackingField;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  if ( !v31 )
    goto LABEL_125;
  v31->fields.lastUpdateRealtime = realtimeSinceStartup;
  if ( !byte_4D2933D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2933D = 1;
  }
  p_image = &TerminalPramsManager_TypeInfo->_1.image;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    v33 = TerminalPramsManager_TypeInfo->static_fields->_RemainingRaidHpData_k__BackingField;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
    v33 = TerminalPramsManager_TypeInfo->static_fields->_RemainingRaidHpData_k__BackingField;
    if ( !byte_4D2933D )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      p_image = &TerminalPramsManager_TypeInfo->_1.image;
      byte_4D2933D = 1;
    }
  }
  if ( !*((_DWORD *)p_image + 56) )
  {
    j_il2cpp_runtime_class_init_0(p_image);
    p_image = &TerminalPramsManager_TypeInfo->_1.image;
  }
  v34 = *(_QWORD *)(p_image[23] + 440LL);
  if ( !v34 )
    goto LABEL_125;
  v35 = *(float *)(v34 + 48);
  p_image = &BalanceConfig_TypeInfo->_1.image;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v33 )
    goto LABEL_125;
  v33->fields.decreaseEndRealtime = v35 + (float)BalanceConfig_TypeInfo->static_fields->RequestRaidUpdateEventMap;
}


void TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B75 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B75 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D26F6B )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26F6B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4D29784 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4D29784 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  static_fields->_IsAutoShortcut_k__BackingField = 0;
  static_fields->mIsAutoOpenMasterMission = 0;
}


void TerminalPramsManager__BlankEarthRank_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29BA8 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11495/*"SAVEKEY_BlankEarthRank"*/);
    byte_4D29BA8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C03 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C03 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11495/*"SAVEKEY_BlankEarthRank"*/,
    v1->static_fields->_BlankEarthRank_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29BA7 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11496/*"SAVEKEY_BlankEarthSpotId"*/);
    byte_4D29BA7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28F1E )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28F1E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11496/*"SAVEKEY_BlankEarthSpotId"*/,
    v1->static_fields->_BlankEarthSpotId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v3; // x0

  if ( (byte_4D29BA6 & 1) == 0 )
  {
    sub_1C94098(&CommonUI_CampaignDirectBonusData___TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11497/*"SAVEKEY_CampaignDirectBonus"*/);
    byte_4D29BA6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D264E5 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D264E5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v1->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_1C94140(CommonUI_CampaignDirectBonusData___TypeInfo, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(p_obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11497/*"SAVEKEY_CampaignDirectBonus"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  Il2CppObject *v8; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D29BC5 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C94098(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D29BC5 = 1;
  }
  v8 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_16;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0);
  if ( !v5 )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v5,
          &v8,
          (int32_t)Instance,
          (const MethodInfo_345B50C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v8 )
LABEL_16:
    sub_1C942F0(Instance, v4);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            HIDWORD(v8[1].klass),
            (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
}


void TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4D29BAB & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BAB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D299A0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D299A0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_SelectedStoryQuestId_k__BackingField >= 1 )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4D299A0 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D299A0 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    if ( v4->static_fields->_SelectedStoryQuestId_k__BackingField != questId )
    {
      if ( !v4->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v4);
      if ( !byte_4D2944A )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D2944A = 1;
      }
      v5 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      }
      *((_DWORD *)v5[2].virtualMethodPointer + 8) = 0;
      TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(v5);
    }
  }
}


bool TerminalPramsManager__CheckEventActivityPointSaveData(const MethodInfo *method)
{
  if ( (byte_4D29B91 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C94098(&StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4D29B91 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/, 0)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/, 0);
}


bool TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  if ( (byte_4D29B93 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_13754/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4D29B93 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13754/*"TerminalBeforeEventSubmarinePointData"*/, 0);
}


bool TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4D29BD2 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D29BD2 = 1;
  }
  if ( !warEntity )
    return 0;
  parentWarId = warEntity->fields.parentWarId;
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return parentWarId == v4->static_fields->OrdealCallWarId;
}


void TerminalPramsManager__CheckResumeEffectNT2(const MethodInfo *method)
{
  __int64 v1; // x19
  const MethodInfo *v2; // x1
  TerminalPramsManager_c *v3; // x0
  ScrTerminalListTop_c *v4; // x8
  System_String_o *NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // x20
  const MethodInfo *v6; // x1
  ScrTerminalListTop_c *v7; // x0
  System_String_o *NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // x20
  __int64 v9; // x1
  ScrTerminalListTop_c *v10; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  Il2CppObject *v12; // x20
  TerminalPramsManager_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w1
  System_Action_object__o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  GrandQuestFolderBoardItem_c *v30; // x19
  TerminalPramsManager_c *v31; // x0
  GrandQuestFolderBoardItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v33; // x0

  if ( (byte_4D29BAF & 1) == 0 )
  {
    sub_1C94098(&System_Action_string__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&ScrTerminalListTop_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&Method_TerminalPramsManager___c__DisplayClass745_0__CheckResumeEffectNT2_b__0__);
    sub_1C94098(&TerminalPramsManager___c__DisplayClass745_0_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_87/*"\r\n"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29BAF = 1;
  }
  v1 = sub_1C942E4(TerminalPramsManager___c__DisplayClass745_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass745_0___ctor((TerminalPramsManager___c__DisplayClass745_0_o *)v1, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C00 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C00 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v4 = ScrTerminalListTop_TypeInfo;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v4 = ScrTerminalListTop_TypeInfo;
      v3 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v4->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v2) )
    {
      v7 = ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v7 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v7->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v6) )
      {
        v10 = ScrTerminalListTop_TypeInfo;
        if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v10 = ScrTerminalListTop_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v10->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_39;
        v12 = (Il2CppObject *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))PlayedTerminalEffects_k__BackingField->klass->vtable._3_ToString.methodPtr)(
                                PlayedTerminalEffects_k__BackingField,
                                PlayedTerminalEffects_k__BackingField->klass->vtable._3_ToString.method);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D29C00 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29C00 = 1;
        }
        v13 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v13 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v13->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField
          || (PlayedTerminalEffects_k__BackingField = System_String__Replace_64464308(
                                                        PlayedTerminalEffects_k__BackingField,
                                                        (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                                        0)) == 0
          || (v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           PlayedTerminalEffects_k__BackingField,
                                                                           0xAu,
                                                                           0,
                                                                           0),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_object_(
                                                                            v14,
                                                                            (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_string___)) == 0)
          || (v15 = (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_object___Remove(
                                                                           (System_Collections_Generic_List_object__o *)PlayedTerminalEffects_k__BackingField,
                                                                           v12,
                                                                           (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__),
              !v1) )
        {
LABEL_39:
          sub_1C942F0(PlayedTerminalEffects_k__BackingField, v9);
        }
        v22 = StringLiteral_1/*""*/;
        *(_QWORD *)(v1 + 16) = StringLiteral_1/*""*/;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v1 + 16), v22, v16, v17, v18, v19, v20, v21);
        v23 = (System_Action_object__o *)sub_1C942E4(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v23,
          (Il2CppObject *)v1,
          Method_TerminalPramsManager___c__DisplayClass745_0__CheckResumeEffectNT2_b__0__,
          0);
        System_Collections_Generic_List_object___ForEach(
          v15,
          (System_Action_T__o *)v23,
          (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_string__ForEach__);
        v30 = *(GrandQuestFolderBoardItem_c **)(v1 + 16);
        if ( !byte_4D29BF0 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29BF0 = 1;
        }
        v31 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v31 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (GrandQuestFolderBoardItem_o *)&v31->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = v30;
        sub_1C9403C(p_PlayedTerminalEffects_k__BackingField, (int32_t)v30, v24, v25, v26, v27, v28, v29);
        TerminalPramsManager__Save_SaveData(v33);
      }
    }
  }
}


void TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29BA1 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11498/*"SAVEKEY_ClearEventQuestIds"*/);
    byte_4D29BA1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28FD6 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28FD6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11498/*"SAVEKEY_ClearEventQuestIds"*/,
    v1->static_fields->_ClearEventQuestIds_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29BA0 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11500/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C94098(&StringLiteral_11499/*"SAVEKEY_ConnectMarkAnimationId"*/);
    byte_4D29BA0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11500/*"SAVEKEY_ConnectMarkEventId"*/, v1->static_fields->ConnectMarkEventId, 0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11499/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__DeleteClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_ClearData_c *v1; // x0
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v10; // w1

  if ( (byte_4D29BC8 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29BC8 = 1;
  }
  v1 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v1 = TerminalPramsManager_ClearData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C15 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C15 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_isQuestRewardSetted_k__BackingField = 0;
  v10 = StringLiteral_1/*""*/;
  static_fields->lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->lastPlayBgmName, v10, v2, v3, v4, v5, v6, v7);
}


void TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4D29B84 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11503/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1C94098(&StringLiteral_13756/*"TerminalEndTime"*/);
    sub_1C94098(&StringLiteral_5186/*"Debug_IsOriginalGuestNPC"*/);
    sub_1C94098(&StringLiteral_11510/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C94098(&StringLiteral_8109/*"IsTransitionToTerminalAfterMovie"*/);
    sub_1C94098(&StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C94098(&StringLiteral_11497/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1C94098(&StringLiteral_11504/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1C94098(&StringLiteral_11515/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_1C94098(&StringLiteral_8080/*"IsPart2FinalChapter"*/);
    sub_1C94098(&StringLiteral_13757/*"TerminalEventDailyPointEventId"*/);
    sub_1C94098(&StringLiteral_5182/*"Debug_GuestNPCInfoList"*/);
    sub_1C94098(&StringLiteral_13754/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1C94098(&StringLiteral_13763/*"TerminalPhaseCnt"*/);
    sub_1C94098(&StringLiteral_11514/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C94098(&StringLiteral_13771/*"TerminalTimeStatusEventId"*/);
    sub_1C94098(&StringLiteral_13755/*"TerminalDispState"*/);
    sub_1C94098(&StringLiteral_11507/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C94098(&StringLiteral_13758/*"TerminalIsDoneShortcut"*/);
    sub_1C94098(&StringLiteral_11505/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C94098(&StringLiteral_11511/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C94098(&StringLiteral_11516/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1C94098(&StringLiteral_11498/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C94098(&StringLiteral_11508/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C94098(&StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/);
    sub_1C94098(&StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/);
    sub_1C94098(&StringLiteral_13766/*"TerminalQuestId"*/);
    sub_1C94098(&StringLiteral_11513/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1C94098(&StringLiteral_11519/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C94098(&StringLiteral_13770/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C94098(&StringLiteral_13775/*"TerminalWarId"*/);
    sub_1C94098(&StringLiteral_13768/*"TerminalSpotId"*/);
    sub_1C94098(&StringLiteral_13772/*"TerminalTimeStatusLoopCount"*/);
    sub_1C94098(&StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C94098(&StringLiteral_11496/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C94098(&StringLiteral_11501/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C94098(&StringLiteral_5185/*"Debug_IsOriginalBattle"*/);
    sub_1C94098(&StringLiteral_13776/*"TerminalWarStartedIds"*/);
    sub_1C94098(&StringLiteral_5181/*"Debug_BattleEnemyList"*/);
    sub_1C94098(&StringLiteral_11500/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C94098(&StringLiteral_13774/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C94098(&StringLiteral_11499/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C94098(&StringLiteral_11509/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C94098(&StringLiteral_13761/*"TerminalLastPlayedQuestId"*/);
    sub_1C94098(&StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/);
    sub_1C94098(&StringLiteral_13773/*"TerminalTransitionInfoMissionId"*/);
    sub_1C94098(&StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/);
    sub_1C94098(&StringLiteral_11518/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4D29B84 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13755/*"TerminalDispState"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13775/*"TerminalWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13768/*"TerminalSpotId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13766/*"TerminalQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13761/*"TerminalLastPlayedQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13763/*"TerminalPhaseCnt"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13756/*"TerminalEndTime"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13758/*"TerminalIsDoneShortcut"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13776/*"TerminalWarStartedIds"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5185/*"Debug_IsOriginalBattle"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5186/*"Debug_IsOriginalGuestNPC"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5181/*"Debug_BattleEnemyList"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5182/*"Debug_GuestNPCInfoList"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13771/*"TerminalTimeStatusEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13772/*"TerminalTimeStatusLoopCount"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13757/*"TerminalEventDailyPointEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13770/*"TerminalTimeStatusEventDailyPoint"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13773/*"TerminalTransitionInfoMissionId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13774/*"TerminalTransitionInfoVoiceAssetName"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13754/*"TerminalBeforeEventSubmarinePointData"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11514/*"SAVEKEY_TerminalConquestInfos"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11513/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11515/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11516/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11503/*"SAVEKEY_LastPlayBgmName"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11504/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11510/*"SAVEKEY_PlayedTerminalEffects"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11507/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11508/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11509/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11519/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11500/*"SAVEKEY_ConnectMarkEventId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11499/*"SAVEKEY_ConnectMarkAnimationId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11518/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11498/*"SAVEKEY_ClearEventQuestIds"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11505/*"SAVEKEY_MapModelClearQuestInfo"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11501/*"SAVEKEY_DataLostBattleAutoReset"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11511/*"SAVEKEY_PlayerGenderType"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11497/*"SAVEKEY_CampaignDirectBonus"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11496/*"SAVEKEY_BlankEarthSpotId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8080/*"IsPart2FinalChapter"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8109/*"IsTransitionToTerminalAfterMovie"*/, 0);
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v1);
  TerminalPramsManager__DeleteClearDatas(v2);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v3);
  TerminalPramsManager__DeleteQuestRandomGroupList(v4);
}


void TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  TerminalPramsManager_c *v7; // x0
  GrandQuestFolderBoardItem_o *p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_4D29BC9 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11502/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4D29BC9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C16 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C16 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v7->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0;
  sub_1C9403C(p_EventRaidDefeatedEffectInfo_k__BackingField, 0, v1, v2, v3, v4, v5, v6);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11502/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0);
}


void TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  TerminalPramsManager_c *v7; // x0
  GrandQuestFolderBoardItem_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4D29BCE & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11512/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4D29BCE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C18 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C18 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (GrandQuestFolderBoardItem_o *)&v7->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0;
  sub_1C9403C(p_QuestRandomGroupList_k__BackingField, 0, v1, v2, v3, v4, v5, v6);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11512/*"SAVEKEY_QuestRandomGroupList"*/, 0);
}


bool TerminalPramsManager__EnableResumeToBlankEarthMap(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D29BD6 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BD6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsBlankEarthWarByWarId(warId, method) )
    return 1;
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__ExistBlankEarthTutorial((const MethodInfo *)v3) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
  return QuestTree__IsActiveWar((QuestTree_o *)Instance, warId, 0);
}


void TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  System_String_o *v3; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D29B8D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_13757/*"TerminalEventDailyPointEventId"*/);
    sub_1C94098(&StringLiteral_13770/*"TerminalTimeStatusEventDailyPoint"*/);
    byte_4D29B8D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29BFC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BFC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13757/*"TerminalEventDailyPointEventId"*/,
    v1->static_fields->_EventDailyPointEventId_k__BackingField,
    0);
  if ( !byte_4D29BFD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BFD = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v2->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v3 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13770/*"TerminalTimeStatusEventDailyPoint"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4D29B8C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_13771/*"TerminalTimeStatusEventId"*/);
    sub_1C94098(&StringLiteral_13772/*"TerminalTimeStatusLoopCount"*/);
    byte_4D29B8C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2999B )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2999B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13771/*"TerminalTimeStatusEventId"*/,
    v1->static_fields->_TimeStatusEventId_k__BackingField,
    0);
  if ( !byte_4D2999C )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2999C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13772/*"TerminalTimeStatusLoopCount"*/,
    v2->static_fields->_TimeStatusLoopCount_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__ExistBlankEarthTutorial(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  BalanceConfig_c *v3; // x0

  if ( (byte_4D29BD5 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BD5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__ExistBlankEarthTutorialAction((const MethodInfo *)v1) )
    return 1;
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  return EventTutorialMaster__IsTutorialAvailableWithTargetId(
           0,
           18,
           v3->static_fields->OrdealCallWarId,
           v3->static_fields->OrdealCallWarId,
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

  if ( (byte_4D29BD4 & 1) == 0 )
  {
    sub_1C94098(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    byte_4D29BD4 = 1;
  }
  v1 = sub_1C942E4(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v1, 0);
  if ( !v1 )
    sub_1C942F0(v2, v3);
  *(_QWORD *)(v1 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v1,
                                                                 0);
  return !BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0);
}


float TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  int32_t targetFrameRate; // w0

  if ( (byte_4D29B7F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    byte_4D29B7F = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
  return (float)(1.0 / (float)targetFrameRate) + (float)(1.0 / (float)targetFrameRate);
}


int32_t TerminalPramsManager__GetFolderLastClickedIdx(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D29BB4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BB4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v3->static_fields->folderLastIdxs;
  if ( !folderLastIdxs )
    return 0;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs;
    if ( !folderLastIdxs )
      sub_1C942F0(v5, v6);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_34AD4B4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4D29B80 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B80 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29103 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29103 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_IsAutoResume_k__BackingField )
    return time;
  if ( !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3);
  if ( !byte_4D297A1 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D297A1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_IsMapReturnFolder_k__BackingField )
    return time;
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  return TerminalPramsManager__GetAutoIntpTime((const MethodInfo *)v4);
}


int32_t TerminalPramsManager__GetQuestReleasedFocusState(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v5; // x1

  if ( (byte_4D29BBA & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BBA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_1C942F0(0, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0);
}


int32_t TerminalPramsManager__GetRaidCounterEventId(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v2; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v3; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D29BDD & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    byte_4D29BDD = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
  v3 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v3 )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    v3,
                                    &entity,
                                    BalanceConfig_TypeInfo->static_fields->Fgo20251220WarId,
                                    (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int32_t)entity[6].klass;
LABEL_12:
    sub_1C942F0(Master_object, v2);
  }
  return 0;
}


void TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B86 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B86 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitParameter((const MethodInfo *)v1);
}


void TerminalPramsManager__InitMessageWindowData(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  TerminalPramsManager_c *v16; // x0
  struct TerminalPramsManager_StaticFields *v17; // x0

  if ( (byte_4D29BB2 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29BB2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28365 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28365 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDispOnly_k__BackingField = 0;
  v8 = StringLiteral_1/*""*/;
  if ( !byte_4D29787 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D29787 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = (struct System_String_o *)v8;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    v8,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  if ( !byte_4D29786 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29786 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4D28364 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4D28364 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v17 = v16->static_fields;
  v17->_BattleSetupKeep_k__BackingField = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v17->_BattleSetupKeep_k__BackingField, 0, v10, v11, v12, v13, v14, v15);
}


void TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  TerminalPramsManager_c *v15; // x0
  struct TerminalPramsManager_StaticFields *v16; // x0
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  TerminalPramsManager_c *v24; // x0
  GrandQuestFolderBoardItem_o *p_timeStatusRecord_k__BackingField; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  TerminalPramsManager_c *v32; // x0
  GrandQuestFolderBoardItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  int32_t v34; // w1
  GrandQuestFolderBoardItem_o *p_lastPlayBgmName; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  TerminalPramsManager_c *v48; // x0
  struct TerminalPramsManager_StaticFields *v49; // x0
  TerminalPramsManager_c *v50; // x0
  const MethodInfo *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  TerminalPramsManager_c *v58; // x0
  __int64 v59; // x20
  GrandQuestFolderBoardItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  TerminalPramsManager_c *v67; // x0
  struct TerminalPramsManager_StaticFields *v68; // x8
  __int64 v69; // x20
  GrandQuestFolderBoardItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  TerminalPramsManager_c *v77; // x0
  struct TerminalPramsManager_StaticFields *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  TerminalPramsManager_c *v85; // x0
  struct TerminalPramsManager_StaticFields *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  TerminalPramsManager_c *v93; // x0
  __int64 v94; // x20
  GrandQuestFolderBoardItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  __int64 v96; // x1
  TerminalPramsManager_c *v97; // x0
  TerminalPramsManager_c *v98; // x0
  struct TerminalPramsManager_StaticFields *v99; // x8
  struct System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x9
  int v101; // w10
  struct System_Collections_Generic_List_int__o *nonFrameInBossHpUiIndex; // x8
  int v103; // w9

  if ( (byte_4D29B85 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29B85 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28FDD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28FDD = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4D28FDC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D28FDC = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4D28FD7 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D28FD7 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4D29445 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D29445 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4D29BE6 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D29BE6 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4D29446 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D29446 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_4D29338 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D29338 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4D2944A )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D2944A = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4D28190 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D28190 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4D2944B )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D2944B = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4D297B9 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D297B9 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_4D297B7 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D297B7 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_4D28C5D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D28C5D = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  if ( !byte_4D28FDB )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28FDB = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_4D28FD8 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4D28FD8 = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_EndTime_k__BackingField = 0;
  if ( !byte_4D28FDA )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4D28FDA = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v16 = v15->static_fields;
  v16->_IsDoneShortcut_k__BackingField = 0;
  v17 = StringLiteral_1/*""*/;
  v16->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->mTerminalWarStartedIds, v17, v9, v10, v11, v12, v13, v14);
  if ( !byte_4D29BE7 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BE7 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4D29BE8 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4D29BE8 = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4D29BE9 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4D29BE9 = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4D297BE )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4D297BE = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4D297BF )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4D297BF = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4D29BEA )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4D29BEA = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (GrandQuestFolderBoardItem_o *)&v24->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0;
  sub_1C9403C(p_timeStatusRecord_k__BackingField, 0, v18, v19, v20, v21, v22, v23);
  if ( !byte_4D29BEB )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BEB = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4D29BEC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
    byte_4D29BEC = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0;
  if ( !byte_4D29BED )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
    byte_4D29BED = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4D29BEE )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
    byte_4D29BEE = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4D29106 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
    byte_4D29106 = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (GrandQuestFolderBoardItem_o *)&v32->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0;
  sub_1C9403C(p_BeforeEventSubmarineSaveData_k__BackingField, 0, v26, v27, v28, v29, v30, v31);
  v34 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = (GrandQuestFolderBoardItem_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (GrandQuestFolderBoardItem_c *)StringLiteral_1/*""*/;
  sub_1C9403C(p_lastPlayBgmName, v34, v36, v37, v38, v39, v40, v41);
  v48 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0;
  if ( !byte_4D29BEF )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v48 = TerminalPramsManager_TypeInfo;
    byte_4D29BEF = 1;
  }
  if ( !v48->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v48);
    v48 = TerminalPramsManager_TypeInfo;
  }
  v49 = v48->static_fields;
  v49->_SpecifiedChangeSceneInfo_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v49->_SpecifiedChangeSceneInfo_k__BackingField,
    0,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( !byte_4D299AD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D299AD = 1;
  }
  v50 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
  }
  v50->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4D299AF )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
    byte_4D299AF = 1;
  }
  if ( !v50->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v50);
    v50 = TerminalPramsManager_TypeInfo;
  }
  v50->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4D299B1 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
    byte_4D299B1 = 1;
  }
  if ( !v50->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v50);
    v50 = TerminalPramsManager_TypeInfo;
  }
  v50->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4D29BE3 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
    byte_4D29BE3 = 1;
  }
  if ( !v50->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v50);
    v50 = TerminalPramsManager_TypeInfo;
  }
  v50->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v50);
  TerminalPramsManager__ResetResumeScriptWithMap(v51);
  if ( !byte_4D297A9 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D297A9 = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  v58->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v59 = StringLiteral_1/*""*/;
  if ( !byte_4D29BF0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
    byte_4D29BF0 = 1;
  }
  if ( !v58->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v58);
    v58 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (GrandQuestFolderBoardItem_o *)&v58->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v59;
  sub_1C9403C(p_PlayedTerminalEffects_k__BackingField, v59, v52, v53, v54, v55, v56, v57);
  if ( !byte_4D298A8 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D298A8 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4D298A9 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D298A9 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4D2999E )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D2999E = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v68 = v67->static_fields;
  v68->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  *(_QWORD *)&v68->ConnectMarkEventId = 0;
  if ( !byte_4D26B9A )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D26B9A = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4D29BF1 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D29BF1 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4D29BF2 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D29BF2 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4D299A6 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D299A6 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4D297AE )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D297AE = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4D299A4 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D299A4 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4D299A5 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D299A5 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4D299A3 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D299A3 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4D299A6 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D299A6 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4D29998 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D29998 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4D29BF3 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D29BF3 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4D29448 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D29448 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4D27906 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D27906 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4D29BF4 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D29BF4 = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v69 = StringLiteral_1/*""*/;
  if ( !byte_4D299AB )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
    byte_4D299AB = 1;
  }
  if ( !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v67->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v69;
  sub_1C9403C(p_SceneMoveQuestClearedInfo_k__BackingField, v69, v61, v62, v63, v64, v65, v66);
  if ( !byte_4D29BF5 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BF5 = 1;
  }
  v77 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v78 = v77->static_fields;
  v78->_CampaignBonus_k__BackingField = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v78->_CampaignBonus_k__BackingField, 0, v71, v72, v73, v74, v75, v76);
  if ( !byte_4D29BF6 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BF6 = 1;
  }
  v85 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v85 = TerminalPramsManager_TypeInfo;
  }
  v86 = v85->static_fields;
  v86->_CampaignDirectBonus_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v86->_CampaignDirectBonus_k__BackingField,
    0,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  if ( !byte_4D29BF7 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BF7 = 1;
  }
  v93 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
  }
  v93->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
  v94 = StringLiteral_1/*""*/;
  if ( !byte_4D264E7 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
    byte_4D264E7 = 1;
  }
  if ( !v93->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v93);
    v93 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (GrandQuestFolderBoardItem_o *)&v93->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v94;
  sub_1C9403C(p_TransitionScrollTabName_k__BackingField, v94, v87, v88, v89, v90, v91, v92);
  if ( !byte_4D29BF8 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BF8 = 1;
  }
  v97 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v97 = TerminalPramsManager_TypeInfo;
  }
  if ( v97->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
  {
    System_Collections_Generic_HashSet_object___Clear(
      (System_Collections_Generic_HashSet_T__o *)v97->static_fields->_ForcePlayEventTutorialArray_k__BackingField,
      (const MethodInfo_371EE3C *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    v97 = TerminalPramsManager_TypeInfo;
  }
  if ( !v97->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v97);
  if ( !byte_4D29BF9 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BF9 = 1;
  }
  v98 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v98 = TerminalPramsManager_TypeInfo;
  }
  v98->static_fields->_IsPart2FinalChapter_k__BackingField = 0;
  if ( !byte_4D2979A )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v98 = TerminalPramsManager_TypeInfo;
    byte_4D2979A = 1;
  }
  if ( !v98->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v98);
    v98 = TerminalPramsManager_TypeInfo;
  }
  v99 = v98->static_fields;
  RaidBossHpForceHideGroupIndexList = v99->RaidBossHpForceHideGroupIndexList;
  v99->_IsTransitionToTerminalAfterMovie_k__BackingField = 0;
  if ( !RaidBossHpForceHideGroupIndexList
    || (v101 = RaidBossHpForceHideGroupIndexList->fields._version + 1,
        RaidBossHpForceHideGroupIndexList->fields._size = 0,
        RaidBossHpForceHideGroupIndexList->fields._version = v101,
        (nonFrameInBossHpUiIndex = v99->nonFrameInBossHpUiIndex) == 0) )
  {
    sub_1C942F0(v98, v96);
  }
  v103 = nonFrameInBossHpUiIndex->fields._version + 1;
  nonFrameInBossHpUiIndex->fields._size = 0;
  nonFrameInBossHpUiIndex->fields._version = v103;
}


void TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  unsigned __int64 i; // x20
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  struct System_Single_array *v5; // x8
  char *v6; // x8

  if ( (byte_4D29BD7 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BD7 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = TerminalPramsManager_TypeInfo;
    }
    TipsArchiveScrollValueList = v2->static_fields->TipsArchiveScrollValueList;
    if ( !TipsArchiveScrollValueList )
LABEL_14:
      sub_1C942F0(v2, v1);
    if ( (__int64)i >= SLODWORD(TipsArchiveScrollValueList->max_length) )
      break;
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = TerminalPramsManager_TypeInfo;
    }
    v5 = v2->static_fields->TipsArchiveScrollValueList;
    if ( !v5 )
      goto LABEL_14;
    if ( i >= LODWORD(v5->max_length) )
      sub_1C942F8(v2);
    v6 = (char *)v5 + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B71 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B71 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29103 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29103 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( v1->static_fields->_IsAutoResume_k__BackingField )
    return 1;
  if ( !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  if ( !byte_4D29BE0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BE0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoShortcut_k__BackingField;
}


bool TerminalPramsManager__IsAutoForTimeProgressEvents(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *v8; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D29B74 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B74 = 1;
  }
  entity = 0;
  v8 = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29103 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29103 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_IsAutoResume_k__BackingField )
    return 0;
  if ( !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  if ( !byte_4D26A98 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26A98 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D26A98 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26A98 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_34;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 4LL),
          (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_34:
    sub_1C942F0(Instance, v4);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v8,
          (int32_t)entity[6].klass,
          (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v8;
  if ( !v8 )
    goto LABEL_34;
  return EventDetailEntity__IsTimeProgressEvent((EventDetailEntity_o *)v8, 0);
}


bool TerminalPramsManager__IsBlankEarthWarByWarId(int32_t targetWarId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  void *WarInfoByWarID; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w1
  System_Nullable_int__o v8; // x0
  __int64 v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D29BD3 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4D29BD3 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( v3->static_fields->OrdealCallWarId == targetWarId )
  {
    LOBYTE(WarInfoByWarID) = 1;
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v6);
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, targetWarId, 0);
    if ( WarInfoByWarID )
    {
      WarInfoByWarID = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)WarInfoByWarID, 0);
      if ( WarInfoByWarID )
      {
        v7 = *((_DWORD *)WarInfoByWarID + 31);
        v8 = (System_Nullable_int__o)&v10;
        v10 = 0;
        System_Nullable_int____ctor(v8, v7, (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
        LOBYTE(WarInfoByWarID) = HIDWORD(v10) != 0;
      }
    }
  }
  return (char)WarInfoByWarID;
}


void TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29BA3 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11501/*"SAVEKEY_DataLostBattleAutoReset"*/);
    byte_4D29BA3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D299A2 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D299A2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11501/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v1->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D29BC3 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D29BC3 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  entity = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->FesWarId != warId )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
            warId,
            (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       &entity,
                                       warId,
                                       (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return LODWORD(entity[6].klass) == 0;
        }
      }
      sub_1C942F0(Instance, v7);
    }
  }
  return 1;
}


bool TerminalPramsManager__IsMainStoryForQuestId(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  int32_t klass_high; // w19
  Il2CppObject *v9; // [xsp+0h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D29BC4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C94098(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BC4 = 1;
  }
  v9 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (Il2CppObject *)QuestEntity__getSpotId(entity, 0),
        !v5) )
  {
LABEL_16:
    sub_1C942F0(Instance, v4);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v5,
                               &v9,
                               (int32_t)Instance,
                               (const MethodInfo_345B50C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_16;
  klass_high = HIDWORD(v9[1].klass);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStory(klass_high, v4);
}


bool TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4D29BC2 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BC2 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3->static_fields->NotRequiredPlayWarIds,
         warId,
         (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStory(warId, v4);
}


bool TerminalPramsManager__IsNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_4D29BB5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BB5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_1C942F0(0, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B9C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11508/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    byte_4D29B9C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D297AC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D297AC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11508/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B9B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11507/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    byte_4D29B9B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D297AB )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D297AB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11507/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B9D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11509/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    byte_4D29B9D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2999D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2999D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11509/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v1->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
bool TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(int32_t eventId, int32_t day, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *klass; // x0
  Il2CppObject *key; // x8
  char v7; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D29BCD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BCD = 1;
  }
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C17 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C17 = 1;
  }
  klass = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    klass = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  key = klass[2].fields._entries->m_Items[17].fields.key;
  if ( !key || (klass = (System_Collections_Generic_Dictionary_int__object__o *)key[1].klass) == 0 )
    sub_1C942F0(klass, *(_QWORD *)&day);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         klass,
         eventId,
         &value,
         (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (char)value;
    if ( value )
      v7 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
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
  ScrTerminalListTop_c *v2; // x0
  System_String_o *NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  clsQuestCheck_o *v6; // x19
  clsQuestCheck_o *v7; // x19
  TerminalPramsManager_c *v8; // x0
  ScrTerminalListTop_c *v9; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4D29BAE & 1) == 0 )
  {
    sub_1C94098(&ScrTerminalListTop_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BAE = 1;
  }
  v2 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v2 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v2->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v1) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v6 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v6 )
    goto LABEL_34;
  if ( !clsQuestCheck__IsQuestClear(
          v6,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0) )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v7 = (clsQuestCheck_o *)Instance;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  if ( !v7 )
LABEL_34:
    sub_1C942F0(Instance, v5);
  if ( !clsQuestCheck__IsWarClear(
          v7,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D265BD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D265BD = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v9 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v8->static_fields->_QuestId_k__BackingField;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v9 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v9->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D265BC )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D265BC = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      if ( v11->static_fields->_PhaseCnt_k__BackingField == 2 )
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  System_String_array *v14; // x20
  System_Func_object__bool__o *v15; // x21

  if ( (byte_4D29BAC & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_string____79047864);
    sub_1C94098(&System_Func_string__bool__TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&Method_TerminalPramsManager___c__DisplayClass742_0__IsTerminalEffectPlayed_b__0__);
    sub_1C94098(&TerminalPramsManager___c__DisplayClass742_0_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_87/*"\r\n"*/);
    byte_4D29BAC = 1;
  }
  v3 = sub_1C942E4(TerminalPramsManager___c__DisplayClass742_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass742_0___ctor((TerminalPramsManager___c__DisplayClass742_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 16) = effectName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)effectName, v6, v7, v8, v9, v10, v11);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C00 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C00 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( v12->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    if ( !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    if ( !byte_4D29C00 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C00 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v13->static_fields->_PlayedTerminalEffects_k__BackingField;
    if ( PlayedTerminalEffects_k__BackingField )
    {
      PlayedTerminalEffects_k__BackingField = System_String__Replace_64464308(
                                                PlayedTerminalEffects_k__BackingField,
                                                (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                                0);
      if ( PlayedTerminalEffects_k__BackingField )
      {
        v14 = System_String__Split(PlayedTerminalEffects_k__BackingField, 0xAu, 0, 0);
        v15 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v15,
          (Il2CppObject *)v3,
          Method_TerminalPramsManager___c__DisplayClass742_0__IsTerminalEffectPlayed_b__0__,
          0);
        return BasicHelper__Any_object__51926292(
                 (System_Object_array *)v14,
                 (System_Func_T__bool__o *)v15,
                 (const MethodInfo_3185514 *)Method_BasicHelper_Any_string____79047864);
      }
    }
LABEL_21:
    sub_1C942F0(PlayedTerminalEffects_k__BackingField, v5);
  }
  return 0;
}


bool TerminalPramsManager__IsUsePopupQuestReward(int32_t questId, const MethodInfo *method)
{
  QuestMaster_o *Master_object; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  int klass_high; // w19
  BalanceConfig_c *v7; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  int monitor; // w19
  BalanceConfig_c *v11; // x0
  Il2CppObject *v13; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *v14; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *v15; // [xsp+18h] [xbp-38h] BYREF
  Il2CppObject *v16; // [xsp+20h] [xbp-30h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4D29BD1 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4D29BD1 = 1;
  }
  v16 = 0;
  entity = 0;
  v14 = 0;
  v15 = 0;
  v13 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_42;
  if ( !QuestMaster__TryGetQuestEntity(Master_object, &entity, questId, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity )
    goto LABEL_42;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0);
  if ( !v5 )
    goto LABEL_42;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v5,
          &v16,
          (int32_t)Master_object,
          (const MethodInfo_345B50C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
    goto LABEL_45;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v16 || !Master_object )
    goto LABEL_42;
  Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     &v14,
                                     HIDWORD(v16[1].klass),
                                     (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v16 )
    goto LABEL_42;
  klass_high = HIDWORD(v16[1].klass);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( klass_high != v7->static_fields->OrdealCallWarId )
  {
LABEL_45:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SpotMaster___);
    if ( !entity )
      goto LABEL_42;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    Master_object = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0);
    if ( !v9 )
      goto LABEL_42;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v9,
           &v15,
           (int32_t)Master_object,
           (const MethodInfo_345B50C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !v15 || !Master_object )
        goto LABEL_42;
      Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         &v13,
                                         HIDWORD(v15[1].klass),
                                         (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_42;
        monitor = (int)v13[3].monitor;
        v11 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v11 = BalanceConfig_TypeInfo;
        }
        if ( monitor == v11->static_fields->GrandBoardWarId )
        {
          Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( entity && Master_object )
            return clsQuestCheck__IsConsumeStormPod((clsQuestCheck_o *)Master_object, entity->fields.id, 0);
LABEL_42:
          sub_1C942F0(Master_object, v4);
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


bool TerminalPramsManager__IsWarStartedId(int32_t war_id, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  System_String_o *mTerminalWarStartedIds; // x0
  System_String_c *klass; // x8
  System_String_o *v5; // x19
  bool v6; // w21
  unsigned __int64 v7; // x22
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  v11 = war_id;
  if ( (byte_4D29BB0 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_87/*"\r\n"*/);
    byte_4D29BB0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v2->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds
    || (mTerminalWarStartedIds = System_String__Replace_64464308(
                                   mTerminalWarStartedIds,
                                   (System_String_o *)StringLiteral_87/*"\r\n"*/,
                                   (System_String_o *)StringLiteral_43/*"\n"*/,
                                   0)) == 0
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(mTerminalWarStartedIds, 0xAu, 0, 0)) == 0 )
  {
    sub_1C942F0(mTerminalWarStartedIds, method);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v5 = mTerminalWarStartedIds;
  v6 = (int)klass > 0;
  if ( (int)klass >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)klass )
        sub_1C942F8(mTerminalWarStartedIds);
      v8 = (System_String_o *)*((_QWORD *)&v5[1].monitor + v7);
      v9 = System_Int32__ToString((int32_t)&v11, 0);
      mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v8, v9, 0);
      if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
        break;
      LODWORD(klass) = v5[1].klass;
      v6 = (__int64)++v7 < (int)klass;
    }
    while ( (__int64)v7 < (int)klass );
  }
  return v6;
}


void TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B9A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_13759/*"TerminalLastPanelEventPoint"*/);
    byte_4D29B9A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13759/*"TerminalLastPanelEventPoint"*/, v1->static_fields->panelEventPoint, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B98 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11503/*"SAVEKEY_LastPlayBgmName"*/);
    byte_4D29B98 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11503/*"SAVEKEY_LastPlayBgmName"*/, v1->static_fields->lastPlayBgmName, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B99 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11504/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    byte_4D29B99 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11504/*"SAVEKEY_LastPlayQuestConsumeType"*/, v1->static_fields->lastPlayQuestConsumeAp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_ClearData_c *v2; // x0
  TerminalPramsManager_ClearData_c *v3; // x0
  Il2CppObject *String_72069276; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *v11; // x19
  TerminalPramsManager_c *v12; // x0
  GrandQuestFolderBoardItem_o *p_mQuestClearHeroineInfo; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppClass *klass; // x8
  const char *name; // x9
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v31; // x0
  GrandQuestFolderBoardItem_o *v32; // x0
  TerminalPramsManager_c *v33; // x0
  char monitor; // w20
  TerminalPramsManager_c *v35; // x8
  char v36; // w21
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  _QWORD *v38; // x10
  struct QuestRewardInfo_array *v39; // x20
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppClass *v48; // x8
  TerminalPramsManager_c *v49; // x0
  Il2CppClass *v50; // x20
  GrandQuestFolderBoardItem_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  TerminalPramsManager_c *v60; // x8
  struct TerminalPramsManager_StaticFields *v61; // x9
  _QWORD *v62; // x9
  struct UserSuperBossEntity_array *v63; // x20
  TerminalPramsManager_c *v64; // x0
  struct TerminalPramsManager_StaticFields *v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  Il2CppClass *v74; // x8
  Il2CppClass *v75; // x20
  TerminalPramsManager_c *v76; // x0
  struct TerminalPramsManager_StaticFields *v77; // x0
  __int64 v78; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  int *v86; // x8
  GrandQuestFolderBoardItem_c *v87; // x20
  TerminalPramsManager_c *v88; // x0
  GrandQuestFolderBoardItem_o *p_eventPointWinReward_k__BackingField; // x0
  __int64 v90; // x0
  __int64 v91; // x1
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  int32_t v98; // w20
  TerminalPramsManager_c *v99; // x8
  int *v100; // x9
  GrandQuestFolderBoardItem_c *v101; // x20
  TerminalPramsManager_c *v102; // x0
  GrandQuestFolderBoardItem_o *p_eventRaceBoost_k__BackingField; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  Il2CppClass *v112; // x8
  Il2CppClass *v113; // x20
  TerminalPramsManager_c *v114; // x0
  GrandQuestFolderBoardItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v116; // x0
  __int64 v117; // x1
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  _QWORD *v124; // x8
  GrandQuestFolderBoardItem_c *v125; // x20
  TerminalPramsManager_c *v126; // x0
  GrandQuestFolderBoardItem_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  Il2CppClass *v136; // x8
  Il2CppClass *v137; // x20
  TerminalPramsManager_c *v138; // x0
  GrandQuestFolderBoardItem_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v140; // x0
  __int64 v141; // x1
  int32_t v142; // w2
  int32_t v143; // w3
  System_String_o *v144; // x4
  int32_t v145; // w5
  int64_t v146; // x6
  System_String_o *v147; // x7
  _QWORD *v148; // x8
  __int64 v149; // x9
  __int64 v150; // x9
  GrandQuestFolderBoardItem_c *v151; // x20
  TerminalPramsManager_c *v152; // x0
  GrandQuestFolderBoardItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v154; // x0
  __int64 v155; // x1
  int32_t v156; // w2
  int32_t v157; // w3
  System_String_o *v158; // x4
  int32_t v159; // w5
  int64_t v160; // x6
  System_String_o *v161; // x7
  Il2CppClass *v162; // x8
  Il2CppClass *v163; // x20
  TerminalPramsManager_c *v164; // x0
  GrandQuestFolderBoardItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v166; // x0
  __int64 v167; // x1
  int32_t v168; // w2
  int32_t v169; // w3
  System_String_o *v170; // x4
  int32_t v171; // w5
  int64_t v172; // x6
  System_String_o *v173; // x7
  _QWORD *v174; // x8
  GrandQuestFolderBoardItem_c *v175; // x20
  TerminalPramsManager_c *v176; // x0
  GrandQuestFolderBoardItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v178; // x0
  __int64 v179; // x1
  int32_t v180; // w2
  int32_t v181; // w3
  System_String_o *v182; // x4
  int32_t v183; // w5
  int64_t v184; // x6
  System_String_o *v185; // x7
  char v186; // w20
  TerminalPramsManager_c *v187; // x8
  _QWORD *v188; // x9
  GrandQuestFolderBoardItem_c *v189; // x20
  TerminalPramsManager_c *v190; // x0
  GrandQuestFolderBoardItem_o *p_warClearReward_k__BackingField; // x0
  __int64 v192; // x0
  __int64 v193; // x1
  int32_t v194; // w2
  int32_t v195; // w3
  System_String_o *v196; // x4
  int32_t v197; // w5
  int64_t v198; // x6
  System_String_o *v199; // x7
  int32_t v200; // w20
  TerminalPramsManager_c *v201; // x8
  char v202; // w21
  struct TerminalPramsManager_StaticFields *v203; // x9
  _QWORD *v204; // x10
  struct BattleDropItem_array *v205; // x20
  __int64 v206; // x0
  __int64 v207; // x1
  int32_t v208; // w2
  int32_t v209; // w3
  System_String_o *v210; // x4
  int32_t v211; // w5
  int64_t v212; // x6
  System_String_o *v213; // x7
  Il2CppClass *v214; // x8
  TerminalPramsManager_c *v215; // x0
  Il2CppClass *v216; // x20
  GrandQuestFolderBoardItem_o *p_mResultEventPanelRewardInfos; // x0
  int32_t v218; // w2
  int32_t v219; // w3
  System_String_o *v220; // x4
  int32_t v221; // w5
  int64_t v222; // x6
  System_String_o *v223; // x7
  TerminalPramsManager_c *v224; // x0
  Il2CppClass *v225; // x20
  GrandQuestFolderBoardItem_o *p_limitImageAnnounces_k__BackingField; // x0
  int32_t v227; // w2
  int32_t v228; // w3
  System_String_o *v229; // x4
  int32_t v230; // w5
  int64_t v231; // x6
  System_String_o *v232; // x7
  char v233; // w20
  TerminalPramsManager_c *v234; // x0
  int32_t monitor_high; // w21
  int32_t v236; // w21
  char v237; // w21
  GrandQuestFolderBoardItem_c *v238; // x20
  GrandQuestFolderBoardItem_o *p_OldUserEventPoint_k__BackingField; // x0
  __int64 v240; // x0
  __int64 v241; // x1
  int32_t v242; // w2
  int32_t v243; // w3
  System_String_o *v244; // x4
  int32_t v245; // w5
  int64_t v246; // x6
  System_String_o *v247; // x7
  Il2CppClass *v248; // x8
  Il2CppClass *v249; // x20
  TerminalPramsManager_c *v250; // x0
  GrandQuestFolderBoardItem_o *p_UseAddRewardItemRewardInfos_k__BackingField; // x0
  TerminalPramsManager_c *v252; // x0
  TerminalPramsManager_c *v253; // x8
  TerminalPramsManager_c *v254; // x0

  if ( (byte_4D29BC7 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C94098(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BC7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2979D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2979D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_isQuestRewardSetted_k__BackingField )
  {
    v2 = TerminalPramsManager_ClearData_TypeInfo;
    if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
      v2 = TerminalPramsManager_ClearData_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0) )
    {
      v3 = TerminalPramsManager_ClearData_TypeInfo;
      if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
        v3 = TerminalPramsManager_ClearData_TypeInfo;
      }
      String_72069276 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_72069276(
                                          v3->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v11 = JsonManager__Deserialize_object_(
              String_72069276,
              (const MethodInfo_320C52C *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (GrandQuestFolderBoardItem_o *)&v12->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0;
      sub_1C9403C(p_mQuestClearHeroineInfo, 0, v5, v6, v7, v8, v9, v10);
      if ( !v11 )
        sub_1C942F0(v14, v15);
      klass = v11[1].klass;
      if ( !klass )
        sub_1C942F0(v14, v15);
      name = klass->_1.name;
      if ( name && *((int *)name + 8) >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                 (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)v11[1].klass,
                 0);
        v31 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v31 = TerminalPramsManager_TypeInfo;
        }
        v32 = (GrandQuestFolderBoardItem_o *)&v31->static_fields->mQuestClearHeroineInfo;
        v32->klass = (GrandQuestFolderBoardItem_c *)Load;
        sub_1C9403C(v32, (int32_t)Load, v24, v25, v26, v27, v28, v29);
      }
      v33 = TerminalPramsManager_TypeInfo;
      monitor = (char)v11[2].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2932D )
      {
        v33 = (TerminalPramsManager_c *)sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D2932D = 1;
      }
      v35 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v35 = TerminalPramsManager_TypeInfo;
      }
      v35->static_fields->_IsQuestClear_k__BackingField = monitor;
      v36 = BYTE1(v11[2].monitor);
      if ( !byte_4D2932E )
      {
        v33 = (TerminalPramsManager_c *)sub_1C94098(&TerminalPramsManager_TypeInfo);
        v35 = TerminalPramsManager_TypeInfo;
        byte_4D2932E = 1;
      }
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v35->static_fields;
      static_fields->_IsPhaseClear_k__BackingField = v36;
      v38 = v11[1].monitor;
      if ( !v38 )
        sub_1C942F0(v33, v15);
      if ( v38[3] )
        v39 = (struct QuestRewardInfo_array *)v11[1].monitor;
      else
        v39 = 0;
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = TerminalPramsManager_TypeInfo->static_fields;
      }
      static_fields->mQuestRewardInfos = v39;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->mQuestRewardInfos,
        (int32_t)v39,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      v48 = v11[2].klass;
      if ( !v48 )
        sub_1C942F0(v40, v41);
      v49 = TerminalPramsManager_TypeInfo;
      if ( v48->_1.namespaze )
        v50 = v11[2].klass;
      else
        v50 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v49 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = (GrandQuestFolderBoardItem_o *)&v49->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (GrandQuestFolderBoardItem_c *)v50;
      sub_1C9403C(p_mQuestPhaseRewardInfos, (int32_t)v50, v42, v43, v44, v45, v46, v47);
      v60 = TerminalPramsManager_TypeInfo;
      v61 = TerminalPramsManager_TypeInfo->static_fields;
      *(_QWORD *)&v61->clearLastBattleRaidId = *(void **)((char *)&v11[2].monitor + 4);
      v61->joinGroupId = HIDWORD(v11[3].klass);
      v62 = v11[3].monitor;
      if ( !v62 )
        sub_1C942F0(v52, v53);
      if ( v62[3] )
        v63 = (struct UserSuperBossEntity_array *)v11[3].monitor;
      else
        v63 = 0;
      if ( !v60->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v60);
      if ( !byte_4D29C0D )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29C0D = 1;
      }
      v64 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v64 = TerminalPramsManager_TypeInfo;
      }
      v65 = v64->static_fields;
      v65->_oldSuperBoss_k__BackingField = v63;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v65->_oldSuperBoss_k__BackingField,
        (int32_t)v63,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      v74 = v11[4].klass;
      if ( !v74 )
        sub_1C942F0(v66, v67);
      if ( v74->_1.namespaze )
        v75 = v11[4].klass;
      else
        v75 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D29C0E )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29C0E = 1;
      }
      v76 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v76 = TerminalPramsManager_TypeInfo;
      }
      v77 = v76->static_fields;
      v77->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v75;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v77->_oldPersonalBoss_k__BackingField,
        (int32_t)v75,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v86 = (int *)v11[4].monitor;
      if ( !v86 )
        sub_1C942F0(v78, v79);
      if ( v86[4] <= 0 )
        v87 = 0;
      else
        v87 = (GrandQuestFolderBoardItem_c *)v11[4].monitor;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D29C07 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29C07 = 1;
      }
      v88 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v88 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = (GrandQuestFolderBoardItem_o *)&v88->static_fields->_eventPointWinReward_k__BackingField;
      p_eventPointWinReward_k__BackingField->klass = v87;
      sub_1C9403C(p_eventPointWinReward_k__BackingField, (int32_t)v87, v80, v81, v82, v83, v84, v85);
      v98 = (int32_t)v11[5].klass;
      if ( !byte_4D29C08 )
      {
        v90 = sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29C08 = 1;
      }
      v99 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v99 = TerminalPramsManager_TypeInfo;
      }
      v99->static_fields->_eventPointWinType_k__BackingField = v98;
      v100 = (int *)v11[5].monitor;
      if ( !v100 )
        sub_1C942F0(v90, v91);
      if ( v100[4] <= 0 )
        v101 = 0;
      else
        v101 = (GrandQuestFolderBoardItem_c *)v11[5].monitor;
      if ( !v99->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v99);
      if ( !byte_4D299AC )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D299AC = 1;
      }
      v102 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v102 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = (GrandQuestFolderBoardItem_o *)&v102->static_fields->_eventRaceBoost_k__BackingField;
      p_eventRaceBoost_k__BackingField->klass = v101;
      sub_1C9403C(p_eventRaceBoost_k__BackingField, (int32_t)v101, v92, v93, v94, v95, v96, v97);
      v112 = v11[6].klass;
      if ( !v112 )
        sub_1C942F0(v104, v105);
      if ( v112->_1.namespaze )
        v113 = v11[6].klass;
      else
        v113 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D298A7 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D298A7 = 1;
      }
      v114 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v114 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (GrandQuestFolderBoardItem_o *)&v114->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v113;
      sub_1C9403C(p_questClearCostumeRelease_k__BackingField, (int32_t)v113, v106, v107, v108, v109, v110, v111);
      v124 = v11[6].monitor;
      if ( !v124 )
        sub_1C942F0(v116, v117);
      if ( v124[3] )
        v125 = (GrandQuestFolderBoardItem_c *)v11[6].monitor;
      else
        v125 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D29799 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29799 = 1;
      }
      v126 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (GrandQuestFolderBoardItem_o *)&v126->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = v125;
      sub_1C9403C(p_questClearCostumeGet_k__BackingField, (int32_t)v125, v118, v119, v120, v121, v122, v123);
      v136 = v11[7].klass;
      if ( !v136 )
        sub_1C942F0(v128, v129);
      if ( SLODWORD(v136->_1.name) <= 0 )
        v137 = 0;
      else
        v137 = v11[7].klass;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D29C0B )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29C0B = 1;
      }
      v138 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v138 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (GrandQuestFolderBoardItem_o *)&v138->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v137;
      sub_1C9403C(p_eventTowerReward_k__BackingField, (int32_t)v137, v130, v131, v132, v133, v134, v135);
      v148 = v11[7].monitor;
      if ( !v148 )
        sub_1C942F0(v140, v141);
      v149 = v148[3];
      if ( v149 )
      {
        if ( !(_DWORD)v149 )
          sub_1C942F8(v140);
        v150 = v148[4];
        if ( !v150 )
          sub_1C942F0(v140, v141);
        if ( *(__int64 *)(v150 + 32) <= 0 )
          v151 = 0;
        else
          v151 = (GrandQuestFolderBoardItem_c *)v11[7].monitor;
      }
      else
      {
        v151 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D29C0C )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29C0C = 1;
      }
      v152 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v152->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = v151;
      sub_1C9403C(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v151, v142, v143, v144, v145, v146, v147);
      v162 = v11[8].klass;
      if ( !v162 )
        sub_1C942F0(v154, v155);
      if ( v162->_1.namespaze )
        v163 = v11[8].klass;
      else
        v163 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D29793 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29793 = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v164->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v163;
      sub_1C9403C(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v163, v156, v157, v158, v159, v160, v161);
      v174 = v11[8].monitor;
      if ( !v174 )
        sub_1C942F0(v166, v167);
      if ( v174[3] )
        v175 = (GrandQuestFolderBoardItem_c *)v11[8].monitor;
      else
        v175 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D29794 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29794 = 1;
      }
      v176 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v176 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v176->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v175;
      sub_1C9403C(
        p_resultEventBoardGameTokenRewardInfo_k__BackingField,
        (int32_t)v175,
        v168,
        v169,
        v170,
        v171,
        v172,
        v173);
      v186 = (char)v11[9].klass;
      if ( !byte_4D28365 )
      {
        v178 = sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D28365 = 1;
      }
      v187 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v187 = TerminalPramsManager_TypeInfo;
      }
      v187->static_fields->_IsDispOnly_k__BackingField = v186;
      v188 = v11[9].monitor;
      if ( !v188 )
        sub_1C942F0(v178, v179);
      if ( v188[3] )
        v189 = (GrandQuestFolderBoardItem_c *)v11[9].monitor;
      else
        v189 = 0;
      if ( !v187->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v187);
      if ( !byte_4D2979F )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D2979F = 1;
      }
      v190 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v190 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (GrandQuestFolderBoardItem_o *)&v190->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = v189;
      sub_1C9403C(p_warClearReward_k__BackingField, (int32_t)v189, v180, v181, v182, v183, v184, v185);
      v200 = (int32_t)v11[10].klass;
      if ( !byte_4D26F69 )
      {
        v192 = sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D26F69 = 1;
      }
      v201 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v201 = TerminalPramsManager_TypeInfo;
      }
      v201->static_fields->_EventActivityPointEffectState_k__BackingField = v200;
      v202 = BYTE4(v11[10].klass);
      if ( !byte_4D2979C )
      {
        v192 = sub_1C94098(&TerminalPramsManager_TypeInfo);
        v201 = TerminalPramsManager_TypeInfo;
        byte_4D2979C = 1;
      }
      if ( !v201->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v201);
        v201 = TerminalPramsManager_TypeInfo;
      }
      v203 = v201->static_fields;
      v203->_IsWarBoardClear_k__BackingField = v202;
      v204 = v11[10].monitor;
      if ( !v204 )
        sub_1C942F0(v192, v193);
      if ( v204[3] )
        v205 = (struct BattleDropItem_array *)v11[10].monitor;
      else
        v205 = 0;
      if ( !v201->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v201);
        v203 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v203->mQuestResultAfterEventRewardInfos = v205;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v203->mQuestResultAfterEventRewardInfos,
        (int32_t)v205,
        v194,
        v195,
        v196,
        v197,
        v198,
        v199);
      v214 = v11[11].klass;
      if ( !v214 )
        sub_1C942F0(v206, v207);
      v215 = TerminalPramsManager_TypeInfo;
      if ( v214->_1.namespaze )
        v216 = v11[11].klass;
      else
        v216 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v215 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = (GrandQuestFolderBoardItem_o *)&v215->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (GrandQuestFolderBoardItem_c *)v216;
      sub_1C9403C(p_mResultEventPanelRewardInfos, (int32_t)v216, v208, v209, v210, v211, v212, v213);
      v224 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = (int32_t)v11[11].monitor;
      v225 = v11[12].klass;
      if ( !byte_4D29797 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        v224 = TerminalPramsManager_TypeInfo;
        byte_4D29797 = 1;
      }
      if ( !v224->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v224);
        v224 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (GrandQuestFolderBoardItem_o *)&v224->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v225;
      sub_1C9403C(p_limitImageAnnounces_k__BackingField, (int32_t)v225, v218, v219, v220, v221, v222, v223);
      v233 = (char)v11[12].monitor;
      if ( !byte_4D29331 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29331 = 1;
      }
      v234 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v234 = TerminalPramsManager_TypeInfo;
      }
      v234->static_fields->_IsOrdealCallWarClear_k__BackingField = v233;
      monitor_high = HIDWORD(v11[12].monitor);
      if ( !byte_4D2978E )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        v234 = TerminalPramsManager_TypeInfo;
        byte_4D2978E = 1;
      }
      if ( !v234->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v234);
        v234 = TerminalPramsManager_TypeInfo;
      }
      v234->static_fields->_EventMuralId_k__BackingField = monitor_high;
      v236 = (int32_t)v11[13].klass;
      if ( !byte_4D299A9 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        v234 = TerminalPramsManager_TypeInfo;
        byte_4D299A9 = 1;
      }
      if ( !v234->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v234);
        v234 = TerminalPramsManager_TypeInfo;
      }
      v234->static_fields->_EventActionQuestId_k__BackingField = v236;
      v237 = BYTE4(v11[13].klass);
      if ( !byte_4D29790 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        v234 = TerminalPramsManager_TypeInfo;
        byte_4D29790 = 1;
      }
      if ( !v234->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v234);
        v234 = TerminalPramsManager_TypeInfo;
      }
      v234->static_fields->_PlayHappinessCounterEffect_k__BackingField = v237;
      v238 = (GrandQuestFolderBoardItem_c *)v11[13].monitor;
      if ( !byte_4D29C05 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        v234 = TerminalPramsManager_TypeInfo;
        byte_4D29C05 = 1;
      }
      if ( !v234->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v234);
        v234 = TerminalPramsManager_TypeInfo;
      }
      p_OldUserEventPoint_k__BackingField = (GrandQuestFolderBoardItem_o *)&v234->static_fields->_OldUserEventPoint_k__BackingField;
      p_OldUserEventPoint_k__BackingField->klass = v238;
      sub_1C9403C(p_OldUserEventPoint_k__BackingField, (int32_t)v238, v227, v228, v229, v230, v231, v232);
      v248 = v11[14].klass;
      if ( !v248 )
        sub_1C942F0(v240, v241);
      if ( v248->_1.namespaze )
        v249 = v11[14].klass;
      else
        v249 = 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D26E66 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D26E66 = 1;
      }
      v250 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v250 = TerminalPramsManager_TypeInfo;
      }
      p_UseAddRewardItemRewardInfos_k__BackingField = (GrandQuestFolderBoardItem_o *)&v250->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
      p_UseAddRewardItemRewardInfos_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v249;
      sub_1C9403C(p_UseAddRewardItemRewardInfos_k__BackingField, (int32_t)v249, v242, v243, v244, v245, v246, v247);
      v252 = TerminalPramsManager_TypeInfo;
      if ( BYTE1(v11[2].monitor) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D26F6B )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D26F6B = 1;
        }
        v252 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v252 = TerminalPramsManager_TypeInfo;
        }
        v252->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( !v252->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v252);
      if ( !byte_4D2979E )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D2979E = 1;
      }
      v253 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v253 = TerminalPramsManager_TypeInfo;
      }
      if ( v253->static_fields->_warClearReward_k__BackingField )
        goto LABEL_276;
      if ( !v253->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v253);
      if ( !byte_4D2979B )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D2979B = 1;
      }
      v253 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v253 = TerminalPramsManager_TypeInfo;
      }
      if ( v253->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_276:
        if ( !v253->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v253);
        if ( !byte_4D29C15 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29C15 = 1;
        }
        v254 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v254 = TerminalPramsManager_TypeInfo;
        }
        v254->static_fields->_isQuestRewardSetted_k__BackingField = 1;
      }
    }
  }
}


void TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *String; // x20
  EventRaidDefeatedEffectInfo_o *v3; // x19
  const MethodInfo *v4; // x2
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29BCA & 1) == 0 )
  {
    sub_1C94098(&EventRaidDefeatedEffectInfo_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11502/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4D29BCA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C17 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C17 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11502/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0);
    v3 = (EventRaidDefeatedEffectInfo_o *)sub_1C942E4(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v3, String, v4);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29C16 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C16 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v3;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
      (int32_t)v3,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
}


void TerminalPramsManager__LoadQuestRandomGroupList(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *String; // x20
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  System_String_array *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int max_length; // w8
  System_String_array *v13; // x20
  unsigned int v14; // w23
  System_String_array *v15; // x21
  TerminalPramsManager_c *v16; // x0
  GrandQuestFolderBoardItem_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D29BCF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11512/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4D29BCF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28FD3 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28FD3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_QuestRandomGroupList_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11512/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0);
    v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v3,
      (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0;
    if ( !String )
      goto LABEL_35;
    v4 = System_String__Split(String, 0x2Cu, 0, 0);
    if ( !v4 )
      goto LABEL_35;
    max_length = v4->max_length;
    v13 = v4;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
LABEL_36:
          sub_1C942F8(v4);
        v4 = (System_String_array *)v13->m_Items[v14];
        if ( !v4 )
          break;
        v4 = System_String__Split((System_String_o *)v4, 0x3Au, 0, 0);
        if ( !v4 )
          break;
        v15 = v4;
        if ( SLODWORD(v4->max_length) >= 2 )
        {
          v4 = (System_String_array *)System_Int32__TryParse(v4->m_Items[0], &result[1], 0);
          if ( result[1] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
          {
            if ( LODWORD(v15->max_length) <= 1 )
              goto LABEL_36;
            v4 = (System_String_array *)System_Int32__TryParse(v15->m_Items[1], result, 0);
            v6 = result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
            {
              if ( !v3 )
                break;
              System_Collections_Generic_Dictionary_int__int___Add(
                v3,
                result[1],
                result[0],
                (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_27;
      }
LABEL_35:
      sub_1C942F0(v4, v5);
    }
LABEL_27:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29C18 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C18 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (GrandQuestFolderBoardItem_o *)&v16->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v3;
    sub_1C9403C(p_QuestRandomGroupList_k__BackingField, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  }
}


void TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1

  if ( (byte_4D29BB7 & 1) == 0 )
  {
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BB7 = 1;
  }
  if ( !QuestFocusStateManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestFocusStateManager_TypeInfo);
  QuestFocusStateManager__ClearQuestFocusStateDataList(0);
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager )
    sub_1C942F0(0, v3);
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0);
}


void TerminalPramsManager__LoadSaveDataPlanetEarthSpotId(const MethodInfo *method)
{
  int32_t Int_72068708; // w19
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4D29BAA & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/);
    byte_4D29BAA = 1;
  }
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/, 0) )
  {
    Int_72068708 = UnityEngine_PlayerPrefs__GetInt_72068708((System_String_o *)StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28F1F )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28F1F = 1;
    }
    v2 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v2 = TerminalPramsManager_TypeInfo;
    }
    v2->static_fields->_PlanetEarthSpotId_k__BackingField = Int_72068708;
  }
}


void TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  System_String_o *v1; // x19
  int32_t Int_72068708; // w19
  TerminalPramsManager_c *v3; // x0
  System_String_o *v4; // x19
  int32_t v5; // w19
  TerminalPramsManager_c *v6; // x0
  System_String_o *v7; // x19
  int32_t v8; // w19
  TerminalPramsManager_c *v9; // x0
  System_String_o *v10; // x19
  int32_t v11; // w19
  TerminalPramsManager_c *v12; // x0
  System_String_o *v13; // x19
  int32_t v14; // w19
  TerminalPramsManager_c *v15; // x0
  System_String_o *v16; // x19
  int32_t v17; // w19
  TerminalPramsManager_c *v18; // x0
  System_String_o *v19; // x19
  System_String_o *String_72069276; // x20
  int64_t v21; // x19
  TerminalPramsManager_c *v22; // x0
  System_String_o *v23; // x19
  int32_t v24; // w19
  TerminalPramsManager_c *v25; // x0
  System_String_o *v26; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_String_o *v33; // x19
  TerminalPramsManager_c *v34; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v36; // x19
  int32_t v37; // w19
  TerminalPramsManager_c *v38; // x0
  System_String_o *v39; // x19
  int32_t v40; // w19
  TerminalPramsManager_c *v41; // x0
  System_String_o *v42; // x19
  int32_t v43; // w19
  TerminalPramsManager_c *v44; // x0
  System_String_o *v45; // x19
  int32_t v46; // w19
  TerminalPramsManager_c *v47; // x0
  System_String_o *v48; // x19
  int32_t v49; // w19
  TerminalPramsManager_c *v50; // x0
  System_String_o *v51; // x19
  int32_t v52; // w19
  TerminalPramsManager_c *v53; // x0
  System_String_o *v54; // x19
  System_String_o *v55; // x20
  int64_t v56; // x19
  TerminalPramsManager_c *v57; // x0
  System_String_o *v58; // x19
  int32_t v59; // w19
  TerminalPramsManager_c *v60; // x0
  System_String_o *v61; // x19
  int32_t v62; // w19
  TerminalPramsManager_c *v63; // x0
  System_String_o *v64; // x19
  Il2CppObject *v65; // x19
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  Il2CppObject *v72; // x19
  TerminalPramsManager_c *v73; // x0
  GrandQuestFolderBoardItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v75; // x19
  const MethodInfo *v76; // x2
  int32_t v77; // w20
  TerminalPramsManager_c *v78; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v80; // x19
  Il2CppObject *v81; // x19
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  Il2CppObject *v88; // x19
  TerminalPramsManager_c *v89; // x8
  GrandQuestFolderBoardItem_o *p_eventConquestInfos; // x0
  System_String_o *v91; // x19
  int32_t v92; // w19
  TerminalPramsManager_c *v93; // x8
  System_String_o *v94; // x19
  int32_t v95; // w19
  TerminalPramsManager_c *v96; // x8
  System_String_o *v97; // x19
  Il2CppObject *v98; // x19
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  Il2CppObject *v105; // x19
  TerminalPramsManager_c *v106; // x8
  GrandQuestFolderBoardItem_o *p_eventHarvestGrowthInfo; // x0
  System_String_o *v108; // x19
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  System_String_o *v115; // x19
  TerminalPramsManager_c *v116; // x8
  GrandQuestFolderBoardItem_o *p_lastPlayBgmName; // x0
  System_String_o *v118; // x19
  int32_t v119; // w19
  TerminalPramsManager_c *v120; // x8
  System_String_o *v121; // x19
  int32_t v122; // w19
  TerminalPramsManager_c *v123; // x0
  System_String_o *v124; // x19
  int32_t v125; // w19
  TerminalPramsManager_c *v126; // x8
  System_String_o *v127; // x19
  int32_t v128; // w2
  int32_t v129; // w3
  System_String_o *v130; // x4
  int32_t v131; // w5
  int64_t v132; // x6
  System_String_o *v133; // x7
  System_String_o *v134; // x19
  TerminalPramsManager_c *v135; // x0
  GrandQuestFolderBoardItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v137; // x19
  int32_t v138; // w19
  TerminalPramsManager_c *v139; // x0
  System_String_o *v140; // x19
  int32_t v141; // w19
  TerminalPramsManager_c *v142; // x0
  System_String_o *v143; // x19
  int32_t v144; // w19
  TerminalPramsManager_c *v145; // x0
  System_String_o *v146; // x19
  int32_t v147; // w19
  TerminalPramsManager_c *v148; // x0
  System_String_o *v149; // x19
  int32_t v150; // w19
  TerminalPramsManager_c *v151; // x8
  System_String_o *v152; // x19
  int32_t v153; // w19
  TerminalPramsManager_c *v154; // x8
  System_String_o *v155; // x19
  int32_t v156; // w19
  TerminalPramsManager_c *v157; // x0
  System_String_o *v158; // x19
  int32_t v159; // w2
  int32_t v160; // w3
  System_String_o *v161; // x4
  int32_t v162; // w5
  int64_t v163; // x6
  System_String_o *v164; // x7
  System_String_o *v165; // x19
  TerminalPramsManager_c *v166; // x0
  GrandQuestFolderBoardItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v168; // x19
  System_String_o *v169; // x19
  System_String_array *IsNullOrEmpty; // x0
  __int64 v171; // x1
  il2cpp_array_size_t max_length; // x8
  System_String_array *v173; // x19
  int32_t v174; // w20
  TerminalPramsManager_c *v175; // x8
  int32_t v176; // w0
  int32_t v177; // w19
  TerminalPramsManager_c *v178; // x0
  System_String_o *v179; // x19
  int32_t v180; // w19
  TerminalPramsManager_c *v181; // x0
  System_String_o *v182; // x19
  int32_t v183; // w19
  TerminalPramsManager_c *v184; // x0
  System_String_o *v185; // x19
  Il2CppObject *v186; // x19
  int32_t v187; // w2
  int32_t v188; // w3
  System_String_o *v189; // x4
  int32_t v190; // w5
  int64_t v191; // x6
  System_String_o *v192; // x7
  Il2CppObject *v193; // x19
  TerminalPramsManager_c *v194; // x0
  struct TerminalPramsManager_StaticFields *v195; // x0
  System_String_o *v196; // x19
  int32_t v197; // w19
  TerminalPramsManager_c *v198; // x0
  System_String_o *v199; // x19
  int32_t v200; // w19
  TerminalPramsManager_c *v201; // x0
  System_String_o *v202; // x19
  int32_t v203; // w19
  TerminalPramsManager_c *v204; // x0
  System_String_o *v205; // x19
  int32_t v206; // w19
  TerminalPramsManager_c *v207; // x0
  System_String_o *v208; // x19
  int32_t v209; // w19
  TerminalPramsManager_c *v210; // x0

  if ( (byte_4D29B87 & 1) == 0 )
  {
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    sub_1C94098(&Method_JsonManager_Deserialize_EventConquestInfo_____);
    sub_1C94098(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    sub_1C94098(&Method_JsonManager_Deserialize_EventSaveData___);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11503/*"SAVEKEY_LastPlayBgmName"*/);
    sub_1C94098(&StringLiteral_13756/*"TerminalEndTime"*/);
    sub_1C94098(&StringLiteral_11510/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C94098(&StringLiteral_8109/*"IsTransitionToTerminalAfterMovie"*/);
    sub_1C94098(&StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C94098(&StringLiteral_11497/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_1C94098(&StringLiteral_11504/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_1C94098(&StringLiteral_11517/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1C94098(&StringLiteral_11515/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    sub_1C94098(&StringLiteral_8080/*"IsPart2FinalChapter"*/);
    sub_1C94098(&StringLiteral_13757/*"TerminalEventDailyPointEventId"*/);
    sub_1C94098(&StringLiteral_13754/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_1C94098(&StringLiteral_13763/*"TerminalPhaseCnt"*/);
    sub_1C94098(&StringLiteral_11514/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C94098(&StringLiteral_13771/*"TerminalTimeStatusEventId"*/);
    sub_1C94098(&StringLiteral_13755/*"TerminalDispState"*/);
    sub_1C94098(&StringLiteral_11507/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C94098(&StringLiteral_13758/*"TerminalIsDoneShortcut"*/);
    sub_1C94098(&StringLiteral_11505/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C94098(&StringLiteral_11511/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C94098(&StringLiteral_11495/*"SAVEKEY_BlankEarthRank"*/);
    sub_1C94098(&StringLiteral_13759/*"TerminalLastPanelEventPoint"*/);
    sub_1C94098(&StringLiteral_11516/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_1C94098(&StringLiteral_11498/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C94098(&StringLiteral_11508/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C94098(&StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/);
    sub_1C94098(&StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/);
    sub_1C94098(&StringLiteral_13766/*"TerminalQuestId"*/);
    sub_1C94098(&StringLiteral_11513/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_1C94098(&StringLiteral_11519/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C94098(&StringLiteral_13770/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C94098(&StringLiteral_13775/*"TerminalWarId"*/);
    sub_1C94098(&StringLiteral_13768/*"TerminalSpotId"*/);
    sub_1C94098(&StringLiteral_13772/*"TerminalTimeStatusLoopCount"*/);
    sub_1C94098(&StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C94098(&StringLiteral_11496/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C94098(&StringLiteral_11501/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C94098(&StringLiteral_13776/*"TerminalWarStartedIds"*/);
    sub_1C94098(&StringLiteral_11500/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C94098(&StringLiteral_13760/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1C94098(&StringLiteral_11499/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C94098(&StringLiteral_11509/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_13761/*"TerminalLastPlayedQuestId"*/);
    sub_1C94098(&StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/);
    sub_1C94098(&StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/);
    sub_1C94098(&StringLiteral_11518/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4D29B87 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13755/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13755/*"TerminalDispState"*/, 0) )
  {
    Int_72068708 = UnityEngine_PlayerPrefs__GetInt_72068708(v1, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FD9 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FD9 = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->_DispState_k__BackingField = Int_72068708;
  }
  v4 = (System_String_o *)StringLiteral_13775/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13775/*"TerminalWarId"*/, 0) )
  {
    v5 = UnityEngine_PlayerPrefs__GetInt_72068708(v4, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FDD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FDD = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_WarId_k__BackingField = v5;
  }
  v7 = (System_String_o *)StringLiteral_13768/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13768/*"TerminalSpotId"*/, 0) )
  {
    v8 = UnityEngine_PlayerPrefs__GetInt_72068708(v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FDC )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FDC = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_SpotId_k__BackingField = v8;
  }
  v10 = (System_String_o *)StringLiteral_13766/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13766/*"TerminalQuestId"*/, 0) )
  {
    v11 = UnityEngine_PlayerPrefs__GetInt_72068708(v10, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FD7 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FD7 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_QuestId_k__BackingField = v11;
  }
  v13 = (System_String_o *)StringLiteral_13761/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13761/*"TerminalLastPlayedQuestId"*/, 0) )
  {
    v14 = UnityEngine_PlayerPrefs__GetInt_72068708(v13, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29445 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29445 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_LastPlayedQuestId_k__BackingField = v14;
  }
  v16 = (System_String_o *)StringLiteral_13763/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13763/*"TerminalPhaseCnt"*/, 0) )
  {
    v17 = UnityEngine_PlayerPrefs__GetInt_72068708(v16, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FDB )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FDB = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_PhaseCnt_k__BackingField = v17;
  }
  v19 = (System_String_o *)StringLiteral_13756/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13756/*"TerminalEndTime"*/, 0) )
  {
    String_72069276 = UnityEngine_PlayerPrefs__GetString_72069276(v19, 0);
    v21 = 0;
    if ( System_String__op_Inequality(String_72069276, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v21 = System_Convert__ToInt64_65505992(String_72069276, 0);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FD8 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FD8 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_EndTime_k__BackingField = v21;
  }
  v23 = (System_String_o *)StringLiteral_13758/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13758/*"TerminalIsDoneShortcut"*/, 0) )
  {
    v24 = UnityEngine_PlayerPrefs__GetInt_72068708(v23, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FDA )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FDA = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsDoneShortcut_k__BackingField = v24 != 0;
  }
  v26 = (System_String_o *)StringLiteral_13776/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13776/*"TerminalWarStartedIds"*/, 0) )
  {
    v33 = UnityEngine_PlayerPrefs__GetString_72069276(v26, 0);
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v34->static_fields;
    static_fields->mTerminalWarStartedIds = v33;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->mTerminalWarStartedIds,
      (int32_t)v33,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v36 = (System_String_o *)StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5187/*"Debug_IsQuestReleaseAll"*/, 0) )
  {
    v37 = UnityEngine_PlayerPrefs__GetInt_72068708(v36, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BE7 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BE7 = 1;
    }
    v38 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v38 = TerminalPramsManager_TypeInfo;
    }
    v38->static_fields->mDebug_IsQuestReleaseAll = v37 != 0;
  }
  v39 = (System_String_o *)StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5184/*"Debug_IsDummyErrorSelect"*/, 0) )
  {
    v40 = UnityEngine_PlayerPrefs__GetInt_72068708(v39, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BE8 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BE8 = 1;
    }
    v41 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v41 = TerminalPramsManager_TypeInfo;
    }
    v41->static_fields->mDebug_IsDummyErrorSelect = v40 != 0;
  }
  v42 = (System_String_o *)StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5183/*"Debug_IsBuildInfoDisp"*/, 0) )
  {
    v43 = UnityEngine_PlayerPrefs__GetInt_72068708(v42, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BE9 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BE9 = 1;
    }
    v44 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v44 = TerminalPramsManager_TypeInfo;
    }
    v44->static_fields->mDebug_IsBuildInfoDisp = v43 != 0;
  }
  v45 = (System_String_o *)StringLiteral_13771/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13771/*"TerminalTimeStatusEventId"*/, 0) )
  {
    v46 = UnityEngine_PlayerPrefs__GetInt_72068708(v45, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D297BE )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D297BE = 1;
    }
    v47 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v47 = TerminalPramsManager_TypeInfo;
    }
    v47->static_fields->_TimeStatusEventId_k__BackingField = v46;
  }
  v48 = (System_String_o *)StringLiteral_13772/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13772/*"TerminalTimeStatusLoopCount"*/, 0) )
  {
    v49 = UnityEngine_PlayerPrefs__GetInt_72068708(v48, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D297BF )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D297BF = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
    }
    v50->static_fields->_TimeStatusLoopCount_k__BackingField = v49;
  }
  v51 = (System_String_o *)StringLiteral_13757/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13757/*"TerminalEventDailyPointEventId"*/, 0) )
  {
    v52 = UnityEngine_PlayerPrefs__GetInt_72068708(v51, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BEB )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BEB = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    v53->static_fields->_EventDailyPointEventId_k__BackingField = v52;
  }
  v54 = (System_String_o *)StringLiteral_13770/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13770/*"TerminalTimeStatusEventDailyPoint"*/, 0) )
  {
    v55 = UnityEngine_PlayerPrefs__GetString_72069276(v54, 0);
    v56 = 0;
    if ( !System_String__op_Equality(v55, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v56 = System_Convert__ToInt64_65505992(v55, 0);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BEC )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BEC = 1;
    }
    v57 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v57 = TerminalPramsManager_TypeInfo;
    }
    v57->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v56;
  }
  v58 = (System_String_o *)StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/, 0) )
  {
    v59 = UnityEngine_PlayerPrefs__GetInt_72068708(v58, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BED )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BED = 1;
    }
    v60 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v60 = TerminalPramsManager_TypeInfo;
    }
    v60->static_fields->_BeforeEventActivityPoint_k__BackingField = v59;
  }
  v61 = (System_String_o *)StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/, 0) )
  {
    v62 = UnityEngine_PlayerPrefs__GetInt_72068708(v61, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BEE )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BEE = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v62;
  }
  v64 = (System_String_o *)StringLiteral_13754/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13754/*"TerminalBeforeEventSubmarinePointData"*/, 0) )
  {
    v65 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_72069276(v64, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v72 = JsonManager__Deserialize_object_(
            v65,
            (const MethodInfo_320C52C *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29106 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29106 = 1;
    }
    v73 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v73 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (GrandQuestFolderBoardItem_o *)&v73->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v72;
    sub_1C9403C(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v72, v66, v67, v68, v69, v70, v71);
  }
  v75 = (System_String_o *)StringLiteral_11517/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11517/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0) )
  {
    v77 = UnityEngine_PlayerPrefs__GetInt_72068708(v75, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BE6 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BE6 = 1;
    }
    v78 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v78 = TerminalPramsManager_TypeInfo;
    }
    v78->static_fields->_LastSelectQuestIndex_k__BackingField = v77;
    if ( !byte_4D26A98 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      v78 = TerminalPramsManager_TypeInfo;
      byte_4D26A98 = 1;
    }
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v78 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v78->static_fields->_WarId_k__BackingField;
    if ( !byte_4D29BFA )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      v78 = TerminalPramsManager_TypeInfo;
      byte_4D29BFA = 1;
    }
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v78 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v78->static_fields->_LastSelectQuestIndex_k__BackingField,
      v76);
  }
  v80 = (System_String_o *)StringLiteral_11514/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11514/*"SAVEKEY_TerminalConquestInfos"*/, 0) )
  {
    v81 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_72069276(v80, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v88 = JsonManager__Deserialize_object_(
            v81,
            (const MethodInfo_320C52C *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v89 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v89 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (GrandQuestFolderBoardItem_o *)&v89->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (GrandQuestFolderBoardItem_c *)v88;
    sub_1C9403C(p_eventConquestInfos, (int32_t)v88, v82, v83, v84, v85, v86, v87);
  }
  v91 = (System_String_o *)StringLiteral_11513/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11513/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0) )
  {
    v92 = UnityEngine_PlayerPrefs__GetInt_72068708(v91, 0);
    v93 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    v93->static_fields->eventConquestInfoDisp = v92 != 0;
  }
  v94 = (System_String_o *)StringLiteral_11515/*"SAVEKEY_TerminalCraftInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11515/*"SAVEKEY_TerminalCraftInfoDisp"*/, 0) )
  {
    v95 = UnityEngine_PlayerPrefs__GetInt_72068708(v94, 0);
    v96 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v96 = TerminalPramsManager_TypeInfo;
    }
    v96->static_fields->eventCraftInfoDisp = v95 != 0;
  }
  v97 = (System_String_o *)StringLiteral_11516/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11516/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0) )
  {
    v98 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_72069276(v97, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v105 = JsonManager__Deserialize_object_(
             v98,
             (const MethodInfo_320C52C *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v106 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (GrandQuestFolderBoardItem_o *)&v106->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (GrandQuestFolderBoardItem_c *)v105;
    sub_1C9403C(p_eventHarvestGrowthInfo, (int32_t)v105, v99, v100, v101, v102, v103, v104);
  }
  v108 = (System_String_o *)StringLiteral_11503/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11503/*"SAVEKEY_LastPlayBgmName"*/, 0) )
  {
    v115 = UnityEngine_PlayerPrefs__GetString_72069276(v108, 0);
    v116 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v116 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (GrandQuestFolderBoardItem_o *)&v116->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (GrandQuestFolderBoardItem_c *)v115;
    sub_1C9403C(p_lastPlayBgmName, (int32_t)v115, v109, v110, v111, v112, v113, v114);
  }
  v118 = (System_String_o *)StringLiteral_11504/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11504/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0) )
  {
    v119 = UnityEngine_PlayerPrefs__GetInt_72068708(v118, 0);
    v120 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v120 = TerminalPramsManager_TypeInfo;
    }
    v120->static_fields->lastPlayQuestConsumeAp = v119;
  }
  v121 = (System_String_o *)StringLiteral_13760/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13760/*"TerminalLastPlayedFreeQuestSpotId"*/, 0) )
  {
    v122 = UnityEngine_PlayerPrefs__GetInt_72068708(v121, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29446 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29446 = 1;
    }
    v123 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
    }
    v123->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v122;
  }
  v124 = (System_String_o *)StringLiteral_13759/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13759/*"TerminalLastPanelEventPoint"*/, 0) )
  {
    v125 = UnityEngine_PlayerPrefs__GetInt_72068708(v124, 0);
    v126 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v126 = TerminalPramsManager_TypeInfo;
    }
    v126->static_fields->panelEventPoint = v125;
  }
  v127 = (System_String_o *)StringLiteral_11510/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11510/*"SAVEKEY_PlayedTerminalEffects"*/, 0) )
  {
    v134 = UnityEngine_PlayerPrefs__GetString_72069276(v127, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BF0 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BF0 = 1;
    }
    v135 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v135 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (GrandQuestFolderBoardItem_o *)&v135->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v134;
    sub_1C9403C(p_PlayedTerminalEffects_k__BackingField, (int32_t)v134, v128, v129, v130, v131, v132, v133);
  }
  v137 = (System_String_o *)StringLiteral_11507/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11507/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0) )
  {
    v138 = UnityEngine_PlayerPrefs__GetInt_72068708(v137, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D298A8 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D298A8 = 1;
    }
    v139 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v139 = TerminalPramsManager_TypeInfo;
    }
    v139->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v138 != 0;
  }
  v140 = (System_String_o *)StringLiteral_11508/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11508/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0) )
  {
    v141 = UnityEngine_PlayerPrefs__GetInt_72068708(v140, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D298A9 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D298A9 = 1;
    }
    v142 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v142 = TerminalPramsManager_TypeInfo;
    }
    v142->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v141;
  }
  v143 = (System_String_o *)StringLiteral_11509/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11509/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0) )
  {
    v144 = UnityEngine_PlayerPrefs__GetInt_72068708(v143, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2999E )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2999E = 1;
    }
    v145 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v145 = TerminalPramsManager_TypeInfo;
    }
    v145->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v144 != 0;
  }
  v146 = (System_String_o *)StringLiteral_11519/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11519/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0) )
  {
    v147 = UnityEngine_PlayerPrefs__GetInt_72068708(v146, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2944A )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2944A = 1;
    }
    v148 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v148 = TerminalPramsManager_TypeInfo;
    }
    v148->static_fields->_SelectedStoryQuestId_k__BackingField = v147;
  }
  v149 = (System_String_o *)StringLiteral_11500/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11500/*"SAVEKEY_ConnectMarkEventId"*/, 0) )
  {
    v150 = UnityEngine_PlayerPrefs__GetInt_72068708(v149, 0);
    v151 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v151 = TerminalPramsManager_TypeInfo;
    }
    v151->static_fields->ConnectMarkEventId = v150;
  }
  v152 = (System_String_o *)StringLiteral_11499/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11499/*"SAVEKEY_ConnectMarkAnimationId"*/, 0) )
  {
    v153 = UnityEngine_PlayerPrefs__GetInt_72068708(v152, 0);
    v154 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v154 = TerminalPramsManager_TypeInfo;
    }
    v154->static_fields->ConnectMarkAnimationId = v153;
  }
  v155 = (System_String_o *)StringLiteral_11518/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11518/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0) )
  {
    v156 = UnityEngine_PlayerPrefs__GetInt_72068708(v155, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28190 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28190 = 1;
    }
    v157 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v157 = TerminalPramsManager_TypeInfo;
    }
    v157->static_fields->_SelectedRecollectionWarId_k__BackingField = v156;
  }
  v158 = (System_String_o *)StringLiteral_11498/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11498/*"SAVEKEY_ClearEventQuestIds"*/, 0) )
  {
    v165 = UnityEngine_PlayerPrefs__GetString_72069276(v158, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FD5 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FD5 = 1;
    }
    v166 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v166 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (GrandQuestFolderBoardItem_o *)&v166->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v165;
    sub_1C9403C(p_ClearEventQuestIds_k__BackingField, (int32_t)v165, v159, v160, v161, v162, v163, v164);
  }
  v168 = (System_String_o *)StringLiteral_11505/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11505/*"SAVEKEY_MapModelClearQuestInfo"*/, 0) )
  {
    v169 = UnityEngine_PlayerPrefs__GetString_72069276(v168, 0);
    IsNullOrEmpty = (System_String_array *)System_String__IsNullOrEmpty(v169, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v169 || (IsNullOrEmpty = System_String__Split(v169, 0x2Cu, 0, 0)) == 0 )
        sub_1C942F0(IsNullOrEmpty, v171);
      max_length = IsNullOrEmpty->max_length;
      v173 = IsNullOrEmpty;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
          sub_1C942F8(IsNullOrEmpty);
        v174 = System_Int32__Parse(IsNullOrEmpty->m_Items[0], 0);
      }
      else
      {
        v174 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D29BF1 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29BF1 = 1;
      }
      v175 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v175 = TerminalPramsManager_TypeInfo;
      }
      v175->static_fields->_MapModelClearQuestId_k__BackingField = v174;
      if ( SLODWORD(v173->max_length) < 2 )
      {
        v177 = 0;
      }
      else
      {
        v176 = System_Int32__Parse(v173->m_Items[1], 0);
        v175 = TerminalPramsManager_TypeInfo;
        v177 = v176;
      }
      if ( !v175->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v175);
      if ( !byte_4D29BF2 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29BF2 = 1;
      }
      v178 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v178 = TerminalPramsManager_TypeInfo;
      }
      v178->static_fields->_MapModelClearPhaseCount_k__BackingField = v177;
    }
  }
  v179 = (System_String_o *)StringLiteral_11501/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11501/*"SAVEKEY_DataLostBattleAutoReset"*/, 0) )
  {
    v180 = UnityEngine_PlayerPrefs__GetInt_72068708(v179, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D299A6 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D299A6 = 1;
    }
    v181 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v181 = TerminalPramsManager_TypeInfo;
    }
    v181->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v180 != 0;
  }
  v182 = (System_String_o *)StringLiteral_11511/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11511/*"SAVEKEY_PlayerGenderType"*/, 0) )
  {
    v183 = UnityEngine_PlayerPrefs__GetInt_72068708(v182, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D27906 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D27906 = 1;
    }
    v184 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v184 = TerminalPramsManager_TypeInfo;
    }
    v184->static_fields->_PlayerGenderType_k__BackingField = v183;
  }
  v185 = (System_String_o *)StringLiteral_11497/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11497/*"SAVEKEY_CampaignDirectBonus"*/, 0) )
  {
    v186 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_72069276(v185, 0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v193 = JsonManager__Deserialize_object_(
             v186,
             (const MethodInfo_320C52C *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BF6 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BF6 = 1;
    }
    v194 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v194 = TerminalPramsManager_TypeInfo;
    }
    v195 = v194->static_fields;
    v195->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v193;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v195->_CampaignDirectBonus_k__BackingField,
      (int32_t)v193,
      v187,
      v188,
      v189,
      v190,
      v191,
      v192);
  }
  v196 = (System_String_o *)StringLiteral_11496/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11496/*"SAVEKEY_BlankEarthSpotId"*/, 0) )
  {
    v197 = UnityEngine_PlayerPrefs__GetInt_72068708(v196, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28F20 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28F20 = 1;
    }
    v198 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v198 = TerminalPramsManager_TypeInfo;
    }
    v198->static_fields->_BlankEarthSpotId_k__BackingField = v197;
  }
  v199 = (System_String_o *)StringLiteral_11495/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11495/*"SAVEKEY_BlankEarthRank"*/, 0) )
  {
    v200 = UnityEngine_PlayerPrefs__GetInt_72068708(v199, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BFB )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BFB = 1;
    }
    v201 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v201 = TerminalPramsManager_TypeInfo;
    }
    v201->static_fields->_BlankEarthRank_k__BackingField = v200;
  }
  v202 = (System_String_o *)StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/, 0) )
  {
    v203 = UnityEngine_PlayerPrefs__GetInt_72068708(v202, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28F1F )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28F1F = 1;
    }
    v204 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v204 = TerminalPramsManager_TypeInfo;
    }
    v204->static_fields->_PlanetEarthSpotId_k__BackingField = v203;
  }
  v205 = (System_String_o *)StringLiteral_8080/*"IsPart2FinalChapter"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_8080/*"IsPart2FinalChapter"*/, 0) )
  {
    v206 = UnityEngine_PlayerPrefs__GetInt_72068708(v205, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BF9 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BF9 = 1;
    }
    v207 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v207 = TerminalPramsManager_TypeInfo;
    }
    v207->static_fields->_IsPart2FinalChapter_k__BackingField = v206 > 0;
  }
  v208 = (System_String_o *)StringLiteral_8109/*"IsTransitionToTerminalAfterMovie"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_8109/*"IsTransitionToTerminalAfterMovie"*/, 0) )
  {
    v209 = UnityEngine_PlayerPrefs__GetInt_72068708(v208, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2979A )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2979A = 1;
    }
    v210 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v210 = TerminalPramsManager_TypeInfo;
    }
    v210->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField = v209 > 0;
  }
}


TerminalTransitionInfo_o *TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  System_String_o *v1; // x20
  __int64 v2; // x19
  int32_t Int_72068708; // w0
  int32_t v4; // w20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  System_String_o *String_72069276; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D29B88 & 1) == 0 )
  {
    sub_1C94098(&TerminalTransitionInfo_TypeInfo);
    sub_1C94098(&StringLiteral_13774/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C94098(&StringLiteral_13773/*"TerminalTransitionInfoMissionId"*/);
    byte_4D29B88 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13773/*"TerminalTransitionInfoMissionId"*/;
  v2 = 0;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13773/*"TerminalTransitionInfoMissionId"*/, 0) )
  {
    Int_72068708 = UnityEngine_PlayerPrefs__GetInt_72068708(v1, 0);
    if ( Int_72068708 < 1 )
    {
      return 0;
    }
    else
    {
      v4 = Int_72068708;
      v2 = sub_1C942E4(TerminalTransitionInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v2, 0);
      TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v2, v5);
      if ( !v2 )
        sub_1C942F0(v6, v7);
      *(_DWORD *)(v2 + 16) = v4;
      v8 = (System_String_o *)StringLiteral_13774/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13774/*"TerminalTransitionInfoVoiceAssetName"*/, 0) )
      {
        String_72069276 = UnityEngine_PlayerPrefs__GetString_72069276(v8, 0);
        *(_QWORD *)(v2 + 40) = String_72069276;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v2 + 40), (int32_t)String_72069276, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  return (TerminalTransitionInfo_o *)v2;
}


void TerminalPramsManager__MapModelClearQuestInfo_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *v2; // x19
  TerminalPramsManager_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D29BA2 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11505/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C94098(&StringLiteral_808/*","*/);
    byte_4D29BA2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2926D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2926D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v1->static_fields->_MapModelClearQuestId_k__BackingField;
  v2 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  if ( !byte_4D2926E )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2926E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v3->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  v5 = System_String__Concat_64456008(v2, (System_String_o *)StringLiteral_808/*","*/, v4, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11505/*"SAVEKEY_MapModelClearQuestInfo"*/, v5, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__PlanetEarthSpotId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29BA9 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/);
    byte_4D29BA9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28F1D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28F1D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/,
    v1->static_fields->_PlanetEarthSpotId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B8E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11517/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_1C94098(&StringLiteral_13760/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_1C94098(&StringLiteral_13761/*"TerminalLastPlayedQuestId"*/);
    byte_4D29B8E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29391 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29391 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13761/*"TerminalLastPlayedQuestId"*/,
    v1->static_fields->_LastPlayedQuestId_k__BackingField,
    0);
  if ( !byte_4D29BFA )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BFA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11517/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v2->static_fields->_LastSelectQuestIndex_k__BackingField,
    0);
  if ( !byte_4D28FD0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28FD0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13760/*"TerminalLastPlayedFreeQuestSpotId"*/,
    v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__PlaySystemSE(int32_t seKind, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  _BOOL4 IsAutoNoSe_k__BackingField; // w21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4D29B83 & 1) == 0 )
  {
    sub_1C94098(&Method_TerminalPramsManager_PlaySystemSE__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B83 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29BE4 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BE4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
    {
LABEL_9:
      if ( !byte_4D29BE5 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29BE5 = 1;
      }
      v4 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v4 = TerminalPramsManager_TypeInfo;
      }
      v4->static_fields->_IsAutoNoSe_k__BackingField = 0;
      return;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    IsAutoNoSe_k__BackingField = TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField;
    if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      if ( TerminalPramsManager_TypeInfo->static_fields->_IsAutoNoSe_k__BackingField )
        goto LABEL_9;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( IsAutoNoSe_k__BackingField )
        goto LABEL_9;
    }
  }
  if ( !TerminalPramsManager__IsAuto((const MethodInfo *)v3) )
  {
    v6 = Method_TerminalPramsManager_PlaySystemSE__;
    if ( (*((_BYTE *)Method_TerminalPramsManager_PlaySystemSE__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C940B0(Method_TerminalPramsManager_PlaySystemSE__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C9407C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, seKind, 0, 0);
  }
}


void TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(System_String_o *effectName, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  TerminalPramsManager_c *v9; // x0
  __int64 v10; // x20
  TerminalPramsManager_c *v11; // x0
  GrandQuestFolderBoardItem_o *p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_String_o *v20; // x19
  TerminalPramsManager_c *v21; // x0
  GrandQuestFolderBoardItem_o *v22; // x0
  const MethodInfo *v23; // x0

  if ( (byte_4D29BAD & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29BAD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectName, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29C00 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C00 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    if ( !v9->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      v10 = StringLiteral_1/*""*/;
      if ( !v9->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v9);
      if ( !byte_4D29BF0 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29BF0 = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (GrandQuestFolderBoardItem_o *)&v11->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v10;
      sub_1C9403C(p_PlayedTerminalEffects_k__BackingField, v10, v3, v4, v5, v6, v7, v8);
      v9 = TerminalPramsManager_TypeInfo;
    }
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_4D29C00 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C00 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v20 = System_String__Concat_64456008(
            v13->static_fields->_PlayedTerminalEffects_k__BackingField,
            effectName,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0);
    if ( !byte_4D29BF0 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BF0 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v22 = (GrandQuestFolderBoardItem_o *)&v21->static_fields->_PlayedTerminalEffects_k__BackingField;
    v22->klass = (GrandQuestFolderBoardItem_c *)v20;
    sub_1C9403C(v22, (int32_t)v20, v14, v15, v16, v17, v18, v19);
    TerminalPramsManager__Save_SaveData(v23);
  }
}


void TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29BA4 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11511/*"SAVEKEY_PlayerGenderType"*/);
    byte_4D29BA4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C01 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C01 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11511/*"SAVEKEY_PlayerGenderType"*/,
    v1->static_fields->_PlayerGenderType_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__ReceiveQuestEndResultInfo(
        BattleResultComponent_resultData_array *result,
        bool isWin,
        const MethodInfo *method)
{
  BattleResultComponent_resultData_array *v4; // x21
  BattleResultComponent_resultData_o *v5; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v7; // x23
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BattleResultComponent_resultData_o *v14; // x27
  int eventEndTitle; // w8
  UserServantCollectionMaster_o *v16; // x20
  unsigned int v17; // w28
  __int64 v18; // x21
  __int64 v19; // x25
  __int64 v20; // x26
  struct DeckData_o *myDeck; // x24
  UserServantCollectionEntity_o *EntityDefinitely; // x24
  UserServantCollectionEntity_o *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  _DWORD *v30; // x24
  GrandQuestFolderBoardItem_o *v31; // x24
  GrandQuestFolderBoardItem_c *klass; // x8
  GrandQuestFolderBoardItem_c *v33; // x8
  TerminalPramsManager_c *v34; // x0
  il2cpp_array_size_t *v35; // x19
  GrandQuestFolderBoardItem_o *p_mQuestClearHeroineInfo; // x0
  il2cpp_array_size_t v37; // x8
  BattleResultComponent_resultData_o *v38; // x9
  struct System_String_o *v39; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v41; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x24
  UserServantEntity_o *v43; // x26
  __int64 v44; // x24
  void **p_monitor; // x19
  void *v46; // x25
  void *monitor; // t1
  void *v48; // x27
  int v49; // w9
  int v50; // w8
  UserServantCollectionEntity_o *v51; // x25
  struct DeckData_o *userId; // x21
  int32_t SvtId; // w0
  __int64 v54; // x28
  __int64 v55; // x29
  int32_t v56; // w27
  __int64 v57; // x23
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  bool v70; // w9
  Il2CppObject *Master_object; // x26
  NetworkManager_c *v72; // x0
  __int64 v73; // x28
  __int64 v74; // x29
  int64_t userIdNumber; // x27
  UserServantCollectionEntity_o *v76; // x26
  Il2CppObject *v77; // x0
  __int64 v78; // x26
  __int64 v79; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v80; // x24
  int klass_high; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v83; // x0
  GrandQuestFolderBoardItem_o *v84; // x0
  BattleResultComponent_resultData_o *v85; // x23
  BattleResultComponent_resultData_o *v86; // x8
  struct System_String_o *v87; // x9
  UserQuestEntity_o *v88; // x23
  int32_t questId; // w19
  TerminalPramsManager_c *v90; // x0
  int32_t QuestPhase; // w24
  TerminalPramsManager_c *v92; // x0
  int32_t v93; // w24
  Il2CppObject *MasterData_object; // x25
  UserQuestEntity_o *v95; // x0
  UserQuestEntity_o *v96; // x26
  int32_t v97; // w25
  bool v98; // w19
  TerminalPramsManager_c *v99; // x0
  const MethodInfo *v100; // x2
  TerminalPramsManager_c *v101; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v103; // x2
  TerminalPramsManager_c *v104; // x8
  TerminalPramsManager_c *v105; // x0
  TerminalPramsManager_c *v106; // x0
  const MethodInfo *v107; // x0
  TerminalPramsManager_c *v108; // x8
  int32_t v109; // w24
  const MethodInfo *v110; // x1
  WarEntity_o *v111; // x25
  BalanceConfig_c *v112; // x0
  TerminalPramsManager_c *v113; // x0
  TerminalPramsManager_c *v114; // x0
  bool v115; // w26
  TerminalPramsManager_c *v116; // x0
  char v117; // w8
  const MethodInfo *v118; // x1
  bool HasFlag; // w0
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  GrandQuestFolderBoardItem_c *v133; // x24
  TerminalPramsManager_c *v134; // x0
  GrandQuestFolderBoardItem_o *p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v136; // x0
  GrandQuestFolderBoardItem_o *p_eventConquestInfos; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  System_String_o *v140; // x4
  int32_t v141; // w5
  int64_t v142; // x6
  System_String_o *v143; // x7
  GrandQuestFolderBoardItem_c *v144; // x24
  TerminalPramsManager_c *v145; // x0
  GrandQuestFolderBoardItem_o *v146; // x0
  bool Farm; // w19
  TerminalPramsManager_c *v148; // x0
  char v149; // w19
  int32_t v150; // w24
  WarEntity_o *v151; // x0
  int32_t id; // w19
  TerminalPramsManager_c *v153; // x0
  TerminalPramsManager_c *v154; // x0
  Il2CppObject *v155; // x24
  Il2CppObject *v156; // x25
  int32_t v157; // w2
  int32_t v158; // w3
  System_String_o *v159; // x4
  int32_t v160; // w5
  int64_t v161; // x6
  System_String_o *v162; // x7
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  GrandQuestFolderBoardItem_c *v169; // x25
  TerminalPramsManager_c *v170; // x0
  GrandQuestFolderBoardItem_o *p_OldUserEventPoint_k__BackingField; // x0
  int max_length; // w9
  BattleResultComponent_resultData_array *v173; // x25
  int v174; // w8
  Il2CppClass **v175; // x8
  Il2CppClass *v176; // x26
  int32_t RaidGroupDeadQuestId; // w27
  int v178; // w9
  BattleResultComponent_resultData_array *v179; // x27
  int v180; // w8
  int v181; // w19
  struct TerminalPramsManager_StaticFields *v182; // x8
  int32_t name_high; // w19
  int v184; // w9
  BattleResultComponent_resultData_array *v185; // x25
  int v186; // w8
  BattleResultComponent_resultData_o *v187; // x19
  int32_t RaidDeadQuestId; // w26
  struct TerminalPramsManager_StaticFields *v189; // x8
  TerminalPramsManager_c *v190; // x8
  bool v191; // w19
  TerminalPramsManager_c *v192; // x0
  int32_t v193; // w19
  Il2CppObject *v194; // x24
  int32_t eventId; // w25
  bool v196; // w24
  TerminalPramsManager_c *v197; // x0
  int32_t v198; // w21
  BattleResultComponent_resultData_o *v199; // x8
  int v200; // w9
  int v201; // w11
  __int64 v202; // x26
  int32_t v203; // w19
  TerminalPramsManager_c *v204; // x0
  int32_t bounds_high; // w24
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v207; // x0
  TerminalPramsManager_c *v208; // x0
  TerminalPramsManager_c *v209; // x0
  Il2CppObject *v210; // x24
  int32_t v211; // w2
  int32_t v212; // w3
  System_String_o *v213; // x4
  int32_t v214; // w5
  int64_t v215; // x6
  System_String_o *v216; // x7
  TerminalPramsManager_c *v217; // x0
  GrandQuestFolderBoardItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct BattleResultAddRewardBonus_o *rewardBonus; // x8
  struct BattleResultAddRewardBonus_o *v220; // x8
  int v221; // w8
  __int64 *v222; // x9
  __int64 v223; // x12
  System_String_o **v224; // x9
  System_String_o *v225; // x25
  System_String_o **v226; // x8
  System_String_o *v227; // x22
  int32_t v228; // w27
  System_Collections_Generic_List_object__o *v229; // x27
  TerminalPramsManager___c_c *v230; // x8
  System_Predicate_object__o *_9__757_0; // x24
  System_String_o *v232; // x21
  Il2CppObject *v233; // x25
  struct TerminalPramsManager___c_StaticFields *v234; // x0
  int32_t v235; // w2
  int32_t v236; // w3
  System_String_o *v237; // x4
  int32_t v238; // w5
  int64_t v239; // x6
  System_String_o *v240; // x7
  System_String_o *v241; // x28
  TerminalPramsManager_c *v242; // x0
  TerminalPramsManager_c *v243; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x27
  System_String_o *v245; // x24
  int32_t v246; // w2
  int32_t v247; // w3
  System_String_o *v248; // x4
  int32_t v249; // w5
  int64_t v250; // x6
  System_String_o *v251; // x7
  TerminalPramsManager_c *v252; // x0
  int32_t v253; // w24
  int32_t PhaseCnt_k__BackingField; // w25
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v256; // x0
  Il2CppObject *v257; // x24
  TerminalPramsManager_c *v258; // x0
  Il2CppObject *v259; // x24
  int v260; // w21
  TerminalPramsManager_c *v261; // x0
  GrandQuestFolderBoardItem_o *p_questClearCostumeRelease_k__BackingField; // x0
  int32_t v263; // w2
  int32_t v264; // w3
  System_String_o *v265; // x4
  int32_t v266; // w5
  int64_t v267; // x6
  System_String_o *v268; // x7
  BattleResultComponent_resultData_o *v269; // x8
  GrandQuestFolderBoardItem_c *v270; // x24
  TerminalPramsManager_c *v271; // x0
  GrandQuestFolderBoardItem_o *v272; // x0
  TerminalPramsManager_c *v273; // x0
  GrandQuestFolderBoardItem_o *p_questClearCostumeGet_k__BackingField; // x0
  int32_t v275; // w2
  int32_t v276; // w3
  System_String_o *v277; // x4
  int32_t v278; // w5
  int64_t v279; // x6
  System_String_o *v280; // x7
  GrandQuestFolderBoardItem_c *v281; // x24
  TerminalPramsManager_c *v282; // x0
  GrandQuestFolderBoardItem_o *v283; // x0
  TerminalPramsManager_c *v284; // x0
  GrandQuestFolderBoardItem_o *p_eventPointWinReward_k__BackingField; // x0
  int32_t v286; // w2
  int32_t v287; // w3
  System_String_o *v288; // x4
  int32_t v289; // w5
  int64_t v290; // x6
  System_String_o *v291; // x7
  TerminalPramsManager_c *v292; // x0
  int32_t v293; // w24
  QuestGroupMaster_o *v294; // x25
  int32_t GroupId; // w0
  TerminalPramsManager_c *v296; // x8
  int32_t v297; // w26
  int v298; // w25
  Il2CppObject *v299; // x26
  EventPointEntity_o *v300; // x25
  int32_t v301; // w24
  struct TerminalPramsManager_StaticFields *v302; // x8
  BattleResultComponent_resultData_o *v303; // x8
  struct System_String_o *v304; // x9
  GrandQuestFolderBoardItem_c *v305; // x24
  TerminalPramsManager_c *v306; // x0
  GrandQuestFolderBoardItem_o *v307; // x0
  int32_t v308; // w19
  TerminalPramsManager_c *v309; // x0
  TerminalPramsManager_c *v310; // x0
  GrandQuestFolderBoardItem_o *p_eventRaceBoost_k__BackingField; // x0
  int32_t v312; // w2
  int32_t v313; // w3
  System_String_o *v314; // x4
  int32_t v315; // w5
  int64_t v316; // x6
  System_String_o *v317; // x7
  il2cpp_array_size_t v318; // x8
  BattleResultComponent_resultData_o *v319; // x23
  TerminalPramsManager_c *v320; // x0
  GrandQuestFolderBoardItem_o *v321; // x0
  __int64 v322; // x19
  BattleResultComponent_resultData_o *v323; // x9
  struct System_String_o *v324; // x10
  struct System_String_o *v325; // x23
  TerminalPramsManager_c *v326; // x0
  GrandQuestFolderBoardItem_o *p_eventTowerReward_k__BackingField; // x0
  int32_t v328; // w2
  int32_t v329; // w3
  System_String_o *v330; // x4
  int32_t v331; // w5
  int64_t v332; // x6
  System_String_o *v333; // x7
  GrandQuestFolderBoardItem_c *v334; // x23
  TerminalPramsManager_c *v335; // x0
  GrandQuestFolderBoardItem_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  GrandQuestFolderBoardItem_c *v337; // x23
  TerminalPramsManager_c *v338; // x0
  GrandQuestFolderBoardItem_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  GrandQuestFolderBoardItem_c *v340; // x23
  TerminalPramsManager_c *v341; // x0
  GrandQuestFolderBoardItem_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  GrandQuestFolderBoardItem_c *v343; // x23
  TerminalPramsManager_c *v344; // x0
  GrandQuestFolderBoardItem_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v346; // x0
  struct TerminalPramsManager_StaticFields *v347; // x0
  int32_t v348; // w2
  int32_t v349; // w3
  System_String_o *v350; // x4
  int32_t v351; // w5
  int64_t v352; // x6
  System_String_o *v353; // x7
  TerminalPramsManager_c *v354; // x0
  struct TerminalPramsManager_StaticFields *v355; // x0
  Il2CppObject *Instance; // x23
  int32_t WarID_ByQuestID; // w23
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v359; // w23
  int32_t v360; // w2
  int32_t v361; // w3
  System_String_o *v362; // x4
  int32_t v363; // w5
  int64_t v364; // x6
  System_String_o *v365; // x7
  il2cpp_array_size_t v366; // x8
  BattleResultComponent_resultData_o *v367; // x22
  TerminalPramsManager_c *v368; // x0
  struct TerminalPramsManager_StaticFields *v369; // x0
  GrandQuestFolderBoardItem_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v371; // x0
  struct TerminalPramsManager_StaticFields *v372; // x0
  struct EventTowerReward_array *eventTowerReward; // x8
  bool v374; // w19
  BalanceConfig_c *v375; // x8
  int32_t v376; // w19
  TerminalPramsManager_c *v377; // x0
  TerminalPramsManager_c *v378; // x0
  BalanceConfig_c *v379; // x8
  int32_t v380; // w19
  TerminalPramsManager_c *v381; // x0
  BalanceConfig_c *v382; // x8
  int32_t v383; // w19
  TerminalPramsManager_c *v384; // x0
  BalanceConfig_c *v385; // x8
  int32_t v386; // w19
  Il2CppObject *v387; // x22
  struct DeckData_o *v388; // x21
  int32_t v389; // w2
  int32_t v390; // w3
  System_String_o *v391; // x4
  int32_t v392; // w5
  int64_t v393; // x6
  System_String_o *v394; // x7
  UserSuperBossEntity_o *v395; // x22
  BattleResultComponent_resultData_array *v396; // x21
  int32_t v397; // w2
  int32_t v398; // w3
  System_String_o *v399; // x4
  int32_t v400; // w5
  int64_t v401; // x6
  System_String_o *v402; // x7
  TerminalPramsManager_c *v403; // x0
  struct TerminalPramsManager_StaticFields *v404; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v406; // x21
  Il2CppObject *v407; // x22
  int32_t ScriptQuestId; // w22
  Il2CppObject *v409; // x23
  TerminalPramsManager_c *v410; // x0
  int32_t v411; // w26
  int32_t winResult; // w24
  int32_t v413; // w2
  int32_t v414; // w3
  System_String_o *v415; // x4
  int32_t v416; // w5
  int64_t v417; // x6
  System_String_o *v418; // x7
  Il2CppObject *v419; // x23
  TerminalPramsManager_c *v420; // x0
  int32_t v421; // w19
  int32_t v422; // w21
  TerminalPramsManager_c *v423; // x0
  int32_t v424; // w1
  GrandQuestFolderBoardItem_o *p_lastPlayBgmName; // x0
  const MethodInfo *v426; // x0
  Il2CppObject *v427; // x21
  int32_t v428; // w22
  int32_t v429; // w2
  int32_t v430; // w3
  System_String_o *v431; // x4
  int32_t v432; // w5
  int64_t v433; // x6
  System_String_o *v434; // x7
  TerminalPramsManager_c *v435; // x0
  il2cpp_array_size_t *v436; // x0
  int32_t v437; // w22
  TerminalPramsManager_c *v438; // x0
  int32_t v439; // w23
  int32_t v440; // w2
  int32_t v441; // w3
  System_String_o *v442; // x4
  int32_t v443; // w5
  int64_t v444; // x6
  System_String_o *v445; // x7
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v447; // x0
  struct TerminalPramsManager_StaticFields *v448; // x0
  const MethodInfo *v449; // x0
  int32_t v450; // w2
  int32_t v451; // w3
  System_String_o *v452; // x4
  int32_t v453; // w5
  int64_t v454; // x6
  System_String_o *v455; // x7
  int32_t v456; // w19
  TerminalPramsManager_c *v457; // x0
  GrandQuestFolderBoardItem_o *p_eventHarvestGrowthInfo; // x0
  TerminalPramsManager_c *v459; // x0
  BattleResultComponent_resultData_array *v460; // x22
  int32_t ScriptIntParam; // w24
  int32_t v462; // w0
  int32_t v463; // w25
  __int64 v464; // x23
  int32_t v465; // w2
  int32_t v466; // w3
  System_String_o *v467; // x4
  int32_t v468; // w5
  int64_t v469; // x6
  System_String_o *v470; // x7
  Il2CppArrayBounds *bounds; // d0
  TerminalPramsManager_c *v472; // x0
  GrandQuestFolderBoardItem_o *v473; // x0
  Il2CppObject *v474; // x22
  QuestEntity_o *QuestEntity; // x0
  QuestEntity_o *v476; // x22
  TerminalPramsManager_c *v477; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v480; // x21
  TerminalPramsManager_c *v481; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v483; // x0
  int32_t v484; // w2
  int32_t v485; // w3
  System_String_o *v486; // x4
  int32_t v487; // w5
  int64_t v488; // x6
  System_String_o *v489; // x7
  TerminalPramsManager_c *v490; // x0
  System_String_o *v491; // x21
  TerminalPramsManager_c *v492; // x0
  System_String_o *v493; // x0
  int32_t v494; // w2
  int32_t v495; // w3
  System_String_o *v496; // x4
  int32_t v497; // w5
  int64_t v498; // x6
  System_String_o *v499; // x7
  System_String_o *v500; // x21
  TerminalPramsManager_c *v501; // x0
  GrandQuestFolderBoardItem_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  GrandQuestFolderBoardItem_c *v503; // x21
  TerminalPramsManager_c *v504; // x0
  GrandQuestFolderBoardItem_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v506; // x21
  TerminalPramsManager_c *v507; // x0
  int32_t v508; // w2
  int32_t v509; // w3
  System_String_o *v510; // x4
  int32_t v511; // w5
  int64_t v512; // x6
  System_String_o *v513; // x7
  int32_t v514; // w2
  int32_t v515; // w3
  System_String_o *v516; // x4
  int32_t v517; // w5
  int64_t v518; // x6
  System_String_o *v519; // x7
  int32_t v520; // w1
  TerminalPramsManager_c *v521; // x0
  int32_t v522; // w2
  int32_t v523; // w3
  System_String_o *v524; // x4
  int32_t v525; // w5
  int64_t v526; // x6
  System_String_o *v527; // x7
  int32_t v528; // w2
  int32_t v529; // w3
  System_String_o *v530; // x4
  int32_t v531; // w5
  int64_t v532; // x6
  System_String_o *v533; // x7
  int32_t v534; // w1
  TerminalPramsManager_c *v535; // x0
  int32_t v536; // w2
  int32_t v537; // w3
  System_String_o *v538; // x4
  int32_t v539; // w5
  int64_t v540; // x6
  System_String_o *v541; // x7
  int32_t v542; // w2
  int32_t v543; // w3
  System_String_o *v544; // x4
  int32_t v545; // w5
  int64_t v546; // x6
  System_String_o *v547; // x7
  int32_t v548; // w1
  TerminalPramsManager_c *v549; // x0
  int32_t v550; // w2
  int32_t v551; // w3
  System_String_o *v552; // x4
  int32_t v553; // w5
  int64_t v554; // x6
  System_String_o *v555; // x7
  System_String_o *v556; // x0
  const MethodInfo *v557; // x1
  const MethodInfo *v558; // x0
  const MethodInfo *v559; // x0
  const MethodInfo *v560; // x0
  const MethodInfo *v561; // x0
  const MethodInfo *v562; // x0
  TerminalPramsManager_c *v563; // x0
  int32_t v564; // w19
  const MethodInfo *v565; // x0
  TerminalPramsManager_c *v566; // x0
  __int64 v567; // x0
  System_String_o *v568; // [xsp+8h] [xbp-138h]
  bool v569; // [xsp+14h] [xbp-12Ch]
  BattleResultComponent_resultData_array *resulta; // [xsp+18h] [xbp-128h]
  il2cpp_array_size_t *p_max_length; // [xsp+20h] [xbp-120h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+28h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v573; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v574; // [xsp+50h] [xbp-F0h]
  __int128 v575; // [xsp+70h] [xbp-D0h]
  _BYTE v576[4]; // [xsp+8Ch] [xbp-B4h] BYREF
  UserSuperBossEntity_o *v577; // [xsp+90h] [xbp-B0h] BYREF
  Il2CppObject *v578; // [xsp+98h] [xbp-A8h] BYREF
  Il2CppObject *v579; // [xsp+A0h] [xbp-A0h] BYREF
  QuestPhaseEntity_o *v580; // [xsp+A8h] [xbp-98h] BYREF
  int32_t QuestId_k__BackingField; // [xsp+B4h] [xbp-8Ch] BYREF
  Il2CppObject *v582; // [xsp+B8h] [xbp-88h] BYREF
  Il2CppObject *v583; // [xsp+C0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+C8h] [xbp-78h] BYREF
  int v585; // [xsp+D4h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v586; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v587; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v588; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v589; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v590; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v591; // 0:x0.16

  v4 = result;
  if ( (byte_4D29BBB & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&bool_TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&EventHarvestGrowthInfo_TypeInfo);
    sub_1C94098(&EventSaveData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_1C94098(&MyRoomParamsManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_1C94098(&QuestClearHeroineInfo_TypeInfo);
    sub_1C94098(&ScriptManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C94098(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C94098(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__757_0__);
    sub_1C94098(&TerminalPramsManager___c_TypeInfo);
    sub_1C94098(&UserServantCollectionEntity___TypeInfo);
    sub_1C94098(&UserServantCollectionEntity_TypeInfo);
    sub_1C94098(&UserServantEntity_TypeInfo);
    sub_1C94098(&UserSuperBossEntity___TypeInfo);
    sub_1C94098(&StringLiteral_20101/*"harvestGrowthAfterQuestId"*/);
    sub_1C94098(&StringLiteral_16789/*"afterActionBk"*/);
    sub_1C94098(&StringLiteral_808/*","*/);
    sub_1C94098(&StringLiteral_20102/*"harvestGrowthBeforeQuestId"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_6648/*"False"*/);
    result = (BattleResultComponent_resultData_array *)sub_1C94098(&StringLiteral_1115/*"0"*/);
    byte_4D29BBB = 1;
  }
  v586 = 0;
  v585 = 0;
  v583 = 0;
  entity = 0;
  v582 = 0;
  QuestId_k__BackingField = 0;
  v579 = 0;
  v580 = 0;
  v577 = 0;
  v578 = 0;
  v576[0] = 0;
  if ( !v4 )
    goto LABEL_1211;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_1212;
  v5 = v4->m_Items[0];
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  if ( !v5 )
    goto LABEL_1211;
  oldUserSvtCollection = v5->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1211;
  v7 = (_DWORD *)sub_1C94140(UserServantCollectionEntity___TypeInfo, LODWORD(oldUserSvtCollection->max_length));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !LODWORD(v4->max_length) )
    goto LABEL_1212;
  p_max_length = &v4->max_length;
  if ( !*m_Items )
    goto LABEL_1211;
  v14 = (*m_Items)->m_Items[11];
  v569 = isWin;
  resulta = v4;
  v585 = 0;
  if ( !v14 )
    goto LABEL_1211;
  eventEndTitle = (int)v14->fields.eventEndTitle;
  if ( eventEndTitle >= 1 )
  {
    v16 = (UserServantCollectionMaster_o *)result;
    v17 = 0;
    while ( v17 < eventEndTitle )
    {
      v18 = *((_QWORD *)&v14->fields.eventEndMessage + (int)v17);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
      }
      if ( !v18 )
        goto LABEL_1211;
      v20 = *(_QWORD *)(v18 + 24);
      v19 = *(_QWORD *)(v18 + 32);
      myDeck = result->m_Items[19]->fields.myDeck;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v587.fields.currentCryptoKey = v20;
      *(_QWORD *)&v587.fields.fakeValue = v19;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                           v587,
                                                           0);
      if ( !v16 )
        goto LABEL_1211;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, (int64_t)myDeck, (int32_t)result, 0);
      v23 = (UserServantCollectionEntity_o *)sub_1C942E4(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_43913792(v23, EntityDefinitely, 0);
      if ( !v7 )
        goto LABEL_1211;
      if ( v23 )
      {
        result = (BattleResultComponent_resultData_array *)sub_1C941D4(v23, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !result )
          goto LABEL_1213;
      }
      if ( v17 >= v7[6] )
        break;
      v30 = &v7[2 * v17];
      *((_QWORD *)v30 + 4) = v23;
      v31 = (GrandQuestFolderBoardItem_o *)(v30 + 8);
      sub_1C9403C(v31, (int32_t)v23, v24, v25, v26, v27, v28, v29);
      if ( v17 >= v7[6] )
        break;
      klass = v31->klass;
      *(_OWORD *)&v574.fields.currentCryptoKey = *(_OWORD *)(v18 + 84);
      if ( !klass )
        goto LABEL_1211;
      *(_OWORD *)((char *)&klass->_1.declaringType + 4) = *(_OWORD *)&v574.fields.currentCryptoKey;
      if ( v17 >= v7[6] )
        break;
      v33 = v31->klass;
      v575 = *(_OWORD *)(v18 + 100);
      if ( !v33 )
        goto LABEL_1211;
      *(_OWORD *)((char *)&v33->_1.generic_class + 4) = v575;
      if ( v17 >= v7[6] )
        break;
      if ( !v31->klass )
        goto LABEL_1211;
      ++v17;
      HIDWORD(v31->klass->_1.interopData) = *(_DWORD *)(v18 + 116);
      v585 = v17;
      eventEndTitle = (int)v14->fields.eventEndTitle;
      if ( (int)v17 >= eventEndTitle )
        goto LABEL_36;
    }
LABEL_1212:
    sub_1C942F8(result);
  }
LABEL_36:
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v35 = p_max_length;
  p_mQuestClearHeroineInfo = (GrandQuestFolderBoardItem_o *)&v34->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0;
  sub_1C9403C(p_mQuestClearHeroineInfo, 0, v8, v9, v10, v11, v12, v13);
  v37 = *p_max_length;
  if ( !(unsigned int)*p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v38 = (*m_Items)->m_Items[5];
  if ( v38 )
  {
    v39 = v38->fields.eventEndTitle;
    if ( v39 )
    {
      if ( !(_DWORD)v39 )
        goto LABEL_1212;
      eventEndMessage = v38->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1211;
      v41 = *(_OWORD *)&eventEndMessage[1].monitor;
      v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)result;
      *(_OWORD *)&v574.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields._stringLength;
      *(_OWORD *)&v574.fields.fakeValue = v41;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v573 = v574;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                                           &v573,
                                                           0);
      if ( !v42 )
        goto LABEL_1211;
      v43 = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                     v42,
                                     (int64_t)result,
                                     (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v44 = sub_1C942E4(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43941008((UserServantEntity_o *)v44, v43, 0);
      v575 = *(_OWORD *)&eventEndMessage[4].klass;
      if ( !v44 )
        goto LABEL_1211;
      *(_OWORD *)(v44 + 96) = v575;
      *(_DWORD *)(v44 + 256) = eventEndMessage[10].fields._stringLength;
      *(_QWORD *)(v44 + 292) = *(System_String_c **)((char *)&eventEndMessage[12].klass + 4);
      monitor = eventEndMessage[5].monitor;
      p_monitor = &eventEndMessage[5].monitor;
      v46 = monitor;
      v48 = p_monitor[1];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v588.fields.currentCryptoKey = v46;
      *(_QWORD *)&v588.fields.fakeValue = v48;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                           v588,
                                                           0);
      if ( (int)result >= 1 )
        *(_OWORD *)(v44 + 128) = *(_OWORD *)p_monitor;
      v585 = 0;
      if ( !v7 )
        goto LABEL_1211;
      v49 = v7[6];
      if ( v49 >= 1 )
      {
        v50 = 0;
        while ( v50 < (unsigned int)v49 )
        {
          v51 = *(UserServantCollectionEntity_o **)&v7[2 * v50 + 8];
          if ( !v51 )
            goto LABEL_1211;
          userId = (struct DeckData_o *)v51->fields.userId;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2633A )
          {
            sub_1C94098(&NetworkManager_TypeInfo);
            byte_4D2633A = 1;
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
          }
          if ( userId == result->m_Items[19]->fields.myDeck )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v51, 0);
            v55 = *(_QWORD *)(v44 + 80);
            v54 = *(_QWORD *)(v44 + 88);
            v56 = SvtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v589.fields.currentCryptoKey = v55;
            *(_QWORD *)&v589.fields.fakeValue = v54;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                                 v589,
                                                                 0);
            if ( v56 == (_DWORD)result )
              goto LABEL_70;
          }
          v50 = v585 + 1;
          v585 = v50;
          v49 = v7[6];
          if ( v50 >= v49 )
            goto LABEL_69;
        }
        goto LABEL_1212;
      }
LABEL_69:
      v51 = 0;
LABEL_70:
      v57 = sub_1C942E4(QuestClearHeroineInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v57, 0);
      if ( !v57 )
        goto LABEL_1211;
      *(_QWORD *)(v57 + 16) = v44;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 16), v44, v58, v59, v60, v61, v62, v63);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount((UserServantEntity_o *)v44, 0);
      if ( !v43 )
        goto LABEL_1211;
      v70 = (_DWORD)result != UserServantEntity__getLimitCount(v43, 0);
      *(_BYTE *)(v57 + 25) = 0;
      *(_DWORD *)(v57 + 28) = 0;
      *(_DWORD *)(v57 + 32) = 0;
      *(_BYTE *)(v57 + 40) = 0;
      *(_DWORD *)(v57 + 36) = -1;
      *(_BYTE *)(v57 + 24) = v70;
      v35 = p_max_length;
      *(_BYTE *)(v57 + 41) = *(_DWORD *)(v44 + 296) != v43->fields.exceedCount;
      if ( v51 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        v72 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v72 = NetworkManager_TypeInfo;
        }
        v74 = *(_QWORD *)(v44 + 80);
        v73 = *(_QWORD *)(v44 + 88);
        userIdNumber = v72->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v590.fields.currentCryptoKey = v74;
        *(_QWORD *)&v590.fields.fakeValue = v73;
        result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                             v590,
                                                             0);
        if ( !Master_object )
          goto LABEL_1211;
        v76 = UserServantCollectionMaster__GetEntityDefinitely(
                (UserServantCollectionMaster_o *)Master_object,
                userIdNumber,
                (int32_t)result,
                0);
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v51, 0);
        if ( !v76 )
          goto LABEL_1211;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v76, 0) )
          *(_DWORD *)(v57 + 36) = UserServantCollectionEntity__getFriendShipRank(v51, 0);
        v35 = p_max_length;
        if ( v51->fields.friendshipExceedCount != v76->fields.friendshipExceedCount )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v77 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
          v79 = *(_QWORD *)(v44 + 80);
          v78 = *(_QWORD *)(v44 + 88);
          v80 = (DataMasterBase_TMaster__TEntity__PKType__o *)v77;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v591.fields.currentCryptoKey = v79;
          *(_QWORD *)&v591.fields.fakeValue = v78;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                               v591,
                                                               0);
          if ( !v80 )
            goto LABEL_1211;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                               v80,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          v35 = p_max_length;
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1211;
            klass_high = HIDWORD(entity[6].klass);
            friendshipExceedCount = v51->fields.friendshipExceedCount;
            *(_BYTE *)(v57 + 40) = 1;
            *(_DWORD *)(v57 + 36) = friendshipExceedCount + klass_high;
          }
        }
      }
      v83 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
      }
      v84 = (GrandQuestFolderBoardItem_o *)&v83->static_fields->mQuestClearHeroineInfo;
      v84->klass = (GrandQuestFolderBoardItem_c *)v57;
      sub_1C9403C(v84, v57, v64, v65, v66, v67, v68, v69);
      v37 = *v35;
    }
  }
  if ( !(_DWORD)v37 )
    goto LABEL_1212;
  v85 = (BattleResultComponent_resultData_o *)*m_Items;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetBattleResultCampaignBonus(v85, (const MethodInfo *)isWin);
  if ( !*(_DWORD *)v35 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v86 = (*m_Items)->m_Items[9];
  if ( v86 && (v87 = v86->fields.eventEndTitle) != 0 )
  {
    if ( !(_DWORD)v87 )
      goto LABEL_1212;
    v88 = (UserQuestEntity_o *)v86->fields.eventEndMessage;
  }
  else
  {
    v88 = 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2932E )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2932E = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE6(result->m_Items[19]->fields.oldUserGame) = v88 != 0;
  if ( !byte_4D2932D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4D2932D = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_4D29448 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4D29448 = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_4D2932C )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4D2932C = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE6(result->m_Items[19]->fields.oldUserGame) )
  {
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4D265BD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D265BD = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.eventId )
    {
      if ( !v88 )
        goto LABEL_1211;
    }
    else
    {
      if ( !v88 )
        goto LABEL_1211;
      questId = v88->fields.questId;
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4D28FD7 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D28FD7 = 1;
      }
      v90 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v90 = TerminalPramsManager_TypeInfo;
      }
      v90->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v88, 0);
      if ( !byte_4D28FDB )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D28FDB = 1;
      }
      v92 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v92 = TerminalPramsManager_TypeInfo;
      }
      v92->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v93 = v88->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)result,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_1211;
    v95 = UserQuestMaster__GetEntity(
            (UserQuestMaster_o *)MasterData_object,
            (int64_t)result->m_Items[19]->fields.myDeck,
            v93,
            0);
    if ( v95 )
    {
      v96 = v95;
      v97 = UserQuestEntity__getQuestPhase(v95, 0);
      if ( UserQuestEntity__getClearNum(v88, 0) || UserQuestEntity__getClearNum(v96, 0) != 1 )
        v98 = UserQuestEntity__IsResetStatus(v88, 0) && !UserQuestEntity__IsResetStatus(v96, 0);
      else
        v98 = 1;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2932D )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D2932D = 1;
      }
      v99 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v99 = TerminalPramsManager_TypeInfo;
      }
      v99->static_fields->_IsQuestClear_k__BackingField = v98;
      if ( !byte_4D29BF4 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        v99 = TerminalPramsManager_TypeInfo;
        byte_4D29BF4 = 1;
      }
      if ( !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99);
        v99 = TerminalPramsManager_TypeInfo;
      }
      v99->static_fields->_EventUIEffectClearQuestId_k__BackingField = v93;
      if ( !byte_4D29BF1 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        v99 = TerminalPramsManager_TypeInfo;
        byte_4D29BF1 = 1;
      }
      if ( !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99);
        v99 = TerminalPramsManager_TypeInfo;
      }
      v99->static_fields->_MapModelClearQuestId_k__BackingField = v93;
      if ( !byte_4D29BF2 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        v99 = TerminalPramsManager_TypeInfo;
        byte_4D29BF2 = 1;
      }
      if ( !v99->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v99);
        v99 = TerminalPramsManager_TypeInfo;
      }
      v99->static_fields->_MapModelClearPhaseCount_k__BackingField = v97;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v99);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v93, v97, 0, 0);
      TerminalPramsManager__SendClearQuestToAdManager(v93, v97, v100);
    }
    else
    {
      v97 = 0;
    }
    v101 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v101);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1211;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v93, v97, 3, 0);
    v104 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D28365 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D28365 = 1;
      }
      v104 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v104 = TerminalPramsManager_TypeInfo;
      }
      v104->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( !v104->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v104);
    if ( !byte_4D29C04 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C04 = 1;
    }
    v105 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v105 = TerminalPramsManager_TypeInfo;
    }
    if ( v105->static_fields->_QuestReleaseFocusQuestId_k__BackingField >= 1 )
    {
      if ( !v105->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v105);
      if ( !byte_4D29C04 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29C04 = 1;
      }
      v106 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v106 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v106->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v103);
      TerminalPramsManager__SaveQuestReleasedFocusState(v107);
      if ( !byte_4D297B7 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D297B7 = 1;
      }
      v105 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v105 = TerminalPramsManager_TypeInfo;
      }
      v105->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
    }
    if ( !v105->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v105);
    if ( !byte_4D299A9 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D299A9 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(result->m_Items[19]->fields.eventPointWinReward) = v93;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4D2932F )
  {
    result = (BattleResultComponent_resultData_array *)sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2932F = 1;
  }
  v108 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v108 = TerminalPramsManager_TypeInfo;
  }
  if ( v108->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v88 )
      goto LABEL_1211;
    v109 = v88->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1211;
    v111 = WarMaster__getByLastQuestId((WarMaster_o *)result, v109, 0);
    if ( v111 )
    {
      v112 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v112 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v112->static_fields->MainInterludeMapReturnWarIds,
             v111->fields.id,
             (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D29330 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29330 = 1;
        }
        v113 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v113 = TerminalPramsManager_TypeInfo;
        }
        v111 = 0;
        v113->static_fields->_IsWarClear_k__BackingField = 0;
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29330 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29330 = 1;
    }
    v114 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v114 = TerminalPramsManager_TypeInfo;
    }
    v114->static_fields->_IsWarClear_k__BackingField = v111 != 0;
    v115 = TerminalPramsManager__CheckIsOrdealCallWarClear(v111, v110);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v115 )
    {
      if ( !byte_4D29331 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29331 = 1;
      }
      v116 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v116 = TerminalPramsManager_TypeInfo;
      }
      v117 = 1;
    }
    else
    {
      if ( !byte_4D29331 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29331 = 1;
      }
      v116 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v116 = TerminalPramsManager_TypeInfo;
      }
      v117 = 0;
    }
    v116->static_fields->_IsOrdealCallWarClear_k__BackingField = v117;
    if ( !v116->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v116);
    if ( !byte_4D29332 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29332 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v111 )
        goto LABEL_1211;
      if ( !WarEntity__IsEvent(v111, 0) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1211;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v111->fields.id, -1, 0, 0);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v109, -1, 0, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v109, v118);
    if ( !byte_4D29332 )
    {
      result = (BattleResultComponent_resultData_array *)sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29332 = 1;
    }
    v108 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v108 = TerminalPramsManager_TypeInfo;
    }
    if ( v108->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v111 )
        goto LABEL_1211;
      HasFlag = WarEntity__HasFlag(v111, 128, 0);
      v108 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D297A9 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D297A9 = 1;
        }
        v108 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v108 = TerminalPramsManager_TypeInfo;
        }
        v108->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4D29448 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          v108 = TerminalPramsManager_TypeInfo;
          byte_4D29448 = 1;
        }
        if ( !v108->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v108);
          v108 = TerminalPramsManager_TypeInfo;
        }
        v108->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( !v108->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v108);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !LODWORD(resulta->max_length) )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  static_fields->mResultEventPanelRewardInfos = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->mResultEventPanelRewardInfos,
    0,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v133 = (GrandQuestFolderBoardItem_c *)(*m_Items)->m_Items[19];
  if ( v133 && v133->_1.namespaze )
  {
    v134 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v134 = TerminalPramsManager_TypeInfo;
    }
    p_mResultEventPanelRewardInfos = (GrandQuestFolderBoardItem_o *)&v134->static_fields->mResultEventPanelRewardInfos;
    p_mResultEventPanelRewardInfos->klass = v133;
    sub_1C9403C(p_mResultEventPanelRewardInfos, (int32_t)v133, v127, v128, v129, v130, v131, v132);
  }
  v136 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v136 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (GrandQuestFolderBoardItem_o *)&v136->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0;
  sub_1C9403C(p_eventConquestInfos, 0, v127, v128, v129, v130, v131, v132);
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !result )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v583,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v144 = (GrandQuestFolderBoardItem_c *)(*m_Items)->m_Items[44];
  if ( v144 && v144->_1.namespaze )
  {
    v145 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v145 = TerminalPramsManager_TypeInfo;
    }
    v146 = (GrandQuestFolderBoardItem_o *)&v145->static_fields->eventConquestInfos;
    v146->klass = v144;
    sub_1C9403C(v146, (int32_t)v144, v138, v139, v140, v141, v142, v143);
    if ( v583 )
      Farm = EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v583, 0);
    else
      Farm = 0;
    v148 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v148 = TerminalPramsManager_TypeInfo;
    }
    v148->static_fields->eventConquestInfoDisp = !Farm;
  }
  result = (BattleResultComponent_resultData_array *)v583;
  if ( v583 )
  {
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)v583, 0);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2932F )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D2932F = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
      {
        v149 = 1;
      }
      else
      {
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4D2932C )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D2932C = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v149 = BYTE6(result->m_Items[19]->fields.oldUserGame);
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      BYTE1(result->m_Items[19][1].fields.eventTowerReward) = v149;
    }
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  if ( LOBYTE((*m_Items)->m_Items[47]) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D298A8 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D298A8 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].klass) = 1;
    if ( !byte_4D2932F )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4D2932F = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v88 )
        goto LABEL_1211;
      v150 = v88->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1211;
      v151 = WarMaster__getByLastQuestId((WarMaster_o *)result, v150, 0);
      if ( v151 )
      {
        id = v151->fields.id;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D298A9 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D298A9 = 1;
        }
        v153 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v153 = TerminalPramsManager_TypeInfo;
        }
        v153->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = id;
      }
    }
  }
  v154 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v154 = TerminalPramsManager_TypeInfo;
  }
  *(_QWORD *)&v154->static_fields->clearLastBattleRaidId = -1;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v155 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v156 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !v156 )
    goto LABEL_1211;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v156,
          &v582,
          HIDWORD((*m_Items)->bounds),
          (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_631;
  result = (BattleResultComponent_resultData_array *)v582;
  if ( !v582 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPoint((EventDetailEntity_o *)v582, 0);
  v169 = 0;
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    v169 = (GrandQuestFolderBoardItem_c *)(*m_Items)->m_Items[10];
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C05 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C05 = 1;
  }
  v170 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v170 = TerminalPramsManager_TypeInfo;
  }
  p_OldUserEventPoint_k__BackingField = (GrandQuestFolderBoardItem_o *)&v170->static_fields->_OldUserEventPoint_k__BackingField;
  p_OldUserEventPoint_k__BackingField->klass = v169;
  sub_1C9403C(p_OldUserEventPoint_k__BackingField, (int32_t)v169, v163, v164, v165, v166, v167, v168);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items || !v155 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       (EventRaidMaster_o *)v155,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0);
  if ( (int)result >= 1 )
  {
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         (EventRaidMaster_o *)v155,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0);
    v585 = 0;
    if ( !result )
      goto LABEL_1211;
    max_length = result->max_length;
    v173 = result;
    if ( max_length < 1 )
      goto LABEL_631;
    v174 = 0;
    while ( 1 )
    {
      if ( v174 >= (unsigned int)max_length )
        goto LABEL_1212;
      v175 = &v173->obj.klass + v174;
      v176 = v175[4];
      if ( !v176 )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v175[4],
                                                           0);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*(_DWORD *)p_max_length )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 (EventRaidMaster_o *)v155,
                                 HIDWORD((*m_Items)->bounds),
                                 (int32_t)v176->_1.namespaze,
                                 0);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D265BD )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D265BD = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.eventId )
        {
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1211;
          result = (BattleResultComponent_resultData_array *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)result,
                                                               RaidGroupDeadQuestId,
                                                               0,
                                                               0);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
        }
      }
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           (EventRaidMaster_o *)v155,
                                                           HIDWORD((*m_Items)->bounds),
                                                           HIDWORD(v176->_1.name),
                                                           0);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1211;
      v178 = result->max_length;
      v179 = result;
      if ( v178 >= 1 )
      {
        v180 = 0;
        while ( 1 )
        {
          if ( v180 >= (unsigned int)v178 )
            goto LABEL_1212;
          v181 = *((_DWORD *)v179->m_Items + v180);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D265BD )
          {
            sub_1C94098(&TerminalPramsManager_TypeInfo);
            byte_4D265BD = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          v182 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v181 == v182->_QuestId_k__BackingField )
            break;
          v180 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v180;
          v178 = v179->max_length;
          if ( v180 >= v178 )
            goto LABEL_431;
        }
        name_high = HIDWORD(v176->_1.name);
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          v182 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v182->clearBattleRaidId = name_high;
      }
LABEL_431:
      v174 = v585 + 1;
      v585 = v174;
      max_length = v173->max_length;
      if ( v174 >= max_length )
        goto LABEL_631;
    }
    v192 = TerminalPramsManager_TypeInfo;
    v193 = HIDWORD(v176->_1.name);
    goto LABEL_501;
  }
  result = (BattleResultComponent_resultData_array *)v582;
  if ( !v582 )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v582,
                                                       0);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v582;
    if ( !v582 )
      goto LABEL_1211;
    if ( !EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)v582, 0) )
      goto LABEL_461;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventUiMaster___);
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items || !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)EventUiMaster__HasEntity(
                                                         (EventUiMaster_o *)result,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0);
    if ( ((unsigned __int8)result & 1) == 0 )
    {
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items )
        goto LABEL_1211;
      v203 = (int32_t)(*m_Items)->m_Items[43];
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D26F69 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D26F69 = 1;
      }
      v204 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v204 = TerminalPramsManager_TypeInfo;
      }
      v204->static_fields->_EventActivityPointEffectState_k__BackingField = v203;
    }
    else
    {
LABEL_461:
      result = (BattleResultComponent_resultData_array *)v582;
      if ( !v582 )
        goto LABEL_1211;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v582, 0) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D29C06 )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29C06 = 1;
        }
        v190 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v190 = TerminalPramsManager_TypeInfo;
        }
        if ( v190->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v191 = 0;
        }
        else
        {
          if ( !*(_DWORD *)p_max_length )
            goto LABEL_1212;
          if ( !*m_Items )
            goto LABEL_1211;
          bounds_high = HIDWORD((*m_Items)->bounds);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0);
          v190 = TerminalPramsManager_TypeInfo;
          v191 = IsUserEventStatus;
        }
        if ( !v190->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v190);
        if ( !byte_4D299B1 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D299B1 = 1;
        }
        v207 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v207 = TerminalPramsManager_TypeInfo;
        }
        v207->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v191;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v582;
        if ( !v582 )
          goto LABEL_1211;
        if ( !EventDetailEntity__IsEventHappiness((EventDetailEntity_o *)v582, 0) )
          goto LABEL_504;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v194 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D265BD )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D265BD = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        eventId = result->m_Items[19]->fields.eventId;
        if ( !byte_4D265BC )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          byte_4D265BC = 1;
        }
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( !v194 )
          goto LABEL_1211;
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)v194,
               &v580,
               eventId,
               LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
               0) )
        {
          result = (BattleResultComponent_resultData_array *)v580;
          if ( !v580 )
            goto LABEL_1211;
          v196 = QuestPhaseEntity__PlayHappinessCounterEffect(v580, 0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D29790 )
          {
            sub_1C94098(&TerminalPramsManager_TypeInfo);
            byte_4D29790 = 1;
          }
          v197 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v197 = TerminalPramsManager_TypeInfo;
          }
          v197->static_fields->_PlayHappinessCounterEffect_k__BackingField = v196;
        }
        else
        {
LABEL_504:
          result = (BattleResultComponent_resultData_array *)v582;
          if ( !v582 )
            goto LABEL_1211;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v582,
                                                               0);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*(_DWORD *)p_max_length )
              goto LABEL_1212;
            if ( !*m_Items )
              goto LABEL_1211;
            v199 = (*m_Items)->m_Items[10];
            v585 = 0;
            if ( !v199 )
              goto LABEL_1211;
            v200 = (int)v199->fields.eventEndTitle;
            if ( v200 >= 1 )
            {
              v201 = 0;
              while ( 1 )
              {
                if ( v200 == v201 )
                  goto LABEL_1212;
                if ( !v582 )
                  goto LABEL_1211;
                v202 = *((_QWORD *)&v199->fields.eventEndMessage + v201);
                if ( !v202 )
                  goto LABEL_1211;
                if ( LODWORD(v582[1].klass) == *(_DWORD *)(v202 + 24) )
                  break;
                v585 = ++v201;
                if ( v200 == v201 )
                  goto LABEL_612;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4D29105 )
              {
                sub_1C94098(&TerminalPramsManager_TypeInfo);
                byte_4D29105 = 1;
              }
              v209 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v209 = TerminalPramsManager_TypeInfo;
              }
              if ( !v209->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v210 = (Il2CppObject *)sub_1C942E4(EventSaveData_TypeInfo);
                System_Object___ctor(v210, 0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4D29106 )
                {
                  sub_1C94098(&TerminalPramsManager_TypeInfo);
                  byte_4D29106 = 1;
                }
                v217 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v217 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = (GrandQuestFolderBoardItem_o *)&v217->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                p_BeforeEventSubmarineSaveData_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v210;
                sub_1C9403C(
                  p_BeforeEventSubmarineSaveData_k__BackingField,
                  (int32_t)v210,
                  v211,
                  v212,
                  v213,
                  v214,
                  v215,
                  v216);
                v209 = TerminalPramsManager_TypeInfo;
              }
              if ( !v209->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v209);
              if ( !byte_4D29105 )
              {
                sub_1C94098(&TerminalPramsManager_TypeInfo);
                byte_4D29105 = 1;
              }
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              rewardBonus = result->m_Items[19]->fields.rewardBonus;
              if ( !rewardBonus )
                goto LABEL_1211;
              rewardBonus->fields.animationId = *(_DWORD *)(v202 + 24);
              if ( !byte_4D29105 )
              {
                sub_1C94098(&TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_4D29105 = 1;
              }
              if ( !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              v220 = result->m_Items[19]->fields.rewardBonus;
              if ( !v220 )
                goto LABEL_1211;
              result = (BattleResultComponent_resultData_array *)v220->fields.voiceIds;
              if ( result
                && (result = (BattleResultComponent_resultData_array *)System_String__Split(
                                                                         (System_String_o *)result,
                                                                         0x2Cu,
                                                                         0,
                                                                         0)) != 0 )
              {
                v221 = result->max_length;
                v222 = (__int64 *)&result->m_Items[1];
                if ( v221 <= 1 )
                  v222 = &StringLiteral_1115/*"0"*/;
                v223 = *v222;
                v224 = v221 <= 2 ? (System_String_o **)&StringLiteral_1115/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v225 = *v224;
                v226 = v221 <= 3 ? (System_String_o **)&StringLiteral_6648/*"False"*/ : (System_String_o **)&result->m_Items[3];
              }
              else
              {
                v225 = (System_String_o *)StringLiteral_1115/*"0"*/;
                v226 = (System_String_o **)&StringLiteral_6648/*"False"*/;
                v223 = StringLiteral_1115/*"0"*/;
              }
              if ( !v582 )
                goto LABEL_1211;
              v568 = (System_String_o *)v223;
              v227 = *v226;
              v228 = (int32_t)v582[1].klass;
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v228,
                                                                   0);
              v229 = (System_Collections_Generic_List_object__o *)result;
              v230 = TerminalPramsManager___c_TypeInfo;
              if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v230 = TerminalPramsManager___c_TypeInfo;
              }
              _9__757_0 = (System_Predicate_object__o *)v230->static_fields->__9__757_0;
              if ( !_9__757_0 )
              {
                v232 = v225;
                if ( !v230->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v230);
                  v230 = TerminalPramsManager___c_TypeInfo;
                }
                v233 = (Il2CppObject *)v230->static_fields->__9;
                _9__757_0 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_object____ctor(
                  _9__757_0,
                  v233,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__757_0__,
                  0);
                v234 = TerminalPramsManager___c_TypeInfo->static_fields;
                v234->__9__757_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__757_0;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&v234->__9__757_0,
                  (int32_t)_9__757_0,
                  v235,
                  v236,
                  v237,
                  v238,
                  v239,
                  v240);
                v225 = v232;
              }
              if ( !v229 )
                goto LABEL_1211;
              v241 = v568;
              if ( System_Collections_Generic_List_object___Find(
                     v229,
                     (System_Predicate_T__o *)_9__757_0,
                     (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4D265BD )
                {
                  sub_1C94098(&TerminalPramsManager_TypeInfo);
                  byte_4D265BD = 1;
                }
                v242 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v242 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v242->static_fields->_QuestId_k__BackingField;
                v241 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0);
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4D29105 )
              {
                sub_1C94098(&TerminalPramsManager_TypeInfo);
                byte_4D29105 = 1;
              }
              v243 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v243 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v243->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v245 = System_Int64__ToString(v202 + 32, 0);
              if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_40536236(
                                                                   v245,
                                                                   v241,
                                                                   v225,
                                                                   v227,
                                                                   0);
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1211;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)&BeforeEventSubmarineSaveData_k__BackingField->fields.value,
                (int32_t)result,
                v246,
                v247,
                v248,
                v249,
                v250,
                v251);
            }
LABEL_612:
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4D265BD )
            {
              sub_1C94098(&TerminalPramsManager_TypeInfo);
              byte_4D265BD = 1;
            }
            v252 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v252 = TerminalPramsManager_TypeInfo;
            }
            v253 = v252->static_fields->_QuestId_k__BackingField;
            if ( !byte_4D265BC )
            {
              sub_1C94098(&TerminalPramsManager_TypeInfo);
              v252 = TerminalPramsManager_TypeInfo;
              byte_4D265BC = 1;
            }
            if ( !v252->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v252);
              v252 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v252->static_fields->_PhaseCnt_k__BackingField;
            if ( !byte_4D2932F )
            {
              sub_1C94098(&TerminalPramsManager_TypeInfo);
              v252 = TerminalPramsManager_TypeInfo;
              byte_4D2932F = 1;
            }
            if ( !v252->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v252);
              v252 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v252->static_fields->_IsQuestClear_k__BackingField;
            if ( !byte_4D2932C )
            {
              sub_1C94098(&TerminalPramsManager_TypeInfo);
              v252 = TerminalPramsManager_TypeInfo;
              byte_4D2932C = 1;
            }
            if ( !v252->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v252);
              v252 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v253,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v252->static_fields->_IsPhaseClear_k__BackingField,
              0);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v582;
            if ( !v582 )
              goto LABEL_1211;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v582, 0) )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4D29BF7 )
              {
                sub_1C94098(&TerminalPramsManager_TypeInfo);
                byte_4D29BF7 = 1;
              }
              v208 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v208 = TerminalPramsManager_TypeInfo;
              }
              v208->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
            }
          }
        }
      }
    }
    goto LABEL_631;
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       (EventRaidMaster_o *)v155,
                                                       HIDWORD((*m_Items)->bounds),
                                                       0);
  v585 = 0;
  if ( !result )
    goto LABEL_1211;
  v184 = result->max_length;
  v185 = result;
  if ( v184 >= 1 )
  {
    v186 = 0;
    while ( 1 )
    {
      if ( v186 >= (unsigned int)v184 || !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items )
        goto LABEL_1211;
      v187 = v185->m_Items[v186];
      if ( !v187 )
        goto LABEL_1211;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                          (EventRaidMaster_o *)v155,
                          HIDWORD((*m_Items)->bounds),
                          v187->fields.eventId,
                          0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D265BD )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D265BD = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v189 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v189->_QuestId_k__BackingField )
        break;
      v186 = v585 + 1;
      v585 = v186;
      v184 = v185->max_length;
      if ( v186 >= v184 )
        goto LABEL_631;
    }
    v198 = v187->fields.eventId;
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v189 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v189->clearBattleRaidId = v198;
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0) )
    {
      v192 = TerminalPramsManager_TypeInfo;
      v193 = v187->fields.eventId;
LABEL_501:
      if ( !v192->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v192);
        v192 = TerminalPramsManager_TypeInfo;
      }
      v192->static_fields->clearLastBattleRaidId = v193;
    }
  }
LABEL_631:
  v256 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v256 = TerminalPramsManager_TypeInfo;
  }
  if ( v256->static_fields->clearLastBattleRaidId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v257 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D26A98 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D26A98 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v257 )
      goto LABEL_1211;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v257,
           &v579,
           HIDWORD(result->m_Items[19]->klass),
           (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      result = (BattleResultComponent_resultData_array *)v579;
      if ( !v579 )
        goto LABEL_1211;
      if ( WarEntity__IsFolder((WarEntity_o *)v579, 0) )
      {
        result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
        if ( !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TitleInfoEventRaidBossComponent_TypeInfo;
        }
        if ( !*(_DWORD *)p_max_length )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        UnityEngine_PlayerPrefs__SetInt(result->m_Items[19]->fields.eventEndTitle, HIDWORD((*m_Items)->bounds), 0);
        UnityEngine_PlayerPrefs__Save(0);
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2979C )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2979C = 1;
  }
  v258 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v258 = TerminalPramsManager_TypeInfo;
  }
  v258->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v258 = TerminalPramsManager_TypeInfo;
    byte_4D265BD = 1;
  }
  if ( !v258->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v258);
    v258 = TerminalPramsManager_TypeInfo;
  }
  if ( v258->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    v259 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D265BD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D265BD = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v259 )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         (QuestMaster_o *)v259,
                                                         result->m_Items[19]->fields.eventId,
                                                         0);
    if ( !result )
      goto LABEL_1211;
    v260 = (int)result->m_Items[1];
    if ( !byte_4D2979C )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2979C = 1;
    }
    v258 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v258 = TerminalPramsManager_TypeInfo;
    }
    v258->static_fields->_IsWarBoardClear_k__BackingField = v260 == 7;
  }
  if ( !v258->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v258);
  if ( !byte_4D298A7 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D298A7 = 1;
  }
  v261 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v261 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (GrandQuestFolderBoardItem_o *)&v261->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0;
  sub_1C9403C(p_questClearCostumeRelease_k__BackingField, 0, v157, v158, v159, v160, v161, v162);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v269 = (*m_Items)->m_Items[22];
  if ( v269 && v269->fields.eventEndTitle )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2978C )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2978C = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !LOBYTE(result->m_Items[19]->fields.resultQuestPhaseRewardInfos) )
    {
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items )
        goto LABEL_1211;
      v270 = (GrandQuestFolderBoardItem_c *)(*m_Items)->m_Items[22];
      if ( !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4D298A7 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D298A7 = 1;
      }
      v271 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v271 = TerminalPramsManager_TypeInfo;
      }
      v272 = (GrandQuestFolderBoardItem_o *)&v271->static_fields->_questClearCostumeRelease_k__BackingField;
      v272->klass = v270;
      sub_1C9403C(v272, (int32_t)v270, v263, v264, v265, v266, v267, v268);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29799 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29799 = 1;
  }
  v273 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v273 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (GrandQuestFolderBoardItem_o *)&v273->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0;
  sub_1C9403C(p_questClearCostumeGet_k__BackingField, 0, v263, v264, v265, v266, v267, v268);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v281 = (GrandQuestFolderBoardItem_c *)(*m_Items)->m_Items[23];
  if ( v281 && v281->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29799 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29799 = 1;
    }
    v282 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v282 = TerminalPramsManager_TypeInfo;
    }
    v283 = (GrandQuestFolderBoardItem_o *)&v282->static_fields->_questClearCostumeGet_k__BackingField;
    v283->klass = v281;
    sub_1C9403C(v283, (int32_t)v281, v275, v276, v277, v278, v279, v280);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C07 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C07 = 1;
  }
  v284 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v284 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = (GrandQuestFolderBoardItem_o *)&v284->static_fields->_eventPointWinReward_k__BackingField;
  p_eventPointWinReward_k__BackingField->klass = 0;
  sub_1C9403C(p_eventPointWinReward_k__BackingField, 0, v275, v276, v277, v278, v279, v280);
  if ( !byte_4D29C08 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C08 = 1;
  }
  v292 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v292 = TerminalPramsManager_TypeInfo;
  }
  v292->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v88 && v582 && HIDWORD(v582[9].klass) == 4 )
  {
    v293 = v88->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1211;
    v294 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v293, 4, 0);
    v296 = TerminalPramsManager_TypeInfo;
    v297 = GroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v296 = TerminalPramsManager_TypeInfo;
    }
    v296->static_fields->joinGroupId = v297;
    v298 = QuestGroupMaster__GetGroupId(v294, v293, 3, 0);
    if ( !byte_4D2932F )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2932F = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v298 >= 1 && BYTE5(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      v299 = DataManager__GetMasterData_object_(
               (DataManager_o *)result,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items || !result )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v298,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0);
      v300 = (EventPointEntity_o *)result;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v300 )
        goto LABEL_1211;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v300,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0);
      if ( !v299 )
        goto LABEL_1211;
      v301 = QuestReleaseMaster__EventPointWinActionType(
               (QuestReleaseMaster_o *)v299,
               v293,
               (unsigned __int8)result & 1,
               0);
      if ( !byte_4D29C08 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29C08 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.warClearReward) = v301;
      if ( !byte_4D29C09 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4D29C09 = 1;
      }
      if ( !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v302 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v302->_eventPointWinType_k__BackingField )
      {
        if ( !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v302 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v302->joinGroupId = -1;
      }
    }
    if ( !*(_DWORD *)p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    v303 = (*m_Items)->m_Items[20];
    if ( v303 )
    {
      v304 = v303->fields.eventEndTitle;
      if ( v304 )
      {
        if ( !(_DWORD)v304 )
          goto LABEL_1212;
        v305 = (GrandQuestFolderBoardItem_c *)v303->fields.eventEndMessage;
        if ( !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_4D29C07 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29C07 = 1;
        }
        v306 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v306 = TerminalPramsManager_TypeInfo;
        }
        v307 = (GrandQuestFolderBoardItem_o *)&v306->static_fields->_eventPointWinReward_k__BackingField;
        v307->klass = v305;
        sub_1C9403C(v307, (int32_t)v305, v286, v287, v288, v289, v290, v291);
      }
    }
  }
  if ( v88 && v582 && HIDWORD(v582[9].klass) == 6 )
  {
    v308 = v88->fields.questId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29C0A )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C0A = 1;
    }
    v309 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v309 = TerminalPramsManager_TypeInfo;
    }
    v309->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v308;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D299AC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D299AC = 1;
  }
  v310 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v310 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = (GrandQuestFolderBoardItem_o *)&v310->static_fields->_eventRaceBoost_k__BackingField;
  p_eventRaceBoost_k__BackingField->klass = 0;
  sub_1C9403C(p_eventRaceBoost_k__BackingField, 0, v286, v287, v288, v289, v290, v291);
  v318 = *p_max_length;
  if ( !(unsigned int)*p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v319 = (*m_Items)->m_Items[21];
  if ( v319 && v319->fields.battleId >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D299AC )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D299AC = 1;
    }
    v320 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v320 = TerminalPramsManager_TypeInfo;
    }
    v321 = (GrandQuestFolderBoardItem_o *)&v320->static_fields->_eventRaceBoost_k__BackingField;
    v321->klass = (GrandQuestFolderBoardItem_c *)v319;
    sub_1C9403C(v321, (int32_t)v319, v312, v313, v314, v315, v316, v317);
    if ( !byte_4D29993 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29993 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v322 = *(_QWORD *)&result->m_Items[19]->fields.followerType;
    if ( !byte_4D265BD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4D265BD = 1;
    }
    if ( !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v322 )
      goto LABEL_1211;
    *(_DWORD *)(v322 + 28) = result->m_Items[19]->fields.eventId;
    v318 = *p_max_length;
  }
  if ( !(_DWORD)v318 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v323 = (*m_Items)->m_Items[24];
  if ( v323 )
  {
    v324 = v323->fields.eventEndTitle;
    if ( v324 )
    {
      if ( !(_DWORD)v324 )
        goto LABEL_1212;
      v325 = v323->fields.eventEndMessage;
      if ( !v325 )
        goto LABEL_1211;
      if ( v325->fields._stringLength >= 1 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D29C0B )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29C0B = 1;
        }
        v326 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v326 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (GrandQuestFolderBoardItem_o *)&v326->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v325;
        sub_1C9403C(p_eventTowerReward_k__BackingField, (int32_t)v325, v312, v313, v314, v315, v316, v317);
        if ( !*(_DWORD *)p_max_length )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v334 = (GrandQuestFolderBoardItem_c *)(*m_Items)->m_Items[25];
        if ( !byte_4D29C0C )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29C0C = 1;
        }
        v335 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v335 = TerminalPramsManager_TypeInfo;
        }
        p_resultEventTowerRewardInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v335->static_fields->_resultEventTowerRewardInfo_k__BackingField;
        p_resultEventTowerRewardInfo_k__BackingField->klass = v334;
        sub_1C9403C(p_resultEventTowerRewardInfo_k__BackingField, (int32_t)v334, v328, v329, v330, v331, v332, v333);
        v318 = *p_max_length;
      }
    }
  }
  if ( !(_DWORD)v318 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v337 = (GrandQuestFolderBoardItem_c *)(*m_Items)->m_Items[26];
  if ( v337 && v337->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29793 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29793 = 1;
    }
    v338 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v338 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v338->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = v337;
    sub_1C9403C(p_resultBoostItemRewardInfo_k__BackingField, (int32_t)v337, v312, v313, v314, v315, v316, v317);
    v318 = *p_max_length;
  }
  if ( !(_DWORD)v318 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v340 = (GrandQuestFolderBoardItem_c *)(*m_Items)->m_Items[27];
  if ( v340 && v340->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29794 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29794 = 1;
    }
    v341 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v341 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v341->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v340;
    sub_1C9403C(
      p_resultEventBoardGameTokenRewardInfo_k__BackingField,
      (int32_t)v340,
      v312,
      v313,
      v314,
      v315,
      v316,
      v317);
    v318 = *p_max_length;
  }
  if ( !(_DWORD)v318 )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v343 = (GrandQuestFolderBoardItem_c *)(*m_Items)->m_Items[28];
  if ( v343 && v343->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2979F )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2979F = 1;
    }
    v344 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v344 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (GrandQuestFolderBoardItem_o *)&v344->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = v343;
    sub_1C9403C(p_warClearReward_k__BackingField, (int32_t)v343, v312, v313, v314, v315, v316, v317);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C0D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C0D = 1;
  }
  v346 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v346 = TerminalPramsManager_TypeInfo;
  }
  v347 = v346->static_fields;
  v347->_oldSuperBoss_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v347->_oldSuperBoss_k__BackingField,
    0,
    v312,
    v313,
    v314,
    v315,
    v316,
    v317);
  if ( !byte_4D29C0E )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C0E = 1;
  }
  v354 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v354 = TerminalPramsManager_TypeInfo;
  }
  v355 = v354->static_fields;
  v355->_oldPersonalBoss_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v355->_oldPersonalBoss_k__BackingField,
    0,
    v348,
    v349,
    v350,
    v351,
    v352,
    v353);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_1211;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, result->m_Items[19]->fields.eventId, 0);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0);
  if ( WarEntityByWarID )
    v359 = WarEntityByWarID->fields.eventId;
  else
    v359 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                                       &v578,
                                                       v359,
                                                       (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v569 )
    goto LABEL_1216;
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  result = *m_Items;
  if ( !*m_Items )
    goto LABEL_1211;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1216:
    v366 = *p_max_length;
    if ( !(unsigned int)*p_max_length )
      goto LABEL_1212;
    if ( !*m_Items )
      goto LABEL_1211;
    if ( (*m_Items)->m_Items[42] )
    {
      result = (BattleResultComponent_resultData_array *)v578;
      if ( v578
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v578,
                                                                 0),
            v366 = *p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v366 )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v367 = (*m_Items)->m_Items[42];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D29C0E )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29C0E = 1;
        }
        v368 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v368 = TerminalPramsManager_TypeInfo;
        }
        v369 = v368->static_fields;
        v369->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v367;
        p_oldPersonalBoss_k__BackingField = (GrandQuestFolderBoardItem_o *)&v369->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v366 )
          goto LABEL_1212;
        if ( !*m_Items )
          goto LABEL_1211;
        v367 = (*m_Items)->m_Items[42];
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D29C0D )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29C0D = 1;
        }
        v371 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v371 = TerminalPramsManager_TypeInfo;
        }
        v372 = v371->static_fields;
        v372->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v367;
        p_oldPersonalBoss_k__BackingField = (GrandQuestFolderBoardItem_o *)&v372->_oldSuperBoss_k__BackingField;
      }
      sub_1C9403C(p_oldPersonalBoss_k__BackingField, (int32_t)v367, v360, v361, v362, v363, v364, v365);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C0F )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C0F = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.eventTowerReward )
    goto LABEL_1217;
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4D29C0F )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C0F = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  eventTowerReward = result->m_Items[19]->fields.eventTowerReward;
  if ( !eventTowerReward )
    goto LABEL_1211;
  if ( eventTowerReward->max_length )
  {
    v374 = 1;
  }
  else
  {
LABEL_1217:
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4D265BD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D265BD = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v375 = BalanceConfig_TypeInfo;
    v376 = result->m_Items[19]->fields.eventId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v375 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v374 = v376 == v375->static_fields->OrtFirstQuestId;
  }
  if ( !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4D297AE )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D297AE = 1;
  }
  v377 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v377 = TerminalPramsManager_TypeInfo;
  }
  v377->static_fields->_isIncomingCall_k__BackingField = v374;
  if ( v578 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v578, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D265BD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D265BD = 1;
    }
    v378 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v378 = TerminalPramsManager_TypeInfo;
    }
    v379 = BalanceConfig_TypeInfo;
    v380 = v378->static_fields->_QuestId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v379 = BalanceConfig_TypeInfo;
    }
    if ( v380 == v379->static_fields->OrtLateQuestId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D265BC )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D265BC = 1;
      }
      v381 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v381 = TerminalPramsManager_TypeInfo;
      }
      v382 = BalanceConfig_TypeInfo;
      v383 = v381->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v382 = BalanceConfig_TypeInfo;
      }
      if ( v383 + 1 == v382->static_fields->OrtLatePhaseBreak )
        goto LABEL_1218;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D265BC )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D265BC = 1;
      }
      v384 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v384 = TerminalPramsManager_TypeInfo;
      }
      v385 = BalanceConfig_TypeInfo;
      v386 = v384->static_fields->_PhaseCnt_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v385 = BalanceConfig_TypeInfo;
      }
      if ( v386 + 1 == v385->static_fields->OrtLatePhaseDead )
      {
LABEL_1218:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v387 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)NetworkManager_TypeInfo;
        }
        v388 = result->m_Items[19]->fields.myDeck;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v387 )
          goto LABEL_1211;
        if ( UserSuperBossMaster__TryGetEntity(
               (UserSuperBossMaster_o *)v387,
               &v577,
               (int64_t)v388,
               v359,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0) )
        {
          result = (BattleResultComponent_resultData_array *)sub_1C94140(UserSuperBossEntity___TypeInfo, 1);
          if ( !result )
            goto LABEL_1211;
          v395 = v577;
          v396 = result;
          if ( v577 )
          {
            result = (BattleResultComponent_resultData_array *)sub_1C941D4(v577, result->obj.klass->_1.element_class);
            if ( !result )
            {
LABEL_1213:
              v567 = sub_1C94314();
              sub_1C941C0(v567, 0);
            }
          }
          if ( !LODWORD(v396->max_length) )
            goto LABEL_1212;
          v396->m_Items[0] = (BattleResultComponent_resultData_o *)v395;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)v396->m_Items, (int32_t)v395, v389, v390, v391, v392, v393, v394);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D29C0E )
          {
            sub_1C94098(&TerminalPramsManager_TypeInfo);
            byte_4D29C0E = 1;
          }
          v403 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v403 = TerminalPramsManager_TypeInfo;
          }
          v404 = v403->static_fields;
          v404->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v396;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v404->_oldPersonalBoss_k__BackingField,
            (int32_t)v396,
            v397,
            v398,
            v399,
            v400,
            v401,
            v402);
        }
      }
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0);
  if ( TalkResumeInfo )
  {
    v406 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1211;
    v407 = DataManager__GetMasterData_object_(
             (DataManager_o *)result,
             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D265BD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D265BD = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v407 )
      goto LABEL_1211;
    ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)v407, result->m_Items[19]->fields.eventId, 0);
    v409 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4D265BC )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D265BC = 1;
    }
    v410 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v410 = TerminalPramsManager_TypeInfo;
    }
    v411 = v410->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v406, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v411 + 1,
                                                         winResult,
                                                         0);
    if ( !v409 )
      goto LABEL_1211;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v409, (System_String_o *)result, 0) )
      goto LABEL_1026;
    v419 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D265BC )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D265BC = 1;
    }
    v420 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v420 = TerminalPramsManager_TypeInfo;
    }
    v421 = v420->static_fields->_PhaseCnt_k__BackingField;
    v422 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v406, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v421 + 1,
                                                         v422,
                                                         0);
    if ( !v419 )
      goto LABEL_1211;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v419, (System_String_o *)result, 0) )
    {
LABEL_1026:
      v423 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v423 = TerminalPramsManager_TypeInfo;
      }
      v424 = StringLiteral_1/*""*/;
      p_lastPlayBgmName = (GrandQuestFolderBoardItem_o *)&v423->static_fields->lastPlayBgmName;
      p_lastPlayBgmName->klass = (GrandQuestFolderBoardItem_c *)StringLiteral_1/*""*/;
      sub_1C9403C(p_lastPlayBgmName, v424, v413, v414, v415, v416, v417, v418);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v426);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v427 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v428 = result->m_Items[19]->fields.eventId;
  if ( !byte_4D265BC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4D265BC = 1;
  }
  if ( !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v427 )
    goto LABEL_1211;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)v427,
    &v586,
    v428,
    LODWORD(result->m_Items[19]->fields.eventEndTitle) + 1,
    0);
  if ( !byte_4D29C10 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C10 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( result->m_Items[19]->fields.costumeReleaseAnnounce )
  {
    if ( !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4D29C10 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C10 = 1;
    }
    v435 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v435 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v435->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1211;
    result->max_length = 0;
    v436 = &result->max_length;
    *(v436 - 1) = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)v436, 0, v429, v430, v431, v432, v433, v434);
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v437 = HIDWORD((*m_Items)->bounds);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v438 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v438 = TerminalPramsManager_TypeInfo;
  }
  v439 = v438->static_fields->_QuestId_k__BackingField;
  if ( !byte_4D265BC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v438 = TerminalPramsManager_TypeInfo;
    byte_4D265BC = 1;
  }
  if ( !v438->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v438);
    v438 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         (QuestPhaseMaster_o *)v427,
                         v437,
                         v439,
                         v438->static_fields->_PhaseCnt_k__BackingField + 1,
                         0);
  if ( !byte_4D29BEF )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BEF = 1;
  }
  v447 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v447 = TerminalPramsManager_TypeInfo;
  }
  v448 = v447->static_fields;
  v448->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v448->_SpecifiedChangeSceneInfo_k__BackingField,
    (int32_t)SpecifiedSceneInfo,
    v440,
    v441,
    v442,
    v443,
    v444,
    v445);
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v449);
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v456 = (int32_t)(*m_Items)->m_Items[53];
  v457 = TerminalPramsManager_TypeInfo;
  if ( v456 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2978E )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D2978E = 1;
    }
    v457 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v457 = TerminalPramsManager_TypeInfo;
    }
    v457->static_fields->_EventMuralId_k__BackingField = v456;
  }
  if ( !v457->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v457);
    v457 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (GrandQuestFolderBoardItem_o *)&v457->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0;
  sub_1C9403C(p_eventHarvestGrowthInfo, 0, v450, v451, v452, v453, v454, v455);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v459 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v459 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       (QuestPhaseMaster_o *)v427,
                                                       v459->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0);
  if ( !result )
    goto LABEL_1211;
  v460 = result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_20102/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0);
  v462 = QuestPhaseEntity__getScriptIntParam((QuestPhaseEntity_o *)v460, (System_String_o *)StringLiteral_20101/*"harvestGrowthAfterQuestId"*/, -1, 0);
  if ( ScriptIntParam >= 1 )
  {
    v463 = v462;
    if ( v462 >= 1 )
    {
      v464 = sub_1C942E4(EventHarvestGrowthInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v464, 0);
      if ( !v464 )
        goto LABEL_1211;
      bounds = v460->bounds;
      *(_DWORD *)(v464 + 24) = ScriptIntParam;
      *(_DWORD *)(v464 + 28) = v463;
      *(_QWORD *)(v464 + 16) = bounds;
      v472 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v472 = TerminalPramsManager_TypeInfo;
      }
      v473 = (GrandQuestFolderBoardItem_o *)&v472->static_fields->eventHarvestGrowthInfo;
      v473->klass = (GrandQuestFolderBoardItem_c *)v464;
      sub_1C9403C(v473, v464, v465, v466, v467, v468, v469, v470);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1211;
  v474 = DataManager__GetMasterData_object_(
           (DataManager_o *)result,
           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v474 )
    goto LABEL_1211;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)v474, result->m_Items[19]->fields.eventId, 0);
  if ( QuestEntity )
  {
    v476 = QuestEntity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D265BD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D265BD = 1;
    }
    v477 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v477 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(
           (QuestPhaseMaster_o *)v427,
           v477->static_fields->_QuestId_k__BackingField,
           0) )
    {
      SpotId = QuestEntity__getSpotId(v476, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( !*(_DWORD *)p_max_length )
        goto LABEL_1212;
      if ( !*m_Items || !result )
        goto LABEL_1211;
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                             (UserEventCooltimeRewardMaster_o *)result,
                             HIDWORD((*m_Items)->bounds),
                             SpotId,
                             0);
      if ( CurrentLevelEntity )
      {
        v480 = CurrentLevelEntity;
        v481 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v481 = TerminalPramsManager_TypeInfo;
        }
        eventAreaImproveResultInfo = v481->static_fields->eventAreaImproveResultInfo;
        if ( eventAreaImproveResultInfo )
        {
          if ( !v481->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v481);
            eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
            if ( !eventAreaImproveResultInfo )
              goto LABEL_1211;
          }
          eventAreaImproveResultInfo->fields.afterLevel = v480->fields.lv;
        }
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D26A98 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26A98 = 1;
  }
  v483 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v483 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__SaveLastClearedGrandWar(v483->static_fields->_WarId_k__BackingField, (const MethodInfo *)isWin);
  result = (BattleResultComponent_resultData_array *)v586;
  if ( v586 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v586, 0);
    if ( !result )
      goto LABEL_1211;
    if ( result->max_length )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D265BD )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D265BD = 1;
      }
      v490 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v490 = TerminalPramsManager_TypeInfo;
      }
      v585 = v490->static_fields->_QuestId_k__BackingField;
      v491 = System_Int32__ToString((int32_t)&v585, 0);
      if ( !byte_4D265BC )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D265BC = 1;
      }
      v492 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v492 = TerminalPramsManager_TypeInfo;
      }
      v585 = v492->static_fields->_PhaseCnt_k__BackingField + 1;
      v493 = System_Int32__ToString((int32_t)&v585, 0);
      v500 = System_String__Concat_64456008(v491, (System_String_o *)StringLiteral_808/*","*/, v493, 0);
      if ( !byte_4D299AB )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D299AB = 1;
      }
      v501 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v501 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v501->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v500;
      sub_1C9403C(p_SceneMoveQuestClearedInfo_k__BackingField, (int32_t)v500, v494, v495, v496, v497, v498, v499);
    }
  }
  if ( !*(_DWORD *)p_max_length )
    goto LABEL_1212;
  if ( !*m_Items )
    goto LABEL_1211;
  v503 = (GrandQuestFolderBoardItem_c *)(*m_Items)->m_Items[48];
  if ( v503 && v503->_1.namespaze )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29797 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29797 = 1;
    }
    v504 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v504 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (GrandQuestFolderBoardItem_o *)&v504->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = v503;
    sub_1C9403C(p_limitImageAnnounces_k__BackingField, (int32_t)v503, v484, v485, v486, v487, v488, v489);
  }
  v506 = sub_1C94140(string___TypeInfo, 7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v507 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v507 = TerminalPramsManager_TypeInfo;
  }
  v585 = v507->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v585, 0);
  if ( !v506 )
LABEL_1211:
    sub_1C942F0(result, isWin);
  if ( !*(_DWORD *)(v506 + 24) )
    goto LABEL_1212;
  *(_QWORD *)(v506 + 32) = result;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v506 + 32), (int32_t)result, v508, v509, v510, v511, v512, v513);
  if ( *(_DWORD *)(v506 + 24) <= 1u )
    goto LABEL_1212;
  v520 = StringLiteral_808/*","*/;
  *(_QWORD *)(v506 + 40) = StringLiteral_808/*","*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v506 + 40), v520, v514, v515, v516, v517, v518, v519);
  if ( !byte_4D265BC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BC = 1;
  }
  v521 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v521 = TerminalPramsManager_TypeInfo;
  }
  v585 = v521->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v585, 0);
  if ( *(_DWORD *)(v506 + 24) <= 2u )
    goto LABEL_1212;
  *(_QWORD *)(v506 + 48) = result;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v506 + 48), (int32_t)result, v522, v523, v524, v525, v526, v527);
  if ( *(_DWORD *)(v506 + 24) <= 3u )
    goto LABEL_1212;
  v534 = StringLiteral_808/*","*/;
  *(_QWORD *)(v506 + 56) = StringLiteral_808/*","*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v506 + 56), v534, v528, v529, v530, v531, v532, v533);
  if ( !byte_4D2932F )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2932F = 1;
  }
  v535 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v535 = TerminalPramsManager_TypeInfo;
  }
  v576[0] = v535->static_fields->_IsQuestClear_k__BackingField;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v576, 0);
  if ( *(_DWORD *)(v506 + 24) <= 4u )
    goto LABEL_1212;
  *(_QWORD *)(v506 + 64) = result;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v506 + 64), (int32_t)result, v536, v537, v538, v539, v540, v541);
  if ( *(_DWORD *)(v506 + 24) <= 5u )
    goto LABEL_1212;
  v548 = StringLiteral_808/*","*/;
  *(_QWORD *)(v506 + 72) = StringLiteral_808/*","*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v506 + 72), v548, v542, v543, v544, v545, v546, v547);
  if ( !byte_4D2932C )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2932C = 1;
  }
  v549 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v549 = TerminalPramsManager_TypeInfo;
  }
  v576[0] = v549->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v576, 0);
  if ( *(_DWORD *)(v506 + 24) <= 6u )
    goto LABEL_1212;
  *(_QWORD *)(v506 + 80) = result;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v506 + 80), (int32_t)result, v550, v551, v552, v553, v554, v555);
  v556 = System_String__Concat_64458276((System_String_array *)v506, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16789/*"afterActionBk"*/, v556, 0);
  TerminalPramsManager__SaveClearDatas(resulta, v557);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v558);
  TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(v559);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v560);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v561);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v562);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v563 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v563 = TerminalPramsManager_TypeInfo;
  }
  v564 = v563->static_fields->_QuestId_k__BackingField;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(v564, 0);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v565) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FDD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FDD = 1;
    }
    v566 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v566 = TerminalPramsManager_TypeInfo;
    }
    v566->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4D26F6B )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      v566 = TerminalPramsManager_TypeInfo;
      byte_4D26F6B = 1;
    }
    if ( !v566->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v566);
      v566 = TerminalPramsManager_TypeInfo;
    }
    v566->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4D2977F )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      v566 = TerminalPramsManager_TypeInfo;
      byte_4D2977F = 1;
    }
    if ( !v566->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v566);
      v566 = TerminalPramsManager_TypeInfo;
    }
    v566->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4D2999E )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      v566 = TerminalPramsManager_TypeInfo;
      byte_4D2999E = 1;
    }
    if ( !v566->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v566);
      v566 = TerminalPramsManager_TypeInfo;
    }
    v566->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v566);
  }
}


void TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x0

  if ( (byte_4D29B72 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B72 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28F20 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28F20 = 1;
  }
  v1 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_DWORD *)v1[2].virtualMethodPointer + 129) = 0;
  TerminalPramsManager__BlankEarthSpotId_SaveData(v1);
}


void TerminalPramsManager__ResetPlanetEarthSpotInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x0

  if ( (byte_4D29B73 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B73 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28F1F )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28F1F = 1;
  }
  v1 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_DWORD *)v1[2].virtualMethodPointer + 136) = 0;
  TerminalPramsManager__PlanetEarthSpotId_SaveData(v1);
}


void TerminalPramsManager__ResetResumeScriptWithMap(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  TerminalPramsManager_c *v7; // x0
  GrandQuestFolderBoardItem_o *p_TalkScriptInfo_k__BackingField; // x0
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4D29B7E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B7E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29BE1 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BE1 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4D29BE2 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D29BE2 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4D298AC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D298AC = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v7->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0;
  sub_1C9403C(p_TalkScriptInfo_k__BackingField, 0, v1, v2, v3, v4, v5, v6);
  if ( !byte_4D29BE3 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BE3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
}


void TerminalPramsManager__SaveClearDatas(BattleResultComponent_resultData_array *result, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  QuestRewardInfo_array *UseAddRewardItemRewardInfos_k__BackingField; // x20
  BattleResultComponent_resultData_o *v6; // x0
  const MethodInfo *v7; // x1
  TerminalPramsManager_c *v8; // x0
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v11; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w29
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v14; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  LimitImageAnnounce_array *limitImageAnnounces; // x21
  _BOOL4 IsOrdealCallWarClear_k__BackingField; // w26
  int32_t eventMuralId; // w28
  bool isOrdealCallWarClear; // w20
  bool isWarBoardClear; // w23
  bool v21; // zf
  int32_t eventActionQuestId; // w29
  bool v23; // w26
  TerminalPramsManager_ClearData_o *v24; // x25
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_ClearData_c *v26; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v28; // x1
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
  int32_t groupjoin; // [xsp+130h] [xbp-90h]
  int32_t lastRaidId; // [xsp+134h] [xbp-8Ch]
  int32_t raidId; // [xsp+138h] [xbp-88h]
  _BOOL4 IsQuestClear_k__BackingField; // [xsp+13Ch] [xbp-84h]
  QuestClearHeroineInfo_o *mQuestClearHeroineInfo; // [xsp+140h] [xbp-80h]
  QuestRewardInfo_array *mQuestPhaseRewardInfos; // [xsp+148h] [xbp-78h]
  QuestRewardInfo_array *useAddRewardItemRewardInfos; // [xsp+150h] [xbp-70h]

  if ( (byte_4D29BC6 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BC6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v3->static_fields->mQuestRewardInfos;
  if ( !byte_4D26E65 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4D26E65 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UseAddRewardItemRewardInfos_k__BackingField = v3->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  if ( result )
  {
    if ( !LODWORD(result->max_length) )
      sub_1C942F8(v3);
    v6 = result->m_Items[0];
    if ( !v6 )
      sub_1C942F0(0, method);
    if ( BattleResultComponent_resultData__checkResultDispFlag(v6, 2048, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D265BD )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D265BD = 1;
      }
      v8 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      UseAddRewardItemRewardInfos_k__BackingField = 0;
      if ( TerminalPramsManager__IsUsePopupQuestReward(v8->static_fields->_QuestId_k__BackingField, v7) )
        mQuestRewardInfos = 0;
    }
  }
  v9 = TerminalPramsManager_TypeInfo;
  useAddRewardItemRewardInfos = UseAddRewardItemRewardInfos_k__BackingField;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_4D2932F )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D2932F = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v9->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4D2932C )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D2932C = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v11 = v9->static_fields;
  IsPhaseClear_k__BackingField = v11->_IsPhaseClear_k__BackingField;
  lastRaidId = v11->clearLastBattleRaidId;
  raidId = v11->clearBattleRaidId;
  groupjoin = v11->joinGroupId;
  if ( !byte_4D29C11 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D29C11 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v9->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4D29C0F )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D29C0F = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v9->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4D29C12 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D29C12 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventPointWinReward_k__BackingField = v9->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4D29C09 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D29C09 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v9->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4D29993 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D29993 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evRace = v9->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4D29795 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D29795 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v9->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4D2978B )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D2978B = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet_k__BackingField = v9->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4D29791 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D29791 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v9->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4D29C13 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D29C13 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  resultEventTowerRewardInfo_k__BackingField = v9->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4D28362 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D28362 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v9->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4D2979E )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D2979E = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v9->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4D29C14 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D29C14 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v9->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4D2978C )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D2978C = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v14 = v9->static_fields;
  IsWarBoardClear_k__BackingField = v14->_IsWarBoardClear_k__BackingField;
  mResultEventPanelRewardInfos = v14->mResultEventPanelRewardInfos;
  questResultAfterEventRewardInfos = v14->mQuestResultAfterEventRewardInfos;
  panelEventPoint = v14->panelEventPoint;
  if ( !byte_4D29796 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D29796 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v9->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4D28F27 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D28F27 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v9->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4D2978D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D2978D = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventMuralId = v9->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4D299A1 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4D299A1 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  isOrdealCallWarClear = IsOrdealCallWarClear_k__BackingField;
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v21 = !IsPhaseClear_k__BackingField;
  eventActionQuestId = v9->static_fields->_EventActionQuestId_k__BackingField;
  v23 = !v21;
  v24 = (TerminalPramsManager_ClearData_o *)sub_1C942E4(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_38047020(
    v24,
    mQuestClearHeroineInfo,
    mQuestRewardInfos,
    mQuestPhaseRewardInfos,
    IsQuestClear_k__BackingField,
    v23,
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
    IsDispOnly_k__BackingField,
    warClearRewardIn,
    eventActivityPointEffectState,
    isWarBoardClear,
    questResultAfterEventRewardInfos,
    mResultEventPanelRewardInfos,
    panelEventPoint,
    limitImageAnnounces,
    isOrdealCallWarClear,
    eventMuralId,
    eventActionQuestId,
    useAddRewardItemRewardInfos,
    0);
  if ( !byte_4D29C15 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C15 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  v25->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v26 = TerminalPramsManager_ClearData_TypeInfo;
  if ( !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v26 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v26->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = JsonManager__toJson((Il2CppObject *)v24, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v28, 0);
}


void TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  TerminalPramsManager_c *v2; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v4; // x0

  if ( (byte_4D29BCC & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11502/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4D29BCC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C17 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C17 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v2->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_1C942F0(0, v1);
  v4 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, v1);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11502/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveIsPart2FinalChapter(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29BDA & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_8080/*"IsPart2FinalChapter"*/);
    byte_4D29BDA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C02 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C02 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8080/*"IsPart2FinalChapter"*/,
    v1->static_fields->_IsPart2FinalChapter_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveIsTransitionToTerminalAfterMovie(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29BDB & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_8109/*"IsTransitionToTerminalAfterMovie"*/);
    byte_4D29BDB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2978A )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2978A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8109/*"IsTransitionToTerminalAfterMovie"*/,
    v1->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveLastClearedGrandWar(int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int monitor; // w20
  BalanceConfig_c *v6; // x0
  GrandQuestRootComponent_c *v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D29BD8 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C94098(&GrandQuestRootComponent_TypeInfo);
    byte_4D29BD8 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    warId,
                                    (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_15:
    sub_1C942F0(Master_object, v4);
  monitor = (int)entity[3].monitor;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( monitor == v6->static_fields->GrandBoardWarId )
  {
    v7 = GrandQuestRootComponent_TypeInfo;
    if ( !GrandQuestRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestRootComponent_TypeInfo);
      v7 = GrandQuestRootComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_LAST_CLEAR_GRAND_WAR, warId, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__SaveQuestInfo_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4D29B8B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_13763/*"TerminalPhaseCnt"*/);
    sub_1C94098(&StringLiteral_13766/*"TerminalQuestId"*/);
    byte_4D29B8B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13766/*"TerminalQuestId"*/,
    v1->static_fields->_QuestId_k__BackingField,
    0);
  if ( !byte_4D265BC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13763/*"TerminalPhaseCnt"*/,
    v2->static_fields->_PhaseCnt_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *Empty; // x19
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__int__o *QuestRandomGroupList_k__BackingField; // x0
  int key; // w20
  int key_high; // w27
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x2
  System_String_o *v9; // x1
  int v10; // [xsp+Ch] [xbp-94h] BYREF
  _OWORD v11[2]; // [xsp+10h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4D29BD0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11512/*"SAVEKEY_QuestRandomGroupList"*/);
    sub_1C94098(&StringLiteral_25430/*"{0}:{1}"*/);
    sub_1C94098(&StringLiteral_808/*","*/);
    byte_4D29BD0 = 1;
  }
  memset(&v12, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28FD3 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28FD3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v3->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_1C942F0(0, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v11,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_34AC1F4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v12.fields._dictionary = v11[0];
  v12.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v11[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v12,
            (const MethodInfo_360E630 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v12.fields._current.fields.key;
    key_high = HIDWORD(v12.fields._current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0) )
      Empty = System_String__Concat_64417744(Empty, (System_String_o *)StringLiteral_808/*","*/, 0);
    LODWORD(v11[0]) = key;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v11);
    v10 = key_high;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    v9 = System_String__Format_64459052((System_String_o *)StringLiteral_25430/*"{0}:{1}"*/, v7, v8, 0);
    Empty = System_String__Concat_64417744(Empty, v9, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v12,
    (const MethodInfo_360E730 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11512/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1

  if ( (byte_4D29BB8 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BB8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager )
    sub_1C942F0(0, v3);
  QuestFocusStateManager__WriteData(QuestFocusStateManager, 0);
}


void TerminalPramsManager__Save_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v7; // x0
  TerminalPramsManager_c *v8; // x0
  System_String_o *v9; // x0
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  System_String_o *v16; // x0
  TerminalPramsManager_c *v17; // x0
  TerminalPramsManager_c *v18; // x0
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  TerminalPramsManager_c *v21; // x0
  TerminalPramsManager_c *v22; // x0
  TerminalPramsManager_c *v23; // x0
  TerminalPramsManager_c *v24; // x0
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_c *v26; // x0
  System_String_o *v27; // x19
  TerminalPramsManager_c *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  TerminalPramsManager_c *v31; // x0
  TerminalPramsManager_c *v32; // x0
  TerminalPramsManager_c *v33; // x0
  TerminalPramsManager_c *v34; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF
  int64_t EndTime_k__BackingField; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D29B89 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_13756/*"TerminalEndTime"*/);
    sub_1C94098(&StringLiteral_11510/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_1C94098(&StringLiteral_8109/*"IsTransitionToTerminalAfterMovie"*/);
    sub_1C94098(&StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C94098(&StringLiteral_8080/*"IsPart2FinalChapter"*/);
    sub_1C94098(&StringLiteral_13757/*"TerminalEventDailyPointEventId"*/);
    sub_1C94098(&StringLiteral_13763/*"TerminalPhaseCnt"*/);
    sub_1C94098(&StringLiteral_13771/*"TerminalTimeStatusEventId"*/);
    sub_1C94098(&StringLiteral_13755/*"TerminalDispState"*/);
    sub_1C94098(&StringLiteral_11507/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_1C94098(&StringLiteral_13758/*"TerminalIsDoneShortcut"*/);
    sub_1C94098(&StringLiteral_11505/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_1C94098(&StringLiteral_11511/*"SAVEKEY_PlayerGenderType"*/);
    sub_1C94098(&StringLiteral_11498/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_1C94098(&StringLiteral_11508/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_1C94098(&StringLiteral_13766/*"TerminalQuestId"*/);
    sub_1C94098(&StringLiteral_11519/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_1C94098(&StringLiteral_13770/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_1C94098(&StringLiteral_13775/*"TerminalWarId"*/);
    sub_1C94098(&StringLiteral_13768/*"TerminalSpotId"*/);
    sub_1C94098(&StringLiteral_13772/*"TerminalTimeStatusLoopCount"*/);
    sub_1C94098(&StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_1C94098(&StringLiteral_11496/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_1C94098(&StringLiteral_11501/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_1C94098(&StringLiteral_13776/*"TerminalWarStartedIds"*/);
    sub_1C94098(&StringLiteral_11500/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_1C94098(&StringLiteral_808/*","*/);
    sub_1C94098(&StringLiteral_11499/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_1C94098(&StringLiteral_11509/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_1C94098(&StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/);
    sub_1C94098(&StringLiteral_11518/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4D29B89 = 1;
  }
  EndTime_k__BackingField = 0;
  MapModelClearQuestId_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2926C )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2926C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13755/*"TerminalDispState"*/,
    v1->static_fields->_DispState_k__BackingField,
    0);
  if ( !byte_4D26A98 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26A98 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13775/*"TerminalWarId"*/, v2->static_fields->_WarId_k__BackingField, 0);
  if ( !byte_4D29270 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29270 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13768/*"TerminalSpotId"*/, v3->static_fields->_SpotId_k__BackingField, 0);
  if ( !byte_4D28F1E )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28F1E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11496/*"SAVEKEY_BlankEarthSpotId"*/,
    v4->static_fields->_BlankEarthSpotId_k__BackingField,
    0);
  if ( !byte_4D28F1D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28F1D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11506/*"SAVEKEY_PlanetEarthSpotId"*/,
    v5->static_fields->_PlanetEarthSpotId_k__BackingField,
    0);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13766/*"TerminalQuestId"*/,
    v6->static_fields->_QuestId_k__BackingField,
    0);
  if ( !byte_4D265BC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BC = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13763/*"TerminalPhaseCnt"*/,
    v7->static_fields->_PhaseCnt_k__BackingField,
    0);
  if ( !byte_4D29271 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29271 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v8->static_fields->_EndTime_k__BackingField;
  v9 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13756/*"TerminalEndTime"*/, v9, 0);
  if ( !byte_4D297BA )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D297BA = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13758/*"TerminalIsDoneShortcut"*/,
    v10->static_fields->_IsDoneShortcut_k__BackingField,
    0);
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13776/*"TerminalWarStartedIds"*/,
    v11->static_fields->mTerminalWarStartedIds,
    0);
  if ( !byte_4D2999B )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2999B = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13771/*"TerminalTimeStatusEventId"*/,
    v12->static_fields->_TimeStatusEventId_k__BackingField,
    0);
  if ( !byte_4D2999C )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2999C = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13772/*"TerminalTimeStatusLoopCount"*/,
    v13->static_fields->_TimeStatusLoopCount_k__BackingField,
    0);
  if ( !byte_4D29BFC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BFC = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13757/*"TerminalEventDailyPointEventId"*/,
    v14->static_fields->_EventDailyPointEventId_k__BackingField,
    0);
  if ( !byte_4D29BFD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BFD = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v15->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v16 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13770/*"TerminalTimeStatusEventDailyPoint"*/, v16, 0);
  if ( !byte_4D29BFE )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BFE = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/,
    v17->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0);
  if ( !byte_4D29BFF )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BFF = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/,
    v18->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0);
  if ( !byte_4D29C00 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C00 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11510/*"SAVEKEY_PlayedTerminalEffects"*/,
    v19->static_fields->_PlayedTerminalEffects_k__BackingField,
    0);
  if ( !byte_4D297AB )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D297AB = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11507/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v20->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D297AC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D297AC = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11508/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v21->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0);
  if ( !byte_4D2999D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2999D = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11509/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v22->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D299A0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D299A0 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11519/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v23->static_fields->_SelectedStoryQuestId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11500/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11499/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0);
  if ( !byte_4D29781 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29781 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11518/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v24->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0);
  if ( !byte_4D28FD6 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28FD6 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11498/*"SAVEKEY_ClearEventQuestIds"*/,
    v25->static_fields->_ClearEventQuestIds_k__BackingField,
    0);
  if ( !byte_4D2926D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2926D = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v26->static_fields->_MapModelClearQuestId_k__BackingField;
  v27 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  if ( !byte_4D2926E )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2926E = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v28->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v29 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0);
  v30 = System_String__Concat_64456008(v27, (System_String_o *)StringLiteral_808/*","*/, v29, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11505/*"SAVEKEY_MapModelClearQuestInfo"*/, v30, 0);
  if ( !byte_4D299A2 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D299A2 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11501/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v31->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C01 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C01 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11511/*"SAVEKEY_PlayerGenderType"*/,
    v32->static_fields->_PlayerGenderType_k__BackingField,
    0);
  if ( !byte_4D29C02 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C02 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8080/*"IsPart2FinalChapter"*/,
    v33->static_fields->_IsPart2FinalChapter_k__BackingField,
    0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2978A )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2978A = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_8109/*"IsTransitionToTerminalAfterMovie"*/,
    v34->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SendClearQuestToAdManager(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool IsMainStoryForQuestId; // w21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w1

  if ( (byte_4D29BC0 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BC0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v8);
    if ( IsMainStoryForQuestId )
      v9 = 10;
    else
      v9 = 9;
    AdManager__TrackEvent((AdManager_o *)Instance, v9, 10, questId, questPhase, 0, 0);
  }
}


void TerminalPramsManager__SendOpenedQuestIdToAdManager(int32_t clearedQuestId, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  int32_t klass_high; // w21
  Il2CppObject *MasterData_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v22; // x8
  System_Func_int__bool__o *_9__763_0; // x21
  Il2CppObject *v24; // x22
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_T__TResult__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_object__bool__o *v35; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  TerminalPramsManager___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_object__int__o *_9__763_3; // x20
  Il2CppObject *v40; // x21
  struct TerminalPramsManager___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v48; // x0
  TerminalPramsManager___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x19
  System_Func_int__int__o *_9__763_4; // x20
  Il2CppObject *v52; // x21
  struct TerminalPramsManager___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  int32_t v61; // w0
  int32_t v62; // w19
  Il2CppObject *v63; // [xsp+0h] [xbp-40h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D29BC1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C94098(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_int__QuestEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_QuestEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C94098(&System_Func_int__int__TypeInfo);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&System_Func_QuestEntity__int__TypeInfo);
    sub_1C94098(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C94098(&System_Func_int__QuestEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__763_0__);
    sub_1C94098(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__763_3__);
    sub_1C94098(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__763_4__);
    sub_1C94098(&Method_TerminalPramsManager___c__DisplayClass763_0__SendOpenedQuestIdToAdManager_b__1__);
    sub_1C94098(&Method_TerminalPramsManager___c__DisplayClass763_0__SendOpenedQuestIdToAdManager_b__2__);
    sub_1C94098(&TerminalPramsManager___c__DisplayClass763_0_TypeInfo);
    sub_1C94098(&TerminalPramsManager___c_TypeInfo);
    byte_4D29BC1 = 1;
  }
  v63 = 0;
  entity = 0;
  v3 = sub_1C942E4(TerminalPramsManager___c__DisplayClass763_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass763_0___ctor((TerminalPramsManager___c__DisplayClass763_0_o *)v3, 0);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v3 )
      goto LABEL_43;
    *(_QWORD *)(v3 + 16) = Instance;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Instance, v6, v7, v8, v9, v10, v11);
    Instance = *(DataManager_o **)(v3 + 16);
    if ( !Instance )
      goto LABEL_43;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_43;
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0);
    if ( !v12 )
      goto LABEL_43;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v12,
                                  &v63,
                                  (int32_t)Instance,
                                  (const MethodInfo_345B50C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v63 )
      goto LABEL_43;
    klass_high = HIDWORD(v63[1].klass);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsMustPlayMainStory(klass_high, v5) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_43;
      if ( QuestEntity__GetTypeFlag(entity, 0) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v3 + 24) = MasterData_object;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)MasterData_object, v15, v16, v17, v18, v19, v20);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_43;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0);
      v22 = TerminalPramsManager___c_TypeInfo;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v22 = TerminalPramsManager___c_TypeInfo;
      }
      _9__763_0 = v22->static_fields->__9__763_0;
      if ( !_9__763_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = TerminalPramsManager___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__763_0 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__763_0,
          v24,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__763_0__,
          0);
        static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        static_fields->__9__763_0 = _9__763_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__763_0,
          (int32_t)_9__763_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      v32 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__763_0,
              (const MethodInfo_31E3420 *)Method_System_Linq_Enumerable_Where_int___);
      v33 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__object____ctor(
        v33,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass763_0__SendOpenedQuestIdToAdManager_b__1__,
        0);
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                   v32,
                                                                   (System_Func_TSource__TResult__o *)v33,
                                                                   (const MethodInfo_31D03C0 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v35 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v35,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass763_0__SendOpenedQuestIdToAdManager_b__2__,
        0);
      v36 = System_Linq_Enumerable__Where_object_(
              v34,
              (System_Func_TSource__bool__o *)v35,
              (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v37 = TerminalPramsManager___c_TypeInfo;
      v38 = v36;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v37 = TerminalPramsManager___c_TypeInfo;
      }
      _9__763_3 = (System_Func_object__int__o *)v37->static_fields->__9__763_3;
      if ( !_9__763_3 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = TerminalPramsManager___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v37->static_fields->__9;
        _9__763_3 = (System_Func_object__int__o *)sub_1C942E4(System_Func_QuestEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__763_3,
          v40,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__763_3__,
          0);
        v41 = TerminalPramsManager___c_TypeInfo->static_fields;
        v41->__9__763_3 = (struct System_Func_QuestEntity__int__o *)_9__763_3;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v41->__9__763_3, (int32_t)_9__763_3, v42, v43, v44, v45, v46, v47);
      }
      v48 = System_Linq_Enumerable__Select_object__int_(
              v38,
              (System_Func_TSource__TResult__o *)_9__763_3,
              (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v49 = TerminalPramsManager___c_TypeInfo;
      v50 = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
      if ( !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v49 = TerminalPramsManager___c_TypeInfo;
      }
      _9__763_4 = v49->static_fields->__9__763_4;
      if ( !_9__763_4 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v49 = TerminalPramsManager___c_TypeInfo;
        }
        v52 = (Il2CppObject *)v49->static_fields->__9;
        _9__763_4 = (System_Func_int__int__o *)sub_1C942E4(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__763_4,
          v52,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__763_4__,
          0);
        v53 = TerminalPramsManager___c_TypeInfo->static_fields;
        v53->__9__763_4 = _9__763_4;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v53->__9__763_4, (int32_t)_9__763_4, v54, v55, v56, v57, v58, v59);
      }
      v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v50,
                                                                   (System_Func_TSource__TKey__o *)_9__763_4,
                                                                   (const MethodInfo_31CC540 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v61 = System_Linq_Enumerable__FirstOrDefault_int_(
              v60,
              (const MethodInfo_31C431C *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v61 )
      {
        v62 = v61;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v62, 0);
          return;
        }
LABEL_43:
        sub_1C942F0(Instance, v5);
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

  v7 = questPhase;
  v8 = questId;
  if ( (byte_4D29BBF & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C94098(&StringLiteral_19907/*"game.resume_quest_id"*/);
    sub_1C94098(&StringLiteral_19908/*"game.resume_quest_phase"*/);
    byte_4D29BBF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  if ( !Instance
    || (CrashReporter__AddCustomKey((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_19907/*"game.resume_quest_id"*/, v4, 0),
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
        v4 = System_Int32__ToString((int32_t)&v7, 0),
        !v6) )
  {
    sub_1C942F0(v4, v5);
  }
  CrashReporter__AddCustomKey((CrashReporter_o *)v6, (System_String_o *)StringLiteral_19908/*"game.resume_quest_phase"*/, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__SendStartQuestToAdManager(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool IsMainStoryForQuestId; // w21
  AdManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w1
  Il2CppObject *v10; // x19
  Il2CppObject *v11; // x19
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v12 = questPhase;
  v13 = questId;
  if ( (byte_4D29BBE & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_19901/*"game.last_quest_id"*/);
    sub_1C94098(&StringLiteral_19903/*"game.last_quest_phase"*/);
    byte_4D29BBE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = (AdManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance
      || (!IsMainStoryForQuestId ? (v9 = 9) : (v9 = 10),
          (AdManager__TrackEvent(Instance, v9, 9, questId, questPhase, 0, 0),
           v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
           Instance = (AdManager_o *)System_Int32__ToString((int32_t)&v13, 0),
           !v10)
       || (CrashReporter__AddCustomKey(
             (CrashReporter_o *)v10,
             (System_String_o *)StringLiteral_19901/*"game.last_quest_id"*/,
             (System_String_o *)Instance,
             0),
           v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__),
           Instance = (AdManager_o *)System_Int32__ToString((int32_t)&v12, 0),
           !v11)) )
    {
      sub_1C942F0(Instance, v8);
    }
    CrashReporter__AddCustomKey(
      (CrashReporter_o *)v11,
      (System_String_o *)StringLiteral_19903/*"game.last_quest_phase"*/,
      (System_String_o *)Instance,
      0);
  }
}


void TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  QuestTree_o *Instance; // x0
  __int64 v5; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v7; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v9; // x0
  Il2CppObject *Master_object; // x21
  bool v11; // w22
  TerminalPramsManager_c *v12; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  System_Nullable_int__o v16; // x0
  unsigned __int64 v17; // x21
  TerminalPramsManager_c *v18; // x0
  int32_t v19; // w21
  TerminalPramsManager_c *v20; // x0
  int32_t questPhase; // w21
  int64_t endTime; // x20
  Il2CppObject *v23; // x20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w20
  TerminalPramsManager_c *v26; // x0
  int v27; // w8
  TerminalSceneComponent_c *v28; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v30; // x8
  UnityEngine_Object_o *v31; // x20
  __int64 v32; // x8
  ScrTerminalListTop_o *v33; // x20
  __int64 v34; // x8
  UnityEngine_Object_o *v35; // x20
  __int64 v36; // x8
  const MethodInfo *v37; // x0
  unsigned __int64 v38; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D29B7A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D29B7A = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29331 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29331 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    QuestInfo = QuestTree__GetQuestInfo(Instance, questId, 0);
    if ( !QuestInfo )
      return;
    v7 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FDD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FDD = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_WarId_k__BackingField = warId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    Instance = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v7, 0);
    if ( !Master_object )
      goto LABEL_148;
    v11 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            (int32_t)Instance,
            (const MethodInfo_345B50C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    LODWORD(Master_object) = MapControl_QuestInfo__GetSpotID(v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v11 )
    {
      if ( byte_4D28F20 )
        goto LABEL_38;
    }
    else
    {
      if ( !byte_4D28FDC )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D28FDC = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      v12->static_fields->_SpotId_k__BackingField = (int)Master_object;
      WarInfo_k__BackingField = v7->fields._WarInfo_k__BackingField;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0)) != 0 )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v16 = (System_Nullable_int__o)&v38;
        v38 = 0;
        System_Nullable_int____ctor(
          v16,
          parentBlankEarthSpotId,
          (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
        v17 = v38;
      }
      else
      {
        v17 = 0;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (Il2CppObject *)HIDWORD(v17);
      if ( byte_4D28F20 )
      {
LABEL_38:
        v18 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v18 = TerminalPramsManager_TypeInfo;
        }
        v18->static_fields->_BlankEarthSpotId_k__BackingField = (int)Master_object;
        v19 = v7->fields.questId;
        if ( !v18->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v18);
        if ( !byte_4D28FD7 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D28FD7 = 1;
        }
        v20 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_QuestId_k__BackingField = v19;
        questPhase = v7->fields.questPhase;
        if ( !byte_4D28FDB )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
          byte_4D28FDB = 1;
        }
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_PhaseCnt_k__BackingField = questPhase;
        endTime = v7->fields.endTime;
        if ( !byte_4D28FD8 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
          byte_4D28FD8 = 1;
        }
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_EndTime_k__BackingField = endTime;
        if ( !byte_4D297B9 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
          byte_4D297B9 = 1;
        }
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
        if ( !SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
          goto LABEL_151;
        v23 = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D26A98 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D26A98 = 1;
        }
        Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v23 )
          goto LABEL_148;
        WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                             (QuestTree_o *)v23,
                             *(_DWORD *)(Instance[1].fields.forceUpdateTime + 4),
                             0);
        if ( WarEntityByWarID )
        {
          IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( IsFolder )
          {
            if ( !byte_4D28FD9 )
            {
              sub_1C94098(&TerminalPramsManager_TypeInfo);
              byte_4D28FD9 = 1;
            }
            v26 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v26 = TerminalPramsManager_TypeInfo;
            }
            v27 = 3;
          }
          else
          {
            if ( !byte_4D28FD9 )
            {
              sub_1C94098(&TerminalPramsManager_TypeInfo);
              byte_4D28FD9 = 1;
            }
            v26 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v26 = TerminalPramsManager_TypeInfo;
            }
            v27 = 2;
          }
        }
        else
        {
LABEL_151:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D28FD9 )
          {
            sub_1C94098(&TerminalPramsManager_TypeInfo);
            byte_4D28FD9 = 1;
          }
          v26 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v26 = TerminalPramsManager_TypeInfo;
          }
          v27 = 1;
        }
        v26->static_fields->_DispState_k__BackingField = v27;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D264E4 )
        {
          sub_1C94098(&TerminalSceneComponent_TypeInfo);
          byte_4D264E4 = 1;
        }
        v28 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v28 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v28->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
          goto LABEL_140;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D264E4 )
        {
          sub_1C94098(&TerminalSceneComponent_TypeInfo);
          byte_4D264E4 = 1;
        }
        Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v30 = *(_QWORD *)Instance[1].fields.forceUpdateTime;
        if ( v30 )
        {
          v31 = *(UnityEngine_Object_o **)(v30 + 256);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4D264E4 )
            {
              sub_1C94098(&TerminalSceneComponent_TypeInfo);
              byte_4D264E4 = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v32 = *(_QWORD *)Instance[1].fields.forceUpdateTime;
            if ( !v32 )
              goto LABEL_148;
            v33 = *(ScrTerminalListTop_o **)(v32 + 256);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4D26A98 )
            {
              sub_1C94098(&TerminalPramsManager_TypeInfo);
              byte_4D26A98 = 1;
            }
            Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !v33 )
              goto LABEL_148;
            ScrTerminalListTop__RequestChangeTerminalListBG(v33, *(_DWORD *)(Instance[1].fields.forceUpdateTime + 4), 0);
          }
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D264E4 )
          {
            sub_1C94098(&TerminalSceneComponent_TypeInfo);
            byte_4D264E4 = 1;
          }
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          }
          v34 = *(_QWORD *)Instance[1].fields.forceUpdateTime;
          if ( v34 )
          {
            v35 = *(UnityEngine_Object_o **)(v34 + 240);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v35, 0, 0) )
              goto LABEL_140;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4D264E4 )
            {
              sub_1C94098(&TerminalSceneComponent_TypeInfo);
              byte_4D264E4 = 1;
            }
            Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
            }
            v36 = *(_QWORD *)Instance[1].fields.forceUpdateTime;
            if ( v36 )
            {
              Instance = *(QuestTree_o **)(v36 + 240);
              if ( Instance )
              {
                TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Instance, 0);
LABEL_140:
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4D26F6B )
                {
                  sub_1C94098(&TerminalPramsManager_TypeInfo);
                  byte_4D26F6B = 1;
                }
                v37 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v37 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
                }
                *((_BYTE *)v37[2].virtualMethodPointer + 757) = 1;
                TerminalPramsManager__Save_SaveData(v37);
                return;
              }
            }
          }
        }
LABEL_148:
        sub_1C942F0(Instance, v5);
      }
    }
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28F20 = 1;
    goto LABEL_38;
  }
}


void TerminalPramsManager__SetAutoResumeByWarId(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  TitleInfoControl_o *v7; // x0
  WarEntity_o *WarEntityByWarID; // x21
  BalanceConfig_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  int32_t parentBlankEarthSpotId; // w20
  TerminalPramsManager_c *v12; // x0
  TerminalSceneComponent_c *v13; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v15; // x8
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x8
  ScrTerminalListTop_o *v18; // x20
  __int64 v19; // x8
  UnityEngine_Object_o *v20; // x20
  __int64 v21; // x8
  const MethodInfo *v22; // x0

  if ( (byte_4D29B7B & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D29B7B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29331 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29331 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4D28FDD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4D28FDD = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = warId;
  if ( SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D26A98 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D26A98 = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Instance )
      goto LABEL_104;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                         (QuestTree_o *)Instance,
                         *(_DWORD *)(*(_QWORD *)&v7->fields.particlePanelDepth + 4LL),
                         0);
  }
  else
  {
    WarEntityByWarID = 0;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__UpdateDispState(WarEntityByWarID, v4);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( v9->static_fields->GrandBoardWarId == warId )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D27515 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D27515 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 1;
  }
  if ( WarEntityByWarID )
    parentBlankEarthSpotId = WarEntityByWarID->fields.parentBlankEarthSpotId;
  else
    parentBlankEarthSpotId = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28F20 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28F20 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_BlankEarthSpotId_k__BackingField = parentBlankEarthSpotId;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D264E4 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D264E4 = 1;
  }
  v13 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v13->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D264E4 )
    {
      sub_1C94098(&TerminalSceneComponent_TypeInfo);
      byte_4D264E4 = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v15 = **(_QWORD **)&v7->fields.particlePanelDepth;
    if ( !v15 )
      goto LABEL_104;
    v16 = *(UnityEngine_Object_o **)(v15 + 256);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D264E4 )
      {
        sub_1C94098(&TerminalSceneComponent_TypeInfo);
        byte_4D264E4 = 1;
      }
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v17 = **(_QWORD **)&v7->fields.particlePanelDepth;
      if ( !v17 )
        goto LABEL_104;
      v18 = *(ScrTerminalListTop_o **)(v17 + 256);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D26A98 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D26A98 = 1;
      }
      v7 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v7 = (TitleInfoControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v18 )
        goto LABEL_104;
      ScrTerminalListTop__RequestChangeTerminalListBG(
        v18,
        *(_DWORD *)(*(_QWORD *)&v7->fields.particlePanelDepth + 4LL),
        0);
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D264E4 )
    {
      sub_1C94098(&TerminalSceneComponent_TypeInfo);
      byte_4D264E4 = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = **(_QWORD **)&v7->fields.particlePanelDepth;
    if ( !v19 )
      goto LABEL_104;
    v20 = *(UnityEngine_Object_o **)(v19 + 240);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D264E4 )
      {
        sub_1C94098(&TerminalSceneComponent_TypeInfo);
        byte_4D264E4 = 1;
      }
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
      }
      v21 = **(_QWORD **)&v7->fields.particlePanelDepth;
      if ( v21 )
      {
        v7 = *(TitleInfoControl_o **)(v21 + 240);
        if ( v7 )
        {
          TitleInfoControl__CloseEventBannerWindow(v7, 0);
          goto LABEL_97;
        }
      }
LABEL_104:
      sub_1C942F0(v7, v5);
    }
  }
LABEL_97:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D26F6B )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26F6B = 1;
  }
  v22 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v22[2].virtualMethodPointer + 757) = 1;
  TerminalPramsManager__Save_SaveData(v22);
}


void TerminalPramsManager__SetAutoResumeForFolder(int32_t warId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  TerminalPramsManager_c *v7; // x0
  int32_t PrioredParentId; // w20
  Il2CppObject *v9; // x0
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  BalanceConfig_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  int32_t monitor_high; // w20
  TerminalPramsManager_c *v15; // x0
  TerminalSceneComponent_c *v16; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  UnityEngine_Object_o *v19; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v20; // x8
  ScrTerminalListTop_o *v21; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v22; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v24; // x8
  const MethodInfo *v25; // x0
  WarEntity_o *WarEntityByWarID; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D29B7D & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D29B7D = 1;
  }
  WarEntityByWarID = 0;
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29331 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29331 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = 0;
  if ( !byte_4D28FDD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4D28FDD = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4D28FD9 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4D28FD9 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DispState_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_135;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    warId,
    (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !entity )
    return;
LABEL_25:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D27517 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D27517 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = warId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_135;
  PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)entity, 0);
  v9 = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( v9 )
  {
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)v9, PrioredParentId, 0);
    if ( WarEntityByWarID )
      goto LABEL_40;
  }
  else
  {
    WarEntityByWarID = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_135;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&WarEntityByWarID,
    PrioredParentId,
    (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( !WarEntityByWarID )
    return;
LABEL_40:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28FDD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28FDD = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_WarId_k__BackingField = PrioredParentId;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarEntityByWarID;
  if ( !WarEntityByWarID )
    goto LABEL_135;
  if ( WarEntity__IsFolder(WarEntityByWarID, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FD9 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FD9 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_DispState_k__BackingField = 3;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( PrioredParentId == v12->static_fields->GrandBoardWarId )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D27515 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D27515 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = 1;
  }
  if ( entity )
    monitor_high = HIDWORD(entity[7].monitor);
  else
    monitor_high = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28F20 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28F20 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_BlankEarthSpotId_k__BackingField = monitor_high;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D264E4 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D264E4 = 1;
  }
  v16 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v16 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v16->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    goto LABEL_127;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D264E4 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D264E4 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_135;
  v19 = *(UnityEngine_Object_o **)&klass->_2.element_size;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D264E4 )
    {
      sub_1C94098(&TerminalSceneComponent_TypeInfo);
      byte_4D264E4 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v20 = Master_object[2].fields.list->klass;
    if ( !v20 )
      goto LABEL_135;
    v21 = *(ScrTerminalListTop_o **)&v20->_2.element_size;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D26A98 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D26A98 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v21 )
      goto LABEL_135;
    ScrTerminalListTop__RequestChangeTerminalListBG(v21, HIDWORD(Master_object[2].fields.list->klass), 0);
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D264E4 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D264E4 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v22 = Master_object[2].fields.list->klass;
  if ( !v22 )
    goto LABEL_135;
  genericContainerHandle = (UnityEngine_Object_o *)v22->_2.genericContainerHandle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(genericContainerHandle, 0, 0) )
    goto LABEL_127;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D264E4 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D264E4 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v24 = Master_object[2].fields.list->klass;
  if ( !v24 || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v24->_2.genericContainerHandle) == 0 )
LABEL_135:
    sub_1C942F0(Master_object, v5);
  TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)Master_object, 0);
LABEL_127:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D26F6B )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26F6B = 1;
  }
  v25 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)v25[2].virtualMethodPointer + 757) = 1;
  TerminalPramsManager__Save_SaveData(v25);
}


void TerminalPramsManager__SetBattleResultCampaignBonus(
        BattleResultComponent_resultData_o *result,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleResultComponent_resultData_o *v8; // x19
  struct CommonUI_CampaignDirectBonusData_array *campaignDirectBonus; // x20
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  const MethodInfo *v12; // x0
  CommonUI_CampaignBonusData_array *campaignbonus; // x19

  v8 = result;
  if ( (byte_4D29BBC & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_o *)sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BBC = 1;
  }
  if ( !v8 )
    sub_1C942F0(result, method);
  campaignDirectBonus = v8->fields.campaignDirectBonus;
  if ( campaignDirectBonus && campaignDirectBonus->max_length )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29BF6 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29BF6 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
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
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SetCampaignBonus(campaignbonus, method);
  }
}


void TerminalPramsManager__SetCampaignBonus(
        CommonUI_CampaignBonusData_array *campaignBonuses,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4D29BA5 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BA5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29BF5 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BF5 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = campaignBonuses;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_CampaignBonus_k__BackingField,
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  TerminalPramsManager_c *v16; // x0

  if ( (byte_4D29BB3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BB3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->folderLastIdxs )
  {
    v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v6,
      (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->folderLastIdxs = v6;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->folderLastIdxs, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v5->static_fields->folderLastIdxs;
  if ( !folderLastIdxs
    || (System_Collections_Generic_Dictionary_int__int___Remove(
          folderLastIdxs,
          warId,
          (const MethodInfo_34AD1D4 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0) )
  {
    sub_1C942F0(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4D29BE6 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BE6 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
}


void TerminalPramsManager__SetForcePlayEventTutorialArray(int32_t eventId, int32_t flagType, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_HashSet_T__o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalPramsManager_c *v13; // x0
  GrandQuestFolderBoardItem_o *p_ForcePlayEventTutorialArray_k__BackingField; // x0
  System_Collections_Generic_Dictionary_int__int__o *v15; // x21
  System_Collections_Generic_HashSet_T__o *ForcePlayEventTutorialArray_k__BackingField; // x0
  __int64 v17; // x1
  TerminalPramsManager_c *v18; // x0

  if ( (byte_4D29BD9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Dictionary_int__int____ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_Dictionary_int__int___TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BD9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29BF8 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BF8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
  {
    v6 = (System_Collections_Generic_HashSet_T__o *)sub_1C942E4(System_Collections_Generic_HashSet_Dictionary_int__int___TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v6,
      (const MethodInfo_371E7A8 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int____ctor__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29C19 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C19 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    p_ForcePlayEventTutorialArray_k__BackingField = (GrandQuestFolderBoardItem_o *)&v13->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
    p_ForcePlayEventTutorialArray_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v6;
    sub_1C9403C(p_ForcePlayEventTutorialArray_k__BackingField, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  }
  v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v15,
    (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v15 )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___Add(
    v15,
    eventId,
    flagType,
    (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29BF8 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BF8 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_T__o *)v18->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
  if ( !ForcePlayEventTutorialArray_k__BackingField )
LABEL_26:
    sub_1C942F0(ForcePlayEventTutorialArray_k__BackingField, v17);
  System_Collections_Generic_HashSet_object___Add(
    ForcePlayEventTutorialArray_k__BackingField,
    (Il2CppObject *)v15,
    (const MethodInfo_371F98C *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Add__);
}


void TerminalPramsManager__SetQuestReleasedFocusState(int32_t questId, int32_t state, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v7; // x1

  if ( (byte_4D29BB9 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BB9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_1C942F0(0, v7);
  QuestFocusStateManager__SetFocusState(QuestFocusStateManager, questId, state, 0);
}


void TerminalPramsManager__SetQuestRewardInfo(BattleResultComponent_resultData_array *result, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  GrandQuestFolderBoardItem_o *p_mQuestRewardInfos; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  BattleResultComponent_resultData_o *v19; // x8
  GrandQuestFolderBoardItem_c *rewardInfos; // x20
  TerminalPramsManager_c *v21; // x0
  GrandQuestFolderBoardItem_o *v22; // x0
  TerminalPramsManager_c *v23; // x0
  GrandQuestFolderBoardItem_o *p_mQuestPhaseRewardInfos; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  BattleResultComponent_resultData_o *v31; // x8
  GrandQuestFolderBoardItem_c *resultQuestPhaseRewardInfos; // x20
  TerminalPramsManager_c *v33; // x0
  GrandQuestFolderBoardItem_o *v34; // x0
  TerminalPramsManager_c *v35; // x0
  GrandQuestFolderBoardItem_o *p_mQuestResultAfterEventRewardInfos; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  il2cpp_array_size_t max_length; // x8
  BattleResultComponent_resultData_o *v44; // x9
  GrandQuestFolderBoardItem_c *resultAfterEventRewardInfos; // x20
  TerminalPramsManager_c *v46; // x0
  GrandQuestFolderBoardItem_o *v47; // x0
  BattleResultComponent_resultData_o *v48; // x8
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct QuestRewardInfo_array *resultUseRewardAddItemRewardInfos; // x20
  BattleResultComponent_resultData_o *v56; // x8
  TerminalPramsManager_c *v57; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29BBD & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BBD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (GrandQuestFolderBoardItem_o *)&v9->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0;
  sub_1C9403C(p_mQuestRewardInfos, 0, v2, v3, v4, v5, v6, v7);
  if ( !result )
    goto LABEL_44;
  if ( !LODWORD(result->max_length) )
    goto LABEL_45;
  v19 = result->m_Items[0];
  if ( !v19 )
    goto LABEL_44;
  rewardInfos = (GrandQuestFolderBoardItem_c *)v19->fields.rewardInfos;
  if ( rewardInfos && rewardInfos->_1.namespaze )
  {
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v22 = (GrandQuestFolderBoardItem_o *)&v21->static_fields->mQuestRewardInfos;
    v22->klass = rewardInfos;
    sub_1C9403C(v22, (int32_t)rewardInfos, v13, v14, v15, v16, v17, v18);
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (GrandQuestFolderBoardItem_o *)&v23->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0;
  sub_1C9403C(p_mQuestPhaseRewardInfos, 0, v13, v14, v15, v16, v17, v18);
  if ( !LODWORD(result->max_length) )
    goto LABEL_45;
  v31 = result->m_Items[0];
  if ( !v31 )
    goto LABEL_44;
  resultQuestPhaseRewardInfos = (GrandQuestFolderBoardItem_c *)v31->fields.resultQuestPhaseRewardInfos;
  if ( resultQuestPhaseRewardInfos && resultQuestPhaseRewardInfos->_1.namespaze )
  {
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    v34 = (GrandQuestFolderBoardItem_o *)&v33->static_fields->mQuestPhaseRewardInfos;
    v34->klass = resultQuestPhaseRewardInfos;
    sub_1C9403C(v34, (int32_t)resultQuestPhaseRewardInfos, v25, v26, v27, v28, v29, v30);
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (GrandQuestFolderBoardItem_o *)&v35->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0;
  sub_1C9403C(p_mQuestResultAfterEventRewardInfos, 0, v25, v26, v27, v28, v29, v30);
  max_length = result->max_length;
  if ( !(_DWORD)max_length )
    goto LABEL_45;
  v44 = result->m_Items[0];
  if ( !v44 )
    goto LABEL_44;
  resultAfterEventRewardInfos = (GrandQuestFolderBoardItem_c *)v44->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && resultAfterEventRewardInfos->_1.namespaze )
  {
    v46 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v46 = TerminalPramsManager_TypeInfo;
    }
    v47 = (GrandQuestFolderBoardItem_o *)&v46->static_fields->mQuestResultAfterEventRewardInfos;
    v47->klass = resultAfterEventRewardInfos;
    sub_1C9403C(v47, (int32_t)resultAfterEventRewardInfos, v37, v38, v39, v40, v41, v42);
    max_length = result->max_length;
  }
  if ( !(_DWORD)max_length )
    goto LABEL_45;
  v48 = result->m_Items[0];
  if ( !v48 )
    goto LABEL_44;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)v48->fields.resultUseRewardAddItemRewardInfos,
                    0);
  resultUseRewardAddItemRewardInfos = 0;
  if ( IsNullOrEmpty )
    goto LABEL_37;
  if ( !LODWORD(result->max_length) )
LABEL_45:
    sub_1C942F8(IsNullOrEmpty);
  v56 = result->m_Items[0];
  if ( !v56 )
LABEL_44:
    sub_1C942F0(IsNullOrEmpty, v12);
  resultUseRewardAddItemRewardInfos = v56->fields.resultUseRewardAddItemRewardInfos;
LABEL_37:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D26E66 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26E66 = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v57->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = resultUseRewardAddItemRewardInfos;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
    (int32_t)resultUseRewardAddItemRewardInfos,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
}


void TerminalPramsManager__SetWarStartedId(int32_t war_id, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = war_id;
  if ( (byte_4D29BB1 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    byte_4D29BB1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsWarStartedId(war_id, method) )
  {
    v3 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    mTerminalWarStartedIds = v3->static_fields->mTerminalWarStartedIds;
    v5 = System_Int32__ToString((int32_t)&v15, 0);
    v6 = System_String__Concat_64456008(mTerminalWarStartedIds, v5, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v6;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->mTerminalWarStartedIds,
      (int32_t)v6,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    TerminalPramsManager__Save_SaveData(v14);
  }
}


void TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B8A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_13768/*"TerminalSpotId"*/);
    byte_4D29B8A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29270 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29270 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13768/*"TerminalSpotId"*/, v1->static_fields->_SpotId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4D29B90 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/);
    sub_1C94098(&StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_4D29B90 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29BFE )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BFE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13752/*"TerminalBeforeEventActivityPoint"*/,
    v1->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0);
  if ( !byte_4D29BFF )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BFF = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13753/*"TerminalBeforeEventActivityPointGauge"*/,
    v2->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B95 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11513/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4D29B95 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11513/*"SAVEKEY_TerminalConquestInfoDisp"*/, v1->static_fields->eventConquestInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4D29B94 & 1) == 0 )
  {
    sub_1C94098(&EventConquestInfo___TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11514/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_1C94098(&StringLiteral_11513/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4D29B94 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v1->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      eventConquestInfos = TerminalPramsManager_TypeInfo->static_fields->eventConquestInfos;
    }
  }
  else
  {
    eventConquestInfos = (struct EventConquestInfo_array *)sub_1C94140(EventConquestInfo___TypeInfo, 0);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11514/*"SAVEKEY_TerminalConquestInfos"*/, v3, 0);
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11513/*"SAVEKEY_TerminalConquestInfoDisp"*/, v4->static_fields->eventConquestInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventCraftInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B96 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11515/*"SAVEKEY_TerminalCraftInfoDisp"*/);
    byte_4D29B96 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11515/*"SAVEKEY_TerminalCraftInfoDisp"*/, v1->static_fields->eventCraftInfoDisp, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *eventHarvestGrowthInfo; // x19
  System_String_o *v3; // x0

  if ( (byte_4D29B97 & 1) == 0 )
  {
    sub_1C94098(&EventHarvestGrowthInfo_TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11516/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    byte_4D29B97 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = (Il2CppObject *)v1->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      eventHarvestGrowthInfo = (Il2CppObject *)TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (Il2CppObject *)sub_1C942E4(EventHarvestGrowthInfo_TypeInfo);
    System_Object___ctor(eventHarvestGrowthInfo, 0);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(eventHarvestGrowthInfo, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11516/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v4; // x0

  if ( (byte_4D29B92 & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_13754/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_4D29B92 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29105 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29105 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( v1->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    if ( !v1->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v1);
    if ( !byte_4D29105 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29105 = 1;
    }
    v2 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v2 = TerminalPramsManager_TypeInfo;
    }
    BeforeEventSubmarineSaveData_k__BackingField = (Il2CppObject *)v2->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__toJson(BeforeEventSubmarineSaveData_k__BackingField, 0, 0, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13754/*"TerminalBeforeEventSubmarinePointData"*/, v4, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B9F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11518/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4D29B9F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29781 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29781 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11518/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v1->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B9E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11519/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    byte_4D29B9E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D299A0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D299A0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11519/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v1->static_fields->_SelectedStoryQuestId_k__BackingField,
    0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  if ( (byte_4D29B8F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_13774/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_1C94098(&StringLiteral_13773/*"TerminalTransitionInfoMissionId"*/);
    byte_4D29B8F = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13773/*"TerminalTransitionInfoMissionId"*/, terminalTransitionInfo->fields.missionId, 0);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13774/*"TerminalTransitionInfoVoiceAssetName"*/,
      terminalTransitionInfo->fields.voiceAssetName,
      0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TerminalPramsManager__UpdateDispState(WarEntity_o *warEntity, const MethodInfo *method)
{
  bool IsFolder; // w19
  TerminalPramsManager_c *v4; // x0
  int v5; // w8

  if ( (byte_4D29B7C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B7C = 1;
  }
  if ( warEntity )
  {
    IsFolder = WarEntity__IsFolder(warEntity, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( IsFolder )
    {
      if ( !byte_4D28FD9 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D28FD9 = 1;
      }
      v4 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v4 = TerminalPramsManager_TypeInfo;
      }
      v5 = 3;
    }
    else
    {
      if ( !byte_4D28FD9 )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D28FD9 = 1;
      }
      v4 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v4 = TerminalPramsManager_TypeInfo;
      }
      v5 = 2;
    }
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D28FD9 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D28FD9 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v5 = 1;
  }
  v4->static_fields->_DispState_k__BackingField = v5;
}


// local variable allocation has failed, the output may be wrong!
void TerminalPramsManager__UpdateEventRaidDefeatedEffectInfo(int32_t eventId, int32_t day, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *klass; // x0
  Il2CppObject *key; // x8
  System_Collections_Generic_List_int__o *v7; // x21
  Il2CppObject *v8; // x8
  Il2CppClass *v9; // x8
  _QWORD *v10; // x9
  __int64 entries_low; // x10
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D29BCB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BCB = 1;
  }
  value = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29C17 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C17 = 1;
  }
  klass = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    klass = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
  }
  key = klass[2].fields._entries->m_Items[17].fields.key;
  if ( !key )
    goto LABEL_30;
  klass = (System_Collections_Generic_Dictionary_int__object__o *)key[1].klass;
  if ( !klass )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          klass,
          eventId,
          &value,
          (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    value = (Il2CppObject *)v7;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D29C17 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29C17 = 1;
    }
    klass = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      klass = (System_Collections_Generic_Dictionary_int__object__o *)TerminalPramsManager_TypeInfo;
    }
    v8 = klass[2].fields._entries->m_Items[17].fields.key;
    if ( v8 )
    {
      klass = (System_Collections_Generic_Dictionary_int__object__o *)v8[1].klass;
      if ( klass )
      {
        System_Collections_Generic_Dictionary_int__object___Add(
          klass,
          eventId,
          value,
          (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        goto LABEL_24;
      }
    }
LABEL_30:
    sub_1C942F0(klass, *(_QWORD *)&day);
  }
  klass = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         day,
         (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
LABEL_24:
  klass = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_30;
  v9 = value[1].klass;
  v10 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(value[1].monitor);
  if ( !v9 )
    goto LABEL_30;
  entries_low = SLODWORD(klass->fields._entries);
  if ( (unsigned int)entries_low >= LODWORD(v9->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)klass,
      day,
      *(const MethodInfo_384DE10 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(klass->fields._entries) = entries_low + 1;
    *((_DWORD *)&v9->_1.byval_arg.data + entries_low) = day;
  }
}


int32_t TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A73 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A73 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_AfterActionFocusQuestId_k__BackingField;
}


BattleSetupInfo_o *TerminalPramsManager__get_BattleSetupKeep(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A95 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A95 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BattleSetupKeep_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeClearQuest(const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppClass *klass; // x8
  __int64 v4; // x8
  Il2CppClass *v5; // x8
  __int64 v6; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4D29ACD & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D29ACD = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D264E4 )
    {
      sub_1C94098(&TerminalSceneComponent_TypeInfo);
      byte_4D264E4 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[1].fields.sendData->klass;
    if ( !klass )
      goto LABEL_31;
    v4 = *(_QWORD *)&klass->_2.static_fields_size;
    if ( !v4 )
      goto LABEL_31;
    if ( *(_DWORD *)(v4 + 420) )
    {
      if ( !LODWORD(Instance[2].klass) )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4D264E4 )
      {
        sub_1C94098(&TerminalSceneComponent_TypeInfo);
        byte_4D264E4 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v5 = Instance[1].fields.sendData->klass;
      if ( v5 )
      {
        v6 = *(_QWORD *)&v5->_2.static_fields_size;
        if ( v6 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v6 + 420);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_31:
      sub_1C942F0(Instance, v2);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_QuestId_k__BackingField = &v8->static_fields->_QuestId_k__BackingField;
  return *p_QuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeEventActivityPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AE8 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AE8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventActivityPoint_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeEventActivityPointGauge(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AEA & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AEA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
}


EventSaveData_o *TerminalPramsManager__get_BeforeEventSubmarineSaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AEE & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AEE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
}


int32_t TerminalPramsManager__get_BeforeQuestStartWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B61 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B61 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeQuestStartWarId_k__BackingField;
}


int64_t TerminalPramsManager__get_BeforeTimeEventDailyPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29ADC & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ADC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
}


int32_t TerminalPramsManager__get_BlankEarthAfterActionFocusSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B10 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B10 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField;
}


int32_t TerminalPramsManager__get_BlankEarthRank(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B14 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B14 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthRank_k__BackingField;
}


int32_t TerminalPramsManager__get_BlankEarthSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B0E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B0E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *TerminalPramsManager__get_BlankEarthTransformData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B12 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B12 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthTransformData_k__BackingField;
}


int32_t TerminalPramsManager__get_CaldeaGateFolderFocusWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B2A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B2A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField;
}


CommonUI_CampaignBonusData_array *TerminalPramsManager__get_CampaignBonus(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AB3 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AB3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CampaignBonus_k__BackingField;
}


CommonUI_CampaignDirectBonusData_array *TerminalPramsManager__get_CampaignDirectBonus(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AB5 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AB5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CampaignDirectBonus_k__BackingField;
}


System_String_o *TerminalPramsManager__get_ClearEventQuestIds(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AE6 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AE6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_ClearEventQuestIds_k__BackingField;
}


int32_t TerminalPramsManager__get_CurrentWaveNum(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B2E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B2E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CurrentWaveNum_k__BackingField;
}


int32_t TerminalPramsManager__get_DataLostBattleEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AA1 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AA1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleEventId_k__BackingField;
}


float TerminalPramsManager__get_DataLostBattleResetFadeInTime(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AA9 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AA9 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleResetFadeInTime_k__BackingField;
}


int32_t TerminalPramsManager__get_DataLostBattleWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AA3 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AA3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleWarId_k__BackingField;
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
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A51 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A51 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DispState_k__BackingField;
}


int64_t TerminalPramsManager__get_EndTime(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A97 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A97 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EndTime_k__BackingField;
}


int32_t TerminalPramsManager__get_EventActionQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AB7 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AB7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventActionQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_EventActivityPointEffectState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AEC & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AEC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventActivityPointEffectState_k__BackingField;
}


int32_t TerminalPramsManager__get_EventBoardGameSquareIndex(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AF6 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AF6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventBoardGameSquareIndex_k__BackingField;
}


int32_t TerminalPramsManager__get_EventDailyPointEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29ADE & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ADE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventDailyPointEventId_k__BackingField;
}


int32_t TerminalPramsManager__get_EventDailyPointItem(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29ADA & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ADA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventDailyPointItem_k__BackingField;
}


int32_t TerminalPramsManager__get_EventMuralId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A81 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A81 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventMuralId_k__BackingField;
}


EventRaidDefeatedEffectInfo_o *TerminalPramsManager__get_EventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AF2 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AF2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
}


int32_t TerminalPramsManager__get_EventUIEffectClearQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B1E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B1E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventUIEffectClearQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_EventUiWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B63 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B63 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventUiWarId_k__BackingField;
}


System_Collections_Generic_HashSet_Dictionary_int__int___o *TerminalPramsManager__get_ForcePlayEventTutorialArray(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B6D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B6D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
}


int32_t TerminalPramsManager__get_FriendshipQuestDialogOpenId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B57 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B57 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_FriendshipQuestDialogOpenId_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B45 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B45 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoFolder_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoNoSe(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B49 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B49 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoNoSe_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoOpenMasterMission(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B76 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B76 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->mIsAutoOpenMasterMission;
}


bool TerminalPramsManager__get_IsAutoResume(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B3F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B3F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoResume_k__BackingField;
}


bool TerminalPramsManager__get_IsAutoShortcut(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B41 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B41 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoShortcut_k__BackingField;
}


bool TerminalPramsManager__get_IsBackQuestBoardDisable(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B5F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B5F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsBackQuestBoardDisable_k__BackingField;
}


bool TerminalPramsManager__get_IsBlankEarthShortcutMoving(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B16 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B16 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsBlankEarthShortcutMoving_k__BackingField;
}


bool TerminalPramsManager__get_IsCheckHomeExpirationDateEventMap(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B4B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B4B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->isCheckHomeExpirationDateEventMap;
}


bool TerminalPramsManager__get_IsDataLostBattleAutoReset(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A9F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A9F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleAutoReset_k__BackingField;
}


bool TerminalPramsManager__get_IsDataLostBattleNoticePause(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AAB & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AAB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleNoticePause_k__BackingField;
}


bool TerminalPramsManager__get_IsDataLostBattleResetFadeIn(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AA7 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AA7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField;
}


bool TerminalPramsManager__get_IsDirectTransition(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B26 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B26 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDirectTransition_k__BackingField;
}


bool TerminalPramsManager__get_IsDispDone_AutoWebView(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A75 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A75 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispDone_AutoWebView_k__BackingField;
}


bool TerminalPramsManager__get_IsDispDone_UIStandFigure(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A77 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A77 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispDone_UIStandFigure_k__BackingField;
}


bool TerminalPramsManager__get_IsDispOnly(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A89 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A89 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispOnly_k__BackingField;
}


bool TerminalPramsManager__get_IsDispUIStandFigure(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A79 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A79 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispUIStandFigure_k__BackingField;
}


bool TerminalPramsManager__get_IsDoneShortcut(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A5F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A5F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDoneShortcut_k__BackingField;
}


bool TerminalPramsManager__get_IsErrorDialogReturnTerminal(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B67 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B67 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsErrorDialogReturnTerminal_k__BackingField;
}


bool TerminalPramsManager__get_IsEventBoardGameDiceBtnActive(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AF8 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AF8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField;
}


bool TerminalPramsManager__get_IsForceFocusTerminalQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A67 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A67 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsForceFocusTerminalQuestId_k__BackingField;
}


bool TerminalPramsManager__get_IsFromRecollectionBoard(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A65 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A65 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsFromRecollectionBoard_k__BackingField;
}


bool TerminalPramsManager__get_IsInvisibleConnectAndLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B37 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B37 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->isInvisibleConnectAndLoad;
}


bool TerminalPramsManager__get_IsMainInterludeWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A7F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A7F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMainInterludeWarClear_k__BackingField;
}


bool TerminalPramsManager__get_IsMapReturnFolder(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B43 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B43 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMapReturnFolder_k__BackingField;
}


bool TerminalPramsManager__get_IsMoveFolderByQuestAfterAction(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B47 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B47 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField;
}


bool TerminalPramsManager__get_IsMoveToGrandQuestClassSelect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B6B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B6B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField;
}


bool TerminalPramsManager__get_IsNoResumeFromChapterStart(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B6F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B6F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsNoResumeFromChapterStart_k__BackingField;
}


bool TerminalPramsManager__get_IsOrdealCallWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A7D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A7D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsOrdealCallWarClear_k__BackingField;
}


bool TerminalPramsManager__get_IsPart2FinalChapter(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B32 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B32 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPart2FinalChapter_k__BackingField;
}


bool TerminalPramsManager__get_IsPhaseClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A87 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A87 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPhaseClear_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayEventBoardGameArrivalEffectAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A8D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A8D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayEventBoardGameDiceBtnActiveEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AFA & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AFA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayGetEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AAF & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AAF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayGetEffect_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayScriptWithMap(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A8B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A8B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayScriptWithMap_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayTerminalEffectDisappear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B08 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B08 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField;
}


int32_t TerminalPramsManager__get_IsPlayTerminalEffectDisappearWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B0A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B0A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayTerminalEffectNt2AfterAction(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B0C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B0C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField;
}


bool TerminalPramsManager__get_IsPlayedEntryBanner(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AAD & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AAD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayedEntryBanner_k__BackingField;
}


bool TerminalPramsManager__get_IsQuestClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A85 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A85 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsQuestClear_k__BackingField;
}


bool TerminalPramsManager__get_IsScriptDisp(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A8F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A8F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsScriptDisp_k__BackingField;
}


bool TerminalPramsManager__get_IsSkipNoticeLoginQuestAtOnce(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B5D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B5D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField;
}


bool TerminalPramsManager__get_IsStopMasterFaceOverwrite(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AA5 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AA5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsStopMasterFaceOverwrite_k__BackingField;
}


bool TerminalPramsManager__get_IsTopLastIdxNextBoardRequest(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B4D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B4D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField;
}


bool TerminalPramsManager__get_IsTransFromOrdealCall(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B24 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B24 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsTransFromOrdealCall_k__BackingField;
}


bool TerminalPramsManager__get_IsTransOrdealCall(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B22 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B22 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsTransOrdealCall_k__BackingField;
}


bool TerminalPramsManager__get_IsTransitionToTerminalAfterMovie(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B34 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B34 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField;
}


bool TerminalPramsManager__get_IsWarBoardClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A99 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A99 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsWarBoardClear_k__BackingField;
}


bool TerminalPramsManager__get_IsWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A7B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A7B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsWarClear_k__BackingField;
}


int32_t TerminalPramsManager__get_LastPlayedFreeQuestSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A6F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A6F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
}


int32_t TerminalPramsManager__get_LastPlayedQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A6D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A6D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayedQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_LastSelectQuestIndex(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A71 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A71 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastSelectQuestIndex_k__BackingField;
}


int32_t TerminalPramsManager__get_LimitCountUnSealQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B59 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B59 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LimitCountUnSealQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_MapModelClearPhaseCount(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A9D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A9D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MapModelClearPhaseCount_k__BackingField;
}


int32_t TerminalPramsManager__get_MapModelClearQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A9B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A9B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MapModelClearQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_MasterMissionTargetType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B78 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B78 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MasterMissionTargetType_k__BackingField;
}


int32_t TerminalPramsManager__get_MessageDispType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A91 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A91 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MessageDispType_k__BackingField;
}


System_String_o *TerminalPramsManager__get_NoticeLastModified(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B1C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B1C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_NoticeLastModified_k__BackingField;
}


UserEventPointEntity_array *TerminalPramsManager__get_OldUserEventPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B30 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B30 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_OldUserEventPoint_k__BackingField;
}


int32_t TerminalPramsManager__get_PhaseCnt(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A5D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A5D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PhaseCnt_k__BackingField;
}


int32_t TerminalPramsManager__get_PlanetEarthSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B18 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B18 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlanetEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *TerminalPramsManager__get_PlanetEarthTransformData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B1A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B1A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlanetEarthTransformData_k__BackingField;
}


bool TerminalPramsManager__get_PlayHappinessCounterEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A83 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A83 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlayHappinessCounterEffect_k__BackingField;
}


System_String_o *TerminalPramsManager__get_PlayedTerminalEffects(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B06 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B06 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlayedTerminalEffects_k__BackingField;
}


int32_t TerminalPramsManager__get_PlayerGenderType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AB1 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AB1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlayerGenderType_k__BackingField;
}


QuestFocusStateManager_o *TerminalPramsManager__get_QuestFocusStateManager(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  TerminalPramsManager_c *v9; // x0
  GrandQuestFolderBoardItem_o *p_questFocusStateManager; // x0

  if ( (byte_4D29B36 & 1) == 0 )
  {
    sub_1C94098(&QuestFocusStateManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B36 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->questFocusStateManager )
  {
    v2 = (QuestFocusStateManager_o *)sub_1C942E4(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v2, 0);
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = (GrandQuestFolderBoardItem_o *)&v9->static_fields->questFocusStateManager;
    p_questFocusStateManager->klass = (GrandQuestFolderBoardItem_c *)v2;
    sub_1C9403C(p_questFocusStateManager, (int32_t)v2, v3, v4, v5, v6, v7, v8);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->questFocusStateManager;
}


int32_t TerminalPramsManager__get_QuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A5B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A5B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_QuestMessageScriptQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B4F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B4F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestMessageScriptQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_QuestMessageScriptQuestPhase(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B51 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B51 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestMessageScriptQuestPhase_k__BackingField;
}


System_Collections_Generic_Dictionary_int__int__o *TerminalPramsManager__get_QuestRandomGroupList(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B04 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B04 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestRandomGroupList_k__BackingField;
}


int32_t TerminalPramsManager__get_QuestReleaseFocusQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A69 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A69 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestReleaseFocusQuestId_k__BackingField;
}


System_String_o *TerminalPramsManager__get_QuestWindowMessage(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A93 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A93 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestWindowMessage_k__BackingField;
}


EventInfoRemainingRaidHpData_o *TerminalPramsManager__get_RemainingRaidHpData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AF0 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AF0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_RemainingRaidHpData_k__BackingField;
}


System_String_o *TerminalPramsManager__get_SceneMoveQuestClearedInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B20 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B20 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
}


BannerEntity_o *TerminalPramsManager__get_SelectedBannerEntity(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A6B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A6B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedBannerEntity_k__BackingField;
}


int32_t TerminalPramsManager__get_SelectedRecollectionWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A63 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A63 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedRecollectionWarId_k__BackingField;
}


int32_t TerminalPramsManager__get_SelectedStoryQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A61 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A61 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedStoryQuestId_k__BackingField;
}


int32_t TerminalPramsManager__get_ShopFocusItemId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B28 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B28 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_ShopFocusItemId_k__BackingField;
}


SpecifiedSceneInfo_o *TerminalPramsManager__get_SpecifiedChangeSceneInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29ABB & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ABB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
}


int32_t TerminalPramsManager__get_SpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A59 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A59 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SpotId_k__BackingField;
}


int32_t TerminalPramsManager__get_SummonId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A57 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A57 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SummonId_k__BackingField;
}


int32_t TerminalPramsManager__get_SummonType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A55 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A55 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SummonType_k__BackingField;
}


BattleScriptRootComponent_TalkScriptInfo_o *TerminalPramsManager__get_TalkScriptInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B53 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B53 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TalkScriptInfo_k__BackingField;
}


int32_t TerminalPramsManager__get_TerminalTopFocusWarIdByShortcut(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B2C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B2C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TerminalTopFocusWarIdByShortcut_k__BackingField;
}


int32_t TerminalPramsManager__get_TimeStatusEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AE2 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AE2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TimeStatusEventId_k__BackingField;
}


int32_t TerminalPramsManager__get_TimeStatusLoopCount(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AE4 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AE4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TimeStatusLoopCount_k__BackingField;
}


System_String_o *TerminalPramsManager__get_TransitionScrollTabName(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B65 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B65 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TransitionScrollTabName_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_UseAddRewardItemRewardInfos(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B69 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B69 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
}


WarBoardDataEntity_o *TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AFC & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AFC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_WarBoardData_k__BackingField;
}


int32_t TerminalPramsManager__get_WarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29A53 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A53 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_WarId_k__BackingField;
}


float TerminalPramsManager__get_ZoomSize(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  MapZoom_c *v2; // x8
  float ZOOM_DEFAULT; // s8

  if ( (byte_4D29AB9 & 1) == 0 )
  {
    sub_1C94098(&MapZoom_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AB9 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( v1->static_fields->mZoomSize <= 0.0 )
  {
    v2 = MapZoom_TypeInfo;
    if ( !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v2 = MapZoom_TypeInfo;
      v1 = TerminalPramsManager_TypeInfo;
    }
    ZOOM_DEFAULT = v2->static_fields->ZOOM_DEFAULT;
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      v1 = TerminalPramsManager_TypeInfo;
    }
    v1->static_fields->mZoomSize = ZOOM_DEFAULT;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->mZoomSize;
}


EventDailyPoint_o *TerminalPramsManager__get_eventDailyPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AD8 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AD8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventDailyPoint_k__BackingField;
}


EventPointWinReward_o *TerminalPramsManager__get_eventPointWinReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AC3 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AC3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventPointWinReward_k__BackingField;
}


int32_t TerminalPramsManager__get_eventPointWinType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AC1 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AC1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventPointWinType_k__BackingField;
}


EventRaceBoostInfo_o *TerminalPramsManager__get_eventRaceBoost(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AC5 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AC5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventRaceBoost_k__BackingField;
}


EventTowerReward_o *TerminalPramsManager__get_eventTowerReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29ACE & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ACE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventTowerReward_k__BackingField;
}


bool TerminalPramsManager__get_isFortificationCheck(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B00 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B00 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isFortificationCheck_k__BackingField;
}


bool TerminalPramsManager__get_isIncomingCall(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AF4 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AF4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isIncomingCall_k__BackingField;
}


bool TerminalPramsManager__get_isPlayRiverActionCheck(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B02 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B02 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isPlayRiverActionCheck_k__BackingField;
}


bool TerminalPramsManager__get_isQuestRewardSetted(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B3D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B3D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isQuestRewardSetted_k__BackingField;
}


bool TerminalPramsManager__get_isWarBoardPlay(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AFE & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AFE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isWarBoardPlay_k__BackingField;
}


LimitImageAnnounce_array *TerminalPramsManager__get_limitImageAnnounces(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B55 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B55 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_limitImageAnnounces_k__BackingField;
}


UserSuperBossEntity_array *TerminalPramsManager__get_oldPersonalBoss(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29ABF & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ABF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldPersonalBoss_k__BackingField;
}


int32_t TerminalPramsManager__get_oldQuestIdForHeaderEvent(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29ACB & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ACB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldQuestIdForHeaderEvent_k__BackingField;
}


UserSuperBossEntity_array *TerminalPramsManager__get_oldSuperBoss(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29ABD & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ABD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldSuperBoss_k__BackingField;
}


CostumeReleaseAnnounce_array *TerminalPramsManager__get_questClearCostumeGet(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AC9 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AC9 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_questClearCostumeGet_k__BackingField;
}


CostumeReleaseAnnounce_array *TerminalPramsManager__get_questClearCostumeRelease(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AC7 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AC7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_questClearCostumeRelease_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_resultBoostItemRewardInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AD2 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AD2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultBoostItemRewardInfo_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_resultEventBoardGameTokenRewardInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AD4 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AD4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
}


QuestRewardInfo_array *TerminalPramsManager__get_resultEventTowerRewardInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AD0 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AD0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultEventTowerRewardInfo_k__BackingField;
}


TimeStatusRecord_o *TerminalPramsManager__get_timeStatusRecord(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AD6 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AD6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_timeStatusRecord_k__BackingField;
}


UpdateProfileDialogInfoEntity_array *TerminalPramsManager__get_updateProfileInfoEntity(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B5B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B5B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_updateProfileInfoEntity_k__BackingField;
}


WarClearReward_array *TerminalPramsManager__get_warClearReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29AE0 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AE0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_warClearReward_k__BackingField;
}


int32_t TerminalPramsManager__mfGetSceneStatus(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4D29B82 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B82 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->meSceneStatus;
}


void TerminalPramsManager__mfSetSceneStatus(int32_t eSceneStatus, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B81 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B81 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->meSceneStatus = eSceneStatus;
}


void TerminalPramsManager__set_AfterActionFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A74 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A74 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_AfterActionFocusQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_BattleSetupKeep(BattleSetupInfo_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4D29A96 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A96 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_BattleSetupKeep_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AE9 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AE9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = value;
}


void TerminalPramsManager__set_BeforeEventActivityPointGauge(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AEB & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AEB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPointGauge_k__BackingField = value;
}


void TerminalPramsManager__set_BeforeEventSubmarineSaveData(EventSaveData_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AEF & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AEF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_BeforeEventSubmarineSaveData_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B62 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B62 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeQuestStartWarId_k__BackingField = value;
}


void TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29ADD & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ADD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthAfterActionFocusSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B11 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B11 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthRank(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B15 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B15 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthRank_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B0F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B0F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_BlankEarthTransformData(BlankEarthTransform_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B13 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B13 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_BlankEarthTransformData_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B2B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B2B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_CaldeaGateFolderFocusWarId_k__BackingField = value;
}


void TerminalPramsManager__set_CampaignBonus(CommonUI_CampaignBonusData_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4D29AB4 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AB4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignBonus_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_CampaignBonus_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4D29AB6 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AB6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AE7 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AE7 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_ClearEventQuestIds_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B2F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B2F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_CurrentWaveNum_k__BackingField = value;
}


void TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AA2 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AA2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleEventId_k__BackingField = value;
}


void TerminalPramsManager__set_DataLostBattleResetFadeInTime(float value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AAA & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AAA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = value;
}


void TerminalPramsManager__set_DataLostBattleWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AA4 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AA4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleWarId_k__BackingField = value;
}


void TerminalPramsManager__set_Debug_IsBuildInfoDisp(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B3C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B3C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsBuildInfoDisp = value;
}


void TerminalPramsManager__set_Debug_IsDummyErrorSelect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B3B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B3B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsDummyErrorSelect = value;
}


void TerminalPramsManager__set_Debug_IsQuestReleaseAll(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B39 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B39 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsQuestReleaseAll = value;
}


void TerminalPramsManager__set_Debug_IsWarStartActionSkip(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B3A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B3A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsWarStartActionSkip = value;
}


void TerminalPramsManager__set_DispState(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A52 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A52 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DispState_k__BackingField = value;
}


void TerminalPramsManager__set_EndTime(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A98 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A98 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EndTime_k__BackingField = value;
}


void TerminalPramsManager__set_EventActionQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AB8 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AB8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActionQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_EventActivityPointEffectState(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AED & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AED = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = value;
}


void TerminalPramsManager__set_EventBoardGameSquareIndex(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AF7 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AF7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventBoardGameSquareIndex_k__BackingField = value;
}


void TerminalPramsManager__set_EventDailyPointEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29ADF & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ADF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventDailyPointEventId_k__BackingField = value;
}


void TerminalPramsManager__set_EventDailyPointItem(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29ADB & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ADB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventDailyPointItem_k__BackingField = value;
}


void TerminalPramsManager__set_EventMuralId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A82 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A82 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventMuralId_k__BackingField = value;
}


void TerminalPramsManager__set_EventRaidDefeatedEffectInfo(
        EventRaidDefeatedEffectInfo_o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AF3 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AF3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B1F & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B1F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventUIEffectClearQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_EventUiWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B64 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B64 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventUiWarId_k__BackingField = value;
}


void TerminalPramsManager__set_ForcePlayEventTutorialArray(
        System_Collections_Generic_HashSet_Dictionary_int__int___o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B6E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B6E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ForcePlayEventTutorialArray_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_ForcePlayEventTutorialArray_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B58 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B58 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_FriendshipQuestDialogOpenId_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B46 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B46 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoFolder_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoNoSe(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B4A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B4A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoNoSe_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoOpenMasterMission(bool value, const MethodInfo *method)
{
  bool v3; // w19
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B77 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B77 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v3 = value;
  if ( !byte_4D26F6B )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26F6B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_IsAutoResume_k__BackingField = v3;
  static_fields->mIsAutoOpenMasterMission = v3;
}


void TerminalPramsManager__set_IsAutoResume(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B40 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B40 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = value;
}


void TerminalPramsManager__set_IsAutoShortcut(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B42 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B42 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoShortcut_k__BackingField = value;
}


void TerminalPramsManager__set_IsBackQuestBoardDisable(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B60 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B60 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsBackQuestBoardDisable_k__BackingField = value;
}


void TerminalPramsManager__set_IsBlankEarthShortcutMoving(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B17 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B17 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = value;
}


void TerminalPramsManager__set_IsCheckHomeExpirationDateEventMap(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B4C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B4C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->isCheckHomeExpirationDateEventMap = value;
}


void TerminalPramsManager__set_IsDataLostBattleAutoReset(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AA0 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AA0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleAutoReset_k__BackingField = value;
}


void TerminalPramsManager__set_IsDataLostBattleNoticePause(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AAC & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AAC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleNoticePause_k__BackingField = value;
}


void TerminalPramsManager__set_IsDataLostBattleResetFadeIn(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AA8 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AA8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = value;
}


void TerminalPramsManager__set_IsDirectTransition(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B27 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B27 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDirectTransition_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispDone_AutoWebView(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A76 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A76 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_AutoWebView_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispDone_UIStandFigure(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A78 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A78 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_UIStandFigure_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispOnly(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A8A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A8A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispOnly_k__BackingField = value;
}


void TerminalPramsManager__set_IsDispUIStandFigure(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A7A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A7A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispUIStandFigure_k__BackingField = value;
}


void TerminalPramsManager__set_IsDoneShortcut(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A60 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A60 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDoneShortcut_k__BackingField = value;
}


void TerminalPramsManager__set_IsErrorDialogReturnTerminal(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B68 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B68 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsErrorDialogReturnTerminal_k__BackingField = value;
}


void TerminalPramsManager__set_IsEventBoardGameDiceBtnActive(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AF9 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AF9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = value;
}


void TerminalPramsManager__set_IsForceFocusTerminalQuestId(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A68 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A68 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_IsFromRecollectionBoard(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A66 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A66 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsFromRecollectionBoard_k__BackingField = value;
}


void TerminalPramsManager__set_IsInvisibleConnectAndLoad(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B38 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B38 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->isInvisibleConnectAndLoad = value;
}


void TerminalPramsManager__set_IsMainInterludeWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A80 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A80 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMainInterludeWarClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsMapReturnFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B44 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B44 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMapReturnFolder_k__BackingField = value;
}


void TerminalPramsManager__set_IsMoveFolderByQuestAfterAction(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B48 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B48 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = value;
}


void TerminalPramsManager__set_IsMoveToGrandQuestClassSelect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B6C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B6C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMoveToGrandQuestClassSelect_k__BackingField = value;
}


void TerminalPramsManager__set_IsNoResumeFromChapterStart(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B70 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B70 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsNoResumeFromChapterStart_k__BackingField = value;
}


void TerminalPramsManager__set_IsOrdealCallWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A7E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A7E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsPart2FinalChapter(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B33 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B33 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPart2FinalChapter_k__BackingField = value;
}


void TerminalPramsManager__set_IsPhaseClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A88 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A88 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPhaseClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayEventBoardGameArrivalEffectAuto(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A8E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A8E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayEventBoardGameDiceBtnActiveEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AFB & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AFB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayGetEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AB0 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AB0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayGetEffect_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayScriptWithMap(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A8C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A8C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayScriptWithMap_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayTerminalEffectDisappear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B09 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B09 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayTerminalEffectDisappearWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B0B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B0B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayTerminalEffectNt2AfterAction(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B0D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B0D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = value;
}


void TerminalPramsManager__set_IsPlayedEntryBanner(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AAE & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AAE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayedEntryBanner_k__BackingField = value;
}


void TerminalPramsManager__set_IsQuestClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A86 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A86 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsQuestClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsScriptDisp(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A90 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A90 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsScriptDisp_k__BackingField = value;
}


void TerminalPramsManager__set_IsSkipNoticeLoginQuestAtOnce(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B5E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B5E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = value;
}


void TerminalPramsManager__set_IsStopMasterFaceOverwrite(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AA6 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AA6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = value;
}


void TerminalPramsManager__set_IsTopLastIdxNextBoardRequest(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B4E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B4E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = value;
}


void TerminalPramsManager__set_IsTransFromOrdealCall(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B25 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B25 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTransFromOrdealCall_k__BackingField = value;
}


void TerminalPramsManager__set_IsTransOrdealCall(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B23 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B23 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTransOrdealCall_k__BackingField = value;
}


void TerminalPramsManager__set_IsTransitionToTerminalAfterMovie(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B35 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B35 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField = value;
}


void TerminalPramsManager__set_IsWarBoardClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A9A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A9A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsWarBoardClear_k__BackingField = value;
}


void TerminalPramsManager__set_IsWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A7C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A7C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsWarClear_k__BackingField = value;
}


void TerminalPramsManager__set_LastPlayedFreeQuestSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A70 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A70 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_LastPlayedQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A6E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A6E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_LastSelectQuestIndex(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A72 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A72 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectQuestIndex_k__BackingField = value;
}


void TerminalPramsManager__set_LimitCountUnSealQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B5A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B5A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LimitCountUnSealQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_MapModelClearPhaseCount(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A9E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A9E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MapModelClearPhaseCount_k__BackingField = value;
}


void TerminalPramsManager__set_MapModelClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A9C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A9C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MapModelClearQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_MasterMissionTargetType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B79 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B79 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MasterMissionTargetType_k__BackingField = value;
}


void TerminalPramsManager__set_MessageDispType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A92 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A92 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MessageDispType_k__BackingField = value;
}


void TerminalPramsManager__set_NoticeLastModified(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B1D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B1D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_NoticeLastModified_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B31 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B31 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_OldUserEventPoint_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_OldUserEventPoint_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A5E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A5E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PhaseCnt_k__BackingField = value;
}


void TerminalPramsManager__set_PlanetEarthSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B19 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B19 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PlanetEarthSpotId_k__BackingField = value;
}


void TerminalPramsManager__set_PlanetEarthTransformData(BlankEarthTransform_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B1B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B1B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_PlanetEarthTransformData_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_PlanetEarthTransformData_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A84 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A84 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PlayHappinessCounterEffect_k__BackingField = value;
}


void TerminalPramsManager__set_PlayedTerminalEffects(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B07 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B07 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_PlayedTerminalEffects_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AB2 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AB2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PlayerGenderType_k__BackingField = value;
}


void TerminalPramsManager__set_QuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A5C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A5C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestId_k__BackingField = value;
}


void TerminalPramsManager__set_QuestMessageScriptQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B50 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B50 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_QuestMessageScriptQuestPhase(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B52 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B52 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = value;
}


void TerminalPramsManager__set_QuestRandomGroupList(
        System_Collections_Generic_Dictionary_int__int__o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B05 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B05 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_QuestRandomGroupList_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A6A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A6A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestReleaseFocusQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_QuestWindowMessage(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4D29A94 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A94 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_QuestWindowMessage_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AF1 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AF1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_RemainingRaidHpData_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_RemainingRaidHpData_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B21 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B21 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_SceneMoveQuestClearedInfo_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4D29A6C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A6C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A64 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A64 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedRecollectionWarId_k__BackingField = value;
}


void TerminalPramsManager__set_SelectedStoryQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A62 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A62 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedStoryQuestId_k__BackingField = value;
}


void TerminalPramsManager__set_ShopFocusItemId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B29 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B29 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_ShopFocusItemId_k__BackingField = value;
}


void TerminalPramsManager__set_SpecifiedChangeSceneInfo(SpecifiedSceneInfo_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4D29ABC & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ABC = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A5A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A5A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = value;
}


void TerminalPramsManager__set_SummonId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A58 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A58 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SummonId_k__BackingField = value;
}


void TerminalPramsManager__set_SummonType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A56 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A56 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SummonType_k__BackingField = value;
}


void TerminalPramsManager__set_TalkScriptInfo(
        BattleScriptRootComponent_TalkScriptInfo_o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B54 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B54 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_TalkScriptInfo_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B2D & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B2D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TerminalTopFocusWarIdByShortcut_k__BackingField = value;
}


void TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AE3 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AE3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TimeStatusEventId_k__BackingField = value;
}


void TerminalPramsManager__set_TimeStatusLoopCount(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AE5 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AE5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TimeStatusLoopCount_k__BackingField = value;
}


void TerminalPramsManager__set_TransitionScrollTabName(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B66 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B66 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TransitionScrollTabName_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_TransitionScrollTabName_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B6A & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B6A = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_UseAddRewardItemRewardInfos_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_UseAddRewardItemRewardInfos_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AFD & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AFD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_WarBoardData_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29A54 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29A54 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = value;
}


void TerminalPramsManager__set_ZoomSize(float value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29ABA & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ABA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mZoomSize = value;
}


void TerminalPramsManager__set_eventDailyPoint(EventDailyPoint_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AD9 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AD9 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_eventDailyPoint_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AC4 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AC4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_eventPointWinReward_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AC2 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AC2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_eventPointWinType_k__BackingField = value;
}


void TerminalPramsManager__set_eventRaceBoost(EventRaceBoostInfo_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AC6 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AC6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_eventRaceBoost_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29ACF & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ACF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_eventTowerReward_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B01 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B01 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isFortificationCheck_k__BackingField = value;
}


void TerminalPramsManager__set_isIncomingCall(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AF5 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AF5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isIncomingCall_k__BackingField = value;
}


void TerminalPramsManager__set_isPlayRiverActionCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B03 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B03 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isPlayRiverActionCheck_k__BackingField = value;
}


void TerminalPramsManager__set_isQuestRewardSetted(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29B3E & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B3E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isQuestRewardSetted_k__BackingField = value;
}


void TerminalPramsManager__set_isWarBoardPlay(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29AFF & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AFF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isWarBoardPlay_k__BackingField = value;
}


void TerminalPramsManager__set_limitImageAnnounces(LimitImageAnnounce_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29B56 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B56 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_limitImageAnnounces_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4D29AC0 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AC0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_oldPersonalBoss_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4D29ACC & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ACC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = value;
}


void TerminalPramsManager__set_oldSuperBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4D29ABE & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ABE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_oldSuperBoss_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29ACA & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29ACA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_questClearCostumeGet_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AC8 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AC8 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_questClearCostumeRelease_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AD3 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AD3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_resultBoostItemRewardInfo_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AD5 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AD5 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  GrandQuestFolderBoardItem_o *static_fields; // x8

  if ( (byte_4D29AD1 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AD1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (GrandQuestFolderBoardItem_o *)v9->static_fields;
  static_fields[2].klass = (GrandQuestFolderBoardItem_c *)value;
  sub_1C9403C(static_fields + 2, (int32_t)value, v2, v3, v4, v5, v6, v7);
}


void TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AD7 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AD7 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_timeStatusRecord_k__BackingField,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  GrandQuestFolderBoardItem_o *static_fields; // x8

  if ( (byte_4D29B5C & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29B5C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = (GrandQuestFolderBoardItem_o *)v9->static_fields;
  static_fields[5].klass = (GrandQuestFolderBoardItem_c *)value;
  sub_1C9403C(static_fields + 5, (int32_t)value, v2, v3, v4, v5, v6, v7);
}


void TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4D29AE1 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29AE1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_warClearReward_k__BackingField,
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
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D29C68 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_ClearData_TypeInfo);
    sub_1C94098(&StringLiteral_13421/*"TERMINAL_CLEAR_REWARD_DISP"*/);
    byte_4D29C68 = 1;
  }
  TerminalPramsManager_ClearData_TypeInfo->static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13421/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields,
    StringLiteral_13421/*"TERMINAL_CLEAR_REWARD_DISP"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  TerminalPramsManager_c *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7

  if ( (byte_4D29C66 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C66 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.qClearHeroineInfo = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v3, v4, v5, v6, v7, v8);
  this->fields.questRewardInfos = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.questRewardInfos, 0, v9, v10, v11, v12, v13, v14);
  this->fields.questPhaseRewardInfos = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.questPhaseRewardInfos, 0, v15, v16, v17, v18, v19, v20);
  this->fields.questResultAfterEventRewardInfos = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questResultAfterEventRewardInfos,
    0,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resultEventPanelRewardInfos = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.resultEventPanelRewardInfos, 0, v27, v28, v29, v30, v31, v32);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mOldSuperBoss, 0, v33, v34, v35, v36, v37, v38);
  this->fields.oldPersonalBoss = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.oldPersonalBoss, 0, v39, v40, v41, v42, v43, v44);
  this->fields.evPointWinReward = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.evPointWinReward, 0, v45, v46, v47, v48, v49, v50);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.evRaceBoost, 0, v51, v52, v53, v54, v55, v56);
  this->fields.questClearCostume = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.questClearCostume, 0, v57, v58, v59, v60, v61, v62);
  this->fields.questClearCostumeGetInfo = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.questClearCostumeGetInfo, 0, v63, v64, v65, v66, v67, v68);
  this->fields.eventTowerReward = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.eventTowerReward, 0, v69, v70, v71, v72, v73, v74);
  this->fields.resultEventTowerRewardInfo = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.resultEventTowerRewardInfo, 0, v75, v76, v77, v78, v79, v80);
  this->fields.warClearReward = 0;
  this->fields.isDispOnly = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.warClearReward, 0, v81, v82, v83, v84, v85, v86);
  v93 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
  }
  this->fields.EventActivityPointEffectState = v93->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.limitImageAnnounces, 0, v87, v88, v89, v90, v91, v92);
  this->fields.isOrdealCallWarClear = 0;
  this->fields.eventMuralId = 0;
  this->fields.playHappinessCounterEffect = 0;
  this->fields.oldUserEventPoint = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.oldUserEventPoint, 0, v94, v95, v96, v97, v98, v99);
  this->fields.UseAddRewardItemRewardInfos = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.UseAddRewardItemRewardInfos,
    0,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
}


void TerminalPramsManager_ClearData___ctor_38047020(
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
  struct UserSuperBossEntity_array *v31; // x24
  struct CostumeReleaseAnnounce_array *v38; // x28
  struct CostumeReleaseAnnounce_array *v39; // x25
  struct UserSuperBossEntity_array *v40; // x21
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v41; // x0
  const MethodInfo *v42; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v43; // x26
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  bool v52; // w29
  bool v53; // w23
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  struct QuestRewardInfo_array *v114; // x1
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  TerminalPramsManager_c *v121; // x0
  TerminalPramsManager_c *v122; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  TerminalPramsManager_c *v136; // x0
  TerminalPramsManager_c *v137; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  struct WarClearReward_array *v145; // x1
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  struct BattleDropItem_array *v152; // x1
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  struct BattleDropItem_array *v159; // x1
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  struct LimitImageAnnounce_array *v166; // x1
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  TerminalPramsManager_c *v173; // x0
  struct QuestRewardInfo_array *v174; // x20
  struct UserEventPointEntity_array *OldUserEventPoint_k__BackingField; // x1
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x4
  int32_t v179; // w5
  int64_t v180; // x6
  System_String_o *v181; // x7
  long double inited; // q0
  _QWORD *v183; // x20
  __int64 v184; // x8
  __int64 v185; // x0
  __int64 v186; // x0

  v31 = oldSuperBoss;
  v38 = questClearCostumeGet;
  v39 = questClearCostumeRelease;
  v40 = oldPersonalBoss;
  if ( (byte_4D29C67 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_QuestRewardInfo___);
    sub_1C94098(&BattleDropItem___TypeInfo);
    sub_1C94098(&CostumeReleaseAnnounce___TypeInfo);
    sub_1C94098(&LimitImageAnnounce___TypeInfo);
    sub_1C94098(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
    sub_1C94098(&QuestRewardInfo___TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&UserSuperBossEntity___TypeInfo);
    sub_1C94098(&WarClearReward___TypeInfo);
    byte_4D29C67 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v41 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_1C942E4(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v43 = v41;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_38046248(v41, qcrHeroineInfo, v42);
    if ( this )
      goto LABEL_5;
LABEL_34:
    sub_1C942F0(v44, v45);
  }
  System_Object___ctor((Il2CppObject *)v41, 0);
  v43->fields.oldUsrSvtData = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v43->fields, 0, v124, v125, v126, v127, v128, v129);
  if ( !this )
    goto LABEL_34;
LABEL_5:
  this->fields.qClearHeroineInfo = v43;
  v52 = qClear;
  v53 = pclear;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v43, v46, v47, v48, v49, v50, v51);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_1C94140(QuestRewardInfo___TypeInfo, 0);
  this->fields.questRewardInfos = qri;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.questRewardInfos, (int32_t)qri, v54, v55, v56, v57, v58, v59);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_1C94140(QuestRewardInfo___TypeInfo, 0);
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questPhaseRewardInfos,
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
    v31 = (struct UserSuperBossEntity_array *)sub_1C94140(UserSuperBossEntity___TypeInfo, 0);
  this->fields.mOldSuperBoss = v31;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mOldSuperBoss, (int32_t)v31, v66, v67, v68, v69, v70, v71);
  if ( !oldPersonalBoss )
    v40 = (struct UserSuperBossEntity_array *)sub_1C94140(UserSuperBossEntity___TypeInfo, 0);
  this->fields.oldPersonalBoss = v40;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.oldPersonalBoss, (int32_t)v40, v72, v73, v74, v75, v76, v77);
  this->fields.evPointWinReward = evpWinReward;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.evPointWinReward,
    (int32_t)evpWinReward,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.evRaceBoost, (int32_t)evRace, v84, v85, v86, v87, v88, v89);
  if ( !questClearCostumeRelease )
    v39 = (struct CostumeReleaseAnnounce_array *)sub_1C94140(CostumeReleaseAnnounce___TypeInfo, 0);
  this->fields.questClearCostume = v39;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questClearCostume,
    (int32_t)v39,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  if ( !questClearCostumeGet )
    v38 = (struct CostumeReleaseAnnounce_array *)sub_1C94140(CostumeReleaseAnnounce___TypeInfo, 0);
  this->fields.questClearCostumeGetInfo = v38;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questClearCostumeGetInfo,
    (int32_t)v38,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields.eventTowerReward = evTowerReward;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventTowerReward,
    (int32_t)evTowerReward,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  v114 = resultEvTowerRewardInfo;
  if ( !resultEvTowerRewardInfo )
    v114 = (struct QuestRewardInfo_array *)sub_1C94140(QuestRewardInfo___TypeInfo, 0);
  this->fields.resultEventTowerRewardInfo = v114;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultEventTowerRewardInfo,
    (int32_t)v114,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29792 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29792 = 1;
  }
  v121 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v121 = TerminalPramsManager_TypeInfo;
  }
  if ( v121->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( !v121->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v121);
    if ( !byte_4D29792 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29792 = 1;
    }
    v122 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v122 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v122->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C94140(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultBoostItemRewardInfo,
    (int32_t)resultBoostItemRewardInfo_k__BackingField,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29789 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29789 = 1;
  }
  v136 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v136 = TerminalPramsManager_TypeInfo;
  }
  if ( v136->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( !v136->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v136);
    if ( !byte_4D29789 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D29789 = 1;
    }
    v137 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v137 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v137->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_1C94140(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0);
  }
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (int32_t)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  v145 = warClearRewardIn;
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v145 = (struct WarClearReward_array *)sub_1C94140(WarClearReward___TypeInfo, 0);
  this->fields.warClearReward = v145;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.warClearReward,
    (int32_t)v145,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  v152 = questResultAfterEventRewardInfos;
  this->fields.isWarBoardClear = isWarBoardClear;
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  if ( !questResultAfterEventRewardInfos )
    v152 = (struct BattleDropItem_array *)sub_1C94140(BattleDropItem___TypeInfo, 0);
  this->fields.questResultAfterEventRewardInfos = v152;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questResultAfterEventRewardInfos,
    (int32_t)v152,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  v159 = resultEventPanelRewardInfos;
  if ( !resultEventPanelRewardInfos )
    v159 = (struct BattleDropItem_array *)sub_1C94140(BattleDropItem___TypeInfo, 0);
  this->fields.resultEventPanelRewardInfos = v159;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultEventPanelRewardInfos,
    (int32_t)v159,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  v166 = limitImageAnnounces;
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v166 = (struct LimitImageAnnounce_array *)sub_1C94140(LimitImageAnnounce___TypeInfo, 0);
  this->fields.limitImageAnnounces = v166;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.limitImageAnnounces,
    (int32_t)v166,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28F27 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28F27 = 1;
  }
  v173 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v173->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4D2978D )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
    byte_4D2978D = 1;
  }
  if ( !v173->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v173);
    v173 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v173->static_fields->_EventMuralId_k__BackingField;
  if ( !byte_4D299A1 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
    byte_4D299A1 = 1;
  }
  if ( !v173->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v173);
    v173 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventActionQuestId = v173->static_fields->_EventActionQuestId_k__BackingField;
  if ( !byte_4D2978F )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
    byte_4D2978F = 1;
  }
  if ( !v173->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v173);
    v173 = TerminalPramsManager_TypeInfo;
  }
  this->fields.playHappinessCounterEffect = v173->static_fields->_PlayHappinessCounterEffect_k__BackingField;
  if ( !byte_4D29104 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
    byte_4D29104 = 1;
  }
  if ( !v173->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v173);
    v173 = TerminalPramsManager_TypeInfo;
  }
  v174 = useAddRewardItemRewardInfos;
  OldUserEventPoint_k__BackingField = v173->static_fields->_OldUserEventPoint_k__BackingField;
  this->fields.oldUserEventPoint = OldUserEventPoint_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.oldUserEventPoint,
    (int32_t)OldUserEventPoint_k__BackingField,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
  if ( !useAddRewardItemRewardInfos )
  {
    v183 = Method_System_Array_Empty_QuestRewardInfo___;
    v184 = *((_QWORD *)Method_System_Array_Empty_QuestRewardInfo___ + 7);
    if ( !v184 )
    {
      sub_1C6A188(Method_System_Array_Empty_QuestRewardInfo___);
      v184 = v183[7];
    }
    v185 = *(_QWORD *)(v184 + 16);
    if ( (*(_BYTE *)(v185 + 309) & 1) == 0 )
      v185 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v185 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v185);
    v186 = *(_QWORD *)(v183[7] + 16LL);
    if ( (*(_BYTE *)(v186 + 309) & 1) == 0 )
      v186 = sub_1C6A12C(inited);
    v174 = **(struct QuestRewardInfo_array ***)(v186 + 184);
  }
  this->fields.UseAddRewardItemRewardInfos = v174;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.UseAddRewardItemRewardInfos,
    (int32_t)v174,
    v176,
    v177,
    v178,
    v179,
    v180,
    v181);
}


void TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalPramsManager_OldHeroineLawData___ctor_38045484(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q1
  __int128 v8; // q1
  __int64 v9; // x21
  __int64 v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4D29C62 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D29C62 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !uSvtEnt )
    sub_1C942F0(v5, v6);
  v7 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v12, 0);
  v8 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v11, 0);
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v14, 0);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                              uSvtEnt->fields.limitCount,
                              0);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                   uSvtEnt->fields.imageLimitCount,
                                   0);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                  uSvtEnt->fields.dispLimitCount,
                                  0);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                  uSvtEnt->fields.iconLimitCount,
                                  0);
  *(_OWORD *)&this->fields.lv = *(_OWORD *)&uSvtEnt->fields.lv;
  *(_OWORD *)&this->fields.adjustAtk = *(_OWORD *)&uSvtEnt->fields.adjustAtk;
  *(_OWORD *)&this->fields.skillLv3 = *(_OWORD *)&uSvtEnt->fields.skillLv3;
  this->fields.createdAt = uSvtEnt->fields.createdAt;
}


UserServantEntity_o *TerminalPramsManager_OldHeroineLawData__GetLoad(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t id; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v5; // x0
  __int64 v6; // x1
  __int128 v7; // q0
  __int128 v8; // q0
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-50h]

  if ( (byte_4D29C63 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&UserServantEntity_TypeInfo);
    byte_4D29C63 = 1;
  }
  v3 = sub_1C942E4(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v3, 0);
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v12, id, 0);
  v13 = v12;
  if ( !v3 )
    sub_1C942F0(v5, v6);
  v7 = *(_OWORD *)&v13.fields.fakeValue;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&v13.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 32) = v7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v11, this->fields.userId, 0);
  v8 = *(_OWORD *)&v11.fields.fakeValue;
  v12 = v11;
  *(_OWORD *)(v3 + 48) = *(_OWORD *)&v11.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 64) = v8;
  svtId = this->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
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
  result = (UserServantEntity_o *)v3;
  *(_OWORD *)(v3 + 256) = *(_OWORD *)&this->fields.lv;
  *(_OWORD *)(v3 + 272) = *(_OWORD *)&this->fields.adjustAtk;
  *(_OWORD *)(v3 + 288) = *(_OWORD *)&this->fields.skillLv3;
  *(_QWORD *)(v3 + 312) = this->fields.createdAt;
  return result;
}


void TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.oldUsrSvtData = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v3, v4, v5, v6, v7, v8);
}


void TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_38046248(
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D29C64 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_OldHeroineLawData_TypeInfo);
    byte_4D29C64 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !qClearHeroineInfo )
    sub_1C942F0(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_1C942E4(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_38045484(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_fields, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  p_fields->isChangeLimitcnt = qClearHeroineInfo->fields.isChangeLimitcnt;
  p_fields->isChangeTreasureDvc = qClearHeroineInfo->fields.isChangeTreasureDvc;
  *(_QWORD *)&p_fields->treasureDvcId = *(_QWORD *)&qClearHeroineInfo->fields.treasureDvcId;
  p_fields->oldFriendShipRank = qClearHeroineInfo->fields.oldFriendShipRank;
  p_fields->isFriendShipExceed = qClearHeroineInfo->fields.isFriendShipExceed;
  p_fields->isExceed = qClearHeroineInfo->fields.isExceed;
}


QuestClearHeroineInfo_o *TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_4D29C65 & 1) == 0 )
  {
    sub_1C94098(&QuestClearHeroineInfo_TypeInfo);
    byte_4D29C65 = 1;
  }
  v3 = sub_1C942E4(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v3, 0);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_1C942F0(oldUsrSvtData, v4);
  }
  *(_QWORD *)(v3 + 16) = oldUsrSvtData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)oldUsrSvtData, v6, v7, v8, v9, v10, v11);
  result = (QuestClearHeroineInfo_o *)v3;
  *(_BYTE *)(v3 + 24) = this->fields.isChangeLimitcnt;
  *(_BYTE *)(v3 + 25) = this->fields.isChangeTreasureDvc;
  *(_QWORD *)(v3 + 28) = *(_QWORD *)&this->fields.treasureDvcId;
  *(_DWORD *)(v3 + 36) = this->fields.oldFriendShipRank;
  *(_BYTE *)(v3 + 40) = this->fields.isFriendShipExceed;
  *(_BYTE *)(v3 + 41) = this->fields.isExceed;
  return result;
}


void TerminalPramsManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D29C69 & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager___c_TypeInfo);
    byte_4D29C69 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalPramsManager___c_TypeInfo->static_fields->__9 = (struct TerminalPramsManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)TerminalPramsManager___c_TypeInfo->static_fields,
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


bool TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__757_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4D29C6A & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C6A = 1;
  }
  if ( !n )
    sub_1C942F0(this, n);
  questId = n->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return questId == v5->static_fields->_QuestId_k__BackingField;
}


bool TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__763_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_4D29C6B & 1) == 0 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29C6B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0);
}


int32_t TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__763_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C942F0(this, 0);
  return v->fields.id;
}


int32_t TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__763_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void TerminalPramsManager___c__DisplayClass742_0___ctor(
        TerminalPramsManager___c__DisplayClass742_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TerminalPramsManager___c__DisplayClass742_0___IsTerminalEffectPlayed_b__0(
        TerminalPramsManager___c__DisplayClass742_0_o *this,
        System_String_o *playedEffectName,
        const MethodInfo *method)
{
  return System_String__op_Equality(playedEffectName, this->fields.effectName, 0);
}


void TerminalPramsManager___c__DisplayClass745_0___ctor(
        TerminalPramsManager___c__DisplayClass745_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalPramsManager___c__DisplayClass745_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass745_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_fields; // x19
  System_String_o *effectIdsStr; // t1
  System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D29C6C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    byte_4D29C6C = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (GrandQuestFolderBoardItem_o *)&this->fields;
  v7 = System_String__Concat_64456008(effectIdsStr, effectId, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  p_fields->klass = (GrandQuestFolderBoardItem_c *)v7;
  sub_1C9403C(p_fields, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


void TerminalPramsManager___c__DisplayClass763_0___ctor(
        TerminalPramsManager___c__DisplayClass763_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


QuestEntity_o *TerminalPramsManager___c__DisplayClass763_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass763_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_1C942F0(0, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0);
}


bool TerminalPramsManager___c__DisplayClass763_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass763_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  NetworkManager_c *v6; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D29C6D & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D29C6D = 1;
  }
  entity = 0;
  userQuestMaster = this->fields.userQuestMaster;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1C942F0(v6, v);
  }
  return 1;
}