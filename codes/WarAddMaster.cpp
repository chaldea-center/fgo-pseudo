void __fastcall WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E68BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E68BB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    162,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  const MethodInfo *v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  int64_t Time; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int64_t v39; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v40; // x20
  int32_t v41; // w25
  int v42; // w28
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v44; // x26
  __int64 v45; // x10
  bool HasBGChange; // w0
  int32_t condType; // w8
  int64_t UserId; // x2
  int32_t v49; // w1
  int32_t v50; // w9
  int64_t value; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v52; // x0
  __int64 v53; // x10
  int32_t v55; // [xsp+4h] [xbp-7Ch]
  int64_t condValue; // [xsp+8h] [xbp-78h]
  UserQuestMaster_o *targetId; // [xsp+10h] [xbp-70h]
  int32_t targetIda; // [xsp+10h] [xbp-70h]
  int priority; // [xsp+20h] [xbp-60h]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E68BD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)changeWarAdd,
      warId,
      *(_QWORD *)&beforeClearQuestId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12, v13);
    sub_B5D5C4(&CondType_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&WarAddEntity_TypeInfo, v26, v27, v28);
    byte_42E68BD = 1;
  }
  entity = 0LL;
  *changeWarAdd = 0LL;
  sub_B5D560(
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
    sub_B5D69C(list, v29);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v40 = 0LL;
    goto LABEL_53;
  }
  v39 = Time;
  v40 = 0LL;
  v41 = 0;
  v42 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_56;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               list,
                               v41,
                               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v44 = Item;
      v45 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v45
        && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[v45 - 1] == WarAddEntity_TypeInfo
        && Item->fields.startedAt <= v39
        && Item->fields.endedAt > v39
        && Item->fields.warId == warId
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v29);
        if ( beforeClearQuestId >= 1
          && HasBGChange
          && v44->fields.targetId == beforeClearQuestId
          && v44->fields.priority > priority )
        {
          condType = v44->fields.condType;
          if ( condType == 1 )
          {
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( CondType__IsQuestClear_25877652(beforeClearQuestId, -1, 0, 0LL) )
              goto LABEL_35;
            condType = v44->fields.condType;
          }
          if ( condType == 46 )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_56;
            targetId = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)list,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)targetId;
            if ( !targetId )
              goto LABEL_56;
            UserQuestMaster__TryGetEntity(targetId, &entity, UserId, v44->fields.targetId, 0LL);
            if ( entity )
            {
              if ( entity->fields.questPhase == v44->fields.value )
              {
LABEL_35:
                *changeWarAdd = v44;
                sub_B5D560(
                  (BattleServantConfConponent_o *)changeWarAdd,
                  (System_Int32_array **)v44,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37,
                  v38);
                priority = v44->fields.priority;
                goto LABEL_48;
              }
            }
          }
        }
        if ( v44->fields.priority >= v42 )
        {
          v50 = v44->fields.condType;
          v49 = v44->fields.targetId;
          value = v44->fields.value;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          {
            targetIda = v44->fields.targetId;
            condValue = v44->fields.value;
            v55 = v44->fields.condType;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            v50 = v55;
            value = condValue;
            v49 = targetIda;
          }
          if ( CondType__IsOpen(v50, v49, value, 0, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
            if ( !list )
              goto LABEL_56;
            v42 = v44->fields.priority;
            v52 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                    list,
                    v41,
                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v52
              && (v53 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1),
                  *(&v52->klass->_2.bitflags2 + 1) >= (unsigned int)v53) )
            {
              if ( (WarAddEntity_c *)v52->klass->_2.typeHierarchy[v53 - 1] == WarAddEntity_TypeInfo )
                v40 = v52;
              else
                v40 = 0LL;
            }
            else
            {
              v40 = 0LL;
            }
          }
        }
      }
    }
LABEL_48:
    ++v41;
  }
  while ( v41 < Count );
  if ( priority > v42 )
  {
    if ( v40 )
      return HIDWORD(v40[1].monitor);
    return 0;
  }
LABEL_53:
  *changeWarAdd = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)changeWarAdd, 0LL, v33, v34, v35, v36, v37, v38);
  if ( !v40 )
    return 0;
  return HIDWORD(v40[1].monitor);
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *__fastcall WarAddMaster__GetEntity(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x1

  if ( (byte_42E68B9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__,
      warId,
      type,
      *(_QWORD *)&priority);
    sub_B5D5C4(&WarAddEntity_TypeInfo, v9, v10, v11);
    byte_42E68B9 = 1;
  }
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                             PK,
                             (const MethodInfo_23FB260 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddMaster__GetEventTowerBackGroundId(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t towerId,
        const MethodInfo *method)
{
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  WarAddEntity_o *v33; // x0
  __int64 v34; // x1
  WarAddEntity_o *v35; // x23
  WarAddEntity_c *v36; // x8
  __int64 v37; // x10
  int32_t overwriteId; // w20
  int v39; // w8
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  int v45; // [xsp+0h] [xbp-50h]

  if ( (byte_42E68BE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      warId,
      type,
      *(_QWORD *)&towerId);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&WarAddEntity_TypeInfo, v18, v19, v20);
    byte_42E68BE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v33 = (WarAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                              Enumerator,
                              *(_QWORD *)(v32 + 8));
    v35 = v33;
    if ( !v33 )
      goto LABEL_39;
    v36 = WarAddEntity_TypeInfo;
    v37 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v37
      || (WarAddEntity_c *)v33->klass->_2.typeHierarchy[v37 - 1] != WarAddEntity_TypeInfo )
    {
      v33 = (WarAddEntity_o *)sub_B5D990(v33);
LABEL_39:
      sub_B5D69C(v33, v34);
    }
    if ( v33->fields.warId == warId && v33->fields.type == type )
    {
      if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarAddEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
        v36 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v35, v36->static_fields->EVENT_TOWER_ID, 0, v23) == towerId )
      {
        overwriteId = v35->fields.overwriteId;
        v39 = 90;
        goto LABEL_29;
      }
    }
  }
  v39 = 88;
  overwriteId = 0;
LABEL_29:
  v45 = v39;
  v40 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_33:
    v43 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  if ( v45 == 88 )
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v22; // x23
  WarAddEntity_o *v23; // x25
  int32_t v24; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v26; // x26
  __int64 v27; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w9
  int64_t klass_low; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x0
  __int64 v32; // x10
  int32_t v34; // [xsp+Ch] [xbp-64h]
  int64_t condValue; // [xsp+10h] [xbp-60h]
  int32_t targetId; // [xsp+18h] [xbp-58h]
  int v37; // [xsp+1Ch] [xbp-54h]

  if ( (byte_42E68BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, type, warId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&CondType_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&WarAddEntity_TypeInfo, v16, v17, v18);
    byte_42E68BC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v37 = -1;
    v22 = Time;
    v23 = 0LL;
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v24,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = Item;
        v27 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == WarAddEntity_TypeInfo
          && (__int64)Item[3].monitor <= v22
          && (__int64)Item[4].klass > v22
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v37 )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            condValue = SLODWORD(Item[3].klass);
            v34 = (int32_t)Item[2].monitor;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor = v34;
            klass_low = condValue;
            monitor_high = targetId;
          }
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
            if ( !list )
              break;
            v37 = (int)v26[1].monitor;
            v31 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                    list,
                    v24,
                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v31
              && (v32 = *(&WarAddEntity_TypeInfo->_2.bitflags2 + 1),
                  *(&v31->klass->_2.bitflags2 + 1) >= (unsigned int)v32) )
            {
              if ( (WarAddEntity_c *)v31->klass->_2.typeHierarchy[v32 - 1] == WarAddEntity_TypeInfo )
                v23 = (WarAddEntity_o *)v31;
              else
                v23 = 0LL;
            }
            else
            {
              v23 = 0LL;
            }
          }
        }
      }
      if ( ++v24 >= Count )
        return v23;
    }
LABEL_33:
    sub_B5D69C(list, *(_QWORD *)&type);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *PK; // x2

  if ( (byte_42E68BA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      warId,
      *(_QWORD *)&type);
    sub_B5D5C4(&WarAddEntity_TypeInfo, v11, v12, v13);
    byte_42E68BA = 1;
  }
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}