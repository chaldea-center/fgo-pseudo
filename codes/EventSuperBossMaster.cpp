void __fastcall EventSuperBossMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40F9BA0 & 1) == 0 )
  {
    sub_B16FFC(&EventSuperBossMaster_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_5715, v8);
    byte_40F9BA0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventSuperBossMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_5715;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5715;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9B9D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__, method);
    byte_40F9B9D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    168,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v9; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v11; // x10
  int v12; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v13; // x8
  int klass; // w28
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x0
  __int64 v17; // x10
  int i; // w20
  EventSuperBossMaster_c *v19; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  int32_t Count; // [xsp+4h] [xbp-5Ch]
  int v25; // [xsp+8h] [xbp-58h] BYREF
  int v26; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F9B9F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&EventSuperBossEntity_TypeInfo, v4);
    sub_B16FFC(&EventSuperBossMaster_TypeInfo, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    byte_40F9B9F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v9 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v9,
               v8,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v11 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (EventSuperBossEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      v12 = v8;
      if ( (EventSuperBossEntity_c *)Item->klass->_2.typeHierarchy[*(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1)
                                                                 - 1] == EventSuperBossEntity_TypeInfo )
        v13 = Item;
      else
        v13 = 0LL;
      klass = (int)v13[1].klass;
      while ( v12 > 0 )
      {
        v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !v15 )
          goto LABEL_29;
        v16 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                v15,
                --v12,
                (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !v16 )
          goto LABEL_29;
        v17 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
          || (EventSuperBossEntity_c *)v16->klass->_2.typeHierarchy[v17 - 1] != EventSuperBossEntity_TypeInfo )
        {
          goto LABEL_29;
        }
        if ( klass == LODWORD(v16[1].klass) )
          goto LABEL_27;
      }
      for ( i = 0; ; ++i )
      {
        v19 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v19 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v19->static_fields->SAVE_KEY;
        v26 = klass;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
        v25 = i;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
        v23 = System_String__Format_43739268(SAVE_KEY, v21, v22, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v23, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v23, 0LL);
      }
LABEL_27:
      if ( ++v8 >= Count )
        return;
    }
LABEL_29:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventSuperBossEntity__o *__fastcall EventSuperBossMaster__GetCurrentListByEventId(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w22
  int32_t v25; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v26; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x24
  __int64 v29; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  int v31; // w24
  __int64 v32; // x23
  __int64 v33; // x8
  int size; // w8
  EventSuperBossMaster_c *v35; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v37; // x23
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  int32_t Int; // w0
  EventSuperBossMaster_c *v41; // x0
  System_String_o *v42; // x22
  Il2CppObject *v43; // x23
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x8
  int v48; // [xsp+8h] [xbp-58h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F9B9E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventSuperBossEntity_TypeInfo, v8);
    sub_B16FFC(&EventSuperBossMaster_TypeInfo, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo, v16);
    byte_40F9B9E = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventSuperBossEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      v26 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v26 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v26,
               v25,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      v29 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (EventSuperBossEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Item[1].klass) == eventId && EventSuperBossEntity__IsEncounted((EventSuperBossEntity_o *)Item, 0LL) )
      {
        if ( !v17 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v17,
          v28,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
      }
      if ( ++v25 >= v24 )
        goto LABEL_15;
    }
LABEL_46:
    sub_B170D4();
  }
LABEL_15:
  if ( !v17 )
    goto LABEL_46;
  if ( !v17->fields._size )
    return 0LL;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventSuperBossEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v31 = 0;
  while ( 1 )
  {
LABEL_30:
    v35 = EventSuperBossMaster_TypeInfo;
    if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v35 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v35->static_fields->SAVE_KEY;
    v49 = eventId;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
    v48 = v31;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    v39 = System_String__Format_43739268(SAVE_KEY, v37, v38, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v39, 0, 0LL);
    size = v17->fields._size;
    if ( !Int )
      break;
    ++v31;
    if ( size >= 1 )
    {
      v32 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v32 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v33 = *((_QWORD *)&v17->fields._items->obj.klass + v32);
        if ( !v33 )
          goto LABEL_46;
        if ( *(_DWORD *)(v33 + 20) == Int )
          break;
        size = v17->fields._size;
        if ( (int)++v32 - 4 >= size )
          goto LABEL_30;
      }
      if ( v17->fields._size <= (unsigned int)(v32 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v30 )
        goto LABEL_46;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v30,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&v17->fields._items->obj.klass + v32),
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v17,
        v32 - 4,
        (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( size >= 1 )
  {
    if ( v30 )
    {
      while ( 1 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          v17->fields._items->m_Items[0],
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        v41 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v41 = EventSuperBossMaster_TypeInfo;
        }
        v42 = v41->static_fields->SAVE_KEY;
        v49 = eventId;
        v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
        v48 = v31;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
        v45 = System_String__Format_43739268(v42, v43, v44, 0LL);
        if ( !v17->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v46 = v17->fields._items->m_Items[0];
        if ( !v46 )
          break;
        ++v31;
        UnityEngine_PlayerPrefs__SetInt(v45, v46->fields.missionConditionDetailId, 0LL);
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v17,
          0,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
        if ( v17->fields._size <= 0 )
          goto LABEL_43;
      }
    }
    goto LABEL_46;
  }
LABEL_43:
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v30;
}


// local variable allocation has failed, the output may be wrong!
EventSuperBossEntity_o *__fastcall EventSuperBossMaster__GetEntity(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x1

  if ( (byte_40F9B9B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    sub_B16FFC(&EventSuperBossEntity_TypeInfo, v7);
    byte_40F9B9B = 1;
  }
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  PK = EventSuperBossEntity__CreatePK(eventId, id, 0LL);
  return (EventSuperBossEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
}


bool __fastcall EventSuperBossMaster__TryGetEntity(
        EventSuperBossMaster_o *this,
        EventSuperBossEntity_o **entity,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x2

  if ( (byte_40F9B9C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__, entity);
    sub_B16FFC(&EventSuperBossEntity_TypeInfo, v9);
    byte_40F9B9C = 1;
  }
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  PK = EventSuperBossEntity__CreatePK(eventId, id, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}