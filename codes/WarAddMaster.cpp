void __fastcall WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186745 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__, method);
    byte_4186745 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    161,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
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
  const MethodInfo *v17; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  int64_t Time; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int64_t v27; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v28; // x20
  int32_t v29; // w25
  int v30; // w28
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v32; // x26
  __int64 v33; // x10
  bool HasBGChange; // w0
  int32_t condType; // w8
  int64_t UserId; // x2
  int32_t v37; // w1
  int32_t v38; // w9
  int64_t value; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v40; // x0
  __int64 v41; // x10
  int32_t v43; // [xsp+4h] [xbp-7Ch]
  int64_t condValue; // [xsp+8h] [xbp-78h]
  UserQuestMaster_o *targetId; // [xsp+10h] [xbp-70h]
  int32_t targetIda; // [xsp+10h] [xbp-70h]
  int priority; // [xsp+20h] [xbp-60h]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4186747 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, changeWarAdd);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B2C35C(&CondType_TypeInfo, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&WarAddEntity_TypeInfo, v16);
    byte_4186747 = 1;
  }
  entity = 0LL;
  *changeWarAdd = 0LL;
  sub_B2C2F8(
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
    sub_B2C434(list, v17);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v28 = 0LL;
    goto LABEL_53;
  }
  v27 = Time;
  v28 = 0LL;
  v29 = 0;
  v30 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_56;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               list,
                               v29,
                               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v32 = Item;
      v33 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v33
        && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[v33 - 1] == WarAddEntity_TypeInfo
        && Item->fields.startedAt <= v27
        && Item->fields.endedAt > v27
        && Item->fields.warId == warId
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v17);
        if ( beforeClearQuestId >= 1
          && HasBGChange
          && v32->fields.targetId == beforeClearQuestId
          && v32->fields.priority > priority )
        {
          condType = v32->fields.condType;
          if ( condType == 1 )
          {
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( CondType__IsQuestClear_25746984(beforeClearQuestId, -1, 0, 0LL) )
              goto LABEL_35;
            condType = v32->fields.condType;
          }
          if ( condType == 46 )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_56;
            targetId = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)list,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)targetId;
            if ( !targetId )
              goto LABEL_56;
            UserQuestMaster__TryGetEntity(targetId, &entity, UserId, v32->fields.targetId, 0LL);
            if ( entity )
            {
              if ( entity->fields.questPhase == v32->fields.value )
              {
LABEL_35:
                *changeWarAdd = v32;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)changeWarAdd,
                  (System_Int32_array **)v32,
                  v21,
                  v22,
                  v23,
                  v24,
                  v25,
                  v26);
                priority = v32->fields.priority;
                goto LABEL_48;
              }
            }
          }
        }
        if ( v32->fields.priority >= v30 )
        {
          v38 = v32->fields.condType;
          v37 = v32->fields.targetId;
          value = v32->fields.value;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          {
            targetIda = v32->fields.targetId;
            condValue = v32->fields.value;
            v43 = v32->fields.condType;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            v38 = v43;
            value = condValue;
            v37 = targetIda;
          }
          if ( CondType__IsOpen(v38, v37, value, 0, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
            if ( !list )
              goto LABEL_56;
            v30 = v32->fields.priority;
            v40 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                    list,
                    v29,
                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v40
              && (v41 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1),
                  *(&v40->klass->_2.bitflags2 + 1) >= (unsigned int)v41) )
            {
              if ( (WarAddEntity_c *)v40->klass->_2.typeHierarchy[v41 - 1] == WarAddEntity_TypeInfo )
                v28 = v40;
              else
                v28 = 0LL;
            }
            else
            {
              v28 = 0LL;
            }
          }
        }
      }
    }
LABEL_48:
    ++v29;
  }
  while ( v29 < Count );
  if ( priority > v30 )
  {
    if ( v28 )
      return HIDWORD(v28[1].monitor);
    return 0;
  }
LABEL_53:
  *changeWarAdd = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)changeWarAdd, 0LL, v21, v22, v23, v24, v25, v26);
  if ( !v28 )
    return 0;
  return HIDWORD(v28[1].monitor);
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

  if ( (byte_4186743 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__, *(_QWORD *)&warId);
    sub_B2C35C(&WarAddEntity_TypeInfo, v9);
    byte_4186743 = 1;
  }
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                             PK,
                             (const MethodInfo_24E4520 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
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
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  WarAddEntity_o *v25; // x0
  __int64 v26; // x1
  WarAddEntity_o *v27; // x23
  WarAddEntity_c *v28; // x8
  __int64 v29; // x10
  int32_t overwriteId; // w20
  int v31; // w8
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  int v37; // [xsp+0h] [xbp-50h]

  if ( (byte_4186748 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&warId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B2C35C(&WarAddEntity_TypeInfo, v12);
    byte_4186748 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v25 = (WarAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                              Enumerator,
                              *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      goto LABEL_39;
    v28 = WarAddEntity_TypeInfo;
    v29 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (WarAddEntity_c *)v25->klass->_2.typeHierarchy[v29 - 1] != WarAddEntity_TypeInfo )
    {
      v25 = (WarAddEntity_o *)sub_B2C728(v25);
LABEL_39:
      sub_B2C434(v25, v26);
    }
    if ( v25->fields.warId == warId && v25->fields.type == type )
    {
      if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarAddEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
        v28 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v27, v28->static_fields->EVENT_TOWER_ID, 0, v15) == towerId )
      {
        overwriteId = v27->fields.overwriteId;
        v31 = 90;
        goto LABEL_29;
      }
    }
  }
  v31 = 88;
  overwriteId = 0;
LABEL_29:
  v37 = v31;
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_33:
    v35 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  if ( v37 == 88 )
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v18; // x26
  __int64 v19; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w9
  int64_t klass_low; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v23; // x0
  __int64 v24; // x10
  int32_t v26; // [xsp+Ch] [xbp-64h]
  int64_t condValue; // [xsp+10h] [xbp-60h]
  int32_t targetId; // [xsp+18h] [xbp-58h]
  int v29; // [xsp+1Ch] [xbp-54h]

  if ( (byte_4186746 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&CondType_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&WarAddEntity_TypeInfo, v10);
    byte_4186746 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v29 = -1;
    v14 = Time;
    v15 = 0LL;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v16,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        v19 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == WarAddEntity_TypeInfo
          && (__int64)Item[3].monitor <= v14
          && (__int64)Item[4].klass > v14
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v29 )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            condValue = SLODWORD(Item[3].klass);
            v26 = (int32_t)Item[2].monitor;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor = v26;
            klass_low = condValue;
            monitor_high = targetId;
          }
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
            if ( !list )
              break;
            v29 = (int)v18[1].monitor;
            v23 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                    list,
                    v16,
                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v23
              && (v24 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1),
                  *(&v23->klass->_2.bitflags2 + 1) >= (unsigned int)v24) )
            {
              if ( (WarAddEntity_c *)v23->klass->_2.typeHierarchy[v24 - 1] == WarAddEntity_TypeInfo )
                v15 = (WarAddEntity_o *)v23;
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
    sub_B2C434(list, *(_QWORD *)&type);
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

  if ( (byte_4186744 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&WarAddEntity_TypeInfo, v11);
    byte_4186744 = 1;
  }
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}