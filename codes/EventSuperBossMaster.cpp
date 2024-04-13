void __fastcall EventSuperBossMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E8457 & 1) == 0 )
  {
    sub_B5D5C4(&EventSuperBossMaster_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_5810/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/, v8, v9, v10);
    byte_42E8457 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventSuperBossMaster_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_5810/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5810/*"EVENT_SUPERBOSS_ENCOUNTER_{0}_{1}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventSuperBossMaster___ctor(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8454 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8454 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    169,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string___ctor__);
}


void __fastcall EventSuperBossMaster__DeleteContinueData(EventSuperBossMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v18; // w21
  __int64 v19; // x10
  int v20; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x8
  int items; // w28
  __int64 v23; // x10
  int i; // w20
  EventSuperBossMaster_c *v25; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v27; // x23
  Il2CppObject *v28; // x0
  System_String_o *v29; // x22
  int32_t Count; // [xsp+4h] [xbp-5Ch]
  int v31; // [xsp+8h] [xbp-58h] BYREF
  int v32; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E8456 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&EventSuperBossEntity_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&EventSuperBossMaster_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    byte_42E8456 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v18,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      v20 = v18;
      if ( (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[*(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1)
                                                                 - 1] == EventSuperBossEntity_TypeInfo )
        v21 = list;
      else
        v21 = 0LL;
      items = (int)v21->fields.items;
      while ( v20 > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          goto LABEL_29;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             --v20,
                                                                                             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_29;
        v23 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v23
          || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v23 - 1] != EventSuperBossEntity_TypeInfo )
        {
          goto LABEL_29;
        }
        if ( items == LODWORD(list->fields.items) )
          goto LABEL_27;
      }
      for ( i = 0; ; ++i )
      {
        v25 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v25 = EventSuperBossMaster_TypeInfo;
        }
        SAVE_KEY = v25->static_fields->SAVE_KEY;
        v32 = items;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
        v31 = i;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
        v29 = System_String__Format_44573324(SAVE_KEY, v27, v28, 0LL);
        if ( !UnityEngine_PlayerPrefs__HasKey(v29, 0LL) )
          break;
        UnityEngine_PlayerPrefs__DeleteKey(v29, 0LL);
      }
LABEL_27:
      if ( ++v18 >= Count )
        return;
    }
LABEL_29:
    sub_B5D69C(list, method);
  }
}


System_Collections_Generic_List_EventSuperBossEntity__o *__fastcall EventSuperBossMaster__GetCurrentListByEventId(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  __int64 v37; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v39; // w22
  int32_t v40; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x24
  __int64 v42; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x21
  int v44; // w24
  __int64 v45; // x23
  __int64 v46; // x8
  int size; // w8
  EventSuperBossMaster_c *v48; // x0
  System_String_o *SAVE_KEY; // x22
  Il2CppObject *v50; // x23
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  EventSuperBossMaster_c *v53; // x0
  System_String_o *v54; // x22
  Il2CppObject *v55; // x23
  Il2CppObject *v56; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x8
  int v59; // [xsp+8h] [xbp-58h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E8455 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventSuperBossEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&EventSuperBossMaster_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventSuperBossEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventSuperBossEntity__get_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_EventSuperBossEntity__TypeInfo, v33, v34, v35);
    byte_42E8455 = 1;
  }
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v39 = (int)list;
    v40 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v40,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v42 = *(&EventSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v42
        || (EventSuperBossEntity_c *)list->klass->_2.typeHierarchy[v42 - 1] != EventSuperBossEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventSuperBossEntity__IsEncounted(
                                                                                             (EventSuperBossEntity_o *)list,
                                                                                             0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v36 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v36,
            v41,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        }
      }
      if ( ++v40 >= v39 )
        goto LABEL_15;
    }
LABEL_46:
    sub_B5D69C(list, v37);
  }
LABEL_15:
  if ( !v36 )
    goto LABEL_46;
  if ( !v36->fields._size )
    return 0LL;
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventSuperBossEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventSuperBossEntity___ctor__);
  v44 = 0;
  while ( 1 )
  {
LABEL_30:
    v48 = EventSuperBossMaster_TypeInfo;
    if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
      v48 = EventSuperBossMaster_TypeInfo;
    }
    SAVE_KEY = v48->static_fields->SAVE_KEY;
    v60 = eventId;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    v59 = v44;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
    v52 = System_String__Format_44573324(SAVE_KEY, v50, v51, 0LL);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UnityEngine_PlayerPrefs__GetInt(
                                                                                         v52,
                                                                                         0,
                                                                                         0LL);
    size = v36->fields._size;
    if ( !(_DWORD)list )
      break;
    ++v44;
    if ( size >= 1 )
    {
      v45 = 4LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)(v45 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v46 = *((_QWORD *)&v36->fields._items->obj.klass + v45);
        if ( !v46 )
          goto LABEL_46;
        if ( *(_DWORD *)(v46 + 20) == (_DWORD)list )
          break;
        size = v36->fields._size;
        if ( (int)++v45 - 4 >= size )
          goto LABEL_30;
      }
      if ( v36->fields._size <= (unsigned int)(v45 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v43 )
        goto LABEL_46;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v43,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&v36->fields._items->obj.klass + v45),
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v36,
        v45 - 4,
        (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
    }
  }
  if ( size >= 1 )
  {
    if ( v43 )
    {
      while ( 1 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v43,
          v36->fields._items->m_Items[0],
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventSuperBossEntity__Add__);
        v53 = EventSuperBossMaster_TypeInfo;
        if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
          v53 = EventSuperBossMaster_TypeInfo;
        }
        v54 = v53->static_fields->SAVE_KEY;
        v60 = eventId;
        v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
        v59 = v44;
        v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_String__Format_44573324(
                                                                                             v54,
                                                                                             v55,
                                                                                             v56,
                                                                                             0LL);
        if ( !v36->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v57 = v36->fields._items->m_Items[0];
        if ( !v57 )
          break;
        ++v44;
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)list, v57->fields.missionConditionDetailId, 0LL);
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v36,
          0,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_EventSuperBossEntity__RemoveAt__);
        if ( v36->fields._size <= 0 )
          goto LABEL_43;
      }
    }
    goto LABEL_46;
  }
LABEL_43:
  UnityEngine_PlayerPrefs__Save(0LL);
  return (System_Collections_Generic_List_EventSuperBossEntity__o *)v43;
}


EventSuperBossEntity_o *__fastcall EventSuperBossMaster__GetEntity(
        EventSuperBossMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x1

  if ( (byte_42E8452 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__,
      eventId,
      id,
      method);
    sub_B5D5C4(&EventSuperBossEntity_TypeInfo, v7, v8, v9);
    byte_42E8452 = 1;
  }
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  PK = EventSuperBossEntity__CreatePK(eventId, id, 0LL);
  return (EventSuperBossEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventSuperBossMaster__TryGetEntity(
        EventSuperBossMaster_o *this,
        EventSuperBossEntity_o **entity,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x2

  if ( (byte_42E8453 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&id);
    sub_B5D5C4(&EventSuperBossEntity_TypeInfo, v9, v10, v11);
    byte_42E8453 = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventSuperBossMaster__EventSuperBossEntity__string__TryGetEntity__);
}