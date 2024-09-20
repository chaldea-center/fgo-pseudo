void __fastcall MissionInfoMaker___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct MissionInfoMaker_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct MissionInfoMaker_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E3BF & 1) == 0 )
  {
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&StringLiteral_17259/*"bit_present_get{0}"*/);
    sub_1B885B0(&StringLiteral_5859/*"Effect/Talk/bit_present_get{0}"*/);
    byte_4A5E3BF = 1;
  }
  static_fields = MissionInfoMaker_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NORMAL_ICON_PRIORITY = 0x6400000000LL;
  v4 = StringLiteral_5859/*"Effect/Talk/bit_present_get{0}"*/;
  static_fields->ITEM_GET_ASSET_NAME = (struct System_String_o *)StringLiteral_5859/*"Effect/Talk/bit_present_get{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->ITEM_GET_ASSET_NAME, v4, v1, v2);
  v5 = StringLiteral_17259/*"bit_present_get{0}"*/;
  v6 = MissionInfoMaker_TypeInfo->static_fields;
  v6->ITEM_GET_EFFECT_NAME = (struct System_String_o *)StringLiteral_17259/*"bit_present_get{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->ITEM_GET_EFFECT_NAME, v5, v7, v8);
  MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID = 3;
}


System_String_o *__fastcall MissionInfoMaker__GetClosedMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  System_Comparison_T__o *_9__14_0; // x20
  Il2CppObject *v5; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  System_String_o **p_monitor; // x8

  if ( (byte_4A5E3B3 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1B885B0(&Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__);
    sub_1B885B0(&MissionInfoMaker___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E3B3 = 1;
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
      _9__14_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__14_0, v5, Method_MissionInfoMaker___c__GetClosedMessage_b__14_0__, 0LL);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__14_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__14_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v7, v8);
    }
    System_Collections_Generic_List_object___Sort_55571192(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__14_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1B8880C(0LL, v10);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  __int64 v11; // x26
  GetCommandCodes_o *v12; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A5E3BC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E3BC = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)data, 0, commandCodeId, (int32_t)method);
  if ( !commandCodeList || !*(_QWORD *)&commandCodeList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1B8880C(Instance, v8);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  max_length = commandCodeList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= max_length )
      sub_1B88814(Instance, v8);
    v12 = commandCodeList->m_Items[v11];
    if ( !v12 || !v10 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v10,
                                 &entity,
                                 v12->fields.userCommandCodeId,
                                 (const MethodInfo_311DB34 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
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
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
      if ( (_DWORD)Instance == commandCodeId )
        break;
    }
    max_length = commandCodeList->max_length;
    if ( (int)++v11 >= max_length )
      return 0;
  }
  *data = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)data, (int32_t)v12, v15, v16);
  return 1;
}


System_String_o *__fastcall MissionInfoMaker__GetConditionMessage(
        System_Collections_Generic_List_EventMissionConditionEntity__o *entityList,
        const MethodInfo *method)
{
  MissionInfoMaker___c_c *v3; // x0
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v5; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  System_String_o **v11; // x8

  if ( (byte_4A5E3B2 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1B885B0(&Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__);
    sub_1B885B0(&MissionInfoMaker___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E3B2 = 1;
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
      _9__13_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionConditionEntity__TypeInfo);
      System_Comparison_object____ctor(_9__13_0, v5, Method_MissionInfoMaker___c__GetConditionMessage_b__13_0__, 0LL);
      static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__13_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v7, v8);
    }
    System_Collections_Generic_List_object___Sort_55571192(
      (System_Collections_Generic_List_object__o *)entityList,
      _9__13_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)entityList,
             0,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    if ( !Item )
      sub_1B8880C(0LL, v10);
    v11 = (System_String_o **)&Item[4];
  }
  else
  {
    v11 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *v11;
}


int32_t __fastcall MissionInfoMaker__GetConditionMessageType(int32_t progressType, const MethodInfo *method)
{
  if ( (unsigned int)(progressType - 2) > 2 )
    return 2;
  else
    return dword_BEF6A0[progressType - 2];
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
  const MethodInfo_316DB4C **v10; // x24
  const MethodInfo_316DB4C **v11; // x28
  const MethodInfo_316D8B8 **v12; // x29
  void **v13; // x26
  unsigned int v14; // w25
  EventMissionConditionEntity_o *v15; // x21
  int32_t missionProgressType; // w22
  System_Collections_Generic_Dictionary_int__object__o *v17; // x23
  void **v18; // x19
  const MethodInfo_316D8B8 **v19; // x26
  const MethodInfo_316DB4C **v20; // x29
  const MethodInfo_316DB4C **v21; // x28
  Il2CppObject *Item; // x0
  int32_t condGroup; // w22
  System_Collections_Generic_Dictionary_int__object__o *v24; // x23
  System_Collections_Generic_List_object__o *v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppClass *klass; // x8
  _QWORD *v29; // x9
  __int64 monitor_low; // x10
  void **v31; // x8
  EventMissionConditionEntity_array *v33; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5E3AF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E3AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_25;
  MissionCondList = EventMissionConditionMaster__getMissionCondList(
                      (EventMissionConditionMaster_o *)Instance,
                      eventId,
                      missionId,
                      0LL);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity_____ctor__);
  if ( !MissionCondList )
    goto LABEL_25;
  max_length = MissionCondList->max_length;
  if ( max_length >= 1 )
  {
    v10 = (const MethodInfo_316DB4C **)&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____ContainsKey__;
    v11 = (const MethodInfo_316DB4C **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___ContainsKey__;
    v12 = (const MethodInfo_316D8B8 **)&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Item__;
    v13 = &Method_System_Collections_Generic_List_EventMissionConditionEntity__Add__;
    v14 = 0;
    v33 = MissionCondList;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1B88814(Instance, v6);
      v15 = MissionCondList->m_Items[v14];
      if ( !v15 || !v8 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v8, v15->fields.missionProgressType, *v10) )
      {
        missionProgressType = v15->fields.missionProgressType;
        v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___TypeInfo);
        System_Collections_Generic_Dictionary_int__object____ctor(
          v17,
          (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity____ctor__);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v8,
          missionProgressType,
          (Il2CppObject *)v17,
          (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____set_Item__);
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v8,
                   v15->fields.missionProgressType,
                   (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
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
                 (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
        condGroup = v15->fields.condGroup;
        v24 = (System_Collections_Generic_Dictionary_int__object__o *)Item;
        v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v25,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
        if ( !v24 )
          break;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v24,
          condGroup,
          (Il2CppObject *)v25,
          (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___set_Item__);
        v10 = v21;
        v11 = v20;
        v12 = v19;
        v13 = v18;
        MissionCondList = v33;
      }
      Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                   v8,
                   v15->fields.missionProgressType,
                   (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Item__);
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
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &klass->_1.image + monitor_low;
        LODWORD(Instance[1].monitor) = monitor_low + 1;
        v31[4] = v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v15, v26, v27);
      }
      max_length = MissionCondList->max_length;
      if ( (int)++v14 >= max_length )
        return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v8;
    }
LABEL_25:
    sub_1B8880C(Instance, v6);
  }
  return (System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____o *)v8;
}


GiftEntity_o *__fastcall MissionInfoMaker__GetIconGiftEntity(GiftEntity_array *entities, const MethodInfo *method)
{
  GiftEntity_array *v2; // x19
  int max_length; // w8
  unsigned int v4; // w21
  GiftEntity_o *v5; // x20
  int32_t priority; // w23

  v2 = entities;
  if ( (byte_4A5E3B8 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_1B885B0(&MissionInfoMaker_TypeInfo);
    byte_4A5E3B8 = 1;
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
        sub_1B88814(entities, method);
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
    sub_1B8880C(entities, method);
  }
  return 0LL;
}


bool __fastcall MissionInfoMaker__GetIsShowNew(int32_t missionId, int32_t progStatus, const MethodInfo *method)
{
  if ( (byte_4A5E3B5 & 1) == 0 )
  {
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    byte_4A5E3B5 = 1;
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

  if ( (byte_4A5E3B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_20881/*"itemGetEffectId"*/);
    byte_4A5E3B9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         itemId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v5 = entity;
    Instance = (DataManager_o *)MissionInfoMaker_TypeInfo;
    if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
    if ( v5 )
      return ItemEntity__getScript(
               (ItemEntity_o *)v5,
               (System_String_o *)StringLiteral_20881/*"itemGetEffectId"*/,
               MissionInfoMaker_TypeInfo->static_fields->ITEM_GET_EFFECT_DEFAULT_ID,
               0LL);
LABEL_14:
    sub_1B8880C(Instance, v4);
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
  if ( (byte_4A5E3B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    entities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    byte_4A5E3B0 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2 )
    sub_1B8880C(entities, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)v2,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1B8880C(0LL, v3);
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
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
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v16; // x21
  struct MissionInfoMaker___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x20
  int v23; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+80h] [xbp-90h] BYREF

  if ( (byte_4A5E3AE & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__);
    sub_1B885B0(&MissionInfoMaker___c_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_4A5E3AE = 1;
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
           (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    {
      return 0LL;
    }
    else
    {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator(
        &v24,
        (System_Collections_Generic_Dictionary_int__object__o *)v6,
        (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
      v7 = 0LL;
      v27 = v24;
      while ( 1 )
      {
        if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                &v27,
                (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
            &v27,
            (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
          return 0LL;
        }
        if ( LODWORD(v27.fields._current.fields.key) == 4 )
        {
          if ( !v27.fields._current.fields.value )
            sub_1B8880C(0LL, v8);
          Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                     (System_Collections_Generic_Dictionary_int__object__o *)v27.fields._current.fields.value,
                     (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
          if ( !Values )
            sub_1B8880C(0LL, v10);
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
            (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v24,
            Values,
            (const MethodInfo_3804A5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
          *(_OWORD *)&v26.fields._dictionary = *(_OWORD *)&v24.fields._dictionary;
          v26.fields._currentValue = v24.fields._current.fields.key;
          while ( 1 )
          {
            v11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                    &v26,
                    (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
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
              _9__8_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionConditionEntity__TypeInfo);
              System_Comparison_object____ctor(
                _9__8_0,
                v16,
                Method_MissionInfoMaker___c__GetMissionNotClearConditionInfo_b__8_0__,
                0LL);
              static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
              static_fields->__9__8_0 = (struct System_Comparison_EventMissionConditionEntity__o *)_9__8_0;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v18, v19);
            }
            if ( !currentValue )
              sub_1B8880C(v11, v12);
            System_Collections_Generic_List_object___Sort_55571192(
              (System_Collections_Generic_List_object__o *)currentValue,
              _9__8_0,
              (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v24,
              (System_Collections_Generic_List_object__o *)currentValue,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
            *(_OWORD *)&v25.fields._list = *(_OWORD *)&v24.fields._dictionary;
            v25.fields._current = v24.fields._current.fields.key;
            while ( 1 )
            {
              v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v25,
                      (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
              if ( !v20 )
                break;
              current = v25.fields._current;
              if ( !v25.fields._current )
                sub_1B8880C(v20, v21);
              if ( !EventMissionConditionEntity__getMissionProgress(
                      (EventMissionConditionEntity_o *)v25.fields._current,
                      0LL) )
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
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
            if ( v23 != 6 )
              goto LABEL_31;
          }
          v23 = 4;
LABEL_31:
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
            &v26,
            (const MethodInfo_32B8088 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
          if ( (v23 | 4) != 4 )
            break;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v27,
        (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      if ( v23 == 11 )
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

  if ( (byte_4A5E3AD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__Dictionary_int__List_EventMissionConditionEntity____get_Value__);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
    byte_4A5E3AD = 1;
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
         (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____get_Count__) < 1 )
    return 4;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v21,
    v10,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v23 = v21;
  v11 = !isNowMission && ignoreStartCondition;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v23,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v23,
        (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      goto LABEL_20;
    }
    key = (int)v23.fields._current.fields.key;
    if ( !v11 || LODWORD(v23.fields._current.fields.key) != 3 )
    {
      if ( !v23.fields._current.fields.value )
        sub_1B8880C(0LL, v12);
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 (System_Collections_Generic_Dictionary_int__object__o *)v23.fields._current.fields.value,
                 (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__List_EventMissionConditionEntity___get_Values__);
      if ( !Values )
        sub_1B8880C(0LL, v15);
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
        (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v21,
        Values,
        (const MethodInfo_3804A5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__List_EventMissionConditionEntity___GetEnumerator__);
      *(_OWORD *)&v22.fields._dictionary = *(_OWORD *)&v21.fields._dictionary;
      v22.fields._currentValue = v21.fields._current.fields.key;
      do
      {
        v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
                &v22,
                (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___MoveNext__);
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
        (const MethodInfo_32B8088 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__List_EventMissionConditionEntity___Dispose__);
      if ( !v17 )
        break;
    }
  }
  v20 = key - 1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v23,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
  if ( key != 5 )
    return v20;
LABEL_20:
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v21,
    v10,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_EventMissionConditionEntity____GetEnumerator__);
  v23 = v21;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v23,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____MoveNext__) )
  {
    if ( LODWORD(v23.fields._current.fields.key) == 4 )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v23,
        (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
      return 4;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v23,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__Dictionary_int__List_EventMissionConditionEntity____Dispose__);
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

  if ( (byte_4A5E3B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E3B1 = 1;
  }
  if ( progressType == 4 )
  {
    Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
      || (Instance = UserEventMissionMaster__getUserEventMissionList((UserEventMissionMaster_o *)Instance, eventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1B8880C(Instance, v11);
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
          sub_1B88814(Instance, v11);
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
  int32_t v13; // w2
  int32_t v14; // w3
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
  Il2CppObject *v29; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  int64_t v34; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5E3B4 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMissionConditionEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1B885B0(&Method_MissionInfoMaker___c__GetProgressText_b__15_0__);
    sub_1B885B0(&MissionInfoMaker___c_TypeInfo);
    sub_1B885B0(&StringLiteral_24972/*"{0:N0}/{1:N0}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E3B4 = 1;
  }
  memset(&v36, 0, sizeof(v36));
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
    v10 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionConditionEntity__TypeInfo);
    System_Comparison_object____ctor(v10, v11, Method_MissionInfoMaker___c__GetProgressText_b__15_0__, 0LL);
    static_fields = MissionInfoMaker___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_EventMissionConditionEntity__o *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0, (int32_t)v10, v13, v14);
  }
  if ( !entityList
    || (System_Collections_Generic_List_object___Sort_55571192(
          (System_Collections_Generic_List_object__o *)entityList,
          v10,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__Sort__),
        (Item = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)entityList,
                  0,
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__)) == 0LL) )
  {
    sub_1B8880C(Item, *(_QWORD *)&progStatus);
  }
  if ( entityList->fields._size <= 0 || (unsigned int)progStatus < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v15 = *((_DWORD *)Item + 9);
  v16 = progStatus - 3;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v17 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1B8880C(v17, v18);
    if ( HIDWORD(v36.fields._current[2].klass) == v15 )
    {
      v20 = *progressNum;
      if ( LODWORD(v36.fields._current[2].monitor) == 12 )
      {
        ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                  (EventMissionConditionEntity_o *)v36.fields._current,
                                  0LL);
        p_monitor = targetNum;
        *progressNum = v20 + ProgressNumByDateType;
        v23 = 1LL;
      }
      else
      {
        if ( v16 >= 2 )
          monitor = EventMissionConditionEntity__getProgressNum(
                      (EventMissionConditionEntity_o *)v36.fields._current,
                      0LL);
        else
          monitor = (int64_t)v36.fields._current[3].monitor;
        *progressNum = monitor + v20;
        v23 = *targetNum;
        p_monitor = (int64_t *)&current[3].monitor;
      }
      *targetNum = *p_monitor + v23;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  v35.fields._list = (struct System_Collections_Generic_List_T__o *)*progressNum;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35, v26, v27, v28);
  v34 = *targetNum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34, v30, v31, v32);
  return System_String__Format_61721404((System_String_o *)StringLiteral_24972/*"{0:N0}/{1:N0}"*/, v29, v33, 0LL);
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
  if ( (byte_4A5E3B6 & 1) == 0 )
  {
    entities = (GiftEntity_array *)sub_1B885B0(&MissionInfoMaker_TypeInfo);
    byte_4A5E3B6 = 1;
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
      sub_1B88814(entities, method);
    v5 = v2->m_Items[v4];
    if ( !v5 )
      sub_1B8880C(entities, method);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  __int64 v11; // x26
  GetSvts_o *v12; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A5E3BB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E3BB = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)data, 0, svtId, (int32_t)method);
  if ( !svtList || !*(_QWORD *)&svtList->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_1B8880C(Instance, v8);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = svtList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= max_length )
      sub_1B88814(Instance, v8);
    v12 = svtList->m_Items[v11];
    if ( !v12 || !v10 )
      goto LABEL_20;
    Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                 v10,
                                 &entity,
                                 v12->fields.userSvtId,
                                 (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
      if ( (_DWORD)Instance == svtId )
        break;
    }
    max_length = svtList->max_length;
    if ( (int)++v11 >= max_length )
      return 0;
  }
  *data = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)data, (int32_t)v12, v15, v16);
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

  if ( (byte_4A5E3BD & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_8682/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/);
    byte_4A5E3BD = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_8682/*"MISSION_REWARD_FOMAT_COSTUME_RELEASE"*/, 0LL);
  if ( !costumeEntity
    || (v7 = System_String__Format(Instance, (Il2CppObject *)costumeEntity->fields.name, 0LL),
        (Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v6);
  }
  CommonUI__OpenItemDetailDialog_30558980(
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

  if ( (byte_4A5E3BE & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E3BE = 1;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !equipEntity )
    goto LABEL_8;
  v7 = (CommonUI_o *)Instance;
  name = equipEntity->fields.name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(name, 0LL);
  detail = equipEntity->fields.detail;
  v11 = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(detail, 0LL);
  if ( !v7 )
LABEL_8:
    sub_1B8880C(Instance, v6);
  CommonUI__OpenItemDetailDialog_30558980(v7, v11, Instance, callback, 0LL);
}


void __fastcall MissionInfoMaker__SetGiftInfo(
        GiftEntity_o *giftEntity,
        ItemEntity_o **itemEntity,
        ServantEntity_o **servantEntity,
        CommandCodeEntity_o **commandCodeEntity,
        ServantCostumeEntity_o **servantCostumeEntity,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  int32_t objectId; // w2
  __int64 *v20; // x8
  Il2CppObject **v21; // x1

  if ( (byte_4A5E3B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E3B7 = 1;
  }
  *itemEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)itemEntity, 0, (int32_t)servantEntity, (int32_t)commandCodeEntity);
  *servantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)servantEntity, 0, v11, v12);
  *commandCodeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)commandCodeEntity, 0, v13, v14);
  *servantCostumeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)servantCostumeEntity, 0, v15, v16);
  if ( !giftEntity )
LABEL_18:
    sub_1B8880C(Instance, v18);
  switch ( giftEntity->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v20 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__;
      v21 = (Il2CppObject **)servantEntity;
      goto LABEL_17;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_18;
      objectId = giftEntity->fields.objectId;
      v20 = &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__;
      v21 = (Il2CppObject **)itemEntity;
      goto LABEL_17;
    case 9:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
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
        (const MethodInfo_311D988 *)*v20);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x23
  __int64 v13; // x27
  bool v14; // w19
  GetSvts_o *v15; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t type; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5E3BA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E3BA = 1;
  }
  entity = 0LL;
  *data = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)data, 0, svtId, giftType);
  if ( svtList && *(_QWORD *)&svtList->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_30:
      sub_1B8880C(Instance, v10);
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    max_length = svtList->max_length;
    if ( max_length >= 1 )
    {
      type = giftType;
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v13 = 0LL;
      v14 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1B88814(Instance, v10);
        v15 = svtList->m_Items[v13];
        if ( !v15 || !v12 )
          goto LABEL_30;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     v12,
                                     &entity,
                                     v15->fields.userSvtId,
                                     (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
          if ( (_DWORD)Instance == svtId )
          {
            *data = v15;
            sub_1B88554((ServantStatusBattleListViewItem_o *)data, (int32_t)v15, v18, v19);
            if ( Gift__IsEventSvtJoin(type, 0LL) )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0LL);
              v14 = 1;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                return v14;
            }
            else if ( type == 1 )
            {
              Instance = entity;
              if ( !entity )
                goto LABEL_30;
              Instance = (Il2CppObject *)UserServantEntity__IsEventJoin((UserServantEntity_o *)entity, 0LL);
              v14 = 1;
              if ( ((unsigned __int8)Instance & 1) == 0 )
                return v14;
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
        if ( (int)++v13 >= max_length )
          return v14;
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E3C0 & 1) == 0 )
  {
    sub_1B885B0(&MissionInfoMaker___c_TypeInfo);
    byte_4A5E3C0 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(MissionInfoMaker___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MissionInfoMaker___c_TypeInfo->static_fields->__9 = (struct MissionInfoMaker___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)MissionInfoMaker___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetConditionMessage_b__13_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetMissionNotClearConditionInfo_b__8_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MissionInfoMaker___c___GetProgressText_b__15_0(
        MissionInfoMaker___c_o *this,
        EventMissionConditionEntity_o *a,
        EventMissionConditionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}