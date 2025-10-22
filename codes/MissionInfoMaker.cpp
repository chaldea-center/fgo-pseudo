void MissionInfoMaker___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct MissionInfoMaker_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct MissionInfoMaker_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C59F39 & 1) == 0 )
  {
    sub_1C3E564(&MissionInfoMaker_TypeInfo);
    sub_1C3E564(&StringLiteral_17248/*"bit_present_get{0}"*/);
    sub_1C3E564(&StringLiteral_5901/*"Effect/Talk/bit_present_get{0}"*/);
    byte_4C59F39 = 1;
  }
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  static_fields->MINI_ICON_SHOW_PRIORITY = 100;
  v4 = StringLiteral_5901/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5901/*"Effect/Talk/bit_present_get{0}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->ITEM_GET_ASSET_NAME, v4, v1, v2);
  v5 = StringLiteral_17248/*"bit_present_get{0}"*/;
  v6 = MissionInfoMaker_TypeInfo->static_fields;
  v6->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_17248/*"bit_present_get{0}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->ITEM_GET_EFFECT_NAME, v5, v7, v8);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  System_Comparison_T__o *_9__14_0; // x20
  Il2CppObject *v5; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  System_String_o **p_monitor; // x8

  if ( (byte_4C59F2C & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C3E564(&Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__);
    sub_1C3E564(&MissionInfoMaker___c_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C59F2C = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v3 = MissionInfoMaker___c_TypeInfo;
    if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
      v3 = MissionInfoMaker___c_TypeInfo;
    }
    _9__14_0 = (System_Comparison_T__o *)v3->static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = MissionInfoMaker___c_TypeInfo;
      }
      v5 = (Il2CppObject *)v3->static_fields->__9;
      _9__14_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__14_0, v5, Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__, 0);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__14_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v7, v8);
    }
    System_Collections_Generic_List_object___Sort_58421028(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__14_0,
      (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1C3E7C0(0, v10);
    p_monitor = (System_String_o **)&Item[4].monitor;
  }
  else
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_monitor;
}


bool MissionInfoMaker__GetCommandCodeData(
        GetCommandCodes_array *commandCodeList,
        GetCommandCodes_o **data,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  __int64 v11; // x26
  GetCommandCodes_o *v12; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C59F36 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C59F36 = 1;
  }
  entity = 0;
  *data = 0;
  sub_1C3E508((CGThumbnailListItem_o *)data, 0, commandCodeId, method);
  if ( !commandCodeList || !commandCodeList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1C3E7C0(Instance, v8);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= max_length )
      sub_1C3E7C8(Instance, v8);
    v12 = commandCodeList->m_Items[v11];
    if ( !v12 || !v10 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v10,
                                 &entity,
                                 v12->fields.userCommandCodeId,
                                 (const MethodInfo_33B5500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v19.fields.currentCryptoKey = klass;
      *(_QWORD *)&v19.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v19, 0);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v11 >= max_length )
      return 0;
  }
  *data = v12;
  sub_1C3E508((CGThumbnailListItem_o *)data, (int32_t)v12, v15, v16);
  return 1;
}


System_String_o *MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v5; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  System_String_o **v11; // x8

  if ( (byte_4C59F2B & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C3E564(&Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__);
    sub_1C3E564(&MissionInfoMaker___c_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C59F2B = 1;
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
      _9__13_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__13_0, v5, Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__, 0);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v7, v8);
    }
    System_Collections_Generic_List_object___Sort_58421028(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__13_0,
      (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1C3E7C0(0, v10);
    v11 = (System_String_o **)&Item[4];
  }
  else
  {
    v11 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v11;
}


int32_t MissionInfoMaker__GetConditionMessageType(int32_t progressType, const MethodInfo *method)
{
  if ( (unsigned int)(progressType - 2) > 2 )
    return 2;
  else
    return dword_C4CA18[progressType - 2];
}


System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *MissionInfoMaker__GetEventMissionConditionGroup(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  EventMissionConditionEntity_array *MissionCondList; // x19
  System_Collections_Generic_Dictionary_int__object__o *v8; // x20
  int max_length; // w8
  const MethodInfo_340C630 **v10; // x24
  const MethodInfo_340C630 **v11; // x28
  const MethodInfo_340C39C **v12; // x29
  _QWORD *v13; // x26
  unsigned int v14; // w25
  EventMissionConditionEntity_o *v15; // x21
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__object__o *v17; // x23
  _QWORD *v18; // x19
  const MethodInfo_340C39C **v19; // x26
  const MethodInfo_340C630 **v20; // x29
  const MethodInfo_340C630 **v21; // x28
  Il2CppObject *Item; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__object__o *v24; // x23
  System_Collections_Generic_List_object__o *v25; // x24
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppClass *klass; // x8
  __int64 v29; // x9
  __int64 monitor_low; // x10
  void **v31; // x8
  EventMissionConditionEntity_array *v33; // [xsp+8h] [xbp-68h]

  if ( (byte_4C59F28 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C59F28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_25;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v10 = (const MethodInfo_340C630 **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v11 = (const MethodInfo_340C630 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v12 = (const MethodInfo_340C39C **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v13 = &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
    v14 = 0;
    v33 = MissionCondList;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C3E7C8(Instance, v6);
      v15 = MissionCondList->m_Items[v14];
      if ( !v15 || !v8 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v8, v15->fields.missionProgressType, *v10) )
      {
        missionProgressType = v15->fields.missionProgressType;
        v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
        System_Collections_Generic_Dictionary_int__object____ctor(
          v17,
          (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v8,
          missionProgressType,
          (Il2CppObject *)v17,
          (const MethodInfo_340C428 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v8,
                   v15->fields.missionProgressType,
                   (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              v15->fields.condGroup,
              *v11) )
      {
        v18 = v13;
        v19 = v12;
        v20 = v11;
        v21 = v10;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v8,
                 v15->fields.missionProgressType,
                 (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v15->fields.condGroup;
        v24 = (System_Collections_Generic_Dictionary_int__object__o *)Item;
        v25 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v25,
          (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v24 )
          break;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v24,
          condGroup,
          (Il2CppObject *)v25,
          (const MethodInfo_340C428 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v10 = v21;
        v11 = v20;
        v12 = v19;
        v13 = v18;
        MissionCondList = v33;
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v8,
                   v15->fields.missionProgressType,
                   (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                   v15->fields.condGroup,
                   *v12);
      if ( !Instance )
        break;
      klass = Instance[1].klass;
      v29 = *v13;
      ++HIDWORD(Instance[1].monitor);
      if ( !klass )
        break;
      monitor_low = SLODWORD(Instance[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v15,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(*(_QWORD *)(v29 + 32) + 192LL) + 112LL));
      }
      else
      {
        v31 = &klass->_1.image + monitor_low;
        LODWORD(Instance[1].monitor) = monitor_low + 1;
        v31[4] = v15;
        sub_1C3E508((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v15, v26, v27);
      }
      max_length = MissionCondList->max_length;
      if ( (int)++v14 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v8;
    }
LABEL_25:
    sub_1C3E7C0(Instance, v6);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v8;
}


GiftEntity_array *MissionInfoMaker__GetIconGiftEntities(int32_t giftId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  GiftEntity_array *GiftListById; // x0
  MissionInfoMaker___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *_9__21_0; // x20
  Il2CppObject *v9; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4C59F32 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C3E564(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C3E564(&Method_MissionInfoMaker___c__GetIconGiftEntities_b__21_0__);
    sub_1C3E564(&MissionInfoMaker___c_TypeInfo);
    byte_4C59F32 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v4);
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, giftId, 0);
  v6 = MissionInfoMaker___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v6 = MissionInfoMaker___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__bool__o *)v6->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = MissionInfoMaker___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__21_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__21_0, v9, Method_MissionInfoMaker___c__GetIconGiftEntities_b__21_0__, 0);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_GiftEntity__bool__o *)_9__21_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__21_0,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  return (GiftEntity_array *)System_Linq_Enumerable__ToArray_object_(
                               v13,
                               (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
}


GiftEntity_o *MissionInfoMaker__GetIconGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  System_Func_object__bool__o *_9__20_0; // x20
  Il2CppObject *v5; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  MissionInfoMaker___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v13; // x21
  struct MissionInfoMaker___c_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C59F31 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_GiftEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_GiftEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C3E564(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_GiftEntity__int__TypeInfo);
    sub_1C3E564(&Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_0__);
    sub_1C3E564(&Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_1__);
    sub_1C3E564(&MissionInfoMaker___c_TypeInfo);
    byte_4C59F31 = 1;
  }
  v3 = MissionInfoMaker___c_TypeInfo;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v3 = MissionInfoMaker___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__bool__o *)v3->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = MissionInfoMaker___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__20_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__20_0, v5, Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_0__, 0);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_GiftEntity__bool__o *)_9__20_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v7, v8);
  }
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)entities,
         (System_Func_TSource__bool__o *)_9__20_0,
         (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v10 = MissionInfoMaker___c_TypeInfo;
  v11 = v9;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v10 = MissionInfoMaker___c_TypeInfo;
  }
  _9__20_1 = (System_Func_object__int__o *)v10->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MissionInfoMaker___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_GiftEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v13, Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_1__, 0);
    v14 = MissionInfoMaker___c_TypeInfo->static_fields;
    v14->__9__20_1 = (struct System_Func_GiftEntity__int__o *)_9__20_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v14->__9__20_1, (int32_t)_9__20_1, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TKey__o *)_9__20_1,
                                                               (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_GiftEntity__int___);
  return (GiftEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                           v17,
                           (const MethodInfo_3122250 *)Method_System_Linq_Enumerable_FirstOrDefault_GiftEntity___);
}


bool MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_4C59F2E & 1) == 0 )
  {
    sub_1C3E564(&UserMissionNewManager_TypeInfo);
    byte_4C59F2E = 1;
  }
  if ( (progStatus & 0xFFFFFFFE) != 2 )
    return 0;
  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  return UserMissionNewManager__SetIsNewMissionInfo(missionId, 0);
}


int32_t MissionInfoMaker__GetItemGetEffectId(int32_t itemId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  MissionInfoMaker_c *v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C59F33 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&MissionInfoMaker_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_21041/*"itemGetEffectId"*/);
    byte_4C59F33 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v5 = entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    if ( v5 )
      return ItemEntity__getScript(
               (ItemEntity_o *)v5,
               (System_String_o *)StringLiteral_21041/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0);
LABEL_14:
    sub_1C3E7C0(Instance, v4);
  }
  v7 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v7 = MissionInfoMaker_TypeInfo;
  }
  return v7->static_fields->ITEM_GET_EFFECT_DEFAULT_ID;
}


bool MissionInfoMaker__GetMissionConditionGroupProgress(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionConditionEntity__o *v2; // x19
  __int64 v3; // x1
  int v4; // w19
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  v2 = entities;
  if ( (byte_4C59F29 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    byte_4C59F29 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2 )
    sub_1C3E7C0(entities, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)v2,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1C3E7C0(0, v3);
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v6.fields._current, 0) )
    {
      v4 = 4;
      goto LABEL_10;
    }
  }
  v4 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v4 != 4;
}


EventMissionConditionEntity_o *MissionInfoMaker__GetMissionNotClearConditionInfo(
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
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v16; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x20
  int v23; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_4C59F27 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C3E564(&MissionInfoMaker_TypeInfo);
    sub_1C3E564(&Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__);
    sub_1C3E564(&MissionInfoMaker___c_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_4C59F27 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  memset(&v27, 0, sizeof(v27));
  memset(&v25, 0, sizeof(v25));
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  result = (EventMissionConditionEntity_o *)MissionInfoMaker__GetEventMissionConditionGroup(eventId, missionId, method);
  if ( result )
  {
    v6 = result;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)result,
           (const MethodInfo_340C0EC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    {
      return 0;
    }
    else
    {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator(
        &v24,
        (System_Collections_Generic_Dictionary_int__object__o *)v6,
        (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
      v7 = 0;
      v27 = v24;
      while ( 1 )
      {
        if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                &v27,
                (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
            &v27,
            (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
          return 0;
        }
        if ( LODWORD(v27.fields._current.fields.key) == 4 )
        {
          if ( !v27.fields._current.fields.value )
            sub_1C3E7C0(0, v8);
          Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                     (System_Collections_Generic_Dictionary_int__object__o *)v27.fields._current.fields.value,
                     (const MethodInfo_340C24C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
          if ( !Values )
            sub_1C3E7C0(0, v10);
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v24,
            Values,
            (const MethodInfo_3AEBDC8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
          *(_OWORD *)&v26.fields._dictionary = *(_OWORD *)&v24.fields._dictionary;
          v26.fields._currentValue = v24.fields._current.fields.key;
          while ( 1 )
          {
            v11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                    &v26,
                    (const MethodInfo_35644A8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
            if ( !v11 )
              break;
            v13 = MissionInfoMaker___c_TypeInfo;
            currentValue = v26.fields._currentValue;
            if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
              v13 = MissionInfoMaker___c_TypeInfo;
            }
            _9__8_0 = (System_Comparison_T__o *)v13->static_fields->__9__8_0;
            if ( !_9__8_0 )
            {
              if ( !v13->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v13);
                v13 = MissionInfoMaker___c_TypeInfo;
              }
              v16 = (Il2CppObject *)v13->static_fields->__9;
              _9__8_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_EventMissionConditionEntity__TypeInfo);
              System_Comparison_object____ctor(
                _9__8_0,
                v16,
                Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__,
                0);
              static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
              static_fields->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
              sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v18, v19);
            }
            if ( !currentValue )
              sub_1C3E7C0(v11, v12);
            System_Collections_Generic_List_object___Sort_58421028(
              (System_Collections_Generic_List_object__o *)currentValue,
              _9__8_0,
              (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v24,
              (System_Collections_Generic_List_object__o *)currentValue,
              (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
            *(_OWORD *)&v25.fields._list = *(_OWORD *)&v24.fields._dictionary;
            v25.fields._current = v24.fields._current.fields.key;
            while ( 1 )
            {
              v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v25,
                      (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
              if ( !v20 )
                break;
              current = v25.fields._current;
              if ( !v25.fields._current )
                sub_1C3E7C0(v20, v21);
              if ( !EventMissionConditionEntity__getMissionProgress(
                      (EventMissionConditionEntity_o *)v25.fields._current,
                      0) )
              {
                v23 = 11;
                v7 = (EventMissionConditionEntity_o *)current;
                goto LABEL_27;
              }
            }
            v23 = 6;
LABEL_27:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v25,
              (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
            if ( v23 != 6 )
              goto LABEL_31;
          }
          v23 = 4;
LABEL_31:
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
            &v26,
            (const MethodInfo_35644A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
          if ( (v23 | 4) != 4 )
            break;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v27,
        (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      if ( v23 == 11 )
        return v7;
      else
        return 0;
    }
  }
  return result;
}


int32_t MissionInfoMaker__GetMissionProgressType(EventMissionEntity_o *eventMissionEntity, const MethodInfo *method)
{
  int32_t missionTargetId; // w19
  int32_t id; // w20
  bool isNowMission; // w22
  const MethodInfo *v6; // x4
  bool IsIgnoreStartCondition; // w21

  if ( (byte_4C59F25 & 1) == 0 )
  {
    sub_1C3E564(&MissionInfoMaker_TypeInfo);
    byte_4C59F25 = 1;
  }
  if ( !eventMissionEntity )
    return 0;
  missionTargetId = eventMissionEntity->fields.missionTargetId;
  id = eventMissionEntity->fields.id;
  isNowMission = EventMissionEntity__isNowMission(eventMissionEntity, 0);
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(eventMissionEntity, 0);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  return MissionInfoMaker__GetMissionProgressType_47029276(
           missionTargetId,
           id,
           isNowMission,
           IsIgnoreStartCondition,
           v6);
}


// local variable allocation has failed, the output may be wrong!
int32_t MissionInfoMaker__GetMissionProgressType_47029276(
        int32_t eventId,
        int32_t missionId,
        bool isNowMission,
        bool ignoreStartCondition,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *EventMissionConditionGroup; // x0
  System_Collections_Generic_Dictionary_int__object__o *v10; // x25
  UserEventMissionEntity_array *Master_object; // x0
  __int64 v12; // x1
  int max_length; // w8
  int v14; // w9
  UserEventMissionEntity_o *v15; // x10
  bool v16; // w29
  __int64 v17; // x1
  int key; // w19
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  bool v22; // w20
  Il2CppObject *currentValue; // x21
  int32_t v25; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C59F26 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_1C3E564(&MissionInfoMaker_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_4C59F26 = 1;
  }
  entity = 0;
  memset(&v28, 0, sizeof(v28));
  memset(&v27, 0, sizeof(v27));
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
         (const MethodInfo_340C0EC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventMissionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !Master_object )
    goto LABEL_51;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         missionId,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    Master_object = (UserEventMissionEntity_array *)entity;
    if ( !entity )
      goto LABEL_51;
    if ( !EventMissionEntity__IsDaily((EventMissionEntity_o *)entity, 0) )
    {
      Master_object = (UserEventMissionEntity_array *)entity;
      if ( !entity )
        goto LABEL_51;
      if ( !EventMissionEntity__IsIgnoreUserProgressData((EventMissionEntity_o *)entity, 0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (UserEventMissionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventMissionMaster___);
        if ( !Master_object )
          goto LABEL_51;
        Master_object = UserEventMissionMaster__getUserEventMissionList(
                          (UserEventMissionMaster_o *)Master_object,
                          eventId,
                          0);
        if ( !Master_object )
          goto LABEL_51;
        max_length = Master_object->max_length;
        if ( max_length >= 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            if ( max_length == v14 )
              sub_1C3E7C8(Master_object, v12);
            v15 = Master_object->m_Items[v14];
            if ( !v15 )
              break;
            if ( v15->fields.missionId == missionId && (v15->fields.missionProgressType & 0xFFFFFFFE) == 4 )
              goto LABEL_39;
            if ( max_length == ++v14 )
              goto LABEL_26;
          }
LABEL_51:
          sub_1C3E7C0(Master_object, v12);
        }
      }
    }
  }
LABEL_26:
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v26,
    v10,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v28 = v26;
  v16 = !isNowMission && ignoreStartCondition;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v28,
            (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v28,
        (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      goto LABEL_39;
    }
    key = (int)v28.fields._current.fields.key;
    if ( !v16 || LODWORD(v28.fields._current.fields.key) != 3 )
    {
      if ( !v28.fields._current.fields.value )
        sub_1C3E7C0(0, v17);
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 (System_Collections_Generic_Dictionary_int__object__o *)v28.fields._current.fields.value,
                 (const MethodInfo_340C24C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_1C3E7C0(0, v20);
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v26,
        Values,
        (const MethodInfo_3AEBDC8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      *(_OWORD *)&v27.fields._dictionary = *(_OWORD *)&v26.fields._dictionary;
      v27.fields._currentValue = v26.fields._current.fields.key;
      do
      {
        v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                &v27,
                (const MethodInfo_35644A8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
        if ( !v22 )
          break;
        currentValue = v27.fields._currentValue;
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      }
      while ( !MissionInfoMaker__GetMissionConditionGroupProgress(
                 (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
                 v21) );
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
        &v27,
        (const MethodInfo_35644A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      if ( !v22 )
        break;
    }
  }
  v25 = key - 1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v28,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  if ( key == 5 )
  {
LABEL_39:
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v26,
      v10,
      (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    v28 = v26;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v28,
              (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      if ( LODWORD(v28.fields._current.fields.key) == 4 )
      {
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v28,
          (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
        return 4;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v28,
      (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    return 0;
  }
  return v25;
}


int32_t MissionInfoMaker__GetProgStatus(
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

  if ( (byte_4C59F2A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C59F2A = 1;
  }
  if ( progressType == 4 )
  {
    Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0)) == 0 )
    {
LABEL_22:
      sub_1C3E7C0(Instance, v11);
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
          sub_1C3E7C8(Instance, v11);
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
System_String_o *MissionInfoMaker__GetProgressText(
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int v15; // w23
  unsigned int v16; // w22
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  int64_t v20; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  int64_t v23; // x8
  int64_t monitor; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x20
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  Il2CppObject *v39; // x0
  int64_t v40; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C59F2D & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C3E564(&Method_MissionInfoMaker___c__GetProgressText_b__15_0__);
    sub_1C3E564(&MissionInfoMaker___c_TypeInfo);
    sub_1C3E564(&StringLiteral_25113/*"{0:N0}/{1:N0}"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C59F2D = 1;
  }
  memset(&v42, 0, sizeof(v42));
  *progressNum = 0;
  *targetNum = 0;
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
    v10 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(v10, v11, Method_MissionInfoMaker___c__GetProgressText_b__15_0__, 0);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v10;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)v10, v13, v14);
  }
  if ( !entityList
    || (System_Collections_Generic_List_object___Sort_58421028(
          (System_Collections_Generic_List_object__o *)entityList,
          v10,
          (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)entityList,
                  0,
                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__)) == 0) )
  {
    sub_1C3E7C0(Item, *(_QWORD *)&progStatus);
  }
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v15 = *((_DWORD *)Item + 9);
  v16 = progStatus - 3;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v17 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_1C3E7C0(v17, v18);
    if ( HIDWORD(v42.fields._current[2].klass) == v15 )
    {
      v20 = *progressNum;
      if ( LODWORD(v42.fields._current[2].monitor) == 12 )
      {
        ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                  (EventMissionConditionEntity_o *)v42.fields._current,
                                  0);
        p_monitor = targetNum;
        *progressNum = v20 + ProgressNumByDateType;
        v23 = 1;
      }
      else
      {
        if ( v16 >= 2 )
          monitor = EventMissionConditionEntity__getProgressNum((EventMissionConditionEntity_o *)v42.fields._current, 0);
        else
          monitor = (int64_t)v42.fields._current[3].monitor;
        *progressNum = monitor + v20;
        v23 = *targetNum;
        p_monitor = (int64_t *)&current[3].monitor;
      }
      *targetNum = *p_monitor + v23;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v41.fields._list = (struct System_Collections_Generic_List_T__o *)*progressNum;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v41, v26, v27, v28, v29, v30, v31);
  v40 = *targetNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v40, v33, v34, v35, v36, v37, v38);
  return System_String__Format_63677760((System_String_o *)StringLiteral_25113/*"{0:N0}/{1:N0}"*/, v32, v39, 0);
}


float MissionInfoMaker__GetProgressValue(
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


GiftEntity_o *MissionInfoMaker__GetSubGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  GiftEntity_array *v2; // x19
  int max_length; // w8
  __int64 v4; // x21
  GiftEntity_o *v5; // x20
  int32_t priority; // w24

  v2 = entities;
  if ( (byte_4C59F2F & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_1C3E564(&MissionInfoMaker_TypeInfo);
    byte_4C59F2F = 1;
  }
  if ( !v2 )
    return 0;
  max_length = v2->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v4 >= max_length )
      sub_1C3E7C8(entities, method);
    v5 = v2->m_Items[v4];
    if ( !v5 )
      sub_1C3E7C0(entities, method);
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
      return 0;
  }
  return v5;
}


bool MissionInfoMaker__GetSvtListData(
        GetSvts_array *svtList,
        GetSvts_o **data,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  __int64 v11; // x26
  GetSvts_o *v12; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C59F35 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C59F35 = 1;
  }
  entity = 0;
  *data = 0;
  sub_1C3E508((CGThumbnailListItem_o *)data, 0, svtId, method);
  if ( !svtList || !svtList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1C3E7C0(Instance, v8);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= max_length )
      sub_1C3E7C8(Instance, v8);
    v12 = svtList->m_Items[v11];
    if ( !v12 || !v10 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v10,
                                 &entity,
                                 v12->fields.userSvtId,
                                 (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v19.fields.currentCryptoKey = klass;
      *(_QWORD *)&v19.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v19, 0);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v11 >= max_length )
      return 0;
  }
  *data = v12;
  sub_1C3E508((CGThumbnailListItem_o *)data, (int32_t)v12, v15, v16);
  return 1;
}


void MissionInfoMaker__OpenCostumeReleaseDetail(
        ServantCostumeEntity_o *costumeEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21

  if ( (byte_4C59F37 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_8714/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    byte_4C59F37 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8714/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0);
  if ( !costumeEntity
    || (v7 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0),
        (Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C3E7C0(Instance, v6);
  }
  CommonUI__OpenItemDetailDialog_31317860(
    (CommonUI_o *)Instance,
    v7,
    costumeEntity->fields.costumeReleaseDetail,
    callback,
    0);
}


void MissionInfoMaker__OpenEquipDetail(
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

  if ( (byte_4C59F38 & 1) == 0 )
  {
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C59F38 = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_8;
  v7 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(name, 0);
  detail = equipEntity->fields.detail;
  v11 = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49039980(detail, 0);
  if ( !v7 )
LABEL_8:
    sub_1C3E7C0(Instance, v6);
  CommonUI__OpenItemDetailDialog_31317860(v7, v11, Instance, callback, 0);
}


void MissionInfoMaker__SetGiftInfo(
        GiftEntity_o *giftEntity,
        ItemEntity_o **itemEntity,
        ServantEntity_o **servantEntity,
        CommandCodeEntity_o **commandCodeEntity,
        ServantCostumeEntity_o **servantCostumeEntity,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  int32_t objectId; // w2
  __int64 *v20; // x8
  Il2CppObject **v21; // x1

  if ( (byte_4C59F30 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C59F30 = 1;
  }
  *itemEntity = 0;
  sub_1C3E508((CGThumbnailListItem_o *)itemEntity, 0, (int32_t)servantEntity, (const MethodInfo *)commandCodeEntity);
  *servantEntity = 0;
  sub_1C3E508((CGThumbnailListItem_o *)servantEntity, 0, v11, v12);
  *commandCodeEntity = 0;
  sub_1C3E508((CGThumbnailListItem_o *)commandCodeEntity, 0, v13, v14);
  *servantCostumeEntity = 0;
  sub_1C3E508((CGThumbnailListItem_o *)servantCostumeEntity, 0, v15, v16);
  if ( !giftEntity )
LABEL_18:
    sub_1C3E7C0(Instance, v18);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v20 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v21 = (Il2CppObject **)servantEntity;
      goto LABEL_17;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v20 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v21 = (Il2CppObject **)itemEntity;
      goto LABEL_17;
    case 9:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_18;
      ServantCostumeMaster__TryGetEntity(
        (ServantCostumeMaster_o *)Instance,
        servantCostumeEntity,
        giftEntity->fields.objectId / 100,
        giftEntity->fields.objectId % 100,
        0);
      return;
    case 0xB:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v20 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v21 = (Il2CppObject **)commandCodeEntity;
LABEL_17:
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        v21,
        objectId,
        (const MethodInfo_33B2FA4 *)*v20);
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
bool MissionInfoMaker__TryGetSvtListData(
        GetSvts_array *svtList,
        GetSvts_o **data,
        int32_t svtId,
        int32_t giftType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x23
  __int64 v13; // x27
  bool v14; // w19
  GetSvts_o *v15; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t type; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C59F34 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C59F34 = 1;
  }
  entity = 0;
  *data = 0;
  sub_1C3E508((CGThumbnailListItem_o *)data, 0, svtId, *(const MethodInfo **)&giftType);
  if ( svtList && svtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_30:
      sub_1C3E7C0(Instance, v10);
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1C3E7C8(Instance, v10);
        v15 = svtList->m_Items[v13];
        if ( !v15 || !v12 )
          goto LABEL_30;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     v12,
                                     &entity,
                                     v15->fields.userSvtId,
                                     (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_30;
          klass = entity[5].klass;
          monitor = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v23.fields.currentCryptoKey = klass;
          *(_QWORD *)&v23.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v23, 0);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v15;
            sub_1C3E508((CGThumbnailListItem_o *)data, (int32_t)v15, v18, v19);
            if ( Gift__IsEventSvtJoin(type, 0) )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0);
              v14 = 1;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v14;
            }
            else if ( type == 1 )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0);
              v14 = 1;
              if ( ((unsigned __int8)Instance & 1) == 0 )
                return v14;
            }
            else
            {
              Instance = (Il2CppObject *)Gift__IsServant(type, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return 1;
            }
          }
        }
        max_length = svtList->max_length;
        if ( (int)++v13 >= max_length )
          return v14;
      }
    }
  }
  return 0;
}


void MissionInfoMaker_MissionClearConditionInfo___ctor(
        MissionInfoMaker_MissionClearConditionInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionInfoMaker___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C59F3A & 1) == 0 )
  {
    sub_1C3E564(&MissionInfoMaker___c_TypeInfo);
    byte_4C59F3A = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(MissionInfoMaker___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionInfoMaker___c_TypeInfo->static_fields->__9 = (struct MissionInfoMaker___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)MissionInfoMaker___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MissionInfoMaker___c___ctor(MissionInfoMaker___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MissionInfoMaker___c___GetClosedMessage_b__14_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3E7C0(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MissionInfoMaker___c___GetConditionMessage_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3E7C0(this, a);
  return b->fields.priority - a->fields.priority;
}


bool MissionInfoMaker___c___GetIconGiftEntities_b__21_0(
        MissionInfoMaker___c_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  int32_t priority; // w19
  MissionInfoMaker_c *v5; // x0

  if ( (byte_4C59F3C & 1) == 0 )
  {
    this = (MissionInfoMaker___c_o *)sub_1C3E564(&MissionInfoMaker_TypeInfo);
    byte_4C59F3C = 1;
  }
  if ( !entity )
    sub_1C3E7C0(this, entity);
  priority = entity->fields.priority;
  v5 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v5 = MissionInfoMaker_TypeInfo;
  }
  return priority != v5->static_fields->MINI_ICON_SHOW_PRIORITY;
}


bool MissionInfoMaker___c___GetIconGiftEntity_b__20_0(
        MissionInfoMaker___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  int32_t priority; // w19
  MissionInfoMaker_c *v5; // x0

  if ( (byte_4C59F3B & 1) == 0 )
  {
    this = (MissionInfoMaker___c_o *)sub_1C3E564(&MissionInfoMaker_TypeInfo);
    byte_4C59F3B = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  priority = x->fields.priority;
  v5 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v5 = MissionInfoMaker_TypeInfo;
  }
  return priority != v5->static_fields->MINI_ICON_SHOW_PRIORITY;
}


int32_t MissionInfoMaker___c___GetIconGiftEntity_b__20_1(
        MissionInfoMaker___c_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.priority;
}


int32_t MissionInfoMaker___c___GetMissionNotClearConditionInfo_b__8_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3E7C0(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MissionInfoMaker___c___GetProgressText_b__15_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3E7C0(this, a);
  return b->fields.priority - a->fields.priority;
}