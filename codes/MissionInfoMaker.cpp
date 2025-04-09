void __fastcall MissionInfoMaker___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct MissionInfoMaker_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct MissionInfoMaker_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49BE195 & 1) == 0 )
  {
    sub_1B4CF90(&MissionInfoMaker_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_16946/*"bit_present_get{0}"*/, v4);
    sub_1B4CF90(&StringLiteral_5792/*"Effect/Talk/bit_present_get{0}"*/, v5);
    byte_49BE195 = 1;
  }
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  static_fields->MINI_ICON_SHOW_PRIORITY = 100;
  v7 = StringLiteral_5792/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5792/*"Effect/Talk/bit_present_get{0}"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->ITEM_GET_ASSET_NAME, v7, v2, v3);
  v8 = StringLiteral_16946/*"bit_present_get{0}"*/;
  v9 = MissionInfoMaker_TypeInfo->static_fields;
  v9->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_16946/*"bit_present_get{0}"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v9->ITEM_GET_EFFECT_NAME, v8, v10, v11);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *__fastcall MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MissionInfoMaker___c_c *v9; // x0
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v11; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Item; // x0
  __int64 v16; // x1
  System_String_o **p_monitor; // x8

  if ( (byte_49BE188 & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_EventMissionConditionEntity__TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v5);
    sub_1B4CF90(&Method_MissionInfoMaker___c__GetClosedMessage_b__13_0__, v6);
    sub_1B4CF90(&MissionInfoMaker___c_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_1/*""*/, v8);
    byte_49BE188 = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v9 = MissionInfoMaker___c_TypeInfo;
    if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v9 = MissionInfoMaker___c_TypeInfo;
    }
    _9__13_0 = (System_Comparison_T__o *)v9->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = MissionInfoMaker___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__13_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__13_0, v11, Method_MissionInfoMaker___c__GetClosedMessage_b__13_0__, 0LL);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v13, v14);
    }
    System_Collections_Generic_List_object___Sort_56106144(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__13_0,
      (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1B4D1EC(0LL, v16);
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
  const MethodInfo *v19; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49BE192 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, data);
    sub_1B4CF90(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49BE192 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)data, 0, commandCodeId, method);
  if ( !commandCodeList || !*(_QWORD *)&commandCodeList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1B4D1EC(Instance, v11);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= max_length )
      sub_1B4D1F4(Instance, v11);
    v15 = commandCodeList->m_Items[v14];
    if ( !v15 || !v13 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v13,
                                 &entity,
                                 v15->fields.userCommandCodeId,
                                 (const MethodInfo_319FF44 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
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
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v22, 0LL);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v14 >= max_length )
      return 0;
  }
  *data = v15;
  sub_1B4CF34((CGThumbnailListItem_o *)data, (int32_t)v15, v18, v19);
  return 1;
}


System_String_o *__fastcall MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MissionInfoMaker___c_c *v9; // x0
  System_Comparison_T__o *_9__12_0; // x20
  Il2CppObject *v11; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Item; // x0
  __int64 v16; // x1
  System_String_o **v17; // x8

  if ( (byte_49BE187 & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_EventMissionConditionEntity__TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v5);
    sub_1B4CF90(&Method_MissionInfoMaker___c__GetConditionMessage_b__12_0__, v6);
    sub_1B4CF90(&MissionInfoMaker___c_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_1/*""*/, v8);
    byte_49BE187 = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v9 = MissionInfoMaker___c_TypeInfo;
    if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v9 = MissionInfoMaker___c_TypeInfo;
    }
    _9__12_0 = (System_Comparison_T__o *)v9->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = MissionInfoMaker___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__12_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__12_0, v11, Method_MissionInfoMaker___c__GetConditionMessage_b__12_0__, 0LL);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__12_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v13, v14);
    }
    System_Collections_Generic_List_object___Sort_56106144(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__12_0,
      (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1B4D1EC(0LL, v16);
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
    return dword_BE42AC[progressType - 2];
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
  __int64 v20; // x1
  EventMissionConditionEntity_array *MissionCondList; // x19
  System_Collections_Generic_Dictionary_int__object__o *v22; // x20
  int max_length; // w8
  const MethodInfo_31F7074 **v24; // x24
  const MethodInfo_31F7074 **v25; // x28
  const MethodInfo_31F6DE0 **v26; // x29
  void **v27; // x26
  unsigned int v28; // w25
  EventMissionConditionEntity_o *v29; // x21
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__object__o *v31; // x23
  void **v32; // x19
  const MethodInfo_31F6DE0 **v33; // x26
  const MethodInfo_31F7074 **v34; // x29
  const MethodInfo_31F7074 **v35; // x28
  Il2CppObject *Item; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__object__o *v38; // x23
  System_Collections_Generic_List_object__o *v39; // x24
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppClass *klass; // x8
  _QWORD *v43; // x9
  __int64 monitor_low; // x10
  void **v45; // x8
  EventMissionConditionEntity_array *v47; // [xsp+8h] [xbp-68h]

  if ( (byte_49BE184 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&missionId);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__, v5);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__,
      v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__, v7);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__,
      v8);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__, v9);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__,
      v10);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__,
      v11);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__, v12);
    sub_1B4CF90(
      &System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo,
      v13);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__, v16);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo, v17);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_49BE184 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0LL);
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_25;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v24 = (const MethodInfo_31F7074 **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v25 = (const MethodInfo_31F7074 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v26 = (const MethodInfo_31F6DE0 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v27 = &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
    v28 = 0;
    v47 = MissionCondList;
    while ( 1 )
    {
      if ( v28 >= max_length )
        sub_1B4D1F4(Instance, v20);
      v29 = MissionCondList->m_Items[v28];
      if ( !v29 || !v22 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v22, v29->fields.missionProgressType, *v24) )
      {
        missionProgressType = v29->fields.missionProgressType;
        v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
        System_Collections_Generic_Dictionary_int__object____ctor(
          v31,
          (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v22,
          missionProgressType,
          (Il2CppObject *)v31,
          (const MethodInfo_31F6E6C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v22,
                   v29->fields.missionProgressType,
                   (const MethodInfo_31F6DE0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              v29->fields.condGroup,
              *v25) )
      {
        v32 = v27;
        v33 = v26;
        v34 = v25;
        v35 = v24;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v22,
                 v29->fields.missionProgressType,
                 (const MethodInfo_31F6DE0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v29->fields.condGroup;
        v38 = (System_Collections_Generic_Dictionary_int__object__o *)Item;
        v39 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v39,
          (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v38 )
          break;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v38,
          condGroup,
          (Il2CppObject *)v39,
          (const MethodInfo_31F6E6C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v24 = v35;
        v25 = v34;
        v26 = v33;
        v27 = v32;
        MissionCondList = v47;
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v22,
                   v29->fields.missionProgressType,
                   (const MethodInfo_31F6DE0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                   v29->fields.condGroup,
                   *v26);
      if ( !Instance )
        break;
      klass = Instance[1].klass;
      v43 = *v27;
      ++HIDWORD(Instance[1].monitor);
      if ( !klass )
        break;
      monitor_low = SLODWORD(Instance[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v29,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &klass->_1.image + monitor_low;
        LODWORD(Instance[1].monitor) = monitor_low + 1;
        v45[4] = v29;
        sub_1B4CF34((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v29, v40, v41);
      }
      max_length = MissionCondList->max_length;
      if ( (int)++v28 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v22;
    }
LABEL_25:
    sub_1B4D1EC(Instance, v20);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v22;
}


GiftEntity_array *__fastcall MissionInfoMaker__GetIconGiftEntities(int32_t giftId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  GiftEntity_array *GiftListById; // x0
  MissionInfoMaker___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *_9__20_0; // x20
  Il2CppObject *v15; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_49BE18E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_GiftMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_GiftEntity___, v5);
    sub_1B4CF90(&System_Func_GiftEntity__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_MissionInfoMaker___c__GetIconGiftEntities_b__20_0__, v7);
    sub_1B4CF90(&MissionInfoMaker___c_TypeInfo, v8);
    byte_49BE18E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_1B4D1EC(0LL, v10);
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, giftId, 0LL);
  v12 = MissionInfoMaker___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v12 = MissionInfoMaker___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__bool__o *)v12->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MissionInfoMaker___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__20_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__20_0, v15, Method_MissionInfoMaker___c__GetIconGiftEntities_b__20_0__, 0LL);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_GiftEntity__bool__o *)_9__20_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)_9__20_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  return (GiftEntity_array *)System_Linq_Enumerable__ToArray_object_(
                               v19,
                               (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
}


GiftEntity_o *__fastcall MissionInfoMaker__GetIconGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MissionInfoMaker___c_c *v10; // x0
  System_Func_object__bool__o *_9__19_0; // x20
  Il2CppObject *v12; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  MissionInfoMaker___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__int__o *_9__19_1; // x20
  Il2CppObject *v20; // x21
  struct MissionInfoMaker___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_49BE18D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_GiftEntity___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderBy_GiftEntity__int___, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_GiftEntity___, v4);
    sub_1B4CF90(&System_Func_GiftEntity__bool__TypeInfo, v5);
    sub_1B4CF90(&System_Func_GiftEntity__int__TypeInfo, v6);
    sub_1B4CF90(&Method_MissionInfoMaker___c__GetIconGiftEntity_b__19_0__, v7);
    sub_1B4CF90(&Method_MissionInfoMaker___c__GetIconGiftEntity_b__19_1__, v8);
    sub_1B4CF90(&MissionInfoMaker___c_TypeInfo, v9);
    byte_49BE18D = 1;
  }
  v10 = MissionInfoMaker___c_TypeInfo;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v10 = MissionInfoMaker___c_TypeInfo;
  }
  _9__19_0 = (System_Func_object__bool__o *)v10->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MissionInfoMaker___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__19_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__19_0, v12, Method_MissionInfoMaker___c__GetIconGiftEntity_b__19_0__, 0LL);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_GiftEntity__bool__o *)_9__19_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (System_Func_TSource__bool__o *)_9__19_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v17 = MissionInfoMaker___c_TypeInfo;
  v18 = v16;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v17 = MissionInfoMaker___c_TypeInfo;
  }
  _9__19_1 = (System_Func_object__int__o *)v17->static_fields->__9__19_1;
  if ( !_9__19_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = MissionInfoMaker___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__19_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_GiftEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__19_1, v20, Method_MissionInfoMaker___c__GetIconGiftEntity_b__19_1__, 0LL);
    v21 = MissionInfoMaker___c_TypeInfo->static_fields;
    v21->__9__19_1 = (struct System_Func_GiftEntity__int__o *)_9__19_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v21->__9__19_1, (int32_t)_9__19_1, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__19_1,
                                                               (const MethodInfo_2F2DB00 *)Method_System_Linq_Enumerable_OrderBy_GiftEntity__int___);
  return (GiftEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                           v24,
                           (const MethodInfo_2F26C18 *)Method_System_Linq_Enumerable_FirstOrDefault_GiftEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_49BE18A & 1) == 0 )
  {
    sub_1B4CF90(&UserMissionNewManager_TypeInfo, *(_QWORD *)&progStatus);
    byte_49BE18A = 1;
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
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  MissionInfoMaker_c *v11; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BE18F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v3);
    sub_1B4CF90(&MissionInfoMaker_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B4CF90(&StringLiteral_20596/*"itemGetEffectId"*/, v6);
    byte_49BE18F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v9 = entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    if ( v9 )
      return ItemEntity__getScript(
               (ItemEntity_o *)v9,
               (System_String_o *)StringLiteral_20596/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0LL);
LABEL_14:
    sub_1B4D1EC(Instance, v8);
  }
  v11 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v11 = MissionInfoMaker_TypeInfo;
  }
  return v11->static_fields->ITEM_GET_EFFECT_DEFAULT_ID;
}


bool __fastcall MissionInfoMaker__GetMissionConditionGroupProgress(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionConditionEntity__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int v7; // w19
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  v2 = entities;
  if ( (byte_49BE185 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v4);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_1B4CF90(
                                                                                   &Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__,
                                                                                   v5);
    byte_49BE185 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !v2 )
    sub_1B4D1EC(entities, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)v2,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B4D1EC(0LL, v6);
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v9.fields._current, 0LL) )
    {
      v7 = 4;
      goto LABEL_10;
    }
  }
  v7 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v7 != 4;
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
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v30; // x1
  _BOOL8 v31; // x0
  __int64 v32; // x1
  MissionInfoMaker___c_c *v33; // x8
  Il2CppObject *currentValue; // x19
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v36; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x20
  int v43; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v46; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_49BE183 & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_EventMissionConditionEntity__TypeInfo, *(_QWORD *)&missionId);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__,
      v5);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__,
      v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v8);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__,
      v9);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__,
      v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v11);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__,
      v12);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__,
      v13);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__,
      v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v15);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__,
      v16);
    sub_1B4CF90(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__,
      v17);
    sub_1B4CF90(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__,
      v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v20);
    sub_1B4CF90(&MissionInfoMaker_TypeInfo, v21);
    sub_1B4CF90(&Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__7_0__, v22);
    sub_1B4CF90(&MissionInfoMaker___c_TypeInfo, v23);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__,
      v24);
    byte_49BE183 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  memset(&v47, 0, sizeof(v47));
  memset(&v45, 0, sizeof(v45));
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  result = (EventMissionConditionEntity_o *)MissionInfoMaker__GetEventMissionConditionGroup(eventId, missionId, method);
  if ( result )
  {
    v26 = result;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)result,
           (const MethodInfo_31F6B30 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    {
      return 0LL;
    }
    else
    {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator(
        &v44,
        (System_Collections_Generic_Dictionary_int__object__o *)v26,
        (const MethodInfo_31F72B8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
      v27 = 0LL;
      v47 = v44;
      while ( 1 )
      {
        if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                &v47,
                (const MethodInfo_3344C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
            &v47,
            (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
          return 0LL;
        }
        if ( LODWORD(v47.fields._current.fields.key) == 4 )
        {
          if ( !v47.fields._current.fields.value )
            sub_1B4D1EC(0LL, v28);
          Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                     (System_Collections_Generic_Dictionary_int__object__o *)v47.fields._current.fields.value,
                     (const MethodInfo_31F6C90 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
          if ( !Values )
            sub_1B4D1EC(0LL, v30);
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v44,
            Values,
            (const MethodInfo_3878284 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
          *(_OWORD *)&v46.fields._dictionary = *(_OWORD *)&v44.fields._dictionary;
          v46.fields._currentValue = v44.fields._current.fields.key;
          while ( 1 )
          {
            v31 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                    &v46,
                    (const MethodInfo_33458A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
            if ( !v31 )
              break;
            v33 = MissionInfoMaker___c_TypeInfo;
            currentValue = v46.fields._currentValue;
            if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
              v33 = MissionInfoMaker___c_TypeInfo;
            }
            _9__7_0 = (System_Comparison_T__o *)v33->static_fields->__9__7_0;
            if ( !_9__7_0 )
            {
              if ( !v33->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v33);
                v33 = MissionInfoMaker___c_TypeInfo;
              }
              v36 = (Il2CppObject *)v33->static_fields->__9;
              _9__7_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionConditionEntity__TypeInfo);
              System_Comparison_object____ctor(
                _9__7_0,
                v36,
                Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__7_0__,
                0LL);
              static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
              static_fields->__9__7_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__7_0;
              sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v38, v39);
            }
            if ( !currentValue )
              sub_1B4D1EC(v31, v32);
            System_Collections_Generic_List_object___Sort_56106144(
              (System_Collections_Generic_List_object__o *)currentValue,
              _9__7_0,
              (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v44,
              (System_Collections_Generic_List_object__o *)currentValue,
              (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
            *(_OWORD *)&v45.fields._list = *(_OWORD *)&v44.fields._dictionary;
            v45.fields._current = v44.fields._current.fields.key;
            while ( 1 )
            {
              v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v45,
                      (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
              if ( !v40 )
                break;
              current = v45.fields._current;
              if ( !v45.fields._current )
                sub_1B4D1EC(v40, v41);
              if ( !EventMissionConditionEntity__getMissionProgress(
                      (EventMissionConditionEntity_o *)v45.fields._current,
                      0LL) )
              {
                v43 = 11;
                v27 = (EventMissionConditionEntity_o *)current;
                goto LABEL_27;
              }
            }
            v43 = 6;
LABEL_27:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v45,
              (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
            if ( v43 != 6 )
              goto LABEL_31;
          }
          v43 = 4;
LABEL_31:
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
            &v46,
            (const MethodInfo_33458A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
          if ( (v43 | 4) != 4 )
            break;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v47,
        (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      if ( v43 == 11 )
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
  __int64 v24; // x1
  int key; // w23
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x1
  bool v29; // w20
  Il2CppObject *currentValue; // x21
  int32_t v32; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v34; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_49BE182 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__,
      *(_QWORD *)&missionId);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__,
      v9);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__, v10);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__,
      v11);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__,
      v12);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__,
      v13);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__,
      v14);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__,
      v15);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__,
      v16);
    sub_1B4CF90(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__,
      v17);
    sub_1B4CF90(
      &Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__,
      v18);
    sub_1B4CF90(&MissionInfoMaker_TypeInfo, v19);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__,
      v20);
    byte_49BE182 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  memset(&v34, 0, sizeof(v34));
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
         (const MethodInfo_31F6B30 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v33,
    v22,
    (const MethodInfo_31F72B8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v35 = v33;
  v23 = !isNowMission && ignoreStartCondition;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v35,
            (const MethodInfo_3344C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v35,
        (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      goto LABEL_20;
    }
    key = (int)v35.fields._current.fields.key;
    if ( !v23 || LODWORD(v35.fields._current.fields.key) != 3 )
    {
      if ( !v35.fields._current.fields.value )
        sub_1B4D1EC(0LL, v24);
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 (System_Collections_Generic_Dictionary_int__object__o *)v35.fields._current.fields.value,
                 (const MethodInfo_31F6C90 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_1B4D1EC(0LL, v27);
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v33,
        Values,
        (const MethodInfo_3878284 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      *(_OWORD *)&v34.fields._dictionary = *(_OWORD *)&v33.fields._dictionary;
      v34.fields._currentValue = v33.fields._current.fields.key;
      do
      {
        v29 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                &v34,
                (const MethodInfo_33458A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
        if ( !v29 )
          break;
        currentValue = v34.fields._currentValue;
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      }
      while ( !MissionInfoMaker__GetMissionConditionGroupProgress(
                 (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
                 v28) );
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
        &v34,
        (const MethodInfo_33458A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      if ( !v29 )
        break;
    }
  }
  v32 = key - 1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v35,
    (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  if ( key != 5 )
    return v32;
LABEL_20:
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v33,
    v22,
    (const MethodInfo_31F72B8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v35 = v33;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v35,
            (const MethodInfo_3344C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    if ( LODWORD(v35.fields._current.fields.key) == 4 )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v35,
        (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      return 4;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v35,
    (const MethodInfo_3344D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
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

  if ( (byte_49BE186 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventMissionMaster___, *(_QWORD *)&missionId);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49BE186 = 1;
  }
  if ( progressType == 4 )
  {
    Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1B4D1EC(Instance, v12);
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
          sub_1B4D1F4(Instance, v12);
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
  const MethodInfo *v26; // x3
  int v27; // w23
  unsigned int v28; // w22
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x21
  int64_t v32; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  int64_t v35; // x8
  int64_t monitor; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x20
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  int64_t v46; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49BE189 & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_EventMissionConditionEntity__TypeInfo, *(_QWORD *)&progStatus);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v11);
    sub_1B4CF90(&long_TypeInfo, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v16);
    sub_1B4CF90(&Method_MissionInfoMaker___c__GetProgressText_b__14_0__, v17);
    sub_1B4CF90(&MissionInfoMaker___c_TypeInfo, v18);
    sub_1B4CF90(&StringLiteral_24684/*"{0:N0}/{1:N0}"*/, v19);
    sub_1B4CF90(&StringLiteral_1/*""*/, v20);
    byte_49BE189 = 1;
  }
  memset(&v48, 0, sizeof(v48));
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
    v22 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_MissionInfoMaker___c__GetProgressText_b__14_0__, 0LL);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v22;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)v22, v25, v26);
  }
  if ( !entityList
    || (System_Collections_Generic_List_object___Sort_56106144(
          (System_Collections_Generic_List_object__o *)entityList,
          v22,
          (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)entityList,
                  0,
                  (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__)) == 0LL) )
  {
    sub_1B4D1EC(Item, *(_QWORD *)&progStatus);
  }
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v27 = *((_DWORD *)Item + 9);
  v28 = progStatus - 3;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v29 )
      break;
    current = v48.fields._current;
    if ( !v48.fields._current )
      sub_1B4D1EC(v29, v30);
    if ( HIDWORD(v48.fields._current[2].klass) == v27 )
    {
      v32 = *progressNum;
      if ( LODWORD(v48.fields._current[2].monitor) == 12 )
      {
        ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                  (EventMissionConditionEntity_o *)v48.fields._current,
                                  0LL);
        p_monitor = targetNum;
        *progressNum = v32 + ProgressNumByDateType;
        v35 = 1LL;
      }
      else
      {
        if ( v28 >= 2 )
          monitor = EventMissionConditionEntity__getProgressNum(
                      (EventMissionConditionEntity_o *)v48.fields._current,
                      0LL);
        else
          monitor = (int64_t)v48.fields._current[3].monitor;
        *progressNum = monitor + v32;
        v35 = *targetNum;
        p_monitor = (int64_t *)&current[3].monitor;
      }
      *targetNum = *p_monitor + v35;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v47.fields._list = (struct System_Collections_Generic_List_T__o *)*progressNum;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47, v38, v39, v40);
  v46 = *targetNum;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46, v42, v43, v44);
  return System_String__Format_61134760((System_String_o *)StringLiteral_24684/*"{0:N0}/{1:N0}"*/, v41, v45, 0LL);
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
  if ( (byte_49BE18B & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_1B4CF90(&MissionInfoMaker_TypeInfo, method);
    byte_49BE18B = 1;
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
      sub_1B4D1F4(entities, method);
    v5 = v2->m_Items[v4];
    if ( !v5 )
      sub_1B4D1EC(entities, method);
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
  const MethodInfo *v19; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49BE191 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49BE191 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)data, 0, svtId, method);
  if ( !svtList || !*(_QWORD *)&svtList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1B4D1EC(Instance, v11);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= max_length )
      sub_1B4D1F4(Instance, v11);
    v15 = svtList->m_Items[v14];
    if ( !v15 || !v13 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v13,
                                 &entity,
                                 v15->fields.userSvtId,
                                 (const MethodInfo_319FF44 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v22, 0LL);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v14 >= max_length )
      return 0;
  }
  *data = v15;
  sub_1B4CF34((CGThumbnailListItem_o *)data, (int32_t)v15, v18, v19);
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
  __int64 v8; // x1
  System_String_o *v9; // x21

  if ( (byte_49BE193 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, callback);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&StringLiteral_8517/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, v6);
    byte_49BE193 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8517/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
  if ( !costumeEntity
    || (v9 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0LL),
        (Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v8);
  }
  CommonUI__OpenItemDetailDialog_30325108(
    (CommonUI_o *)Instance,
    v9,
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
  __int64 v7; // x1
  CommonUI_o *v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v10; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *detail; // x8
  System_String_o *v12; // x20

  if ( (byte_49BE194 & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, callback);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49BE194 = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_8;
  v8 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47044416(name, 0LL);
  detail = equipEntity->fields.detail;
  v12 = v10;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47044416(detail, 0LL);
  if ( !v8 )
LABEL_8:
    sub_1B4D1EC(Instance, v7);
  CommonUI__OpenItemDetailDialog_30325108(v8, v12, Instance, callback, 0LL);
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
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  int32_t objectId; // w2
  __int64 *v27; // x8
  Il2CppObject **v28; // x1

  if ( (byte_49BE18C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommandCodeMaster___, itemEntity);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v15);
    sub_1B4CF90(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v16);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49BE18C = 1;
  }
  *itemEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)itemEntity, 0, (int32_t)servantEntity, (const MethodInfo *)commandCodeEntity);
  *servantEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)servantEntity, 0, v18, v19);
  *commandCodeEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)commandCodeEntity, 0, v20, v21);
  *servantCostumeEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)servantCostumeEntity, 0, v22, v23);
  if ( !giftEntity )
LABEL_18:
    sub_1B4D1EC(Instance, v25);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v27 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v28 = (Il2CppObject **)servantEntity;
      goto LABEL_17;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v27 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v28 = (Il2CppObject **)itemEntity;
      goto LABEL_17;
    case 9:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v27 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v28 = (Il2CppObject **)commandCodeEntity;
LABEL_17:
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        v28,
        objectId,
        (const MethodInfo_319D9E8 *)*v27);
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
  const MethodInfo *v22; // x3
  int32_t type; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_49BE190 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49BE190 = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)data, 0, svtId, *(const MethodInfo **)&giftType);
  if ( svtList && *(_QWORD *)&svtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_30:
      sub_1B4D1EC(Instance, v13);
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
          sub_1B4D1F4(Instance, v13);
        v18 = svtList->m_Items[v16];
        if ( !v18 || !v15 )
          goto LABEL_30;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     v15,
                                     &entity,
                                     v18->fields.userSvtId,
                                     (const MethodInfo_319FF44 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v26, 0LL);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v18;
            sub_1B4CF34((CGThumbnailListItem_o *)data, (int32_t)v18, v21, v22);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BE196 & 1) == 0 )
  {
    sub_1B4CF90(&MissionInfoMaker___c_TypeInfo, v1);
    byte_49BE196 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(MissionInfoMaker___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionInfoMaker___c_TypeInfo->static_fields->__9 = (struct MissionInfoMaker___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)MissionInfoMaker___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetConditionMessage_b__12_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}


bool __fastcall MissionInfoMaker___c___GetIconGiftEntities_b__20_0(
        MissionInfoMaker___c_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  int32_t priority; // w19
  MissionInfoMaker_c *v5; // x0

  if ( (byte_49BE198 & 1) == 0 )
  {
    this = (MissionInfoMaker___c_o *)sub_1B4CF90(&MissionInfoMaker_TypeInfo, entity);
    byte_49BE198 = 1;
  }
  if ( !entity )
    sub_1B4D1EC(this, entity);
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

  if ( (byte_49BE197 & 1) == 0 )
  {
    this = (MissionInfoMaker___c_o *)sub_1B4CF90(&MissionInfoMaker_TypeInfo, x);
    byte_49BE197 = 1;
  }
  if ( !x )
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetMissionNotClearConditionInfo_b__7_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetProgressText_b__14_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}