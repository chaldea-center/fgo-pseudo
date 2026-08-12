void MissionInfoMaker___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct MissionInfoMaker_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct MissionInfoMaker_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59743AB & 1) == 0 )
  {
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&StringLiteral_17971/*"bit_present_get{0}"*/);
    sub_2213A60(&StringLiteral_6151/*"Effect/Talk/bit_present_get{0}"*/);
    byte_59743AB = 1;
  }
  v7 = StringLiteral_6151/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  static_fields->MINI_ICON_SHOW_PRIORITY = 100;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->ITEM_GET_ASSET_NAME, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_17971/*"bit_present_get{0}"*/;
  v10 = MissionInfoMaker_TypeInfo->static_fields;
  v10->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_17971/*"bit_present_get{0}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->ITEM_GET_EFFECT_NAME, v9, v11, v12, v13, v14, v15, v16);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__14_0; // x20
  Il2CppObject *v6; // x21
  struct MissionInfoMaker___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *Item; // x0
  __int64 v15; // x1
  System_String_o **p_monitor; // x8

  if ( (byte_597439E & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_2213A60(&Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__);
    sub_2213A60(&MissionInfoMaker___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597439E = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v3 = MissionInfoMaker___c_TypeInfo;
    if ( !*(&MissionInfoMaker___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, method);
      v3 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v3->static_fields;
    _9__14_0 = (System_Comparison_T__o *)static_fields->__9__14_0;
    if ( !_9__14_0 )
    {
      if ( !*(&v3->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v3, method);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v6 = (Il2CppObject *)static_fields->__9;
      _9__14_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__14_0, v6, Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__, 0);
      v7 = MissionInfoMaker___c_TypeInfo->static_fields;
      v7->__9__14_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__14_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->__9__14_0, (int32_t)_9__14_0, v8, v9, v10, v11, v12, v13);
    }
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__14_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_2213CDC(0, v15);
    p_monitor = (System_String_o **)&Item[4].monitor;
  }
  else
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_monitor;
}


// local variable allocation has failed, the output may be wrong!
bool MissionInfoMaker__GetCommandCodeData(
        GetCommandCodes_array *commandCodeList,
        GetCommandCodes_o **data,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  __int64 v15; // x26
  GetCommandCodes_o *v16; // x23
  Il2CppClass *klass; // x24
  void *monitor; // x25
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_59743A8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59743A8 = 1;
  }
  entity = 0;
  *data = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)data,
    0,
    *(System_String_o **)&commandCodeId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( !commandCodeList || !commandCodeList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_2213CDC(Instance, v12);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v15 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v15 >= max_length )
      sub_2213CE4(Instance);
    v16 = commandCodeList->m_Items[v15];
    if ( !v16 || !v14 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v14,
                                 &entity,
                                 v16->fields.userCommandCodeId,
                                 (const MethodInfo_3F131DC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
      *(_QWORD *)&v27.fields.currentCryptoKey = klass;
      *(_QWORD *)&v27.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
  *data = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)data, (int32_t)v16, v19, v20, v21, v22, v23, v24);
  return 1;
}


System_String_o *MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v6; // x21
  struct MissionInfoMaker___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *Item; // x0
  __int64 v15; // x1
  System_String_o **v16; // x8

  if ( (byte_597439D & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_2213A60(&Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__);
    sub_2213A60(&MissionInfoMaker___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597439D = 1;
  }
  if ( entityList && entityList->fields._size >= 1 )
  {
    v3 = MissionInfoMaker___c_TypeInfo;
    if ( !*(&MissionInfoMaker___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, method);
      v3 = MissionInfoMaker___c_TypeInfo;
    }
    static_fields = v3->static_fields;
    _9__13_0 = (System_Comparison_T__o *)static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !*(&v3->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v3, method);
        static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      }
      v6 = (Il2CppObject *)static_fields->__9;
      _9__13_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__13_0, v6, Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__, 0);
      v7 = MissionInfoMaker___c_TypeInfo->static_fields;
      v7->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->__9__13_0, (int32_t)_9__13_0, v8, v9, v10, v11, v12, v13);
    }
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__13_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_2213CDC(0, v15);
    v16 = (System_String_o **)&Item[4];
  }
  else
  {
    v16 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v16;
}


int32_t MissionInfoMaker__GetConditionMessageType(int32_t progressType, const MethodInfo *method)
{
  if ( (unsigned int)(progressType - 2) > 2 )
    return 2;
  else
    return dword_EDA7FC[progressType - 2];
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
  const MethodInfo_3F9C6A4 **v10; // x24
  const MethodInfo_3F9C6A4 **v11; // x27
  const MethodInfo_3F9C410 **v12; // x28
  _QWORD *v13; // x29
  unsigned int v14; // w25
  EventMissionConditionEntity_o *v15; // x21
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__object__o *v17; // x23
  _QWORD *v18; // x19
  const MethodInfo_3F9C410 **v19; // x29
  const MethodInfo_3F9C6A4 **v20; // x28
  const MethodInfo_3F9C6A4 **v21; // x27
  Il2CppObject *Item; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__object__o *v24; // x23
  System_Collections_Generic_List_object__o *v25; // x24
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppClass *klass; // x8
  __int64 v33; // x9
  __int64 monitor_low; // x10
  void **v35; // x8
  EventMissionConditionEntity_array *v37; // [xsp+8h] [xbp-68h]

  if ( (byte_597439A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597439A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_25;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v10 = (const MethodInfo_3F9C6A4 **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v11 = (const MethodInfo_3F9C6A4 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v12 = (const MethodInfo_3F9C410 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v13 = &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
    v14 = 0;
    v37 = MissionCondList;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_2213CE4(Instance);
      v15 = MissionCondList->m_Items[v14];
      if ( !v15 || !v8 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v8, v15->fields.missionProgressType, *v10) )
      {
        missionProgressType = v15->fields.missionProgressType;
        v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
        System_Collections_Generic_Dictionary_int__object____ctor(
          v17,
          (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v8,
          missionProgressType,
          (Il2CppObject *)v17,
          (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v8,
                   v15->fields.missionProgressType,
                   (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
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
                 (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v15->fields.condGroup;
        v24 = (System_Collections_Generic_Dictionary_int__object__o *)Item;
        v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v25,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v24 )
          break;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v24,
          condGroup,
          (Il2CppObject *)v25,
          (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v10 = v21;
        v11 = v20;
        v12 = v19;
        v13 = v18;
        MissionCondList = v37;
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v8,
                   v15->fields.missionProgressType,
                   (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
      if ( !Instance )
        break;
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                   v15->fields.condGroup,
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
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(*(_QWORD *)(v33 + 32) + 192LL) + 112LL));
      }
      else
      {
        v35 = &klass->_1.image + monitor_low;
        LODWORD(Instance[1].monitor) = monitor_low + 1;
        v35[4] = v15;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v15, v26, v27, v28, v29, v30, v31);
      }
      max_length = MissionCondList->max_length;
      if ( (int)++v14 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v8;
    }
LABEL_25:
    sub_2213CDC(Instance, v6);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v8;
}


GiftEntity_array *MissionInfoMaker__GetIconGiftEntities(int32_t giftId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  GiftEntity_array *GiftListById; // x0
  __int64 v6; // x1
  MissionInfoMaker___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct MissionInfoMaker___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__21_0; // x20
  Il2CppObject *v11; // x21
  struct MissionInfoMaker___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_59743A4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_2213A60(&System_Func_GiftEntity__bool__TypeInfo);
    sub_2213A60(&Method_MissionInfoMaker___c__GetIconGiftEntities_b__21_0__);
    sub_2213A60(&MissionInfoMaker___c_TypeInfo);
    byte_59743A4 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, giftId, 0);
  v7 = MissionInfoMaker___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !*(&MissionInfoMaker___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, v6);
    v7 = MissionInfoMaker___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__21_0 = (System_Func_object__bool__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__21_0, v11, Method_MissionInfoMaker___c__GetIconGiftEntities_b__21_0__, 0);
    v12 = MissionInfoMaker___c_TypeInfo->static_fields;
    v12->__9__21_0 = (struct System_Func_GiftEntity__bool__o *)_9__21_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__21_0, (int32_t)_9__21_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)_9__21_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  return (GiftEntity_array *)System_Linq_Enumerable__ToArray_object_(
                               v19,
                               (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
}


GiftEntity_o *MissionInfoMaker__GetIconGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__20_0; // x20
  Il2CppObject *v6; // x21
  struct MissionInfoMaker___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  __int64 v15; // x1
  MissionInfoMaker___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  struct MissionInfoMaker___c_StaticFields *v18; // x9
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v20; // x21
  struct MissionInfoMaker___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_59743A3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_GiftEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_GiftEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_2213A60(&System_Func_GiftEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_GiftEntity__int__TypeInfo);
    sub_2213A60(&Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_0__);
    sub_2213A60(&Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_1__);
    sub_2213A60(&MissionInfoMaker___c_TypeInfo);
    byte_59743A3 = 1;
  }
  v3 = MissionInfoMaker___c_TypeInfo;
  if ( !*(&MissionInfoMaker___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, method);
    v3 = MissionInfoMaker___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__20_0 = (System_Func_object__bool__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__20_0, v6, Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_0__, 0);
    v7 = MissionInfoMaker___c_TypeInfo->static_fields;
    v7->__9__20_0 = (struct System_Func_GiftEntity__bool__o *)_9__20_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->__9__20_0, (int32_t)_9__20_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (System_Func_TSource__bool__o *)_9__20_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v16 = MissionInfoMaker___c_TypeInfo;
  v17 = v14;
  if ( !*(&MissionInfoMaker___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, v15);
    v16 = MissionInfoMaker___c_TypeInfo;
  }
  v18 = v16->static_fields;
  _9__20_1 = (System_Func_object__int__o *)v18->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v15);
      v18 = MissionInfoMaker___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GiftEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v20, Method_MissionInfoMaker___c__GetIconGiftEntity_b__20_1__, 0);
    v21 = MissionInfoMaker___c_TypeInfo->static_fields;
    v21->__9__20_1 = (struct System_Func_GiftEntity__int__o *)_9__20_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__20_1, (int32_t)_9__20_1, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TKey__o *)_9__20_1,
                                                               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_GiftEntity__int___);
  return (GiftEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                           v28,
                           (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_GiftEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_59743A0 & 1) == 0 )
  {
    sub_2213A60(&UserMissionNewManager_TypeInfo);
    byte_59743A0 = 1;
  }
  if ( (progStatus & 0xFFFFFFFE) != 2 )
    return 0;
  if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, *(_QWORD *)&progStatus);
  return UserMissionNewManager__SetIsNewMissionInfo(missionId, 0);
}


int32_t MissionInfoMaker__GetItemGetEffectId(int32_t itemId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  MissionInfoMaker_c *v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59743A5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_22057/*"itemGetEffectId"*/);
    byte_59743A5 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v5 = entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v4);
    if ( v5 )
      return ItemEntity__getScript(
               (ItemEntity_o *)v5,
               (System_String_o *)StringLiteral_22057/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0);
LABEL_14:
    sub_2213CDC(Instance, v4);
  }
  v7 = MissionInfoMaker_TypeInfo;
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v4);
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
  bool v4; // w19
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+18h] [xbp-38h] BYREF

  v2 = entities;
  if ( (byte_597439B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    byte_597439B = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2 )
    sub_2213CDC(entities, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)v2,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  do
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v6,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v4 )
      break;
    if ( !v6.fields._current )
      sub_2213CDC(0, v3);
  }
  while ( EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)v6.fields._current, 0) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return !v4;
}


// local variable allocation has failed, the output may be wrong!
EventMissionConditionEntity_o *MissionInfoMaker__GetMissionNotClearConditionInfo(
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  int v5; // w8
  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *EventMissionConditionGroup; // x0
  System_Collections_Generic_Dictionary_int__object__o *v7; // x19
  Il2CppObject *v8; // x22
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  MissionInfoMaker___c_c *v13; // x0
  Il2CppObject *currentValue; // x19
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v17; // x21
  struct MissionInfoMaker___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int128 v25; // q0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x20
  int v29; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+38h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+60h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v33; // [xsp+80h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+A0h] [xbp-90h] BYREF

  if ( (byte_5974399 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__);
    sub_2213A60(&MissionInfoMaker___c_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_5974399 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v5 = *(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1);
  memset(&v32, 0, sizeof(v32));
  memset(&v34, 0, sizeof(v34));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, *(_QWORD *)&missionId);
  EventMissionConditionGroup = MissionInfoMaker__GetEventMissionConditionGroup(eventId, missionId, method);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)EventMissionConditionGroup;
  if ( EventMissionConditionGroup )
  {
    if ( System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)EventMissionConditionGroup,
           (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    {
      return 0;
    }
    else
    {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator(
        &v31,
        v7,
        (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
      v34 = v31;
      v8 = 0;
      while ( 1 )
      {
        if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                &v34,
                (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
        {
          v7 = 0;
          goto LABEL_35;
        }
        if ( LODWORD(v34.fields._current.fields.key) == 4 )
        {
          if ( !v34.fields._current.fields.value )
            sub_2213CDC(0, v9);
          Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                     (System_Collections_Generic_Dictionary_int__object__o *)v34.fields._current.fields.value,
                     (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
          if ( !Values )
            sub_2213CDC(0, v11);
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v31,
            Values,
            (const MethodInfo_3CC3590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
          v33 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v31.fields._dictionary;
          while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                    &v33,
                    (const MethodInfo_41591F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__) )
          {
            v13 = MissionInfoMaker___c_TypeInfo;
            currentValue = v33.fields._currentValue;
            if ( !*(&MissionInfoMaker___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, v12);
              v13 = MissionInfoMaker___c_TypeInfo;
            }
            static_fields = v13->static_fields;
            _9__8_0 = (System_Comparison_T__o *)static_fields->__9__8_0;
            if ( !_9__8_0 )
            {
              if ( !*(&v13->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v13, v12);
                static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
              }
              v17 = (Il2CppObject *)static_fields->__9;
              _9__8_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionConditionEntity__TypeInfo);
              System_Comparison_object____ctor(
                _9__8_0,
                v17,
                Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__,
                0);
              v18 = MissionInfoMaker___c_TypeInfo->static_fields;
              v18->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v18->__9__8_0,
                (int32_t)_9__8_0,
                v19,
                v20,
                v21,
                v22,
                v23,
                v24);
            }
            if ( !currentValue )
              sub_2213CDC(v13, v12);
            System_Collections_Generic_List_object___Sort_71849708(
              (System_Collections_Generic_List_object__o *)currentValue,
              _9__8_0,
              (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v31,
              (System_Collections_Generic_List_object__o *)currentValue,
              (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
            v25 = *(_OWORD *)&v31.fields._dictionary;
            v31.fields._dictionary = 0;
            *(_QWORD *)&v31.fields._version = &v32;
            *(_OWORD *)&v32.fields._list = v25;
            v32.fields._current = v31.fields._current.fields.key;
            while ( 1 )
            {
              v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v32,
                      (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
              if ( !v26 )
                break;
              current = v32.fields._current;
              if ( !v32.fields._current )
                sub_2213CDC(v26, v27);
              if ( !EventMissionConditionEntity__getMissionProgress(
                      (EventMissionConditionEntity_o *)v32.fields._current,
                      0) )
              {
                v29 = 11;
                v8 = current;
                goto LABEL_27;
              }
            }
            v29 = 6;
LABEL_27:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v32,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
            if ( v29 != 6 )
              goto LABEL_31;
          }
          v29 = 4;
LABEL_31:
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
            &v33,
            (const MethodInfo_41591F4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
          if ( (v29 | 4) != 4 )
            break;
        }
      }
      if ( v29 == 11 )
        v7 = (System_Collections_Generic_Dictionary_int__object__o *)v8;
      else
        v7 = 0;
LABEL_35:
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v34,
        (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    }
  }
  return (EventMissionConditionEntity_o *)v7;
}


int32_t MissionInfoMaker__GetMissionProgressType(EventMissionEntity_o *eventMissionEntity, const MethodInfo *method)
{
  int32_t missionTargetId; // w19
  int32_t id; // w20
  bool isNowMission; // w22
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  bool IsIgnoreStartCondition; // w21

  if ( (byte_5974397 & 1) == 0 )
  {
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    byte_5974397 = 1;
  }
  if ( !eventMissionEntity )
    return 0;
  missionTargetId = eventMissionEntity->fields.missionTargetId;
  id = eventMissionEntity->fields.id;
  isNowMission = EventMissionEntity__isNowMission(eventMissionEntity, 0);
  IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(eventMissionEntity, 0);
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v6);
  return MissionInfoMaker__GetMissionProgressType_55002764(
           missionTargetId,
           id,
           isNowMission,
           IsIgnoreStartCondition,
           v7);
}


// local variable allocation has failed, the output may be wrong!
int32_t MissionInfoMaker__GetMissionProgressType_55002764(
        int32_t eventId,
        int32_t missionId,
        bool isNowMission,
        bool ignoreStartCondition,
        const MethodInfo *method)
{
  int v9; // w8
  System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *EventMissionConditionGroup; // x0
  System_Collections_Generic_Dictionary_int__object__o *v11; // x25
  __int64 v12; // x1
  UserEventMissionEntity_array *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  int max_length; // w8
  int v17; // w10
  UserEventMissionEntity_o *v18; // x11
  bool v19; // w28
  __int64 v20; // x1
  int key; // w19
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v23; // x1
  __int128 v24; // q0
  const MethodInfo *v25; // x1
  bool v26; // w20
  Il2CppObject *currentValue; // x21
  int32_t v29; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_5974398 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_5974398 = 1;
  }
  entity = 0;
  memset(&v31, 0, sizeof(v31));
  v9 = *(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1);
  memset(&v32, 0, sizeof(v32));
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, *(_QWORD *)&missionId);
  EventMissionConditionGroup = MissionInfoMaker__GetEventMissionConditionGroup(
                                 eventId,
                                 missionId,
                                 (const MethodInfo *)isNowMission);
  if ( !EventMissionConditionGroup )
    return 4;
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)EventMissionConditionGroup;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)EventMissionConditionGroup,
         (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  Master_object = (UserEventMissionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !Master_object )
    goto LABEL_50;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         missionId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    Master_object = (UserEventMissionEntity_array *)entity;
    if ( !entity )
      goto LABEL_50;
    if ( !EventMissionEntity__IsDaily((EventMissionEntity_o *)entity, 0) )
    {
      Master_object = (UserEventMissionEntity_array *)entity;
      if ( !entity )
        goto LABEL_50;
      if ( !EventMissionEntity__IsIgnoreUserProgressData((EventMissionEntity_o *)entity, 0) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
        Master_object = (UserEventMissionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
        if ( !Master_object )
          goto LABEL_50;
        Master_object = UserEventMissionMaster__getUserEventMissionList(
                          (UserEventMissionMaster_o *)Master_object,
                          eventId,
                          0);
        if ( !Master_object )
          goto LABEL_50;
        max_length = Master_object->max_length;
        if ( max_length >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            if ( max_length == v17 )
              sub_2213CE4(Master_object);
            v18 = Master_object->m_Items[v17];
            if ( !v18 )
              break;
            if ( v18->fields.missionId == missionId && (v18->fields.missionProgressType & 0xFFFFFFFE) == 4 )
              goto LABEL_42;
            if ( (max_length & ~(max_length >> 31)) == ++v17 )
              goto LABEL_26;
          }
LABEL_50:
          sub_2213CDC(Master_object, v14);
        }
      }
    }
  }
LABEL_26:
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v30,
    v11,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v32 = v30;
  v19 = !isNowMission && ignoreStartCondition;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v32,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    key = (int)v32.fields._current.fields.key;
    if ( !v19 || LODWORD(v32.fields._current.fields.key) != 3 )
    {
      if ( !v32.fields._current.fields.value )
        sub_2213CDC(0, v20);
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 (System_Collections_Generic_Dictionary_int__object__o *)v32.fields._current.fields.value,
                 (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_2213CDC(0, v23);
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v30,
        Values,
        (const MethodInfo_3CC3590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      v24 = *(_OWORD *)&v30.fields._dictionary;
      v30.fields._dictionary = 0;
      *(_QWORD *)&v30.fields._version = &v31;
      *(_OWORD *)&v31.fields._dictionary = v24;
      v31.fields._currentValue = v30.fields._current.fields.key;
      do
      {
        v26 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                &v31,
                (const MethodInfo_41591F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
        if ( !v26 )
          break;
        currentValue = v31.fields._currentValue;
        if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v25);
      }
      while ( !MissionInfoMaker__GetMissionConditionGroupProgress(
                 (System_Collections_Generic_List_EventMissionConditionEntity__o *)currentValue,
                 v25) );
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
        &v31,
        (const MethodInfo_41591F4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      if ( !v26 )
      {
        v29 = key - 1;
        goto LABEL_41;
      }
    }
  }
  v29 = 4;
LABEL_41:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v32,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  if ( v29 == 4 )
  {
LABEL_42:
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v30,
      v11,
      (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    v32 = v30;
    v30.fields._dictionary = 0;
    *(_QWORD *)&v30.fields._version = &v32;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v32,
              (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      if ( LODWORD(v32.fields._current.fields.key) == 4 )
      {
        v29 = 4;
        goto LABEL_47;
      }
    }
    v29 = 0;
LABEL_47:
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v32,
      (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  }
  return v29;
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
  int v13; // w10
  UserEventMissionEntity_o *v14; // x11

  if ( (byte_597439C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597439C = 1;
  }
  if ( progressType == 4 )
  {
    Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0)) == 0 )
    {
LABEL_22:
      sub_2213CDC(Instance, v11);
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
          sub_2213CE4(Instance);
        v14 = Instance->m_Items[v13];
        if ( !v14 )
          goto LABEL_22;
        if ( v14->fields.missionId == missionId )
          break;
        if ( (max_length & ~(max_length >> 31)) == ++v13 )
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
  MissionInfoMaker___c_c *v9; // x0
  struct MissionInfoMaker___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__15_0; // x23
  Il2CppObject *v12; // x24
  struct MissionInfoMaker___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *Item; // x0
  __int64 v21; // x1
  unsigned int v22; // w22
  int klass_high; // w23
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x21
  int64_t v27; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  int64_t v30; // x8
  int64_t v31; // x0
  Il2CppObject *v33; // x20
  Il2CppObject *v34; // x0
  _QWORD v35[2]; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+18h] [xbp-68h] BYREF
  int64_t v37; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_597439F & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_2213A60(&Method_MissionInfoMaker___c__GetProgressText_b__15_0__);
    sub_2213A60(&MissionInfoMaker___c_TypeInfo);
    sub_2213A60(&StringLiteral_26475/*"{0:N0}/{1:N0}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597439F = 1;
  }
  memset(&v36, 0, sizeof(v36));
  *progressNum = 0;
  *targetNum = 0;
  if ( !entityList || entityList->fields._size <= 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v9 = MissionInfoMaker___c_TypeInfo;
  if ( !*(&MissionInfoMaker___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker___c_TypeInfo, *(_QWORD *)&progStatus);
    v9 = MissionInfoMaker___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__15_0 = (System_Comparison_T__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, *(_QWORD *)&progStatus);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(_9__15_0, v12, Method_MissionInfoMaker___c__GetProgressText_b__15_0__, 0);
    v13 = MissionInfoMaker___c_TypeInfo->static_fields;
    v13->__9__15_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__15_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__15_0, (int32_t)_9__15_0, v14, v15, v16, v17, v18, v19);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    (System_Collections_Generic_List_object__o *)entityList,
    _9__15_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)entityList,
           0,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
  if ( !Item )
    sub_2213CDC(0, v21);
  if ( (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v22 = progStatus - 3;
  klass_high = HIDWORD(Item[2].klass);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v35[0] = 0;
  v35[1] = &v36;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v24 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_2213CDC(v24, v25);
    if ( *(_DWORD *)((char *)&v36.fields._current->klass + (unsigned __int64)&qword_20 + 4) == klass_high )
    {
      v27 = *progressNum;
      if ( *(_DWORD *)((char *)&v36.fields._current->klass + (unsigned __int64)&qword_28) == 12 )
      {
        ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                  (EventMissionConditionEntity_o *)v36.fields._current,
                                  0);
        p_monitor = targetNum;
        *progressNum = v27 + ProgressNumByDateType;
        v30 = 1;
      }
      else
      {
        if ( v22 >= 2 )
          v31 = EventMissionConditionEntity__getProgressNum((EventMissionConditionEntity_o *)v36.fields._current, 0);
        else
          v31 = *(int64_t *)((char *)&v36.fields._current->klass + (unsigned __int64)&word_38);
        p_monitor = (int64_t *)&current[3].monitor;
        *progressNum = v31 + v27;
        v30 = *targetNum;
      }
      *targetNum = *p_monitor + v30;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v35[0] = *progressNum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, v35);
  v37 = *targetNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v37);
  return System_String__Format_75697880((System_String_o *)StringLiteral_26475/*"{0:N0}/{1:N0}"*/, v33, v34, 0);
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
  if ( (byte_59743A1 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_2213A60(&MissionInfoMaker_TypeInfo);
    byte_59743A1 = 1;
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
      sub_2213CE4(entities);
    v5 = v2->m_Items[v4];
    if ( !v5 )
      sub_2213CDC(entities, method);
    entities = (GiftEntity_array *)MissionInfoMaker_TypeInfo;
    priority = v5->fields.priority;
    if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method);
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


// local variable allocation has failed, the output may be wrong!
bool MissionInfoMaker__GetSvtListData(
        GetSvts_array *svtList,
        GetSvts_o **data,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  __int64 v15; // x26
  GetSvts_o *v16; // x23
  Il2CppClass *klass; // x24
  void *monitor; // x25
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_59743A7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59743A7 = 1;
  }
  entity = 0;
  *data = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)data,
    0,
    *(System_String_o **)&svtId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( !svtList || !svtList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_2213CDC(Instance, v12);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v15 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v15 >= max_length )
      sub_2213CE4(Instance);
    v16 = svtList->m_Items[v15];
    if ( !v16 || !v14 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v14,
                                 &entity,
                                 v16->fields.userSvtId,
                                 (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_20;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
      *(_QWORD *)&v27.fields.currentCryptoKey = klass;
      *(_QWORD *)&v27.fields.fakeValue = monitor;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
  *data = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)data, (int32_t)v16, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_59743A9 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_9077/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    byte_59743A9 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, callback);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_9077/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0);
  if ( !costumeEntity
    || (v7 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0),
        (Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v6);
  }
  CommonUI__OpenItemDetailDialog_37450192(
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

  if ( (byte_59743AA & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59743AA = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_8;
  v7 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(name, 0);
  detail = equipEntity->fields.detail;
  v11 = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(detail, 0);
  if ( !v7 )
LABEL_8:
    sub_2213CDC(Instance, v6);
  CommonUI__OpenItemDetailDialog_37450192(v7, v11, Instance, callback, 0);
}


void MissionInfoMaker__SetGiftInfo(
        GiftEntity_o *giftEntity,
        ItemEntity_o **itemEntity,
        ServantEntity_o **servantEntity,
        CommandCodeEntity_o **commandCodeEntity,
        ServantCostumeEntity_o **servantCostumeEntity,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  int32_t type; // w8
  Il2CppObject **v34; // x1
  __int64 *v35; // x8

  if ( (byte_59743A2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59743A2 = 1;
  }
  *itemEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)itemEntity,
    0,
    (System_String_o *)servantEntity,
    (System_String_o *)commandCodeEntity,
    (int32_t)servantCostumeEntity,
    (int32_t)method,
    v6,
    v7);
  *servantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)servantEntity, 0, v13, v14, v15, v16, v17, v18);
  *commandCodeEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)commandCodeEntity, 0, v19, v20, v21, v22, v23, v24);
  *servantCostumeEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)servantCostumeEntity, 0, v25, v26, v27, v28, v29, v30);
  if ( !giftEntity )
    goto LABEL_24;
  type = giftEntity->fields.type;
  if ( type > 5 )
  {
    if ( (unsigned int)(type - 6) >= 2 )
    {
      if ( type == 9 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        if ( !Instance )
          goto LABEL_24;
        ServantCostumeMaster__TryGetEntity(
          (ServantCostumeMaster_o *)Instance,
          servantCostumeEntity,
          giftEntity->fields.objectId / 100,
          giftEntity->fields.objectId % 100,
          0);
      }
      else if ( type == 11 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
          if ( Instance )
          {
            v34 = (Il2CppObject **)commandCodeEntity;
            v35 = &Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__;
LABEL_19:
            DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              v34,
              giftEntity->fields.objectId,
              (const MethodInfo_3F10B80 *)*v35);
            return;
          }
        }
        goto LABEL_24;
      }
      return;
    }
LABEL_16:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        v34 = (Il2CppObject **)servantEntity;
        v35 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
        goto LABEL_19;
      }
    }
    goto LABEL_24;
  }
  if ( type == 1 )
    goto LABEL_16;
  if ( type == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        v34 = (Il2CppObject **)itemEntity;
        v35 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
        goto LABEL_19;
      }
    }
LABEL_24:
    sub_2213CDC(Instance, v32);
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
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  __int64 v16; // x27
  bool v17; // w19
  GetSvts_o *v18; // x24
  Il2CppClass *klass; // x25
  void *monitor; // x26
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t type; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_59743A6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59743A6 = 1;
  }
  entity = 0;
  *data = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)data,
    0,
    *(System_String_o **)&svtId,
    *(System_String_o **)&giftType,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( svtList && svtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_30:
      sub_2213CDC(Instance, v13);
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
          sub_2213CE4(Instance);
        v18 = svtList->m_Items[v16];
        if ( !v18 || !v15 )
          goto LABEL_30;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     v15,
                                     &entity,
                                     v18->fields.userSvtId,
                                     (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_30;
          klass = entity[5].klass;
          monitor = entity[5].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
          *(_QWORD *)&v30.fields.currentCryptoKey = klass;
          *(_QWORD *)&v30.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v30, 0);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v18;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)data, (int32_t)v18, v21, v22, v23, v24, v25, v26);
            if ( Gift__IsEventSvtJoin(type, 0) )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0);
              v17 = 1;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v17;
            }
            else if ( type == 1 )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0);
              v17 = 1;
              if ( ((unsigned __int8)Instance & 1) == 0 )
                return v17;
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
        if ( (int)++v16 >= max_length )
          return v17;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59743AC & 1) == 0 )
  {
    sub_2213A60(&MissionInfoMaker___c_TypeInfo);
    byte_59743AC = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MissionInfoMaker___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionInfoMaker___c_TypeInfo->static_fields->__9 = (struct MissionInfoMaker___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MissionInfoMaker___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MissionInfoMaker___c___GetConditionMessage_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


bool MissionInfoMaker___c___GetIconGiftEntities_b__21_0(
        MissionInfoMaker___c_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  int32_t priority; // w19
  MissionInfoMaker_c *v5; // x0

  if ( (byte_59743AE & 1) == 0 )
  {
    this = (MissionInfoMaker___c_o *)sub_2213A60(&MissionInfoMaker_TypeInfo);
    byte_59743AE = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  priority = entity->fields.priority;
  v5 = MissionInfoMaker_TypeInfo;
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, entity);
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

  if ( (byte_59743AD & 1) == 0 )
  {
    this = (MissionInfoMaker___c_o *)sub_2213A60(&MissionInfoMaker_TypeInfo);
    byte_59743AD = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  priority = x->fields.priority;
  v5 = MissionInfoMaker_TypeInfo;
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, x);
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
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t MissionInfoMaker___c___GetMissionNotClearConditionInfo_b__8_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MissionInfoMaker___c___GetProgressText_b__15_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}