void __fastcall MissionInfoMaker___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  struct MissionInfoMaker_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct MissionInfoMaker_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FF6D6 & 1) == 0 )
  {
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_17190/*"bit_present_get{0}"*/, v4);
    sub_1B640C8(&StringLiteral_5833/*"Effect/Talk/bit_present_get{0}"*/, v5);
    byte_49FF6D6 = 1;
  }
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NORMAL_ICON_PRIORITY = 0x6400000000LL;
  v7 = StringLiteral_5833/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5833/*"Effect/Talk/bit_present_get{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->ITEM_GET_ASSET_NAME, v7, v2, v3);
  v8 = StringLiteral_17190/*"bit_present_get{0}"*/;
  v9 = MissionInfoMaker_TypeInfo->static_fields;
  v9->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_17190/*"bit_present_get{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->ITEM_GET_EFFECT_NAME, v8, v10, v11);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *__fastcall MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MissionInfoMaker___c_c *v10; // x0
  System_Comparison_T__o *_9__14_0; // x20
  Il2CppObject *v12; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *Item; // x0
  System_String_o **p_monitor; // x8

  if ( (byte_49FF6CA & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMissionConditionEntity__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v6);
    sub_1B640C8(&Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__, v7);
    sub_1B640C8(&MissionInfoMaker___c_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49FF6CA = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v10 = MissionInfoMaker___c_TypeInfo;
    if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v10 = MissionInfoMaker___c_TypeInfo;
    }
    _9__14_0 = (System_Comparison_T__o *)v10->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = MissionInfoMaker___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__14_0 = (System_Comparison_T__o *)sub_1B64314(
                                             System_Comparison_EventMissionConditionEntity__TypeInfo,
                                             method,
                                             v2);
      System_Comparison_object____ctor(_9__14_0, v12, Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__, 0LL);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__14_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v14, v15);
    }
    System_Collections_Generic_List_object___Sort_55243320(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__14_0,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1B64324(0LL);
    p_monitor = (System_String_o **)&Item[4].monitor;
  }
  else
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_monitor;
}


bool __fastcall MissionInfoMaker__GetCommandCodeData(
        GetCommandCodes_array *commandCodeList,
        GetCommandCodes_o **data,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  __int64 v14; // x26
  GetCommandCodes_o *v15; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49FF6D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, data);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FF6D3 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)data, 0, commandCodeId, (int32_t)method);
  if ( !commandCodeList || !*(_QWORD *)&commandCodeList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1B64324(Instance);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= max_length )
      sub_1B6432C(Instance, v11);
    v15 = commandCodeList->m_Items[v14];
    if ( !v15 || !v13 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v13,
                                 &entity,
                                 v15->fields.userCommandCodeId,
                                 (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = klass;
      *(_QWORD *)&v22.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v22, 0LL);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v14 >= max_length )
      return 0;
  }
  *data = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)data, (int32_t)v15, v18, v19);
  return 1;
}


System_String_o *__fastcall MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MissionInfoMaker___c_c *v10; // x0
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v12; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *Item; // x0
  System_String_o **v17; // x8

  if ( (byte_49FF6C9 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMissionConditionEntity__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v6);
    sub_1B640C8(&Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__, v7);
    sub_1B640C8(&MissionInfoMaker___c_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49FF6C9 = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v10 = MissionInfoMaker___c_TypeInfo;
    if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v10 = MissionInfoMaker___c_TypeInfo;
    }
    _9__13_0 = (System_Comparison_T__o *)v10->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = MissionInfoMaker___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__13_0 = (System_Comparison_T__o *)sub_1B64314(
                                             System_Comparison_EventMissionConditionEntity__TypeInfo,
                                             method,
                                             v2);
      System_Comparison_object____ctor(_9__13_0, v12, Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__, 0LL);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v14, v15);
    }
    System_Collections_Generic_List_object___Sort_55243320(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__13_0,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1B64324(0LL);
    v17 = (System_String_o **)&Item[4];
  }
  else
  {
    v17 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v17;
}


int32_t __fastcall MissionInfoMaker__GetConditionMessageType(int32_t progressType, const MethodInfo *method)
{
  if ( (unsigned int)(progressType - 2) > 2 )
    return 2;
  else
    return dword_BDDDB0[progressType - 2];
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *__fastcall MissionInfoMaker__GetEventMissionConditionGroup(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppObject *Instance; // x0
  EventMissionConditionEntity_array *MissionCondList; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_Dictionary_int__object__o *v23; // x20
  __int64 v24; // x1
  int max_length; // w8
  const MethodInfo_3123B78 **v26; // x24
  const MethodInfo_3123B78 **v27; // x28
  const MethodInfo_31238E4 **v28; // x29
  void **v29; // x26
  unsigned int v30; // w25
  EventMissionConditionEntity_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__object__o *v35; // x23
  void **v36; // x19
  const MethodInfo_31238E4 **v37; // x26
  const MethodInfo_3123B78 **v38; // x29
  const MethodInfo_3123B78 **v39; // x28
  Il2CppObject *Item; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__object__o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_object__o *v45; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppClass *klass; // x8
  _QWORD *v49; // x9
  __int64 monitor_low; // x10
  void **v51; // x8
  EventMissionConditionEntity_array *v53; // [xsp+8h] [xbp-68h]

  if ( (byte_49FF6C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&missionId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__,
      v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__,
      v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__, v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__,
      v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__,
      v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__, v12);
    sub_1B640C8(
      &System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
      v13);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_49FF6C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0LL);
  v23 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
                                                                  v21,
                                                                  v22);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v23,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_25;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v26 = (const MethodInfo_3123B78 **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v27 = (const MethodInfo_3123B78 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v28 = (const MethodInfo_31238E4 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v29 = &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
    v30 = 0;
    v53 = MissionCondList;
    while ( 1 )
    {
      if ( v30 >= max_length )
        sub_1B6432C(Instance, v24);
      v31 = MissionCondList->m_Items[v30];
      if ( !v31 || !v23 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v23, v31->fields.missionProgressType, *v26) )
      {
        missionProgressType = v31->fields.missionProgressType;
        v35 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                        System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo,
                                                                        v32,
                                                                        v33);
        System_Collections_Generic_Dictionary_int__object____ctor(
          v35,
          (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v23,
          missionProgressType,
          (Il2CppObject *)v35,
          (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v23,
                   v31->fields.missionProgressType,
                   (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              v31->fields.condGroup,
              *v27) )
      {
        v36 = v29;
        v37 = v28;
        v38 = v27;
        v39 = v26;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v23,
                 v31->fields.missionProgressType,
                 (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v31->fields.condGroup;
        v42 = (System_Collections_Generic_Dictionary_int__object__o *)Item;
        v45 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo,
                                                             v43,
                                                             v44);
        System_Collections_Generic_List_object____ctor(
          v45,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v42 )
          break;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v42,
          condGroup,
          (Il2CppObject *)v45,
          (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v26 = v39;
        v27 = v38;
        v28 = v37;
        v29 = v36;
        MissionCondList = v53;
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v23,
                   v31->fields.missionProgressType,
                   (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                   v31->fields.condGroup,
                   *v28);
      if ( !Instance )
        break;
      klass = Instance[1].klass;
      v49 = *v29;
      ++HIDWORD(Instance[1].monitor);
      if ( !klass )
        break;
      monitor_low = SLODWORD(Instance[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v31,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &klass->_1.image + monitor_low;
        LODWORD(Instance[1].monitor) = monitor_low + 1;
        v51[4] = v31;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v31, v46, v47);
      }
      max_length = MissionCondList->max_length;
      if ( (int)++v30 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v23;
    }
LABEL_25:
    sub_1B64324(Instance);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v23;
}


GiftEntity_o *__fastcall MissionInfoMaker__GetIconGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  GiftEntity_array *v2; // x19
  int max_length; // w8
  unsigned int v4; // w21
  GiftEntity_o *v5; // x20
  int32_t priority; // w23

  v2 = entities;
  if ( (byte_49FF6CF & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_1B640C8(&MissionInfoMaker_TypeInfo, method);
    byte_49FF6CF = 1;
  }
  if ( !v2 )
    goto LABEL_15;
  max_length = v2->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1B6432C(entities, method);
      v5 = v2->m_Items[v4];
      if ( !v5 )
        break;
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
      priority = v5->fields.priority;
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
      }
      if ( (GiftEntity_c *)priority == entities->m_Items[19]->klass )
        return v5;
      max_length = v2->max_length;
      if ( (int)++v4 >= max_length )
        return 0LL;
    }
LABEL_15:
    sub_1B64324(entities);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_49FF6CC & 1) == 0 )
  {
    sub_1B640C8(&UserMissionNewManager_TypeInfo, *(_QWORD *)&progStatus);
    byte_49FF6CC = 1;
  }
  if ( (progStatus & 0xFFFFFFFE) != 2 )
    return 0;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  return UserMissionNewManager__SetIsNewMissionInfo(missionId, 0LL);
}


int32_t __fastcall MissionInfoMaker__GetItemGetEffectId(int32_t itemId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *v8; // x19
  MissionInfoMaker_c *v10; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF6D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_20799/*"itemGetEffectId"*/, v6);
    byte_49FF6D0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v8 = entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    if ( v8 )
      return ItemEntity__getScript(
               (ItemEntity_o *)v8,
               (System_String_o *)StringLiteral_20799/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0LL);
LABEL_14:
    sub_1B64324(Instance);
  }
  v10 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v10 = MissionInfoMaker_TypeInfo;
  }
  return v10->static_fields->ITEM_GET_EFFECT_DEFAULT_ID;
}


bool __fastcall MissionInfoMaker__GetMissionConditionGroupProgress(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionConditionEntity__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int v6; // w19
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  v2 = entities;
  if ( (byte_49FF6C7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v4);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_1B640C8(
                                                                                   &Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__,
                                                                                   v5);
    byte_49FF6C7 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !v2 )
    sub_1B64324(entities);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)v2,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v8.fields._current, 0LL) )
    {
      v6 = 4;
      goto LABEL_10;
    }
  }
  v6 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v6 != 4;
}


// local variable allocation has failed, the output may be wrong!
EventMissionConditionEntity_o *__fastcall MissionInfoMaker__GetMissionNotClearConditionInfo(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  EventMissionConditionEntity_o *result; // x0
  EventMissionConditionEntity_o *v26; // x19
  EventMissionConditionEntity_o *v27; // x22
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  MissionInfoMaker___c_c *v32; // x8
  Il2CppObject *currentValue; // x19
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v35; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  _BOOL8 v39; // x0
  Il2CppObject *current; // x20
  int v41; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v44; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_49FF6C5 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMissionConditionEntity__TypeInfo, *(_QWORD *)&missionId);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__,
      v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__,
      v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__,
      v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__,
      v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__,
      v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__,
      v17);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__,
      v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v20);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v21);
    sub_1B640C8(&Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__, v22);
    sub_1B640C8(&MissionInfoMaker___c_TypeInfo, v23);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__,
      v24);
    byte_49FF6C5 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  memset(&v45, 0, sizeof(v45));
  memset(&v43, 0, sizeof(v43));
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  result = (EventMissionConditionEntity_o *)MissionInfoMaker__GetEventMissionConditionGroup(eventId, missionId, method);
  if ( result )
  {
    v26 = result;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)result,
           (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    {
      return 0LL;
    }
    else
    {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator(
        &v42,
        (System_Collections_Generic_Dictionary_int__object__o *)v26,
        (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
      v27 = 0LL;
      v45 = v42;
      while ( 1 )
      {
        if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                &v45,
                (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
            &v45,
            (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
          return 0LL;
        }
        if ( LODWORD(v45.fields._current.fields.key) == 4 )
        {
          if ( !v45.fields._current.fields.value )
            sub_1B64324(0LL);
          Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                     (System_Collections_Generic_Dictionary_int__object__o *)v45.fields._current.fields.value,
                     (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
          if ( !Values )
            sub_1B64324(0LL);
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v42,
            Values,
            (const MethodInfo_37B55F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
          *(_OWORD *)&v44.fields._dictionary = *(_OWORD *)&v42.fields._dictionary;
          v44.fields._currentValue = v42.fields._current.fields.key;
          while ( 1 )
          {
            v29 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                    &v44,
                    (const MethodInfo_326A8E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
            if ( !v29 )
              break;
            v32 = MissionInfoMaker___c_TypeInfo;
            currentValue = v44.fields._currentValue;
            if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
              v32 = MissionInfoMaker___c_TypeInfo;
            }
            _9__8_0 = (System_Comparison_T__o *)v32->static_fields->__9__8_0;
            if ( !_9__8_0 )
            {
              if ( !v32->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v32);
                v32 = MissionInfoMaker___c_TypeInfo;
              }
              v35 = (Il2CppObject *)v32->static_fields->__9;
              _9__8_0 = (System_Comparison_T__o *)sub_1B64314(
                                                    System_Comparison_EventMissionConditionEntity__TypeInfo,
                                                    v30,
                                                    v31);
              System_Comparison_object____ctor(
                _9__8_0,
                v35,
                Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__,
                0LL);
              static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
              static_fields->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v37, v38);
            }
            if ( !currentValue )
              sub_1B64324(v29);
            System_Collections_Generic_List_object___Sort_55243320(
              (System_Collections_Generic_List_object__o *)currentValue,
              _9__8_0,
              (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v42,
              (System_Collections_Generic_List_object__o *)currentValue,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
            *(_OWORD *)&v43.fields._list = *(_OWORD *)&v42.fields._dictionary;
            v43.fields._current = v42.fields._current.fields.key;
            while ( 1 )
            {
              v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v43,
                      (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
              if ( !v39 )
                break;
              current = v43.fields._current;
              if ( !v43.fields._current )
                sub_1B64324(v39);
              if ( !EventMissionConditionEntity__getMissionProgress(
                      (EventMissionConditionEntity_o *)v43.fields._current,
                      0LL) )
              {
                v41 = 11;
                v27 = (EventMissionConditionEntity_o *)current;
                goto LABEL_27;
              }
            }
            v41 = 6;
LABEL_27:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v43,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
            if ( v41 != 6 )
              goto LABEL_31;
          }
          v41 = 4;
LABEL_31:
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
            &v44,
            (const MethodInfo_326A8E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
          if ( (v41 | 4) != 4 )
            break;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v45,
        (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      if ( v41 == 11 )
        return v27;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *EventMissionConditionGroup; // x0
  System_Collections_Generic_Dictionary_int__object__o *v22; // x19
  bool v23; // w29
  int key; // w23
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  const MethodInfo *v26; // x1
  bool v27; // w20
  Il2CppObject *currentValue; // x21
  int32_t v30; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_49FF6C4 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__,
      *(_QWORD *)&missionId);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__,
      v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__,
      v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__,
      v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__,
      v17);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__,
      v18);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v19);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__,
      v20);
    byte_49FF6C4 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  memset(&v32, 0, sizeof(v32));
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  EventMissionConditionGroup = MissionInfoMaker__GetEventMissionConditionGroup(
                                 eventId,
                                 missionId,
                                 (const MethodInfo *)isNowMission);
  if ( !EventMissionConditionGroup )
    return 4;
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)EventMissionConditionGroup;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)EventMissionConditionGroup,
         (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v31,
    v22,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v33 = v31;
  v23 = !isNowMission && ignoreStartCondition;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v33,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v33,
        (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      goto LABEL_20;
    }
    key = (int)v33.fields._current.fields.key;
    if ( !v23 || LODWORD(v33.fields._current.fields.key) != 3 )
    {
      if ( !v33.fields._current.fields.value )
        sub_1B64324(0LL);
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 (System_Collections_Generic_Dictionary_int__object__o *)v33.fields._current.fields.value,
                 (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_1B64324(0LL);
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v31,
        Values,
        (const MethodInfo_37B55F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      *(_OWORD *)&v32.fields._dictionary = *(_OWORD *)&v31.fields._dictionary;
      v32.fields._currentValue = v31.fields._current.fields.key;
      do
      {
        v27 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                &v32,
                (const MethodInfo_326A8E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
        if ( !v27 )
          break;
        currentValue = v32.fields._currentValue;
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      }
      while ( !MissionInfoMaker__GetMissionConditionGroupProgress(
                 (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
                 v26) );
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
        &v32,
        (const MethodInfo_326A8E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      if ( !v27 )
        break;
    }
  }
  v30 = key - 1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v33,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  if ( key != 5 )
    return v30;
LABEL_20:
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v31,
    v22,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v33 = v31;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v33,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    if ( LODWORD(v33.fields._current.fields.key) == 4 )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v33,
        (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      return 4;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v33,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
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
  UserEventMissionEntity_array *Instance; // x0
  __int64 v12; // x1
  int max_length; // w8
  int v14; // w9
  UserEventMissionEntity_o *v15; // x10

  if ( (byte_49FF6C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, *(_QWORD *)&missionId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FF6C8 = 1;
  }
  if ( progressType == 4 )
  {
    Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1B64324(Instance);
    }
    max_length = Instance->max_length;
    if ( max_length < 1 )
    {
      return 3;
    }
    else
    {
      v14 = 0;
      while ( 1 )
      {
        if ( max_length == v14 )
          sub_1B6432C(Instance, v12);
        v15 = Instance->m_Items[v14];
        if ( !v15 )
          goto LABEL_22;
        if ( v15->fields.missionId == missionId )
          break;
        if ( max_length == ++v14 )
          return 3;
      }
      if ( v15->fields.missionProgressType == 4 )
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  void *Item; // x0
  System_Comparison_T__o *v22; // x23
  Il2CppObject *v23; // x24
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int v27; // w23
  unsigned int v28; // w22
  _BOOL8 v29; // x0
  Il2CppObject *current; // x21
  int64_t v31; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  int64_t v34; // x8
  int64_t monitor; // x0
  Il2CppObject *v37; // x20
  Il2CppObject *v38; // x0
  int64_t v39; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF6CB & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMissionConditionEntity__TypeInfo, *(_QWORD *)&progStatus);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v11);
    sub_1B640C8(&long_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v16);
    sub_1B640C8(&Method_MissionInfoMaker___c__GetProgressText_b__15_0__, v17);
    sub_1B640C8(&MissionInfoMaker___c_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_24872/*"{0:N0}/{1:N0}"*/, v19);
    sub_1B640C8(&StringLiteral_1/*""*/, v20);
    byte_49FF6CB = 1;
  }
  memset(&v41, 0, sizeof(v41));
  *progressNum = 0LL;
  *targetNum = 0LL;
  Item = MissionInfoMaker___c_TypeInfo;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    Item = MissionInfoMaker___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 32LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = MissionInfoMaker___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v22 = (System_Comparison_T__o *)sub_1B64314(
                                      System_Comparison_EventMissionConditionEntity__TypeInfo,
                                      *(_QWORD *)&progStatus,
                                      progressNum);
    System_Comparison_object____ctor(v22, v23, Method_MissionInfoMaker___c__GetProgressText_b__15_0__, 0LL);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v22;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0, (int32_t)v22, v25, v26);
  }
  if ( !entityList
    || (System_Collections_Generic_List_object___Sort_55243320(
          (System_Collections_Generic_List_object__o *)entityList,
          v22,
          (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)entityList,
                  0,
                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__)) == 0LL) )
  {
    sub_1B64324(Item);
  }
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v27 = *((_DWORD *)Item + 9);
  v28 = progStatus - 3;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v29 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1B64324(v29);
    if ( HIDWORD(v41.fields._current[2].klass) == v27 )
    {
      v31 = *progressNum;
      if ( LODWORD(v41.fields._current[2].monitor) == 12 )
      {
        ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                  (EventMissionConditionEntity_o *)v41.fields._current,
                                  0LL);
        p_monitor = targetNum;
        *progressNum = v31 + ProgressNumByDateType;
        v34 = 1LL;
      }
      else
      {
        if ( v28 >= 2 )
          monitor = EventMissionConditionEntity__getProgressNum(
                      (EventMissionConditionEntity_o *)v41.fields._current,
                      0LL);
        else
          monitor = (int64_t)v41.fields._current[3].monitor;
        *progressNum = monitor + v31;
        v34 = *targetNum;
        p_monitor = (int64_t *)&current[3].monitor;
      }
      *targetNum = *p_monitor + v34;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v40.fields._list = (struct System_Collections_Generic_List_T__o *)*progressNum;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v40);
  v39 = *targetNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v39);
  return System_String__Format_61389768((System_String_o *)StringLiteral_24872/*"{0:N0}/{1:N0}"*/, v37, v38, 0LL);
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
  if ( (byte_49FF6CD & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_1B640C8(&MissionInfoMaker_TypeInfo, method);
    byte_49FF6CD = 1;
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
      sub_1B6432C(entities, method);
    v5 = v2->m_Items[v4];
    if ( !v5 )
      sub_1B64324(entities);
    entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    priority = v5->fields.priority;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    }
    if ( priority == HIDWORD(entities->m_Items[19]->klass) )
      break;
    max_length = v2->max_length;
    if ( (int)++v4 >= max_length )
      return 0LL;
  }
  return v5;
}


bool __fastcall MissionInfoMaker__GetSvtListData(
        GetSvts_array *svtList,
        GetSvts_o **data,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  __int64 v14; // x26
  GetSvts_o *v15; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49FF6D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FF6D2 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)data, 0, svtId, (int32_t)method);
  if ( !svtList || !*(_QWORD *)&svtList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1B64324(Instance);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= max_length )
      sub_1B6432C(Instance, v11);
    v15 = svtList->m_Items[v14];
    if ( !v15 || !v13 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v13,
                                 &entity,
                                 v15->fields.userSvtId,
                                 (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = klass;
      *(_QWORD *)&v22.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v22, 0LL);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v14 >= max_length )
      return 0;
  }
  *data = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)data, (int32_t)v15, v18, v19);
  return 1;
}


void __fastcall MissionInfoMaker__OpenCostumeReleaseDetail(
        ServantCostumeEntity_o *costumeEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *Instance; // x0
  System_String_o *v8; // x21

  if ( (byte_49FF6D4 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, callback);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_8642/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v6);
    byte_49FF6D4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8642/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
  if ( !costumeEntity
    || (v8 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0LL),
        (Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  CommonUI__OpenItemDetailDialog_30410016(
    (CommonUI_o *)Instance,
    v8,
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
  System_String_o *Instance; // x0
  CommonUI_o *v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v9; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *detail; // x8
  System_String_o *v11; // x20

  if ( (byte_49FF6D5 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, callback);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FF6D5 = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_8;
  v7 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(name, 0LL);
  detail = equipEntity->fields.detail;
  v11 = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(detail, 0LL);
  if ( !v7 )
LABEL_8:
    sub_1B64324(Instance);
  CommonUI__OpenItemDetailDialog_30410016(v7, v11, Instance, callback, 0LL);
}


void __fastcall MissionInfoMaker__SetGiftInfo(
        GiftEntity_o *giftEntity,
        ItemEntity_o **itemEntity,
        ServantEntity_o **servantEntity,
        CommandCodeEntity_o **commandCodeEntity,
        ServantCostumeEntity_o **servantCostumeEntity,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *Instance; // x0
  int32_t objectId; // w2
  __int64 *v26; // x8
  Il2CppObject **v27; // x1

  if ( (byte_49FF6CE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, itemEntity);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v15);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49FF6CE = 1;
  }
  *itemEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)itemEntity, 0, (int32_t)servantEntity, (int32_t)commandCodeEntity);
  *servantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)servantEntity, 0, v18, v19);
  *commandCodeEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)commandCodeEntity, 0, v20, v21);
  *servantCostumeEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)servantCostumeEntity, 0, v22, v23);
  if ( !giftEntity )
LABEL_18:
    sub_1B64324(Instance);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v26 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v27 = (Il2CppObject **)servantEntity;
      goto LABEL_17;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v26 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v27 = (Il2CppObject **)itemEntity;
      goto LABEL_17;
    case 9:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v26 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v27 = (Il2CppObject **)commandCodeEntity;
LABEL_17:
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        v27,
        objectId,
        (const MethodInfo_30D3EF8 *)*v26);
      return;
    default:
      return;
  }
}


bool __fastcall MissionInfoMaker__TryGetSvtListData(
        GetSvts_array *svtList,
        GetSvts_o **data,
        int32_t svtId,
        int32_t giftType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  __int64 v16; // x27
  bool v17; // w19
  GetSvts_o *v18; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t type; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_49FF6D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FF6D1 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)data, 0, svtId, giftType);
  if ( svtList && *(_QWORD *)&svtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_30:
      sub_1B64324(Instance);
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
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
          sub_1B6432C(Instance, v13);
        v18 = svtList->m_Items[v16];
        if ( !v18 || !v15 )
          goto LABEL_30;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     v15,
                                     &entity,
                                     v18->fields.userSvtId,
                                     (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_30;
          klass = entity[5].klass;
          monitor = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v26.fields.currentCryptoKey = klass;
          *(_QWORD *)&v26.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v26, 0LL);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v18;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)data, (int32_t)v18, v21, v22);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF6D7 & 1) == 0 )
  {
    sub_1B640C8(&MissionInfoMaker___c_TypeInfo, v1);
    byte_49FF6D7 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MissionInfoMaker___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MissionInfoMaker___c_TypeInfo->static_fields->__9 = (struct MissionInfoMaker___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)MissionInfoMaker___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetConditionMessage_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetMissionNotClearConditionInfo_b__8_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetProgressText_b__15_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}