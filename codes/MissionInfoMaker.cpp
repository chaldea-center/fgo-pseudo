void __fastcall MissionInfoMaker___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct MissionInfoMaker_StaticFields *static_fields; // x0
  int64_t v13; // x1
  int64_t v14; // x1
  struct MissionInfoMaker_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19389 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17433/*"bit_present_get{0}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5972/*"Effect/Talk/bit_present_get{0}"*/, v10, v11);
    byte_4B19389 = 1;
  }
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NORMAL_ICON_PRIORITY = 0x6400000000LL;
  v13 = StringLiteral_5972/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5972/*"Effect/Talk/bit_present_get{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->ITEM_GET_ASSET_NAME, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_17433/*"bit_present_get{0}"*/;
  v15 = MissionInfoMaker_TypeInfo->static_fields;
  v15->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_17433/*"bit_present_get{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15->ITEM_GET_EFFECT_NAME, v14, v16, v17, v18, v19, v20, v21);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *__fastcall MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  MissionInfoMaker___c_c *v17; // x0
  System_Comparison_T__o *_9__14_0; // x20
  Il2CppObject *v19; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Item; // x0
  __int64 v28; // x1
  System_String_o **p_monitor; // x8

  if ( (byte_4B1937D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMissionConditionEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__, v11, v12);
    sub_1BCA7E0(&MissionInfoMaker___c_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B1937D = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v17 = MissionInfoMaker___c_TypeInfo;
    if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, method);
      v17 = MissionInfoMaker___c_TypeInfo;
    }
    _9__14_0 = (System_Comparison_T__o *)v17->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17, method);
        v17 = MissionInfoMaker___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__14_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                             System_Comparison_EventMissionConditionEntity__TypeInfo,
                                             method,
                                             v2,
                                             v3);
      System_Comparison_object____ctor(_9__14_0, v19, Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__, 0LL);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__14_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
        (int64_t)_9__14_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__14_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1BCAA3C(0LL, v28);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  __int64 v21; // x26
  GetCommandCodes_o *v22; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B19386 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, data, *(_QWORD *)&commandCodeId);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B19386 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)data, 0LL, *(int64_t *)&commandCodeId, (int32_t)method, v4, v5, v6, v7);
  if ( !commandCodeList || !*(_QWORD *)&commandCodeList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1BCAA3C(Instance, v18);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v21 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v21 >= max_length )
      sub_1BCAA44(Instance, v18);
    v22 = commandCodeList->m_Items[v21];
    if ( !v22 || !v20 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v20,
                                 &entity,
                                 v22->fields.userCommandCodeId,
                                 (const MethodInfo_31B3040 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
      *(_QWORD *)&v33.fields.currentCryptoKey = klass;
      *(_QWORD *)&v33.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v21 >= max_length )
      return 0;
  }
  *data = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)data, (int64_t)v22, v25, v26, v27, v28, v29, v30);
  return 1;
}


System_String_o *__fastcall MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  MissionInfoMaker___c_c *v17; // x0
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v19; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Item; // x0
  __int64 v28; // x1
  System_String_o **v29; // x8

  if ( (byte_4B1937C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMissionConditionEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__, v11, v12);
    sub_1BCA7E0(&MissionInfoMaker___c_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B1937C = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v17 = MissionInfoMaker___c_TypeInfo;
    if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, method);
      v17 = MissionInfoMaker___c_TypeInfo;
    }
    _9__13_0 = (System_Comparison_T__o *)v17->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17, method);
        v17 = MissionInfoMaker___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__13_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                             System_Comparison_EventMissionConditionEntity__TypeInfo,
                                             method,
                                             v2,
                                             v3);
      System_Comparison_object____ctor(_9__13_0, v19, Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__, 0LL);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
        (int64_t)_9__13_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__13_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1BCAA3C(0LL, v28);
    v29 = (System_String_o **)&Item[4];
  }
  else
  {
    v29 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v29;
}


int32_t __fastcall MissionInfoMaker__GetConditionMessageType(int32_t progressType, const MethodInfo *method)
{
  if ( (unsigned int)(progressType - 2) > 2 )
    return 2;
  else
    return dword_C0DE98[progressType - 2];
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *__fastcall MissionInfoMaker__GetEventMissionConditionGroup(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *Instance; // x0
  __int64 v34; // x1
  EventMissionConditionEntity_array *MissionCondList; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_Dictionary_int__object__o *v39; // x20
  int max_length; // w8
  const MethodInfo_32060D8 **v41; // x24
  const MethodInfo_32060D8 **v42; // x28
  const MethodInfo_3205E44 **v43; // x29
  void **v44; // x26
  unsigned int v45; // w25
  int64_t v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  int32_t v50; // w22
  System_Collections_Generic_Dictionary_int__object__o *v51; // x23
  void **v52; // x19
  const MethodInfo_3205E44 **v53; // x26
  const MethodInfo_32060D8 **v54; // x29
  const MethodInfo_32060D8 **v55; // x28
  Il2CppObject *Item; // x0
  int32_t v57; // w22
  System_Collections_Generic_Dictionary_int__object__o *v58; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Collections_Generic_List_object__o *v62; // x24
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  Il2CppClass *klass; // x8
  _QWORD *v70; // x9
  __int64 monitor_low; // x10
  void **v72; // x8
  EventMissionConditionEntity_array *v74; // [xsp+8h] [xbp-68h]

  if ( (byte_4B19379 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&missionId, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__,
      v17,
      v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__,
      v19,
      v20);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
      v21,
      v22);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    byte_4B19379 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0LL);
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
                                                                  v36,
                                                                  v37,
                                                                  v38);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_25;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v41 = (const MethodInfo_32060D8 **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v42 = (const MethodInfo_32060D8 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v43 = (const MethodInfo_3205E44 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v44 = &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
    v45 = 0;
    v74 = MissionCondList;
    while ( 1 )
    {
      if ( v45 >= max_length )
        sub_1BCAA44(Instance, v34);
      v46 = (int64_t)MissionCondList->m_Items[v45];
      if ( !v46 || !v39 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v39, *(_DWORD *)(v46 + 20), *v41) )
      {
        v50 = *(_DWORD *)(v46 + 20);
        v51 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                        System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo,
                                                                        v47,
                                                                        v48,
                                                                        v49);
        System_Collections_Generic_Dictionary_int__object____ctor(
          v51,
          (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v39,
          v50,
          (Il2CppObject *)v51,
          (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v39,
                   *(_DWORD *)(v46 + 20),
                   (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              *(_DWORD *)(v46 + 36),
              *v42) )
      {
        v52 = v44;
        v53 = v43;
        v54 = v42;
        v55 = v41;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v39,
                 *(_DWORD *)(v46 + 20),
                 (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        v57 = *(_DWORD *)(v46 + 36);
        v58 = (System_Collections_Generic_Dictionary_int__object__o *)Item;
        v62 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                             v59,
                                                             v60,
                                                             v61);
        System_Collections_Generic_List_object____ctor(
          v62,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v58 )
          break;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v58,
          v57,
          (Il2CppObject *)v62,
          (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v41 = v55;
        v42 = v54;
        v43 = v53;
        v44 = v52;
        MissionCondList = v74;
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v39,
                   *(_DWORD *)(v46 + 20),
                   (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                   *(_DWORD *)(v46 + 36),
                   *v43);
      if ( !Instance )
        break;
      klass = Instance[1].klass;
      v70 = *v44;
      ++HIDWORD(Instance[1].monitor);
      if ( !klass )
        break;
      monitor_low = SLODWORD(Instance[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v46,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = &klass->_1.image + monitor_low;
        LODWORD(Instance[1].monitor) = monitor_low + 1;
        v72[4] = (void *)v46;
        sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 4), v46, v63, v64, v65, v66, v67, v68);
      }
      max_length = MissionCondList->max_length;
      if ( (int)++v45 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v39;
    }
LABEL_25:
    sub_1BCAA3C(Instance, v34);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v39;
}


GiftEntity_o *__fastcall MissionInfoMaker__GetIconGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  __int64 v2; // x2
  GiftEntity_array *v3; // x19
  int max_length; // w8
  unsigned int v5; // w21
  GiftEntity_o *v6; // x20
  int32_t priority; // w23

  v3 = entities;
  if ( (byte_4B19382 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_1BCA7E0(&MissionInfoMaker_TypeInfo, method, v2);
    byte_4B19382 = 1;
  }
  if ( !v3 )
    goto LABEL_15;
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1BCAA44(entities, method);
      v6 = v3->m_Items[v5];
      if ( !v6 )
        break;
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
      priority = v6->fields.priority;
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
        entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
      }
      if ( (GiftEntity_c *)priority == entities->m_Items[19]->klass )
        return v6;
      max_length = v3->max_length;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_15:
    sub_1BCAA3C(entities, method);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_4B1937F & 1) == 0 )
  {
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, *(_QWORD *)&progStatus, method);
    byte_4B1937F = 1;
  }
  if ( (progStatus & 0xFFFFFFFE) != 2 )
    return 0;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, *(_QWORD *)&progStatus);
  return UserMissionNewManager__SetIsNewMissionInfo(missionId, 0LL);
}


int32_t __fastcall MissionInfoMaker__GetItemGetEffectId(int32_t itemId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x19
  MissionInfoMaker_c *v16; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19383 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_21109/*"itemGetEffectId"*/, v10, v11);
    byte_4B19383 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v14 = entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v13);
    if ( v14 )
      return ItemEntity__getScript(
               (ItemEntity_o *)v14,
               (System_String_o *)StringLiteral_21109/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0LL);
LABEL_14:
    sub_1BCAA3C(Instance, v13);
  }
  v16 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v13);
    v16 = MissionInfoMaker_TypeInfo;
  }
  return v16->static_fields->ITEM_GET_EFFECT_DEFAULT_ID;
}


bool __fastcall MissionInfoMaker__GetMissionConditionGroupProgress(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entities,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_EventMissionConditionEntity__o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  int v11; // w19
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  v3 = entities;
  if ( (byte_4B1937A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v6, v7);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_1BCA7E0(
                                                                                   &Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__,
                                                                                   v8,
                                                                                   v9);
    byte_4B1937A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !v3 )
    sub_1BCAA3C(entities, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)v3,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1BCAA3C(0LL, v10);
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v13.fields._current, 0LL) )
    {
      v11 = 4;
      goto LABEL_10;
    }
  }
  v11 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v11 != 4;
}


// local variable allocation has failed, the output may be wrong!
EventMissionConditionEntity_o *__fastcall MissionInfoMaker__GetMissionNotClearConditionInfo(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  EventMissionConditionEntity_o *result; // x0
  EventMissionConditionEntity_o *v46; // x19
  EventMissionConditionEntity_o *v47; // x22
  __int64 v48; // x1
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v50; // x1
  _BOOL8 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  MissionInfoMaker___c_c *v55; // x8
  Il2CppObject *currentValue; // x19
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v58; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *current; // x20
  int v69; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v70; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v72; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v73; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_4B19378 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMissionConditionEntity__TypeInfo, *(_QWORD *)&missionId, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__,
      v15,
      v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__,
      v19,
      v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__,
      v21,
      v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__,
      v23,
      v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v25, v26);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__,
      v27,
      v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__,
      v29,
      v30);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__,
      v31,
      v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v35, v36);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__, v39, v40);
    sub_1BCA7E0(&MissionInfoMaker___c_TypeInfo, v41, v42);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__,
      v43,
      v44);
    byte_4B19378 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  memset(&v73, 0, sizeof(v73));
  memset(&v71, 0, sizeof(v71));
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, *(_QWORD *)&missionId);
  result = (EventMissionConditionEntity_o *)MissionInfoMaker__GetEventMissionConditionGroup(eventId, missionId, method);
  if ( result )
  {
    v46 = result;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)result,
           (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    {
      return 0LL;
    }
    else
    {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator(
        &v70,
        (System_Collections_Generic_Dictionary_int__object__o *)v46,
        (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
      v47 = 0LL;
      v73 = v70;
      while ( 1 )
      {
        if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                &v73,
                (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
            &v73,
            (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
          return 0LL;
        }
        if ( LODWORD(v73.fields._current.fields.key) == 4 )
        {
          if ( !v73.fields._current.fields.value )
            sub_1BCAA3C(0LL, v48);
          Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                     (System_Collections_Generic_Dictionary_int__object__o *)v73.fields._current.fields.value,
                     (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
          if ( !Values )
            sub_1BCAA3C(0LL, v50);
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v70,
            Values,
            (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
          *(_OWORD *)&v72.fields._dictionary = *(_OWORD *)&v70.fields._dictionary;
          v72.fields._currentValue = v70.fields._current.fields.key;
          while ( 1 )
          {
            v51 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                    &v72,
                    (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
            if ( !v51 )
              break;
            v55 = MissionInfoMaker___c_TypeInfo;
            currentValue = v72.fields._currentValue;
            if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, v52);
              v55 = MissionInfoMaker___c_TypeInfo;
            }
            _9__8_0 = (System_Comparison_T__o *)v55->static_fields->__9__8_0;
            if ( !_9__8_0 )
            {
              if ( !v55->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v55, v52);
                v55 = MissionInfoMaker___c_TypeInfo;
              }
              v58 = (Il2CppObject *)v55->static_fields->__9;
              _9__8_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                                    System_Comparison_EventMissionConditionEntity__TypeInfo,
                                                    v52,
                                                    v53,
                                                    v54);
              System_Comparison_object____ctor(
                _9__8_0,
                v58,
                Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__,
                0LL);
              static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
              static_fields->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
                (int64_t)_9__8_0,
                v60,
                v61,
                v62,
                v63,
                v64,
                v65);
            }
            if ( !currentValue )
              sub_1BCAA3C(v51, v52);
            System_Collections_Generic_List_object___Sort_56244000(
              (System_Collections_Generic_List_object__o *)currentValue,
              _9__8_0,
              (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v70,
              (System_Collections_Generic_List_object__o *)currentValue,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
            *(_OWORD *)&v71.fields._list = *(_OWORD *)&v70.fields._dictionary;
            v71.fields._current = v70.fields._current.fields.key;
            while ( 1 )
            {
              v66 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v71,
                      (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
              if ( !v66 )
                break;
              current = v71.fields._current;
              if ( !v71.fields._current )
                sub_1BCAA3C(v66, v67);
              if ( !EventMissionConditionEntity__getMissionProgress(
                      (EventMissionConditionEntity_o *)v71.fields._current,
                      0LL) )
              {
                v69 = 11;
                v47 = (EventMissionConditionEntity_o *)current;
                goto LABEL_27;
              }
            }
            v69 = 6;
LABEL_27:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v71,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
            if ( v69 != 6 )
              goto LABEL_31;
          }
          v69 = 4;
LABEL_31:
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
            &v72,
            (const MethodInfo_335738C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
          if ( (v69 | 4) != 4 )
            break;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v73,
        (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      if ( v69 == 11 )
        return v47;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *EventMissionConditionGroup; // x0
  System_Collections_Generic_Dictionary_int__object__o *v34; // x19
  bool v35; // w29
  __int64 v36; // x1
  int key; // w23
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x1
  bool v41; // w20
  Il2CppObject *currentValue; // x21
  int32_t v44; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v46; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_4B19377 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__,
      *(_QWORD *)&missionId,
      isNowMission);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__,
      v17,
      v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__,
      v19,
      v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__,
      v21,
      v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__,
      v23,
      v24);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__,
      v25,
      v26);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__,
      v27,
      v28);
    sub_1BCA7E0(&MissionInfoMaker_TypeInfo, v29, v30);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__,
      v31,
      v32);
    byte_4B19377 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, *(_QWORD *)&missionId);
  EventMissionConditionGroup = MissionInfoMaker__GetEventMissionConditionGroup(
                                 eventId,
                                 missionId,
                                 (const MethodInfo *)isNowMission);
  if ( !EventMissionConditionGroup )
    return 4;
  v34 = (System_Collections_Generic_Dictionary_int__object__o *)EventMissionConditionGroup;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)EventMissionConditionGroup,
         (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v45,
    v34,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v47 = v45;
  v35 = !isNowMission && ignoreStartCondition;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v47,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v47,
        (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      goto LABEL_20;
    }
    key = (int)v47.fields._current.fields.key;
    if ( !v35 || LODWORD(v47.fields._current.fields.key) != 3 )
    {
      if ( !v47.fields._current.fields.value )
        sub_1BCAA3C(0LL, v36);
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 (System_Collections_Generic_Dictionary_int__object__o *)v47.fields._current.fields.value,
                 (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_1BCAA3C(0LL, v39);
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v45,
        Values,
        (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      *(_OWORD *)&v46.fields._dictionary = *(_OWORD *)&v45.fields._dictionary;
      v46.fields._currentValue = v45.fields._current.fields.key;
      do
      {
        v41 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                &v46,
                (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
        if ( !v41 )
          break;
        currentValue = v46.fields._currentValue;
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v40);
      }
      while ( !MissionInfoMaker__GetMissionConditionGroupProgress(
                 (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
                 v40) );
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
        &v46,
        (const MethodInfo_335738C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      if ( !v41 )
        break;
    }
  }
  v44 = key - 1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v47,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  if ( key != 5 )
    return v44;
LABEL_20:
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v45,
    v34,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v47 = v45;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v47,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    if ( LODWORD(v47.fields._current.fields.key) == 4 )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v47,
        (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      return 4;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v47,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MissionInfoMaker__GetProgStatus(
        int32_t eventId,
        int32_t missionId,
        int32_t progressType,
        bool isNowMission,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  UserEventMissionEntity_array *Instance; // x0
  __int64 v13; // x1
  int max_length; // w8
  int v15; // w9
  UserEventMissionEntity_o *v16; // x10

  if ( (byte_4B1937B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_UserEventMissionMaster___,
      *(_QWORD *)&missionId,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1937B = 1;
  }
  if ( progressType == 4 )
  {
    Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1BCAA3C(Instance, v13);
    }
    max_length = Instance->max_length;
    if ( max_length < 1 )
    {
      return 3;
    }
    else
    {
      v15 = 0;
      while ( 1 )
      {
        if ( max_length == v15 )
          sub_1BCAA44(Instance, v13);
        v16 = Instance->m_Items[v15];
        if ( !v16 )
          goto LABEL_22;
        if ( v16->fields.missionId == missionId )
          break;
        if ( max_length == ++v15 )
          return 3;
      }
      if ( v16->fields.missionProgressType == 4 )
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  void *Item; // x0
  System_Comparison_T__o *v34; // x23
  Il2CppObject *v35; // x24
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int v43; // w23
  unsigned int v44; // w22
  _BOOL8 v45; // x0
  __int64 v46; // x1
  Il2CppObject *current; // x21
  int64_t v48; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  int64_t v51; // x8
  int64_t monitor; // x0
  Il2CppObject *v54; // x20
  Il2CppObject *v55; // x0
  int64_t v56; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1937E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMissionConditionEntity__TypeInfo, *(_QWORD *)&progStatus, progressNum);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v13, v14);
    sub_1BCA7E0(&long_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v23, v24);
    sub_1BCA7E0(&Method_MissionInfoMaker___c__GetProgressText_b__15_0__, v25, v26);
    sub_1BCA7E0(&MissionInfoMaker___c_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_25227/*"{0:N0}/{1:N0}"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    byte_4B1937E = 1;
  }
  memset(&v58, 0, sizeof(v58));
  *progressNum = 0LL;
  *targetNum = 0LL;
  Item = MissionInfoMaker___c_TypeInfo;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, *(_QWORD *)&progStatus);
    Item = MissionInfoMaker___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 32LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item, *(_QWORD *)&progStatus);
      Item = MissionInfoMaker___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v34 = (System_Comparison_T__o *)sub_1BCAA2C(
                                      System_Comparison_EventMissionConditionEntity__TypeInfo,
                                      *(_QWORD *)&progStatus,
                                      progressNum,
                                      targetNum);
    System_Comparison_object____ctor(v34, v35, Method_MissionInfoMaker___c__GetProgressText_b__15_0__, 0LL);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v34;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__15_0, (int64_t)v34, v37, v38, v39, v40, v41, v42);
  }
  if ( !entityList
    || (System_Collections_Generic_List_object___Sort_56244000(
          (System_Collections_Generic_List_object__o *)entityList,
          v34,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)entityList,
                  0,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__)) == 0LL) )
  {
    sub_1BCAA3C(Item, *(_QWORD *)&progStatus);
  }
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v43 = *((_DWORD *)Item + 9);
  v44 = progStatus - 3;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v45 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_1BCAA3C(v45, v46);
    if ( HIDWORD(v58.fields._current[2].klass) == v43 )
    {
      v48 = *progressNum;
      if ( LODWORD(v58.fields._current[2].monitor) == 12 )
      {
        ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                  (EventMissionConditionEntity_o *)v58.fields._current,
                                  0LL);
        p_monitor = targetNum;
        *progressNum = v48 + ProgressNumByDateType;
        v51 = 1LL;
      }
      else
      {
        if ( v44 >= 2 )
          monitor = EventMissionConditionEntity__getProgressNum(
                      (EventMissionConditionEntity_o *)v58.fields._current,
                      0LL);
        else
          monitor = (int64_t)v58.fields._current[3].monitor;
        *progressNum = monitor + v48;
        v51 = *targetNum;
        p_monitor = (int64_t *)&current[3].monitor;
      }
      *targetNum = *p_monitor + v51;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v57.fields._list = (struct System_Collections_Generic_List_T__o *)*progressNum;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v57);
  v56 = *targetNum;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v56);
  return System_String__Format_62415592((System_String_o *)StringLiteral_25227/*"{0:N0}/{1:N0}"*/, v54, v55, 0LL);
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
  __int64 v2; // x2
  GiftEntity_array *v3; // x19
  int max_length; // w8
  __int64 v5; // x21
  GiftEntity_o *v6; // x20
  int32_t priority; // w24

  v3 = entities;
  if ( (byte_4B19380 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_1BCA7E0(&MissionInfoMaker_TypeInfo, method, v2);
    byte_4B19380 = 1;
  }
  if ( !v3 )
    return 0LL;
  max_length = v3->max_length;
  if ( max_length < 1 )
    return 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(entities, method);
    v6 = v3->m_Items[v5];
    if ( !v6 )
      sub_1BCAA3C(entities, method);
    entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    priority = v6->fields.priority;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    }
    if ( priority == HIDWORD(entities->m_Items[19]->klass) )
      break;
    max_length = v3->max_length;
    if ( (int)++v5 >= max_length )
      return 0LL;
  }
  return v6;
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  __int64 v21; // x26
  GetSvts_o *v22; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B19385 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, data, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B19385 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)data, 0LL, *(int64_t *)&svtId, (int32_t)method, v4, v5, v6, v7);
  if ( !svtList || !*(_QWORD *)&svtList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1BCAA3C(Instance, v18);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v21 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v21 >= max_length )
      sub_1BCAA44(Instance, v18);
    v22 = svtList->m_Items[v21];
    if ( !v22 || !v20 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v20,
                                 &entity,
                                 v22->fields.userSvtId,
                                 (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
      *(_QWORD *)&v33.fields.currentCryptoKey = klass;
      *(_QWORD *)&v33.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v21 >= max_length )
      return 0;
  }
  *data = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)data, (int64_t)v22, v25, v26, v27, v28, v29, v30);
  return 1;
}


void __fastcall MissionInfoMaker__OpenCostumeReleaseDetail(
        ServantCostumeEntity_o *costumeEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *Instance; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21

  if ( (byte_4B19387 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_8809/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v7, v8);
    byte_4B19387 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, callback);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8809/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
  if ( !costumeEntity
    || (v11 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0LL),
        (Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v10);
  }
  CommonUI__OpenItemDetailDialog_30842472(
    (CommonUI_o *)Instance,
    v11,
    costumeEntity->fields.costumeReleaseDetail,
    callback,
    0LL);
}


void __fastcall MissionInfoMaker__OpenEquipDetail(
        EquipEntity_o *equipEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v11; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *detail; // x8
  System_String_o *v13; // x20

  if ( (byte_4B19388 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    byte_4B19388 = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_8;
  v9 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(name, 0LL);
  detail = equipEntity->fields.detail;
  v13 = v11;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(detail, 0LL);
  if ( !v9 )
LABEL_8:
    sub_1BCAA3C(Instance, v8);
  CommonUI__OpenItemDetailDialog_30842472(v9, v13, Instance, callback, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *Instance; // x0
  __int64 v46; // x1
  int32_t objectId; // w2
  __int64 *v48; // x8
  Il2CppObject **v49; // x1

  if ( (byte_4B19381 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, itemEntity, servantEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B19381 = 1;
  }
  *itemEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)itemEntity,
    0LL,
    (int64_t)servantEntity,
    (int32_t)commandCodeEntity,
    (System_String_o *)servantCostumeEntity,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  *servantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)servantEntity, 0LL, v27, v28, v29, v30, v31, v32);
  *commandCodeEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)commandCodeEntity, 0LL, v33, v34, v35, v36, v37, v38);
  *servantCostumeEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)servantCostumeEntity, 0LL, v39, v40, v41, v42, v43, v44);
  if ( !giftEntity )
LABEL_18:
    sub_1BCAA3C(Instance, v46);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v48 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v49 = (Il2CppObject **)servantEntity;
      goto LABEL_17;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v48 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v49 = (Il2CppObject **)itemEntity;
      goto LABEL_17;
    case 9:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v48 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v49 = (Il2CppObject **)commandCodeEntity;
LABEL_17:
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        v49,
        objectId,
        (const MethodInfo_31B2E94 *)*v48);
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x23
  __int64 v22; // x27
  bool v23; // w19
  GetSvts_o *v24; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int32_t type; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B19384 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, data, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B19384 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1BCA784(
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_30:
      sub_1BCAA3C(Instance, v19);
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v22 = 0LL;
      v23 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v22 >= max_length )
          sub_1BCAA44(Instance, v19);
        v24 = svtList->m_Items[v22];
        if ( !v24 || !v21 )
          goto LABEL_30;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     v21,
                                     &entity,
                                     v24->fields.userSvtId,
                                     (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_30;
          klass = entity[5].klass;
          monitor = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
          *(_QWORD *)&v36.fields.currentCryptoKey = klass;
          *(_QWORD *)&v36.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v24;
            sub_1BCA784((PartyOrganizationUtility_o *)data, (int64_t)v24, v27, v28, v29, v30, v31, v32);
            if ( Gift__IsEventSvtJoin(type, 0LL) )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0LL);
              v23 = 1;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v23;
            }
            else if ( type == 1 )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0LL);
              v23 = 1;
              if ( ((unsigned __int8)Instance & 1) == 0 )
                return v23;
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
        if ( (int)++v22 >= max_length )
          return v23;
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1938A & 1) == 0 )
  {
    sub_1BCA7E0(&MissionInfoMaker___c_TypeInfo, v1, v2);
    byte_4B1938A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MissionInfoMaker___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MissionInfoMaker___c_TypeInfo->static_fields->__9 = (struct MissionInfoMaker___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MissionInfoMaker___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MissionInfoMaker___c___ctor(MissionInfoMaker___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MissionInfoMaker___c___GetClosedMessage_b__14_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetConditionMessage_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetMissionNotClearConditionInfo_b__8_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetProgressText_b__15_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}