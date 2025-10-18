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

  if ( (byte_4C46150 & 1) == 0 )
  {
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&StringLiteral_17232/*"bit_present_get{0}"*/);
    sub_1C37058(&StringLiteral_5901/*"Effect/Talk/bit_present_get{0}"*/);
    byte_4C46150 = 1;
  }
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  static_fields->MINI_ICON_SHOW_PRIORITY = 100;
  v4 = StringLiteral_5901/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5901/*"Effect/Talk/bit_present_get{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->ITEM_GET_ASSET_NAME, v4, v1, v2);
  v5 = StringLiteral_17232/*"bit_present_get{0}"*/;
  v6 = MissionInfoMaker_TypeInfo->static_fields;
  v6->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_17232/*"bit_present_get{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->ITEM_GET_EFFECT_NAME, v5, v7, v8);
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
  System_String_o **p_monitor; // x8

  if ( (byte_4C46143 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C37058(&Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__);
    sub_1C37058(&MissionInfoMaker___c_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46143 = 1;
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
      _9__14_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__14_0, v5, Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__, 0);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__14_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v7, v8);
    }
    System_Collections_Generic_List_object___Sort_58346216(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__14_0,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1C372B4(0);
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  __int64 v10; // x26
  GetCommandCodes_o *v11; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C4614D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C37058(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4614D = 1;
  }
  entity = 0;
  *data = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)data, 0, commandCodeId, method);
  if ( !commandCodeList || !commandCodeList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1C372B4(Instance);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
      sub_1C372BC(Instance);
    v11 = commandCodeList->m_Items[v10];
    if ( !v11 || !v9 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v9,
                                 &entity,
                                 v11->fields.userCommandCodeId,
                                 (const MethodInfo_33A3648 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = klass;
      *(_QWORD *)&v18.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v18, 0);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v10 >= max_length )
      return 0;
  }
  *data = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)data, (int32_t)v11, v14, v15);
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
  System_String_o **v10; // x8

  if ( (byte_4C46142 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C37058(&Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__);
    sub_1C37058(&MissionInfoMaker___c_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46142 = 1;
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
      _9__13_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__13_0, v5, Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__, 0);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v7, v8);
    }
    System_Collections_Generic_List_object___Sort_58346216(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__13_0,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1C372B4(0);
    v10 = (System_String_o **)&Item[4];
  }
  else
  {
    v10 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v10;
}


int32_t MissionInfoMaker__GetConditionMessageType(int32_t progressType, const MethodInfo *method)
{
  if ( (unsigned int)(progressType - 2) > 2 )
    return 2;
  else
    return dword_C4938C[progressType - 2];
}


System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *MissionInfoMaker__GetEventMissionConditionGroup(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  EventMissionConditionEntity_array *MissionCondList; // x19
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int max_length; // w8
  const MethodInfo_33FA778 **v9; // x24
  const MethodInfo_33FA778 **v10; // x28
  const MethodInfo_33FA4E4 **v11; // x29
  _QWORD *v12; // x26
  unsigned int v13; // w25
  EventMissionConditionEntity_o *v14; // x21
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__object__o *v16; // x23
  _QWORD *v17; // x19
  const MethodInfo_33FA4E4 **v18; // x26
  const MethodInfo_33FA778 **v19; // x29
  const MethodInfo_33FA778 **v20; // x28
  Il2CppObject *Item; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__object__o *v23; // x23
  System_Collections_Generic_List_object__o *v24; // x24
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppClass *klass; // x8
  __int64 v28; // x9
  __int64 monitor_low; // x10
  void **v30; // x8
  EventMissionConditionEntity_array *v32; // [xsp+8h] [xbp-68h]

  if ( (byte_4C4613F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4613F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_25;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v9 = (const MethodInfo_33FA778 **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v10 = (const MethodInfo_33FA778 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v11 = (const MethodInfo_33FA4E4 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v12 = &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
    v13 = 0;
    v32 = MissionCondList;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C372BC(Instance);
      v14 = MissionCondList->m_Items[v13];
      if ( !v14 || !v7 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v7, v14->fields.missionProgressType, *v9) )
      {
        missionProgressType = v14->fields.missionProgressType;
        v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
        System_Collections_Generic_Dictionary_int__object____ctor(
          v16,
          (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v7,
          missionProgressType,
          (Il2CppObject *)v16,
          (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v7,
                   v14->fields.missionProgressType,
                   (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              v14->fields.condGroup,
              *v10) )
      {
        v17 = v12;
        v18 = v11;
        v19 = v10;
        v20 = v9;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v7,
                 v14->fields.missionProgressType,
                 (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v14->fields.condGroup;
        v23 = (System_Collections_Generic_Dictionary_int__object__o *)Item;
        v24 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v24,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v23 )
          break;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v23,
          condGroup,
          (Il2CppObject *)v24,
          (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v9 = v20;
        v10 = v19;
        v11 = v18;
        v12 = v17;
        MissionCondList = v32;
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v7,
                   v14->fields.missionProgressType,
                   (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                   v14->fields.condGroup,
                   *v11);
      if ( !Instance )
        break;
      klass = Instance[1].klass;
      v28 = *v12;
      ++HIDWORD(Instance[1].monitor);
      if ( !klass )
        break;
      monitor_low = SLODWORD(Instance[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v14,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(*(_QWORD *)(v28 + 32) + 192LL) + 112LL));
      }
      else
      {
        v30 = &klass->_1.image + monitor_low;
        LODWORD(Instance[1].monitor) = monitor_low + 1;
        v30[4] = v14;
        sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v14, v25, v26);
      }
      max_length = MissionCondList->max_length;
      if ( (int)++v13 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v7;
    }
LABEL_25:
    sub_1C372B4(Instance);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v7;
}


GiftEntity_array *MissionInfoMaker__GetIconGiftEntities(int32_t giftId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  GiftEntity_array *GiftListById; // x0
  MissionInfoMaker___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__bool__o *_9__21_0; // x20
  Il2CppObject *v8; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_4C46149 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C37058(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C37058(&Method_MissionInfoMaker___c__GetIconGiftEntities_b__21_0__);
    sub_1C37058(&MissionInfoMaker___c_TypeInfo);
    byte_4C46149 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, giftId, 0);
  v5 = MissionInfoMaker___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
    v5 = MissionInfoMaker___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__bool__o *)v5->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = MissionInfoMaker___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__21_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__21_0, v8, Method_MissionInfoMaker___c__GetIconGiftEntities_b__21_0__, 0);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_GiftEntity__bool__o *)_9__21_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__21_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  return (GiftEntity_array *)System_Linq_Enumerable__ToArray_object_(
                               v12,
                               (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
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

  if ( (byte_4C46148 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_GiftEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_GiftEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C37058(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_GiftEntity__int__TypeInfo);
    sub_1C37058(&Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_0__);
    sub_1C37058(&Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_1__);
    sub_1C37058(&MissionInfoMaker___c_TypeInfo);
    byte_4C46148 = 1;
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
    _9__20_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__20_0, v5, Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_0__, 0);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_GiftEntity__bool__o *)_9__20_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v7, v8);
  }
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)entities,
         (System_Func_TSource__bool__o *)_9__20_0,
         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
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
    _9__20_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_GiftEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v13, Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_1__, 0);
    v14 = MissionInfoMaker___c_TypeInfo->static_fields;
    v14->__9__20_1 = (struct System_Func_GiftEntity__int__o *)_9__20_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v14->__9__20_1, (int32_t)_9__20_1, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TKey__o *)_9__20_1,
                                                               (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_GiftEntity__int___);
  return (GiftEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                           v17,
                           (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_GiftEntity___);
}


bool MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_4C46145 & 1) == 0 )
  {
    sub_1C37058(&UserMissionNewManager_TypeInfo);
    byte_4C46145 = 1;
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
  Il2CppObject *v4; // x19
  MissionInfoMaker_c *v6; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4614A & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_21023/*"itemGetEffectId"*/);
    byte_4C4614A = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v4 = entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    if ( v4 )
      return ItemEntity__getScript(
               (ItemEntity_o *)v4,
               (System_String_o *)StringLiteral_21023/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0);
LABEL_14:
    sub_1C372B4(Instance);
  }
  v6 = MissionInfoMaker_TypeInfo;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    v6 = MissionInfoMaker_TypeInfo;
  }
  return v6->static_fields->ITEM_GET_EFFECT_DEFAULT_ID;
}


bool MissionInfoMaker__GetMissionConditionGroupProgress(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionConditionEntity__o *v2; // x19
  int v3; // w19
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  v2 = entities;
  if ( (byte_4C46140 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    byte_4C46140 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  if ( !v2 )
    sub_1C372B4(entities);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)v2,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C372B4(0);
    if ( !EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v5.fields._current, 0) )
    {
      v3 = 4;
      goto LABEL_10;
    }
  }
  v3 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return v3 != 4;
}


EventMissionConditionEntity_o *MissionInfoMaker__GetMissionNotClearConditionInfo(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  EventMissionConditionEntity_o *result; // x0
  EventMissionConditionEntity_o *v6; // x19
  EventMissionConditionEntity_o *v7; // x22
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  _BOOL8 v9; // x0
  MissionInfoMaker___c_c *v10; // x8
  Il2CppObject *currentValue; // x19
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v13; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  _BOOL8 v17; // x0
  Il2CppObject *current; // x20
  int v19; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v22; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_4C4613E & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__);
    sub_1C37058(&MissionInfoMaker___c_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_4C4613E = 1;
  }
  memset(&v22, 0, sizeof(v22));
  memset(&v23, 0, sizeof(v23));
  memset(&v21, 0, sizeof(v21));
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  result = (EventMissionConditionEntity_o *)MissionInfoMaker__GetEventMissionConditionGroup(eventId, missionId, method);
  if ( result )
  {
    v6 = result;
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)result,
           (const MethodInfo_33FA234 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    {
      return 0;
    }
    else
    {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator(
        &v20,
        (System_Collections_Generic_Dictionary_int__object__o *)v6,
        (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
      v7 = 0;
      v23 = v20;
      while ( 1 )
      {
        if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                &v23,
                (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
            &v23,
            (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
          return 0;
        }
        if ( LODWORD(v23.fields._current.fields.key) == 4 )
        {
          if ( !v23.fields._current.fields.value )
            sub_1C372B4(0);
          Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                     (System_Collections_Generic_Dictionary_int__object__o *)v23.fields._current.fields.value,
                     (const MethodInfo_33FA394 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
          if ( !Values )
            sub_1C372B4(0);
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v20,
            Values,
            (const MethodInfo_3AD998C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
          *(_OWORD *)&v22.fields._dictionary = *(_OWORD *)&v20.fields._dictionary;
          v22.fields._currentValue = v20.fields._current.fields.key;
          while ( 1 )
          {
            v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                   &v22,
                   (const MethodInfo_355206C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
            if ( !v9 )
              break;
            v10 = MissionInfoMaker___c_TypeInfo;
            currentValue = v22.fields._currentValue;
            if ( !MissionInfoMaker___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo);
              v10 = MissionInfoMaker___c_TypeInfo;
            }
            _9__8_0 = (System_Comparison_T__o *)v10->static_fields->__9__8_0;
            if ( !_9__8_0 )
            {
              if ( !v10->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v10);
                v10 = MissionInfoMaker___c_TypeInfo;
              }
              v13 = (Il2CppObject *)v10->static_fields->__9;
              _9__8_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionConditionEntity__TypeInfo);
              System_Comparison_object____ctor(
                _9__8_0,
                v13,
                Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__,
                0);
              static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
              static_fields->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
              sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v15, v16);
            }
            if ( !currentValue )
              sub_1C372B4(v9);
            System_Collections_Generic_List_object___Sort_58346216(
              (System_Collections_Generic_List_object__o *)currentValue,
              _9__8_0,
              (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v20,
              (System_Collections_Generic_List_object__o *)currentValue,
              (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
            *(_OWORD *)&v21.fields._list = *(_OWORD *)&v20.fields._dictionary;
            v21.fields._current = v20.fields._current.fields.key;
            while ( 1 )
            {
              v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v21,
                      (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
              if ( !v17 )
                break;
              current = v21.fields._current;
              if ( !v21.fields._current )
                sub_1C372B4(v17);
              if ( !EventMissionConditionEntity__getMissionProgress(
                      (EventMissionConditionEntity_o *)v21.fields._current,
                      0) )
              {
                v19 = 11;
                v7 = (EventMissionConditionEntity_o *)current;
                goto LABEL_27;
              }
            }
            v19 = 6;
LABEL_27:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v21,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
            if ( v19 != 6 )
              goto LABEL_31;
          }
          v19 = 4;
LABEL_31:
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
            &v22,
            (const MethodInfo_3552068 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
          if ( (v19 | 4) != 4 )
            break;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v23,
        (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      if ( v19 == 11 )
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

  if ( (byte_4C4613C & 1) == 0 )
  {
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    byte_4C4613C = 1;
  }
  if ( !eventMissionEntity )
    return 0;
  missionTargetId = eventMissionEntity->fields.missionTargetId;
  id = eventMissionEntity->fields.id;
  isNowMission = EventMissionEntity__isNowMission(eventMissionEntity, 0);
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(eventMissionEntity, 0);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  return MissionInfoMaker__GetMissionProgressType_46962472(
           missionTargetId,
           id,
           isNowMission,
           IsIgnoreStartCondition,
           v6);
}


// local variable allocation has failed, the output may be wrong!
int32_t MissionInfoMaker__GetMissionProgressType_46962472(
        int32_t eventId,
        int32_t missionId,
        bool isNowMission,
        bool ignoreStartCondition,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *EventMissionConditionGroup; // x0
  System_Collections_Generic_Dictionary_int__object__o *v10; // x25
  UserEventMissionEntity_array *Master_object; // x0
  int max_length; // w8
  int v13; // w9
  UserEventMissionEntity_o *v14; // x10
  bool v15; // w29
  int key; // w19
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  const MethodInfo *v18; // x1
  bool v19; // w20
  Il2CppObject *currentValue; // x21
  int32_t v22; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v24; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C4613D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_4C4613D = 1;
  }
  entity = 0;
  memset(&v25, 0, sizeof(v25));
  memset(&v24, 0, sizeof(v24));
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
         (const MethodInfo_33FA234 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventMissionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !Master_object )
    goto LABEL_51;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         missionId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
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
        Master_object = (UserEventMissionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
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
          v13 = 0;
          while ( 1 )
          {
            if ( max_length == v13 )
              sub_1C372BC(Master_object);
            v14 = Master_object->m_Items[v13];
            if ( !v14 )
              break;
            if ( v14->fields.missionId == missionId && (v14->fields.missionProgressType & 0xFFFFFFFE) == 4 )
              goto LABEL_39;
            if ( max_length == ++v13 )
              goto LABEL_26;
          }
LABEL_51:
          sub_1C372B4(Master_object);
        }
      }
    }
  }
LABEL_26:
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v23,
    v10,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v25 = v23;
  v15 = !isNowMission && ignoreStartCondition;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v25,
            (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v25,
        (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      goto LABEL_39;
    }
    key = (int)v25.fields._current.fields.key;
    if ( !v15 || LODWORD(v25.fields._current.fields.key) != 3 )
    {
      if ( !v25.fields._current.fields.value )
        sub_1C372B4(0);
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 (System_Collections_Generic_Dictionary_int__object__o *)v25.fields._current.fields.value,
                 (const MethodInfo_33FA394 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_1C372B4(0);
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v23,
        Values,
        (const MethodInfo_3AD998C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      *(_OWORD *)&v24.fields._dictionary = *(_OWORD *)&v23.fields._dictionary;
      v24.fields._currentValue = v23.fields._current.fields.key;
      do
      {
        v19 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                &v24,
                (const MethodInfo_355206C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
        if ( !v19 )
          break;
        currentValue = v24.fields._currentValue;
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      }
      while ( !MissionInfoMaker__GetMissionConditionGroupProgress(
                 (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
                 v18) );
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
        &v24,
        (const MethodInfo_3552068 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      if ( !v19 )
        break;
    }
  }
  v22 = key - 1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v25,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  if ( key == 5 )
  {
LABEL_39:
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v23,
      v10,
      (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    v25 = v23;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v25,
              (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      if ( LODWORD(v25.fields._current.fields.key) == 4 )
      {
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v25,
          (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
        return 4;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v25,
      (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    return 0;
  }
  return v22;
}


int32_t MissionInfoMaker__GetProgStatus(
        int32_t eventId,
        int32_t missionId,
        int32_t progressType,
        bool isNowMission,
        const MethodInfo *method)
{
  UserEventMissionEntity_array *Instance; // x0
  int max_length; // w8
  int v12; // w9
  UserEventMissionEntity_o *v13; // x10

  if ( (byte_4C46141 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46141 = 1;
  }
  if ( progressType == 4 )
  {
    Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0)) == 0 )
    {
LABEL_22:
      sub_1C372B4(Instance);
    }
    max_length = Instance->max_length;
    if ( max_length < 1 )
    {
      return 3;
    }
    else
    {
      v12 = 0;
      while ( 1 )
      {
        if ( max_length == v12 )
          sub_1C372BC(Instance);
        v13 = Instance->m_Items[v12];
        if ( !v13 )
          goto LABEL_22;
        if ( v13->fields.missionId == missionId )
          break;
        if ( max_length == ++v12 )
          return 3;
      }
      if ( v13->fields.missionProgressType == 4 )
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
  Il2CppObject *current; // x21
  int64_t v19; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  int64_t v22; // x8
  int64_t monitor; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x0
  int64_t v39; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C46144 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C37058(&Method_MissionInfoMaker___c__GetProgressText_b__15_0__);
    sub_1C37058(&MissionInfoMaker___c_TypeInfo);
    sub_1C37058(&StringLiteral_25093/*"{0:N0}/{1:N0}"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46144 = 1;
  }
  memset(&v41, 0, sizeof(v41));
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
    v10 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(v10, v11, Method_MissionInfoMaker___c__GetProgressText_b__15_0__, 0);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v10;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)v10, v13, v14);
  }
  if ( !entityList
    || (System_Collections_Generic_List_object___Sort_58346216(
          (System_Collections_Generic_List_object__o *)entityList,
          v10,
          (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)entityList,
                  0,
                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__)) == 0) )
  {
    sub_1C372B4(Item);
  }
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v15 = *((_DWORD *)Item + 9);
  v16 = progStatus - 3;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v17 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1C372B4(v17);
    if ( HIDWORD(v41.fields._current[2].klass) == v15 )
    {
      v19 = *progressNum;
      if ( LODWORD(v41.fields._current[2].monitor) == 12 )
      {
        ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                  (EventMissionConditionEntity_o *)v41.fields._current,
                                  0);
        p_monitor = targetNum;
        *progressNum = v19 + ProgressNumByDateType;
        v22 = 1;
      }
      else
      {
        if ( v16 >= 2 )
          monitor = EventMissionConditionEntity__getProgressNum((EventMissionConditionEntity_o *)v41.fields._current, 0);
        else
          monitor = (int64_t)v41.fields._current[3].monitor;
        *progressNum = monitor + v19;
        v22 = *targetNum;
        p_monitor = (int64_t *)&current[3].monitor;
      }
      *targetNum = *p_monitor + v22;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v40.fields._list = (struct System_Collections_Generic_List_T__o *)*progressNum;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v40, v25, v26, v27, v28, v29, v30);
  v39 = *targetNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v39, v32, v33, v34, v35, v36, v37);
  return System_String__Format_63602948((System_String_o *)StringLiteral_25093/*"{0:N0}/{1:N0}"*/, v31, v38, 0);
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
  if ( (byte_4C46146 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_1C37058(&MissionInfoMaker_TypeInfo);
    byte_4C46146 = 1;
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
      sub_1C372BC(entities);
    v5 = v2->m_Items[v4];
    if ( !v5 )
      sub_1C372B4(entities);
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  __int64 v10; // x26
  GetSvts_o *v11; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C4614C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4614C = 1;
  }
  entity = 0;
  *data = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)data, 0, svtId, method);
  if ( !svtList || !svtList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1C372B4(Instance);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
      sub_1C372BC(Instance);
    v11 = svtList->m_Items[v10];
    if ( !v11 || !v9 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v9,
                                 &entity,
                                 v11->fields.userSvtId,
                                 (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = klass;
      *(_QWORD *)&v18.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v18, 0);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v10 >= max_length )
      return 0;
  }
  *data = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)data, (int32_t)v11, v14, v15);
  return 1;
}


void MissionInfoMaker__OpenCostumeReleaseDetail(
        ServantCostumeEntity_o *costumeEntity,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *Instance; // x0
  System_String_o *v6; // x21

  if ( (byte_4C4614E & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_8714/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    byte_4C4614E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8714/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0);
  if ( !costumeEntity
    || (v6 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0),
        (Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  CommonUI__OpenItemDetailDialog_31287860(
    (CommonUI_o *)Instance,
    v6,
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
  CommonUI_o *v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v8; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *detail; // x8
  System_String_o *v10; // x20

  if ( (byte_4C4614F & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4614F = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_8;
  v6 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48966740(name, 0);
  detail = equipEntity->fields.detail;
  v10 = v8;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48966740(detail, 0);
  if ( !v6 )
LABEL_8:
    sub_1C372B4(Instance);
  CommonUI__OpenItemDetailDialog_31287860(v6, v10, Instance, callback, 0);
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
  int32_t objectId; // w2
  __int64 *v19; // x8
  Il2CppObject **v20; // x1

  if ( (byte_4C46147 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46147 = 1;
  }
  *itemEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)itemEntity, 0, (int32_t)servantEntity, (const MethodInfo *)commandCodeEntity);
  *servantEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)servantEntity, 0, v11, v12);
  *commandCodeEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)commandCodeEntity, 0, v13, v14);
  *servantCostumeEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)servantCostumeEntity, 0, v15, v16);
  if ( !giftEntity )
LABEL_18:
    sub_1C372B4(Instance);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v19 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v20 = (Il2CppObject **)servantEntity;
      goto LABEL_17;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v19 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v20 = (Il2CppObject **)itemEntity;
      goto LABEL_17;
    case 9:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v19 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
      v20 = (Il2CppObject **)commandCodeEntity;
LABEL_17:
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        v20,
        objectId,
        (const MethodInfo_33A10EC *)*v19);
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  __int64 v12; // x27
  bool v13; // w19
  GetSvts_o *v14; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t type; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4C4614B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4614B = 1;
  }
  entity = 0;
  *data = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)data, 0, svtId, *(const MethodInfo **)&giftType);
  if ( svtList && svtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_30:
      sub_1C372B4(Instance);
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_1C372BC(Instance);
        v14 = svtList->m_Items[v12];
        if ( !v14 || !v11 )
          goto LABEL_30;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     v11,
                                     &entity,
                                     v14->fields.userSvtId,
                                     (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_30;
          klass = entity[5].klass;
          monitor = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v22.fields.currentCryptoKey = klass;
          *(_QWORD *)&v22.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v22, 0);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v14;
            sub_1C36FFC((CGThumbnailListItem_o *)data, (int32_t)v14, v17, v18);
            if ( Gift__IsEventSvtJoin(type, 0) )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0);
              v13 = 1;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v13;
            }
            else if ( type == 1 )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0);
              v13 = 1;
              if ( ((unsigned __int8)Instance & 1) == 0 )
                return v13;
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
        if ( (int)++v12 >= max_length )
          return v13;
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

  if ( (byte_4C46151 & 1) == 0 )
  {
    sub_1C37058(&MissionInfoMaker___c_TypeInfo);
    byte_4C46151 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(MissionInfoMaker___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionInfoMaker___c_TypeInfo->static_fields->__9 = (struct MissionInfoMaker___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)MissionInfoMaker___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}


int32_t MissionInfoMaker___c___GetConditionMessage_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}


bool MissionInfoMaker___c___GetIconGiftEntities_b__21_0(
        MissionInfoMaker___c_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  int32_t priority; // w19
  MissionInfoMaker_c *v5; // x0

  if ( (byte_4C46153 & 1) == 0 )
  {
    this = (MissionInfoMaker___c_o *)sub_1C37058(&MissionInfoMaker_TypeInfo);
    byte_4C46153 = 1;
  }
  if ( !entity )
    sub_1C372B4(this);
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

  if ( (byte_4C46152 & 1) == 0 )
  {
    this = (MissionInfoMaker___c_o *)sub_1C37058(&MissionInfoMaker_TypeInfo);
    byte_4C46152 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return x->fields.priority;
}


int32_t MissionInfoMaker___c___GetMissionNotClearConditionInfo_b__8_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}


int32_t MissionInfoMaker___c___GetProgressText_b__15_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}