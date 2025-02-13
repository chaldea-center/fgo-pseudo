void __fastcall MissionInfoMaker___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct MissionInfoMaker_StaticFields *static_fields; // x0
  int64_t v8; // x1
  int64_t v9; // x1
  struct MissionInfoMaker_StaticFields *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDF7E2 & 1) == 0 )
  {
    sub_1C21E38(&MissionInfoMaker_TypeInfo);
    sub_1C21E38(&StringLiteral_17550/*"bit_present_get{0}"*/);
    sub_1C21E38(&StringLiteral_6016/*"Effect/Talk/bit_present_get{0}"*/);
    byte_4BDF7E2 = 1;
  }
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  static_fields->MINI_ICON_SHOW_PRIORITY = 100;
  v8 = StringLiteral_6016/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_6016/*"Effect/Talk/bit_present_get{0}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->ITEM_GET_ASSET_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_17550/*"bit_present_get{0}"*/;
  v10 = MissionInfoMaker_TypeInfo->static_fields;
  v10->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_17550/*"bit_present_get{0}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v10->ITEM_GET_EFFECT_NAME, v9, v11, v12, v13, v14, v15, v16);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *__fastcall MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v5; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *Item; // x0
  __int64 v14; // x1
  System_String_o **p_monitor; // x8

  if ( (byte_4BDF7D5 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C21E38(&Method_MissionInfoMaker___c__GetClosedMessage_b__13_0__);
    sub_1C21E38(&MissionInfoMaker___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF7D5 = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v3 = MissionInfoMaker___c_TypeInfo;
    if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v3 = MissionInfoMaker___c_TypeInfo;
    }
    _9__13_0 = (System_Comparison_T__o *)v3->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = MissionInfoMaker___c_TypeInfo;
      }
      v5 = (Il2CppObject *)v3->static_fields->__9;
      _9__13_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__13_0, v5, Method_MissionInfoMaker___c__GetClosedMessage_b__13_0__, 0LL);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__13_0, (int64_t)_9__13_0, v7, v8, v9, v10, v11, v12);
    }
    System_Collections_Generic_List_object___Sort_56953720(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__13_0,
      (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1C22094(0LL, v14);
    p_monitor = (System_String_o **)&Item[4].monitor;
  }
  else
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_monitor;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__GetCommandCodeData(
        GetCommandCodes_array *commandCodeList,
        GetCommandCodes_o **data,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  __int64 v15; // x26
  GetCommandCodes_o *v16; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4BDF7DF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF7DF = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)data, 0LL, *(int64_t *)&commandCodeId, (int32_t)method, v4, v5, v6, v7);
  if ( !commandCodeList || !*(_QWORD *)&commandCodeList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1C22094(Instance, v12);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v15 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v15 >= max_length )
      sub_1C2209C(Instance, v12);
    v16 = commandCodeList->m_Items[v15];
    if ( !v16 || !v14 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v14,
                                 &entity,
                                 v16->fields.userCommandCodeId,
                                 (const MethodInfo_325E370 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = klass;
      *(_QWORD *)&v27.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v27, 0LL);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
  *data = v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)data, (int64_t)v16, v19, v20, v21, v22, v23, v24);
  return 1;
}


System_String_o *__fastcall MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  System_Comparison_T__o *_9__12_0; // x20
  Il2CppObject *v5; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *Item; // x0
  __int64 v14; // x1
  System_String_o **v15; // x8

  if ( (byte_4BDF7D4 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C21E38(&Method_MissionInfoMaker___c__GetConditionMessage_b__12_0__);
    sub_1C21E38(&MissionInfoMaker___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF7D4 = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v3 = MissionInfoMaker___c_TypeInfo;
    if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v3 = MissionInfoMaker___c_TypeInfo;
    }
    _9__12_0 = (System_Comparison_T__o *)v3->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = MissionInfoMaker___c_TypeInfo;
      }
      v5 = (Il2CppObject *)v3->static_fields->__9;
      _9__12_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__12_0, v5, Method_MissionInfoMaker___c__GetConditionMessage_b__12_0__, 0LL);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__12_0;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)_9__12_0, v7, v8, v9, v10, v11, v12);
    }
    System_Collections_Generic_List_object___Sort_56953720(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__12_0,
      (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1C22094(0LL, v14);
    v15 = (System_String_o **)&Item[4];
  }
  else
  {
    v15 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v15;
}


int32_t __fastcall MissionInfoMaker__GetConditionMessageType(int32_t progressType, const MethodInfo *method)
{
  if ( (unsigned int)(progressType - 2) > 2 )
    return 2;
  else
    return dword_C39D94[progressType - 2];
}


System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *__fastcall MissionInfoMaker__GetEventMissionConditionGroup(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  EventMissionConditionEntity_array *MissionCondList; // x19
  System_Collections_Generic_Dictionary_int__object__o *v8; // x20
  int max_length; // w8
  const MethodInfo_32B5C40 **v10; // x24
  const MethodInfo_32B5C40 **v11; // x28
  const MethodInfo_32B59AC **v12; // x29
  void **v13; // x26
  unsigned int v14; // w25
  int64_t v15; // x21
  int32_t v16; // w22
  System_Collections_Generic_Dictionary_int__object__o *v17; // x23
  void **v18; // x19
  const MethodInfo_32B59AC **v19; // x26
  const MethodInfo_32B5C40 **v20; // x29
  const MethodInfo_32B5C40 **v21; // x28
  Il2CppObject *Item; // x0
  int32_t v23; // w22
  System_Collections_Generic_Dictionary_int__object__o *v24; // x23
  System_Collections_Generic_List_object__o *v25; // x24
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppClass *klass; // x8
  _QWORD *v33; // x9
  __int64 monitor_low; // x10
  void **v35; // x8
  EventMissionConditionEntity_array *v37; // [xsp+8h] [xbp-68h]

  if ( (byte_4BDF7D1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF7D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0LL);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_25;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v10 = (const MethodInfo_32B5C40 **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v11 = (const MethodInfo_32B5C40 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v12 = (const MethodInfo_32B59AC **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v13 = &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
    v14 = 0;
    v37 = MissionCondList;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C2209C(Instance, v6);
      v15 = (int64_t)MissionCondList->m_Items[v14];
      if ( !v15 || !v8 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v8, *(_DWORD *)(v15 + 20), *v10) )
      {
        v16 = *(_DWORD *)(v15 + 20);
        v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
        System_Collections_Generic_Dictionary_int__object____ctor(
          v17,
          (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v8,
          v16,
          (Il2CppObject *)v17,
          (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v8,
                   *(_DWORD *)(v15 + 20),
                   (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              *(_DWORD *)(v15 + 36),
              *v11) )
      {
        v18 = v13;
        v19 = v12;
        v20 = v11;
        v21 = v10;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v8,
                 *(_DWORD *)(v15 + 20),
                 (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        v23 = *(_DWORD *)(v15 + 36);
        v24 = (System_Collections_Generic_Dictionary_int__object__o *)Item;
        v25 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v25,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v24 )
          break;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v24,
          v23,
          (Il2CppObject *)v25,
          (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v10 = v21;
        v11 = v20;
        v12 = v19;
        v13 = v18;
        MissionCondList = v37;
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v8,
                   *(_DWORD *)(v15 + 20),
                   (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                   *(_DWORD *)(v15 + 36),
                   *v12);
      if ( !Instance )
        break;
      klass = Instance[1].klass;
      v33 = *v13;
      ++HIDWORD(Instance[1].monitor);
      if ( !klass )
        break;
      monitor_low = SLODWORD(Instance[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v15,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &klass->_1.image + monitor_low;
        LODWORD(Instance[1].monitor) = monitor_low + 1;
        v35[4] = (void *)v15;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), v15, v26, v27, v28, v29, v30, v31);
      }
      max_length = MissionCondList->max_length;
      if ( (int)++v14 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v8;
    }
LABEL_25:
    sub_1C22094(Instance, v6);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v8;
}


GiftEntity_array *__fastcall MissionInfoMaker__GetIconGiftEntities(int32_t giftId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  GiftEntity_array *GiftListById; // x0
  MissionInfoMaker___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *_9__20_0; // x20
  Il2CppObject *v9; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4BDF7DB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C21E38(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C21E38(&Method_MissionInfoMaker___c__GetIconGiftEntities_b__20_0__);
    sub_1C21E38(&MissionInfoMaker___c_TypeInfo);
    byte_4BDF7DB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v4);
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, giftId, 0LL);
  v6 = MissionInfoMaker___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v6 = MissionInfoMaker___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__bool__o *)v6->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = MissionInfoMaker___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__20_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__20_0, v9, Method_MissionInfoMaker___c__GetIconGiftEntities_b__20_0__, 0LL);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_GiftEntity__bool__o *)_9__20_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__20_0,
      (int64_t)_9__20_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__20_0,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  return (GiftEntity_array *)System_Linq_Enumerable__ToArray_object_(
                               v17,
                               (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
}


GiftEntity_o *__fastcall MissionInfoMaker__GetIconGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  System_Func_object__bool__o *_9__19_0; // x20
  Il2CppObject *v5; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  MissionInfoMaker___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__int__o *_9__19_1; // x20
  Il2CppObject *v17; // x21
  struct MissionInfoMaker___c_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4BDF7DA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_GiftEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_GiftEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C21E38(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_GiftEntity__int__TypeInfo);
    sub_1C21E38(&Method_MissionInfoMaker___c__GetIconGiftEntity_b__19_0__);
    sub_1C21E38(&Method_MissionInfoMaker___c__GetIconGiftEntity_b__19_1__);
    sub_1C21E38(&MissionInfoMaker___c_TypeInfo);
    byte_4BDF7DA = 1;
  }
  v3 = MissionInfoMaker___c_TypeInfo;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v3 = MissionInfoMaker___c_TypeInfo;
  }
  _9__19_0 = (System_Func_object__bool__o *)v3->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = MissionInfoMaker___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__19_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__19_0, v5, Method_MissionInfoMaker___c__GetIconGiftEntity_b__19_0__, 0LL);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_GiftEntity__bool__o *)_9__19_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__19_0, (int64_t)_9__19_0, v7, v8, v9, v10, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (System_Func_TSource__bool__o *)_9__19_0,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v14 = MissionInfoMaker___c_TypeInfo;
  v15 = v13;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v14 = MissionInfoMaker___c_TypeInfo;
  }
  _9__19_1 = (System_Func_object__int__o *)v14->static_fields->__9__19_1;
  if ( !_9__19_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MissionInfoMaker___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__19_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_GiftEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__19_1, v17, Method_MissionInfoMaker___c__GetIconGiftEntity_b__19_1__, 0LL);
    v18 = MissionInfoMaker___c_TypeInfo->static_fields;
    v18->__9__19_1 = (struct System_Func_GiftEntity__int__o *)_9__19_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v18->__9__19_1, (int64_t)_9__19_1, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v15,
                                                               (System_Func_TSource__TKey__o *)_9__19_1,
                                                               (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_GiftEntity__int___);
  return (GiftEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                           v25,
                           (const MethodInfo_2FD26B0 *)Method_System_Linq_Enumerable_FirstOrDefault_GiftEntity___);
}


bool __fastcall MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_4BDF7D7 & 1) == 0 )
  {
    sub_1C21E38(&UserMissionNewManager_TypeInfo);
    byte_4BDF7D7 = 1;
  }
  if ( (progStatus & 0xFFFFFFFE) != 2 )
    return 0;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  return UserMissionNewManager__SetIsNewMissionInfo(missionId, 0LL);
}


int32_t __fastcall MissionInfoMaker__GetItemGetEffectId(int32_t itemId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  MissionInfoMaker_c *v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF7DC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&MissionInfoMaker_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_21260/*"itemGetEffectId"*/);
    byte_4BDF7DC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v5 = entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    if ( v5 )
      return ItemEntity__getScript(
               (ItemEntity_o *)v5,
               (System_String_o *)StringLiteral_21260/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0LL);
LABEL_14:
    sub_1C22094(Instance, v4);
  }
  v7 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v7 = MissionInfoMaker_TypeInfo;
  }
  return v7->static_fields->ITEM_GET_EFFECT_DEFAULT_ID;
}


bool __fastcall MissionInfoMaker__GetMissionConditionGroupProgress(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionConditionEntity__o *v2; // x19
  __int64 v3; // x1
  int v4; // w19
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  v2 = entities;
  if ( (byte_4BDF7D2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    byte_4BDF7D2 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2 )
    sub_1C22094(entities, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)v2,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1C22094(0LL, v3);
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v6.fields._current, 0LL) )
    {
      v4 = 4;
      goto LABEL_10;
    }
  }
  v4 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v4 != 4;
}


EventMissionConditionEntity_o *__fastcall MissionInfoMaker__GetMissionNotClearConditionInfo(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  EventMissionConditionEntity_o *result; // x0
  EventMissionConditionEntity_o *v6; // x19
  EventMissionConditionEntity_o *v7; // x22
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  MissionInfoMaker___c_c *v13; // x8
  Il2CppObject *currentValue; // x19
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v16; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x20
  int v27; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_4BDF7D0 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C21E38(&MissionInfoMaker_TypeInfo);
    sub_1C21E38(&Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__7_0__);
    sub_1C21E38(&MissionInfoMaker___c_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_4BDF7D0 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  memset(&v31, 0, sizeof(v31));
  memset(&v29, 0, sizeof(v29));
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  result = (EventMissionConditionEntity_o *)MissionInfoMaker__GetEventMissionConditionGroup(eventId, missionId, method);
  if ( result )
  {
    v6 = result;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)result,
           (const MethodInfo_32B56FC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    {
      return 0LL;
    }
    else
    {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator(
        &v28,
        (System_Collections_Generic_Dictionary_int__object__o *)v6,
        (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
      v7 = 0LL;
      v31 = v28;
      while ( 1 )
      {
        if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                &v31,
                (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
            &v31,
            (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
          return 0LL;
        }
        if ( LODWORD(v31.fields._current.fields.key) == 4 )
        {
          if ( !v31.fields._current.fields.value )
            sub_1C22094(0LL, v8);
          Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                     (System_Collections_Generic_Dictionary_int__object__o *)v31.fields._current.fields.value,
                     (const MethodInfo_32B585C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
          if ( !Values )
            sub_1C22094(0LL, v10);
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v28,
            Values,
            (const MethodInfo_397E064 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
          *(_OWORD *)&v30.fields._dictionary = *(_OWORD *)&v28.fields._dictionary;
          v30.fields._currentValue = v28.fields._current.fields.key;
          while ( 1 )
          {
            v11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                    &v30,
                    (const MethodInfo_34054B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
            if ( !v11 )
              break;
            v13 = MissionInfoMaker___c_TypeInfo;
            currentValue = v30.fields._currentValue;
            if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
              v13 = MissionInfoMaker___c_TypeInfo;
            }
            _9__7_0 = (System_Comparison_T__o *)v13->static_fields->__9__7_0;
            if ( !_9__7_0 )
            {
              if ( !v13->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v13);
                v13 = MissionInfoMaker___c_TypeInfo;
              }
              v16 = (Il2CppObject *)v13->static_fields->__9;
              _9__7_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionConditionEntity__TypeInfo);
              System_Comparison_object____ctor(
                _9__7_0,
                v16,
                Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__7_0__,
                0LL);
              static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
              static_fields->__9__7_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__7_0;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
                (int64_t)_9__7_0,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
            }
            if ( !currentValue )
              sub_1C22094(v11, v12);
            System_Collections_Generic_List_object___Sort_56953720(
              (System_Collections_Generic_List_object__o *)currentValue,
              _9__7_0,
              (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v28,
              (System_Collections_Generic_List_object__o *)currentValue,
              (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
            *(_OWORD *)&v29.fields._list = *(_OWORD *)&v28.fields._dictionary;
            v29.fields._current = v28.fields._current.fields.key;
            while ( 1 )
            {
              v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v29,
                      (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
              if ( !v24 )
                break;
              current = v29.fields._current;
              if ( !v29.fields._current )
                sub_1C22094(v24, v25);
              if ( !EventMissionConditionEntity__getMissionProgress(
                      (EventMissionConditionEntity_o *)v29.fields._current,
                      0LL) )
              {
                v27 = 11;
                v7 = (EventMissionConditionEntity_o *)current;
                goto LABEL_27;
              }
            }
            v27 = 6;
LABEL_27:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v29,
              (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
            if ( v27 != 6 )
              goto LABEL_31;
          }
          v27 = 4;
LABEL_31:
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
            &v30,
            (const MethodInfo_34054B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
          if ( (v27 | 4) != 4 )
            break;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v31,
        (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      if ( v27 == 11 )
        return v7;
      else
        return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MissionInfoMaker__GetMissionProgressType(
        int32_t eventId,
        int32_t missionId,
        bool isNowMission,
        bool ignoreStartCondition,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *EventMissionConditionGroup; // x0
  System_Collections_Generic_Dictionary_int__object__o *v10; // x19
  bool v11; // w29
  __int64 v12; // x1
  int key; // w23
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  bool v17; // w20
  Il2CppObject *currentValue; // x21
  int32_t v20; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v22; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_4BDF7CF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_1C21E38(&MissionInfoMaker_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_4BDF7CF = 1;
  }
  memset(&v23, 0, sizeof(v23));
  memset(&v22, 0, sizeof(v22));
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  EventMissionConditionGroup = MissionInfoMaker__GetEventMissionConditionGroup(
                                 eventId,
                                 missionId,
                                 (const MethodInfo *)isNowMission);
  if ( !EventMissionConditionGroup )
    return 4;
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)EventMissionConditionGroup;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)EventMissionConditionGroup,
         (const MethodInfo_32B56FC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v21,
    v10,
    (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v23 = v21;
  v11 = !isNowMission && ignoreStartCondition;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v23,
            (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v23,
        (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      goto LABEL_20;
    }
    key = (int)v23.fields._current.fields.key;
    if ( !v11 || LODWORD(v23.fields._current.fields.key) != 3 )
    {
      if ( !v23.fields._current.fields.value )
        sub_1C22094(0LL, v12);
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 (System_Collections_Generic_Dictionary_int__object__o *)v23.fields._current.fields.value,
                 (const MethodInfo_32B585C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_1C22094(0LL, v15);
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v21,
        Values,
        (const MethodInfo_397E064 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      *(_OWORD *)&v22.fields._dictionary = *(_OWORD *)&v21.fields._dictionary;
      v22.fields._currentValue = v21.fields._current.fields.key;
      do
      {
        v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                &v22,
                (const MethodInfo_34054B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
        if ( !v17 )
          break;
        currentValue = v22.fields._currentValue;
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      }
      while ( !MissionInfoMaker__GetMissionConditionGroupProgress(
                 (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
                 v16) );
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
        &v22,
        (const MethodInfo_34054B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      if ( !v17 )
        break;
    }
  }
  v20 = key - 1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v23,
    (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  if ( key != 5 )
    return v20;
LABEL_20:
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v21,
    v10,
    (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v23 = v21;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v23,
            (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    if ( LODWORD(v23.fields._current.fields.key) == 4 )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v23,
        (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      return 4;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v23,
    (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  return 0;
}


int32_t __fastcall MissionInfoMaker__GetProgStatus(
        int32_t eventId,
        int32_t missionId,
        int32_t progressType,
        bool isNowMission,
        const MethodInfo *method)
{
  UserEventMissionEntity_array *Instance; // x0
  __int64 v11; // x1
  int max_length; // w8
  int v13; // w9
  UserEventMissionEntity_o *v14; // x10

  if ( (byte_4BDF7D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF7D3 = 1;
  }
  if ( progressType == 4 )
  {
    Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1C22094(Instance, v11);
    }
    max_length = Instance->max_length;
    if ( max_length < 1 )
    {
      return 3;
    }
    else
    {
      v13 = 0;
      while ( 1 )
      {
        if ( max_length == v13 )
          sub_1C2209C(Instance, v11);
        v14 = Instance->m_Items[v13];
        if ( !v14 )
          goto LABEL_22;
        if ( v14->fields.missionId == missionId )
          break;
        if ( max_length == ++v13 )
          return 3;
      }
      if ( v14->fields.missionProgressType == 4 )
        return 3;
      else
        return 4;
    }
  }
  else if ( progressType == 3 )
  {
    if ( isNowMission )
      return 2;
    else
      return 5;
  }
  else
  {
    return progressType == 2;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MissionInfoMaker__GetProgressText(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        int32_t progStatus,
        int64_t *progressNum,
        int64_t *targetNum,
        const MethodInfo *method)
{
  void *Item; // x0
  System_Comparison_T__o *v10; // x23
  Il2CppObject *v11; // x24
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int v19; // w23
  unsigned int v20; // w22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  int64_t v24; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  int64_t v27; // x8
  int64_t monitor; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  int64_t v38; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDF7D6 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C21E38(&Method_MissionInfoMaker___c__GetProgressText_b__14_0__);
    sub_1C21E38(&MissionInfoMaker___c_TypeInfo);
    sub_1C21E38(&StringLiteral_25416/*"{0:N0}/{1:N0}"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF7D6 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  *progressNum = 0LL;
  *targetNum = 0LL;
  Item = MissionInfoMaker___c_TypeInfo;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    Item = MissionInfoMaker___c_TypeInfo;
  }
  v10 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 32LL);
  if ( !v10 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = MissionInfoMaker___c_TypeInfo;
    }
    v11 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v10 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(v10, v11, Method_MissionInfoMaker___c__GetProgressText_b__14_0__, 0LL);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v10;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__14_0, (int64_t)v10, v13, v14, v15, v16, v17, v18);
  }
  if ( !entityList
    || (System_Collections_Generic_List_object___Sort_56953720(
          (System_Collections_Generic_List_object__o *)entityList,
          v10,
          (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)entityList,
                  0,
                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__)) == 0LL) )
  {
    sub_1C22094(Item, *(_QWORD *)&progStatus);
  }
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v19 = *((_DWORD *)Item + 9);
  v20 = progStatus - 3;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v21 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_1C22094(v21, v22);
    if ( HIDWORD(v40.fields._current[2].klass) == v19 )
    {
      v24 = *progressNum;
      if ( LODWORD(v40.fields._current[2].monitor) == 12 )
      {
        ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                  (EventMissionConditionEntity_o *)v40.fields._current,
                                  0LL);
        p_monitor = targetNum;
        *progressNum = v24 + ProgressNumByDateType;
        v27 = 1LL;
      }
      else
      {
        if ( v20 >= 2 )
          monitor = EventMissionConditionEntity__getProgressNum(
                      (EventMissionConditionEntity_o *)v40.fields._current,
                      0LL);
        else
          monitor = (int64_t)v40.fields._current[3].monitor;
        *progressNum = monitor + v24;
        v27 = *targetNum;
        p_monitor = (int64_t *)&current[3].monitor;
      }
      *targetNum = *p_monitor + v27;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v39.fields._list = (struct System_Collections_Generic_List_T__o *)*progressNum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v39, v30, v31, v32);
  v38 = *targetNum;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v38, v34, v35, v36);
  return System_String__Format_63129848((System_String_o *)StringLiteral_25416/*"{0:N0}/{1:N0}"*/, v33, v37, 0LL);
}


float __fastcall MissionInfoMaker__GetProgressValue(
        int32_t progStatus,
        int64_t progNum,
        int64_t targetNum,
        const MethodInfo *method)
{
  float result; // s0

  result = 0.0;
  if ( (unsigned int)progStatus >= 2 )
    return (float)progNum / (float)targetNum;
  return result;
}


GiftEntity_o *__fastcall MissionInfoMaker__GetSubGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  GiftEntity_array *v2; // x19
  int max_length; // w8
  __int64 v4; // x21
  GiftEntity_o *v5; // x20
  int32_t priority; // w24

  v2 = entities;
  if ( (byte_4BDF7D8 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_1C21E38(&MissionInfoMaker_TypeInfo);
    byte_4BDF7D8 = 1;
  }
  if ( !v2 )
    return 0LL;
  max_length = v2->max_length;
  if ( max_length < 1 )
    return 0LL;
  v4 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(entities, method);
    v5 = v2->m_Items[v4];
    if ( !v5 )
      sub_1C22094(entities, method);
    entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    priority = v5->fields.priority;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    }
    if ( (GiftEntity_c *)priority == entities->m_Items[19]->klass )
      break;
    max_length = v2->max_length;
    if ( (int)++v4 >= max_length )
      return 0LL;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__GetSvtListData(
        GetSvts_array *svtList,
        GetSvts_o **data,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  __int64 v15; // x26
  GetSvts_o *v16; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4BDF7DE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF7DE = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)data, 0LL, *(int64_t *)&svtId, (int32_t)method, v4, v5, v6, v7);
  if ( !svtList || !*(_QWORD *)&svtList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1C22094(Instance, v12);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v15 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v15 >= max_length )
      sub_1C2209C(Instance, v12);
    v16 = svtList->m_Items[v15];
    if ( !v16 || !v14 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v14,
                                 &entity,
                                 v16->fields.userSvtId,
                                 (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = klass;
      *(_QWORD *)&v27.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v27, 0LL);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
  *data = v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)data, (int64_t)v16, v19, v20, v21, v22, v23, v24);
  return 1;
}


void __fastcall MissionInfoMaker__OpenCostumeReleaseDetail(
        ServantCostumeEntity_o *costumeEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21

  if ( (byte_4BDF7E0 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_8868/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    byte_4BDF7E0 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8868/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
  if ( !costumeEntity
    || (v7 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0LL),
        (Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C22094(Instance, v6);
  }
  CommonUI__OpenItemDetailDialog_31205140(
    (CommonUI_o *)Instance,
    v7,
    costumeEntity->fields.costumeReleaseDetail,
    callback,
    0LL);
}


void __fastcall MissionInfoMaker__OpenEquipDetail(
        EquipEntity_o *equipEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v9; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *detail; // x8
  System_String_o *v11; // x20

  if ( (byte_4BDF7E1 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDF7E1 = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_8;
  v7 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(name, 0LL);
  detail = equipEntity->fields.detail;
  v11 = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(detail, 0LL);
  if ( !v7 )
LABEL_8:
    sub_1C22094(Instance, v6);
  CommonUI__OpenItemDetailDialog_31205140(v7, v11, Instance, callback, 0LL);
}


void __fastcall MissionInfoMaker__SetGiftInfo(
        GiftEntity_o *giftEntity,
        ItemEntity_o **itemEntity,
        ServantEntity_o **servantEntity,
        CommandCodeEntity_o **commandCodeEntity,
        ServantCostumeEntity_o **servantCostumeEntity,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  int32_t objectId; // w2
  __int64 *v34; // x8
  Il2CppObject **v35; // x1

  if ( (byte_4BDF7D9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF7D9 = 1;
  }
  *itemEntity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)itemEntity,
    0LL,
    (int64_t)servantEntity,
    (int32_t)commandCodeEntity,
    (System_String_o *)servantCostumeEntity,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  *servantEntity = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)servantEntity, 0LL, v13, v14, v15, v16, v17, v18);
  *commandCodeEntity = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)commandCodeEntity, 0LL, v19, v20, v21, v22, v23, v24);
  *servantCostumeEntity = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)servantCostumeEntity, 0LL, v25, v26, v27, v28, v29, v30);
  if ( !giftEntity )
LABEL_18:
    sub_1C22094(Instance, v32);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v34 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v35 = (Il2CppObject **)servantEntity;
      goto LABEL_17;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v34 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v35 = (Il2CppObject **)itemEntity;
      goto LABEL_17;
    case 9:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_18;
      ServantCostumeMaster__TryGetEntity(
        (ServantCostumeMaster_o *)Instance,
        servantCostumeEntity,
        giftEntity->fields.objectId / 100,
        giftEntity->fields.objectId % 100,
        0LL);
      return;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v34 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v35 = (Il2CppObject **)commandCodeEntity;
LABEL_17:
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        v35,
        objectId,
        (const MethodInfo_325BE14 *)*v34);
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__TryGetSvtListData(
        GetSvts_array *svtList,
        GetSvts_o **data,
        int32_t svtId,
        int32_t giftType,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  __int64 v16; // x27
  bool v17; // w19
  GetSvts_o *v18; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int32_t type; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4BDF7DD & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF7DD = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)data,
    0LL,
    *(int64_t *)&svtId,
    giftType,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( svtList && *(_QWORD *)&svtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_30:
      sub_1C22094(Instance, v13);
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v16 = 0LL;
      v17 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
          sub_1C2209C(Instance, v13);
        v18 = svtList->m_Items[v16];
        if ( !v18 || !v15 )
          goto LABEL_30;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     v15,
                                     &entity,
                                     v18->fields.userSvtId,
                                     (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_30;
          klass = entity[5].klass;
          monitor = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v30.fields.currentCryptoKey = klass;
          *(_QWORD *)&v30.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v30, 0LL);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v18;
            sub_1C21DDC((PartyOrganizationUtility_o *)data, (int64_t)v18, v21, v22, v23, v24, v25, v26);
            if ( Gift__IsEventSvtJoin(type, 0LL) )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0LL);
              v17 = 1;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v17;
            }
            else if ( type == 1 )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0LL);
              v17 = 1;
              if ( ((unsigned __int8)Instance & 1) == 0 )
                return v17;
            }
            else
            {
              Instance = (Il2CppObject *)Gift__IsServant(type, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 1;
            }
          }
        }
        max_length = svtList->max_length;
        if ( (int)++v16 >= max_length )
          return v17;
      }
    }
  }
  return 0;
}


void __fastcall MissionInfoMaker_MissionClearConditionInfo___ctor(
        MissionInfoMaker_MissionClearConditionInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionInfoMaker___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF7E3 & 1) == 0 )
  {
    sub_1C21E38(&MissionInfoMaker___c_TypeInfo);
    byte_4BDF7E3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MissionInfoMaker___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MissionInfoMaker___c_TypeInfo->static_fields->__9 = (struct MissionInfoMaker___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)MissionInfoMaker___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MissionInfoMaker___c___ctor(MissionInfoMaker___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MissionInfoMaker___c___GetClosedMessage_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetConditionMessage_b__12_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}


bool __fastcall MissionInfoMaker___c___GetIconGiftEntities_b__20_0(
        MissionInfoMaker___c_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  int32_t priority; // w19
  MissionInfoMaker_c *v5; // x0

  if ( (byte_4BDF7E5 & 1) == 0 )
  {
    this = (MissionInfoMaker___c_o *)sub_1C21E38(&MissionInfoMaker_TypeInfo);
    byte_4BDF7E5 = 1;
  }
  if ( !entity )
    sub_1C22094(this, entity);
  priority = entity->fields.priority;
  v5 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v5 = MissionInfoMaker_TypeInfo;
  }
  return priority != v5->static_fields->MINI_ICON_SHOW_PRIORITY;
}


bool __fastcall MissionInfoMaker___c___GetIconGiftEntity_b__19_0(
        MissionInfoMaker___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  int32_t priority; // w19
  MissionInfoMaker_c *v5; // x0

  if ( (byte_4BDF7E4 & 1) == 0 )
  {
    this = (MissionInfoMaker___c_o *)sub_1C21E38(&MissionInfoMaker_TypeInfo);
    byte_4BDF7E4 = 1;
  }
  if ( !x )
    sub_1C22094(this, x);
  priority = x->fields.priority;
  v5 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v5 = MissionInfoMaker_TypeInfo;
  }
  return priority != v5->static_fields->MINI_ICON_SHOW_PRIORITY;
}


int32_t __fastcall MissionInfoMaker___c___GetIconGiftEntity_b__19_1(
        MissionInfoMaker___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetMissionNotClearConditionInfo_b__7_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetProgressText_b__14_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}