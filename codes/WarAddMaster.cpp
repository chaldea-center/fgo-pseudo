void __fastcall WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE02F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
    byte_42AE02F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    162,
    (const MethodInfo_23E268C *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
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
  const MethodInfo *v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  int64_t Time; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int64_t v21; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v22; // x20
  int32_t v23; // w25
  int v24; // w28
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v26; // x26
  __int64 v27; // x10
  bool HasBGChange; // w0
  int32_t condType; // w8
  int64_t UserId; // x2
  int32_t v31; // w1
  int32_t v32; // w9
  int64_t value; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v34; // x0
  __int64 v35; // x10
  int32_t v37; // [xsp+4h] [xbp-7Ch]
  int64_t condValue; // [xsp+8h] [xbp-78h]
  UserQuestMaster_o *targetId; // [xsp+10h] [xbp-70h]
  int32_t targetIda; // [xsp+10h] [xbp-70h]
  int priority; // [xsp+20h] [xbp-60h]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42AE031 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&WarAddEntity_TypeInfo);
    byte_42AE031 = 1;
  }
  entity = 0LL;
  *changeWarAdd = 0LL;
  sub_B52920(
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
    sub_B52A5C(list, v11);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v22 = 0LL;
    goto LABEL_53;
  }
  v21 = Time;
  v22 = 0LL;
  v23 = 0;
  v24 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_56;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               list,
                               v23,
                               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v26 = Item;
      v27 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
        && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == WarAddEntity_TypeInfo
        && Item->fields.startedAt <= v21
        && Item->fields.endedAt > v21
        && Item->fields.warId == warId
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v11);
        if ( beforeClearQuestId >= 1
          && HasBGChange
          && v26->fields.targetId == beforeClearQuestId
          && v26->fields.priority > priority )
        {
          condType = v26->fields.condType;
          if ( condType == 1 )
          {
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( CondType__IsQuestClear_25987760(beforeClearQuestId, -1, 0, 0LL) )
              goto LABEL_35;
            condType = v26->fields.condType;
          }
          if ( condType == 46 )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_56;
            targetId = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)list,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)targetId;
            if ( !targetId )
              goto LABEL_56;
            UserQuestMaster__TryGetEntity(targetId, &entity, UserId, v26->fields.targetId, 0LL);
            if ( entity )
            {
              if ( entity->fields.questPhase == v26->fields.value )
              {
LABEL_35:
                *changeWarAdd = v26;
                sub_B52920(
                  (BattleServantConfConponent_o *)changeWarAdd,
                  (System_Int32_array **)v26,
                  v15,
                  v16,
                  v17,
                  v18,
                  v19,
                  v20);
                priority = v26->fields.priority;
                goto LABEL_48;
              }
            }
          }
        }
        if ( v26->fields.priority >= v24 )
        {
          v32 = v26->fields.condType;
          v31 = v26->fields.targetId;
          value = v26->fields.value;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          {
            targetIda = v26->fields.targetId;
            condValue = v26->fields.value;
            v37 = v26->fields.condType;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            v32 = v37;
            value = condValue;
            v31 = targetIda;
          }
          if ( CondType__IsOpen(v32, v31, value, 0, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
            if ( !list )
              goto LABEL_56;
            v24 = v26->fields.priority;
            v34 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                    list,
                    v23,
                    (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v34
              && (v35 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1),
                  *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35) )
            {
              if ( (WarAddEntity_c *)v34->klass->_2.typeHierarchy[v35 - 1] == WarAddEntity_TypeInfo )
                v22 = v34;
              else
                v22 = 0LL;
            }
            else
            {
              v22 = 0LL;
            }
          }
        }
      }
    }
LABEL_48:
    ++v23;
  }
  while ( v23 < Count );
  if ( priority > v24 )
  {
    if ( v22 )
      return HIDWORD(v22[1].monitor);
    return 0;
  }
LABEL_53:
  *changeWarAdd = 0LL;
  sub_B52920((BattleServantConfConponent_o *)changeWarAdd, 0LL, v15, v16, v17, v18, v19, v20);
  if ( !v22 )
    return 0;
  return HIDWORD(v22[1].monitor);
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *__fastcall WarAddMaster__GetEntity(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AE02D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
    sub_B52984(&WarAddEntity_TypeInfo);
    byte_42AE02D = 1;
  }
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                             PK,
                             (const MethodInfo_23E2728 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddMaster__GetEventTowerBackGroundId(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t towerId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  WarAddEntity_o *v21; // x0
  __int64 v22; // x1
  WarAddEntity_o *v23; // x23
  WarAddEntity_c *v24; // x8
  __int64 v25; // x10
  int32_t overwriteId; // w20
  int v27; // w8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  int v33; // [xsp+0h] [xbp-50h]

  if ( (byte_42AE032 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&WarAddEntity_TypeInfo);
    byte_42AE032 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (WarAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                              Enumerator,
                              *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      goto LABEL_39;
    v24 = WarAddEntity_TypeInfo;
    v25 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (WarAddEntity_c *)v21->klass->_2.typeHierarchy[v25 - 1] != WarAddEntity_TypeInfo )
    {
      v21 = (WarAddEntity_o *)sub_B52D50(v21);
LABEL_39:
      sub_B52A5C(v21, v22);
    }
    if ( v21->fields.warId == warId && v21->fields.type == type )
    {
      if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarAddEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
        v24 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v23, v24->static_fields->EVENT_TOWER_ID, 0, v11) == towerId )
      {
        overwriteId = v23->fields.overwriteId;
        v27 = 90;
        goto LABEL_29;
      }
    }
  }
  v27 = 88;
  overwriteId = 0;
LABEL_29:
  v33 = v27;
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_33:
    v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  if ( v33 == 88 )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v10; // x23
  WarAddEntity_o *v11; // x25
  int32_t v12; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v14; // x26
  __int64 v15; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w9
  int64_t klass_low; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v19; // x0
  __int64 v20; // x10
  int32_t v22; // [xsp+Ch] [xbp-64h]
  int64_t condValue; // [xsp+10h] [xbp-60h]
  int32_t targetId; // [xsp+18h] [xbp-58h]
  int v25; // [xsp+1Ch] [xbp-54h]

  if ( (byte_42AE030 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&WarAddEntity_TypeInfo);
    byte_42AE030 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v25 = -1;
    v10 = Time;
    v11 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v12,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = Item;
        v15 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] == WarAddEntity_TypeInfo
          && (__int64)Item[3].monitor <= v10
          && (__int64)Item[4].klass > v10
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v25 )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            condValue = SLODWORD(Item[3].klass);
            v22 = (int32_t)Item[2].monitor;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor = v22;
            klass_low = condValue;
            monitor_high = targetId;
          }
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
            if ( !list )
              break;
            v25 = (int)v14[1].monitor;
            v19 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                    list,
                    v12,
                    (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v19
              && (v20 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1),
                  *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v20) )
            {
              if ( (WarAddEntity_c *)v19->klass->_2.typeHierarchy[v20 - 1] == WarAddEntity_TypeInfo )
                v11 = (WarAddEntity_o *)v19;
              else
                v11 = 0LL;
            }
            else
            {
              v11 = 0LL;
            }
          }
        }
      }
      if ( ++v12 >= Count )
        return v11;
    }
LABEL_33:
    sub_B52A5C(list, *(_QWORD *)&type);
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
  System_String_o *PK; // x2

  if ( (byte_42AE02E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
    sub_B52984(&WarAddEntity_TypeInfo);
    byte_42AE02E = 1;
  }
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}