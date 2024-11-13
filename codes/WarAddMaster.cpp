void __fastcall WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17160 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__, method, v2);
    byte_4B17160 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    163,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarAddMaster__GetBGImageID(
        WarAddMaster_o *this,
        WarAddEntity_o **changeWarAdd,
        int32_t warId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  int32_t Count; // w23
  int64_t Time; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x24
  Il2CppObject *v35; // x21
  int32_t v36; // w25
  int v37; // w28
  int priority; // w29
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v40; // x26
  __int64 methodPtr_low; // x10
  bool HasBGChange; // w0
  int32_t condType; // w8
  __int64 v44; // x1
  int64_t UserId; // x2
  __int64 v46; // x1
  int32_t v47; // w9
  int64_t value; // x2
  Il2CppObject *v49; // x0
  __int64 v50; // x10
  int32_t v52; // [xsp+Ch] [xbp-84h]
  int64_t condValue; // [xsp+10h] [xbp-80h]
  Il2CppObject *targetId; // [xsp+18h] [xbp-78h]
  int32_t targetIda; // [xsp+18h] [xbp-78h]
  int condQuestId; // [xsp+20h] [xbp-70h]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B17162 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      changeWarAdd,
      *(_QWORD *)&warId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12);
    sub_1BCA7E0(&CondType_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&WarAddEntity_TypeInfo, v21, v22);
    byte_4B17162 = 1;
  }
  entity = 0LL;
  *changeWarAdd = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)changeWarAdd,
    0LL,
    *(int64_t *)&warId,
    beforeClearQuestId,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_52:
    sub_1BCAA3C(list, v23);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v35 = 0LL;
    goto LABEL_49;
  }
  condQuestId = beforeClearQuestId;
  v34 = Time;
  v35 = 0LL;
  v36 = 0;
  v37 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_52;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               list,
                               v36,
                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v40 = Item;
      methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarAddEntity_TypeInfo
        && Item->fields.startedAt <= v34
        && Item->fields.endedAt > v34
        && Item->fields.warId == warId
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v23);
        if ( condQuestId >= 1 && HasBGChange && v40->fields.targetId == condQuestId && v40->fields.priority > priority )
        {
          condType = v40->fields.condType;
          if ( condType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v23);
            if ( CondType__IsQuestClear_38310172(condQuestId, -1, 0, 0LL) )
              goto LABEL_32;
            condType = v40->fields.condType;
          }
          if ( condType == 46 )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_52;
            targetId = DataManager__GetMasterData_object_(
                         (DataManager_o *)list,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v44);
            UserId = NetworkManager__get_UserId(0LL);
            list = (System_Collections_ObjectModel_Collection_T__o *)targetId;
            if ( !targetId )
              goto LABEL_52;
            UserQuestMaster__TryGetEntity((UserQuestMaster_o *)targetId, &entity, UserId, v40->fields.targetId, 0LL);
            if ( entity )
            {
              if ( entity->fields.questPhase == v40->fields.value )
              {
LABEL_32:
                *changeWarAdd = v40;
                sub_1BCA784((PartyOrganizationUtility_o *)changeWarAdd, (int64_t)v40, v28, v29, v30, v31, v32, v33);
                priority = v40->fields.priority;
                goto LABEL_44;
              }
            }
          }
        }
        if ( v40->fields.priority >= v37 )
        {
          v47 = v40->fields.condType;
          v46 = (unsigned int)v40->fields.targetId;
          value = v40->fields.value;
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetIda = v40->fields.targetId;
            condValue = v40->fields.value;
            v52 = v40->fields.condType;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v46);
            v47 = v52;
            value = condValue;
            LODWORD(v46) = targetIda;
          }
          if ( CondType__IsOpen(v47, v46, value, 0, 0LL, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              goto LABEL_52;
            v37 = v40->fields.priority;
            v49 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v36,
                    (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v49
              && (v50 = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v49->klass->vtable[0].methodPtr) >= (unsigned int)v50) )
            {
              if ( (WarAddEntity_c *)v49->klass->_2.typeHierarchy[v50 - 1] == WarAddEntity_TypeInfo )
                v35 = v49;
              else
                v35 = 0LL;
            }
            else
            {
              v35 = 0LL;
            }
          }
        }
      }
    }
LABEL_44:
    ++v36;
  }
  while ( Count != v36 );
  if ( priority > v37 )
  {
    if ( v35 )
      return HIDWORD(v35[1].monitor);
    return 0;
  }
LABEL_49:
  *changeWarAdd = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)changeWarAdd, 0LL, v28, v29, v30, v31, v32, v33);
  if ( !v35 )
    return 0;
  return HIDWORD(v35[1].monitor);
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
  __int64 v10; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B1715E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__,
      *(_QWORD *)&warId,
      *(_QWORD *)&type);
    sub_1BCA7E0(&WarAddEntity_TypeInfo, v9, v10);
    byte_4B1715E = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo, *(_QWORD *)&warId);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_31B3198 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  WarAddEntity_o *v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  WarAddEntity_o *v31; // x23
  WarAddEntity_c *v32; // x1
  __int64 methodPtr_low; // x9
  int32_t overwriteId; // w21
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4B17163 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&warId,
      *(_QWORD *)&type);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&WarAddEntity_TypeInfo, v15, v16);
    byte_4B17163 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (WarAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                              Enumerator,
                              *(_QWORD *)(v27 + 8));
    v31 = v28;
    if ( !v28 )
      goto LABEL_36;
    v32 = WarAddEntity_TypeInfo;
    methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v28->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarAddEntity_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != WarAddEntity_TypeInfo )
    {
      sub_1BCACFC(v28);
LABEL_36:
      sub_1BCAA3C(v28, v29);
    }
    if ( v28->fields.warId == warId && v28->fields.type == type )
    {
      if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo, WarAddEntity_TypeInfo);
        v32 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v31, v32->static_fields->EVENT_TOWER_ID, 0, v30) == towerId )
      {
        overwriteId = v31->fields.overwriteId;
        goto LABEL_28;
      }
    }
  }
  overwriteId = 0;
LABEL_28:
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_32;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_32:
    v38 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v19; // x23
  WarAddEntity_o *v20; // x25
  int32_t v21; // w24
  int v22; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v24; // x26
  __int64 methodPtr_low; // x10
  __int64 monitor_high; // x1
  int32_t monitor; // w9
  int64_t klass_low; // x2
  Il2CppObject *v29; // x0
  __int64 v30; // x10
  int32_t v32; // [xsp+Ch] [xbp-74h]
  int64_t condValue; // [xsp+10h] [xbp-70h]
  int32_t targetId; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4B17161 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&type,
      *(_QWORD *)&warId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&CondType_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&WarAddEntity_TypeInfo, v13, v14);
    byte_4B17161 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v19 = Time;
    v20 = 0LL;
    v21 = 0;
    v22 = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v21,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = Item;
        methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarAddEntity_TypeInfo
          && (__int64)Item[3].monitor <= v19
          && (__int64)Item[4].klass > v19
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v22 )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            condValue = SLODWORD(Item[3].klass);
            v32 = (int32_t)Item[2].monitor;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, monitor_high);
            monitor = v32;
            klass_low = condValue;
            LODWORD(monitor_high) = targetId;
          }
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              break;
            v22 = (int)v24[1].monitor;
            v29 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v21,
                    (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v29
              && (v30 = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v29->klass->vtable[0].methodPtr) >= (unsigned int)v30) )
            {
              if ( (WarAddEntity_c *)v29->klass->_2.typeHierarchy[v30 - 1] == WarAddEntity_TypeInfo )
                v20 = (WarAddEntity_o *)v29;
              else
                v20 = 0LL;
            }
            else
            {
              v20 = 0LL;
            }
          }
        }
      }
      if ( Count == ++v21 )
        return v20;
    }
LABEL_31:
    sub_1BCAA3C(list, *(_QWORD *)&type);
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
  __int64 v12; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B1715F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__, entity, *(_QWORD *)&warId);
    sub_1BCA7E0(&WarAddEntity_TypeInfo, v11, v12);
    byte_4B1715F = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo, entity);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}