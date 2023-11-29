void __fastcall WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8BB3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__, method);
    byte_40F8BB3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    161,
    (const MethodInfo_266F73C *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddMaster__GetBGImageID(
        WarAddMaster_o *this,
        WarAddEntity_o **changeWarAdd,
        int32_t warId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  int64_t Time; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int64_t v26; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v27; // x20
  int32_t v28; // w25
  int v29; // w28
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v30; // x0
  WarAddEntity_o *Item; // x0
  const MethodInfo *v32; // x1
  WarAddEntity_o *v33; // x26
  __int64 v34; // x10
  bool HasBGChange; // w0
  int32_t condType; // w8
  WebViewManager_o *Instance; // x0
  int64_t UserId; // x2
  int32_t v39; // w1
  int32_t v40; // w9
  int64_t value; // x2
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v42; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v43; // x0
  __int64 v44; // x10
  int32_t v46; // [xsp+4h] [xbp-7Ch]
  int64_t condValue; // [xsp+8h] [xbp-78h]
  UserQuestMaster_o *targetId; // [xsp+10h] [xbp-70h]
  int32_t targetIda; // [xsp+10h] [xbp-70h]
  int priority; // [xsp+20h] [xbp-60h]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40F8BB5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, changeWarAdd);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B16FFC(&CondType_TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&WarAddEntity_TypeInfo, v16);
    byte_40F8BB5 = 1;
  }
  entity = 0LL;
  *changeWarAdd = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)changeWarAdd,
    0LL,
    *(System_String_array ***)&warId,
    *(System_String_array ***)&beforeClearQuestId,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_56:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v27 = 0LL;
    goto LABEL_53;
  }
  v26 = Time;
  v27 = 0LL;
  v28 = 0;
  v29 = -1;
  priority = -1;
  do
  {
    v30 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v30 )
      goto LABEL_56;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               v30,
                               v28,
                               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v33 = Item;
      v34 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v34
        && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[v34 - 1] == WarAddEntity_TypeInfo
        && Item->fields.startedAt <= v26
        && Item->fields.endedAt > v26
        && Item->fields.warId == warId
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v32);
        if ( beforeClearQuestId >= 1
          && HasBGChange
          && v33->fields.targetId == beforeClearQuestId
          && v33->fields.priority > priority )
        {
          condType = v33->fields.condType;
          if ( condType == 1 )
          {
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( CondType__IsQuestClear_25438860(beforeClearQuestId, -1, 0, 0LL) )
              goto LABEL_35;
            condType = v33->fields.condType;
          }
          if ( condType == 46 )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_56;
            targetId = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !targetId )
              goto LABEL_56;
            UserQuestMaster__TryGetEntity(targetId, &entity, UserId, v33->fields.targetId, 0LL);
            if ( entity )
            {
              if ( entity->fields.questPhase == v33->fields.value )
              {
LABEL_35:
                *changeWarAdd = v33;
                sub_B16F98(
                  (BattleServantConfConponent_o *)changeWarAdd,
                  (System_Int32_array **)v33,
                  v20,
                  v21,
                  v22,
                  v23,
                  v24,
                  v25);
                priority = v33->fields.priority;
                goto LABEL_48;
              }
            }
          }
        }
        if ( v33->fields.priority >= v29 )
        {
          v40 = v33->fields.condType;
          v39 = v33->fields.targetId;
          value = v33->fields.value;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          {
            targetIda = v33->fields.targetId;
            condValue = v33->fields.value;
            v46 = v33->fields.condType;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            v40 = v46;
            value = condValue;
            v39 = targetIda;
          }
          if ( CondType__IsOpen(v40, v39, value, 0, 0LL) )
          {
            v42 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
            if ( !v42 )
              goto LABEL_56;
            v29 = v33->fields.priority;
            v43 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                    v42,
                    v28,
                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v43
              && (v44 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1),
                  *(&v43->klass->_2.bitflags2 + 1) >= (unsigned int)v44) )
            {
              if ( (WarAddEntity_c *)v43->klass->_2.typeHierarchy[v44 - 1] == WarAddEntity_TypeInfo )
                v27 = v43;
              else
                v27 = 0LL;
            }
            else
            {
              v27 = 0LL;
            }
          }
        }
      }
    }
LABEL_48:
    ++v28;
  }
  while ( v28 < Count );
  if ( priority > v29 )
  {
    if ( v27 )
      return HIDWORD(v27[1].monitor);
    return 0;
  }
LABEL_53:
  *changeWarAdd = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)changeWarAdd, 0LL, v20, v21, v22, v23, v24, v25);
  if ( !v27 )
    return 0;
  return HIDWORD(v27[1].monitor);
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *__fastcall WarAddMaster__GetEntity(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x1

  if ( (byte_40F8BB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__, *(_QWORD *)&warId);
    sub_B16FFC(&WarAddEntity_TypeInfo, v9);
    byte_40F8BB1 = 1;
  }
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                             PK,
                             (const MethodInfo_266F7D8 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddMaster__GetEventTowerBackGroundId(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  WarAddEntity_o *v23; // x0
  const MethodInfo *v24; // x3
  WarAddEntity_o *v25; // x23
  WarAddEntity_c *v26; // x8
  __int64 v27; // x10
  int32_t overwriteId; // w20
  int v29; // w8
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  int v35; // [xsp+0h] [xbp-50h]

  if ( (byte_40F8BB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&warId);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&WarAddEntity_TypeInfo, v12);
    byte_40F8BB6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (WarAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                              Enumerator,
                              *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      goto LABEL_39;
    v26 = WarAddEntity_TypeInfo;
    v27 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (WarAddEntity_c *)v23->klass->_2.typeHierarchy[v27 - 1] != WarAddEntity_TypeInfo )
    {
      sub_B173C8(v23);
LABEL_39:
      sub_B170D4();
    }
    if ( v23->fields.warId == warId && v23->fields.type == type )
    {
      if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarAddEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
        v26 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v25, v26->static_fields->EVENT_TOWER_ID, 0, v24) == towerId )
      {
        overwriteId = v25->fields.overwriteId;
        v29 = 90;
        goto LABEL_29;
      }
    }
  }
  v29 = 88;
  overwriteId = 0;
LABEL_29:
  v35 = v29;
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_33:
    v33 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  if ( v35 == 88 )
    return 0;
  return overwriteId;
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *__fastcall WarAddMaster__GetPrioredEntity(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v14; // x23
  WarAddEntity_o *v15; // x25
  int32_t v16; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v19; // x26
  __int64 v20; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w9
  int64_t klass_low; // x2
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v24; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x0
  __int64 v26; // x10
  int32_t v28; // [xsp+Ch] [xbp-64h]
  int64_t condValue; // [xsp+10h] [xbp-60h]
  int32_t targetId; // [xsp+18h] [xbp-58h]
  int v31; // [xsp+1Ch] [xbp-54h]

  if ( (byte_40F8BB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&CondType_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&WarAddEntity_TypeInfo, v10);
    byte_40F8BB4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v31 = -1;
    v14 = Time;
    v15 = 0LL;
    v16 = 0;
    while ( 1 )
    {
      v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v17 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v17,
               v16,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = Item;
        v20 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == WarAddEntity_TypeInfo
          && (__int64)Item[3].monitor <= v14
          && (__int64)Item[4].klass > v14
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v31 )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            condValue = SLODWORD(Item[3].klass);
            v28 = (int32_t)Item[2].monitor;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor = v28;
            klass_low = condValue;
            monitor_high = targetId;
          }
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
          {
            v24 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
            if ( !v24 )
              break;
            v31 = (int)v19[1].monitor;
            v25 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                    v24,
                    v16,
                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v25
              && (v26 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1),
                  *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
            {
              if ( (WarAddEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] == WarAddEntity_TypeInfo )
                v15 = (WarAddEntity_o *)v25;
              else
                v15 = 0LL;
            }
            else
            {
              v15 = 0LL;
            }
          }
        }
      }
      if ( ++v16 >= Count )
        return v15;
    }
LABEL_33:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddMaster__GetPrioredID(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v5; // w19
  WarAddEntity_o *PrioredEntity; // x0

  v5 = defVal;
  PrioredEntity = WarAddMaster__GetPrioredEntity(this, type, warId, *(const MethodInfo **)&defVal);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return v5;
}


System_String_o *__fastcall WarAddMaster__GetPrioredStr(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  WarAddEntity_o *PrioredEntity; // x0

  v5 = defVal;
  PrioredEntity = WarAddMaster__GetPrioredEntity(this, type, warId, (const MethodInfo *)defVal);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarAddMaster__TryGetEntity(
        WarAddMaster_o *this,
        WarAddEntity_o **entity,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_String_o *PK; // x2

  if ( (byte_40F8BB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__, entity);
    sub_B16FFC(&WarAddEntity_TypeInfo, v11);
    byte_40F8BB2 = 1;
  }
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}