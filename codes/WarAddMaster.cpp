void __fastcall WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C0A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
    byte_4A5C0A7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    163,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
}


int32_t __fastcall WarAddMaster__GetBGImageID(
        WarAddMaster_o *this,
        WarAddEntity_o **changeWarAdd,
        int32_t warId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  int64_t Time; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int64_t v14; // x24
  Il2CppObject *v15; // x21
  int32_t v16; // w25
  int v17; // w28
  int priority; // w29
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v20; // x26
  __int64 methodPtr_low; // x10
  bool HasBGChange; // w0
  int32_t condType; // w8
  int64_t UserId; // x2
  int32_t v25; // w1
  int32_t v26; // w9
  int64_t value; // x2
  Il2CppObject *v28; // x0
  __int64 v29; // x10
  int32_t v31; // [xsp+Ch] [xbp-84h]
  int64_t condValue; // [xsp+10h] [xbp-80h]
  Il2CppObject *targetId; // [xsp+18h] [xbp-78h]
  int32_t targetIda; // [xsp+18h] [xbp-78h]
  int condQuestId; // [xsp+20h] [xbp-70h]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A5C0A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&WarAddEntity_TypeInfo);
    byte_4A5C0A9 = 1;
  }
  entity = 0LL;
  *changeWarAdd = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)changeWarAdd, 0, warId, beforeClearQuestId);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_52:
    sub_1B8880C(list, v8);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v15 = 0LL;
    goto LABEL_49;
  }
  condQuestId = beforeClearQuestId;
  v14 = Time;
  v15 = 0LL;
  v16 = 0;
  v17 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_52;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               list,
                               v16,
                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = Item;
      methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarAddEntity_TypeInfo
        && Item->fields.startedAt <= v14
        && Item->fields.endedAt > v14
        && Item->fields.warId == warId
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v8);
        if ( condQuestId >= 1 && HasBGChange && v20->fields.targetId == condQuestId && v20->fields.priority > priority )
        {
          condType = v20->fields.condType;
          if ( condType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( CondType__IsQuestClear_37596684(condQuestId, -1, 0, 0LL) )
              goto LABEL_32;
            condType = v20->fields.condType;
          }
          if ( condType == 46 )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_52;
            targetId = DataManager__GetMasterData_object_(
                         (DataManager_o *)list,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            UserId = NetworkManager__get_UserId(0LL);
            list = (System_Collections_ObjectModel_Collection_T__o *)targetId;
            if ( !targetId )
              goto LABEL_52;
            UserQuestMaster__TryGetEntity((UserQuestMaster_o *)targetId, &entity, UserId, v20->fields.targetId, 0LL);
            if ( entity )
            {
              if ( entity->fields.questPhase == v20->fields.value )
              {
LABEL_32:
                *changeWarAdd = v20;
                sub_1B88554((ServantStatusBattleListViewItem_o *)changeWarAdd, (int32_t)v20, v12, v13);
                priority = v20->fields.priority;
                goto LABEL_44;
              }
            }
          }
        }
        if ( v20->fields.priority >= v17 )
        {
          v26 = v20->fields.condType;
          v25 = v20->fields.targetId;
          value = v20->fields.value;
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetIda = v20->fields.targetId;
            condValue = v20->fields.value;
            v31 = v20->fields.condType;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            v26 = v31;
            value = condValue;
            v25 = targetIda;
          }
          if ( CondType__IsOpen(v26, v25, value, 0, 0LL, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              goto LABEL_52;
            v17 = v20->fields.priority;
            v28 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v16,
                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v28
              && (v29 = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v28->klass->vtable[0].methodPtr) >= (unsigned int)v29) )
            {
              if ( (WarAddEntity_c *)v28->klass->_2.typeHierarchy[v29 - 1] == WarAddEntity_TypeInfo )
                v15 = v28;
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
    }
LABEL_44:
    ++v16;
  }
  while ( Count != v16 );
  if ( priority > v17 )
  {
    if ( v15 )
      return HIDWORD(v15[1].monitor);
    return 0;
  }
LABEL_49:
  *changeWarAdd = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)changeWarAdd, 0, v12, v13);
  if ( !v15 )
    return 0;
  return HIDWORD(v15[1].monitor);
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *__fastcall WarAddMaster__GetEntity(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C0A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
    sub_1B885B0(&WarAddEntity_TypeInfo);
    byte_4A5C0A5 = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_311DC8C *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddMaster__GetEventTowerBackGroundId(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t towerId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  WarAddEntity_o *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  WarAddEntity_o *v23; // x23
  WarAddEntity_c *v24; // x1
  __int64 methodPtr_low; // x9
  int32_t overwriteId; // w21
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4A5C0AA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&WarAddEntity_TypeInfo);
    byte_4A5C0AA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (WarAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                              Enumerator,
                              *(_QWORD *)(v19 + 8));
    v23 = v20;
    if ( !v20 )
      goto LABEL_36;
    v24 = WarAddEntity_TypeInfo;
    methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarAddEntity_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != WarAddEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_36:
      sub_1B8880C(v20, v21);
    }
    if ( v20->fields.warId == warId && v20->fields.type == type )
    {
      if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
        v24 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v23, v24->static_fields->EVENT_TOWER_ID, 0, v22) == towerId )
      {
        overwriteId = v23->fields.overwriteId;
        goto LABEL_28;
      }
    }
  }
  overwriteId = 0;
LABEL_28:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_32;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_32:
    v30 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return overwriteId;
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *__fastcall WarAddMaster__GetPrioredEntity(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v10; // x23
  WarAddEntity_o *v11; // x25
  int32_t v12; // w24
  int v13; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x26
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w9
  int64_t klass_low; // x2
  Il2CppObject *v20; // x0
  __int64 v21; // x10
  int32_t v23; // [xsp+Ch] [xbp-74h]
  int64_t condValue; // [xsp+10h] [xbp-70h]
  int32_t targetId; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4A5C0A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&WarAddEntity_TypeInfo);
    byte_4A5C0A8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v10 = Time;
    v11 = 0LL;
    v12 = 0;
    v13 = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = Item;
        methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarAddEntity_TypeInfo
          && (__int64)Item[3].monitor <= v10
          && (__int64)Item[4].klass > v10
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v13 )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            condValue = SLODWORD(Item[3].klass);
            v23 = (int32_t)Item[2].monitor;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor = v23;
            klass_low = condValue;
            monitor_high = targetId;
          }
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              break;
            v13 = (int)v15[1].monitor;
            v20 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v12,
                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v20
              && (v21 = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v20->klass->vtable[0].methodPtr) >= (unsigned int)v21) )
            {
              if ( (WarAddEntity_c *)v20->klass->_2.typeHierarchy[v21 - 1] == WarAddEntity_TypeInfo )
                v11 = (WarAddEntity_o *)v20;
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
      if ( Count == ++v12 )
        return v11;
    }
LABEL_31:
    sub_1B8880C(list, *(_QWORD *)&type);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5C0A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
    sub_1B885B0(&WarAddEntity_TypeInfo);
    byte_4A5C0A6 = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}