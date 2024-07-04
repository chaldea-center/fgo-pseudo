void __fastcall WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E36A6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__, method);
    byte_48E36A6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    162,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
}


int32_t __fastcall WarAddMaster__GetBGImageID(
        WarAddMaster_o *this,
        WarAddEntity_o **changeWarAdd,
        int32_t warId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  int64_t Time; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t v20; // x24
  Il2CppObject *v21; // x21
  int32_t v22; // w25
  int v23; // w28
  int priority; // w29
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v26; // x26
  __int64 methodPtr_low; // x10
  bool HasBGChange; // w0
  int32_t condType; // w8
  int64_t UserId; // x2
  int32_t v31; // w1
  int32_t v32; // w9
  int64_t value; // x2
  Il2CppObject *v34; // x0
  __int64 v35; // x10
  int32_t v37; // [xsp+Ch] [xbp-84h]
  int64_t condValue; // [xsp+10h] [xbp-80h]
  Il2CppObject *targetId; // [xsp+18h] [xbp-78h]
  int32_t targetIda; // [xsp+18h] [xbp-78h]
  int condQuestId; // [xsp+20h] [xbp-70h]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_48E36A8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, changeWarAdd);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B00CCC(&CondType_TypeInfo, v9);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserQuestMaster___, v10);
    sub_1B00CCC(&NetworkManager_TypeInfo, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B00CCC(&WarAddEntity_TypeInfo, v13);
    byte_48E36A8 = 1;
  }
  entity = 0LL;
  *changeWarAdd = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)changeWarAdd, 0, warId, beforeClearQuestId);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_52:
    sub_1B00F28(list, v14);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v21 = 0LL;
    goto LABEL_49;
  }
  condQuestId = beforeClearQuestId;
  v20 = Time;
  v21 = 0LL;
  v22 = 0;
  v23 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_52;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               list,
                               v22,
                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v26 = Item;
      methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarAddEntity_TypeInfo
        && Item->fields.startedAt <= v20
        && Item->fields.endedAt > v20
        && Item->fields.warId == warId
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v14);
        if ( condQuestId >= 1 && HasBGChange && v26->fields.targetId == condQuestId && v26->fields.priority > priority )
        {
          condType = v26->fields.condType;
          if ( condType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( CondType__IsQuestClear_36399468(condQuestId, -1, 0, 0LL) )
              goto LABEL_32;
            condType = v26->fields.condType;
          }
          if ( condType == 46 )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_52;
            targetId = DataManager__GetMasterData_object_(
                         (DataManager_o *)list,
                         (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            UserId = NetworkManager__get_UserId(0LL);
            list = (System_Collections_ObjectModel_Collection_T__o *)targetId;
            if ( !targetId )
              goto LABEL_52;
            UserQuestMaster__TryGetEntity((UserQuestMaster_o *)targetId, &entity, UserId, v26->fields.targetId, 0LL);
            if ( entity )
            {
              if ( entity->fields.questPhase == v26->fields.value )
              {
LABEL_32:
                *changeWarAdd = v26;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)changeWarAdd, (int32_t)v26, v18, v19);
                priority = v26->fields.priority;
                goto LABEL_44;
              }
            }
          }
        }
        if ( v26->fields.priority >= v23 )
        {
          v32 = v26->fields.condType;
          v31 = v26->fields.targetId;
          value = v26->fields.value;
          if ( !CondType_TypeInfo->_2.cctor_finished )
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
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              goto LABEL_52;
            v23 = v26->fields.priority;
            v34 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v22,
                    (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v34
              && (v35 = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v34->klass->vtable[0].methodPtr) >= (unsigned int)v35) )
            {
              if ( (WarAddEntity_c *)v34->klass->_2.typeHierarchy[v35 - 1] == WarAddEntity_TypeInfo )
                v21 = v34;
              else
                v21 = 0LL;
            }
            else
            {
              v21 = 0LL;
            }
          }
        }
      }
    }
LABEL_44:
    ++v22;
  }
  while ( Count != v22 );
  if ( priority > v23 )
  {
    if ( v21 )
      return HIDWORD(v21[1].monitor);
    return 0;
  }
LABEL_49:
  *changeWarAdd = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)changeWarAdd, 0, v18, v19);
  if ( !v21 )
    return 0;
  return HIDWORD(v21[1].monitor);
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
  Il2CppObject *PK; // x1

  if ( (byte_48E36A4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__, *(_QWORD *)&warId);
    sub_1B00CCC(&WarAddEntity_TypeInfo, v9);
    byte_48E36A4 = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  WarAddEntity_o *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  WarAddEntity_o *v27; // x23
  WarAddEntity_c *v28; // x1
  __int64 methodPtr_low; // x9
  int32_t overwriteId; // w21
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_48E36A9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&warId);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v9);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B00CCC(&WarAddEntity_TypeInfo, v12);
    byte_48E36A9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B00F28(0LL, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_2F83C88 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B00F28(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1B52CAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (WarAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                              Enumerator,
                              *(_QWORD *)(v23 + 8));
    v27 = v24;
    if ( !v24 )
      goto LABEL_36;
    v28 = WarAddEntity_TypeInfo;
    methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarAddEntity_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != WarAddEntity_TypeInfo )
    {
      sub_1B011E8(v24);
LABEL_36:
      sub_1B00F28(v24, v25);
    }
    if ( v24->fields.warId == warId && v24->fields.type == type )
    {
      if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
        v28 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v27, v28->static_fields->EVENT_TOWER_ID, 0, v26) == towerId )
      {
        overwriteId = v27->fields.overwriteId;
        goto LABEL_28;
      }
    }
  }
  overwriteId = 0;
LABEL_28:
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_1B52CAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v14; // x23
  WarAddEntity_o *v15; // x25
  int32_t v16; // w24
  int v17; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v19; // x26
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w9
  int64_t klass_low; // x2
  Il2CppObject *v24; // x0
  __int64 v25; // x10
  int32_t v27; // [xsp+Ch] [xbp-74h]
  int64_t condValue; // [xsp+10h] [xbp-70h]
  int32_t targetId; // [xsp+1Ch] [xbp-64h]

  if ( (byte_48E36A7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&CondType_TypeInfo, v8);
    sub_1B00CCC(&NetworkManager_TypeInfo, v9);
    sub_1B00CCC(&WarAddEntity_TypeInfo, v10);
    byte_48E36A7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v14 = Time;
    v15 = 0LL;
    v16 = 0;
    v17 = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v16,
               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = Item;
        methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarAddEntity_TypeInfo
          && (__int64)Item[3].monitor <= v14
          && (__int64)Item[4].klass > v14
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v17 )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            condValue = SLODWORD(Item[3].klass);
            v27 = (int32_t)Item[2].monitor;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor = v27;
            klass_low = condValue;
            monitor_high = targetId;
          }
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              break;
            v17 = (int)v19[1].monitor;
            v24 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v16,
                    (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v24
              && (v25 = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v24->klass->vtable[0].methodPtr) >= (unsigned int)v25) )
            {
              if ( (WarAddEntity_c *)v24->klass->_2.typeHierarchy[v25 - 1] == WarAddEntity_TypeInfo )
                v15 = (WarAddEntity_o *)v24;
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
      if ( Count == ++v16 )
        return v15;
    }
LABEL_31:
    sub_1B00F28(list, *(_QWORD *)&type);
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
  Il2CppObject *PK; // x2

  if ( (byte_48E36A5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__, entity);
    sub_1B00CCC(&WarAddEntity_TypeInfo, v11);
    byte_48E36A5 = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}