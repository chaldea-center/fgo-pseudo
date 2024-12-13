void __fastcall WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B38123 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__, method);
    byte_4B38123 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    163,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
}


void __fastcall WarAddMaster__CreateCache(WarAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_int__object__o *v16; // x21
  bool *p_isDirty; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v26; // w21
  int64_t v27; // x22
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_int__object__o *v29; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_List_object__o *v36; // x23
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 klass_low; // x10
  Il2CppClass **v40; // x8
  System_Collections_Generic_List_object__o *v41; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B38127 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__,
      v4);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity____ctor__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity_____ctor__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___set_Item__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____set_Item__, v9);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__List_WarAddEntity___TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TypeInfo, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_WarAddEntity__Add__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_WarAddEntity___ctor__, v13);
    sub_1BD3458(&System_Collections_Generic_List_WarAddEntity__TypeInfo, v14);
    sub_1BD3458(&WarAddEntity_TypeInfo, v15);
    byte_4B38127 = 1;
  }
  v41 = 0LL;
  value = 0LL;
  if ( *((_BYTE *)&this->fields.revision + 4) )
  {
    *((_BYTE *)&this->fields.revision + 4) = 0;
    v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v16,
      (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity_____ctor__);
    *(_QWORD *)&this->fields.isDirty = v16;
    p_isDirty = &this->fields.isDirty;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.isDirty, (int64_t)v16, v18, v19, v20, v21, v22, v23);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_25:
      sub_1BD36B4(list, v24);
    v26 = 0;
    while ( v26 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v26,
                                                                   (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v27 = (int64_t)list;
          methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (WarAddEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == WarAddEntity_TypeInfo )
          {
            list = *(System_Collections_ObjectModel_Collection_T__o **)p_isDirty;
            if ( *(_QWORD *)p_isDirty )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)list,
                      *(_DWORD *)(v27 + 20),
                      &value,
                      (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__) )
              {
                v29 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__List_WarAddEntity___TypeInfo);
                System_Collections_Generic_Dictionary_int__object____ctor(
                  v29,
                  (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity____ctor__);
                value = (Il2CppObject *)v29;
                list = *(System_Collections_ObjectModel_Collection_T__o **)p_isDirty;
                if ( !*(_QWORD *)p_isDirty )
                  goto LABEL_25;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)list,
                  *(_DWORD *)(v27 + 20),
                  (Il2CppObject *)v29,
                  (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)value;
              if ( value )
              {
                if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                        (System_Collections_Generic_Dictionary_int__object__o *)value,
                        *(_DWORD *)(v27 + 16),
                        (Il2CppObject **)&v41,
                        (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__) )
                {
                  v36 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_WarAddEntity__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v36,
                    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_WarAddEntity___ctor__);
                  list = (System_Collections_ObjectModel_Collection_T__o *)value;
                  v41 = v36;
                  if ( !value )
                    goto LABEL_25;
                  System_Collections_Generic_Dictionary_int__object___set_Item(
                    (System_Collections_Generic_Dictionary_int__object__o *)value,
                    *(_DWORD *)(v27 + 16),
                    (Il2CppObject *)v36,
                    (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___set_Item__);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)v41;
                if ( v41 )
                {
                  items = v41->fields._items;
                  v38 = Method_System_Collections_Generic_List_WarAddEntity__Add__;
                  ++v41->fields._version;
                  if ( items )
                  {
                    klass_low = SLODWORD(list[1].klass);
                    if ( (unsigned int)klass_low >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)list,
                        (Il2CppObject *)v27,
                        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v40 = &items->obj.klass + klass_low;
                      LODWORD(list[1].klass) = klass_low + 1;
                      v40[4] = (Il2CppClass *)v27;
                      sub_1BD33FC((PartyOrganizationUtility_o *)(v40 + 4), v27, v30, v31, v32, v33, v34, v35);
                    }
                    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                    ++v26;
                    if ( list )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_25;
    }
  }
}


void __fastcall WarAddMaster__DeleteCache(WarAddMaster_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  bool *p_isDirty; // x19

  *(_QWORD *)&this->fields.isDirty = 0LL;
  p_isDirty = &this->fields.isDirty;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.isDirty, 0LL, v2, v3, v4, v5, v6, v7);
  *(p_isDirty - 4) = 1;
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
  int v8; // w23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t Time; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x25
  Il2CppObject *v28; // x29
  int32_t v29; // w26
  int v30; // w28
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v32; // x27
  __int64 methodPtr_low; // x10
  bool HasBGChange; // w0
  int32_t condType; // w8
  Il2CppObject *MasterData_object; // x23
  int32_t v37; // w1
  int32_t v38; // w23
  int64_t value; // x2
  Il2CppObject *v40; // x0
  __int64 v41; // x10
  int64_t condValue; // [xsp+0h] [xbp-80h]
  int32_t targetId; // [xsp+8h] [xbp-78h]
  int v45; // [xsp+Ch] [xbp-74h]
  int v46; // [xsp+Ch] [xbp-74h]
  int priority; // [xsp+10h] [xbp-70h]
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  v8 = beforeClearQuestId;
  if ( (byte_4B38125 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, changeWarAdd);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1BD3458(&CondType_TypeInfo, v12);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_1BD3458(&NetworkManager_TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BD3458(&WarAddEntity_TypeInfo, v16);
    byte_4B38125 = 1;
  }
  entity = 0LL;
  *changeWarAdd = 0LL;
  sub_1BD33FC(
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
LABEL_57:
    sub_1BD36B4(list, v17);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v28 = 0LL;
    goto LABEL_54;
  }
  v27 = Time;
  v28 = 0LL;
  v29 = 0;
  v30 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_57;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               list,
                               v29,
                               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v32 = Item;
      methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarAddEntity_TypeInfo
        && Item->fields.startedAt <= v27
        && Item->fields.endedAt > v27
        && Item->fields.warId == warId
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v17);
        if ( v8 >= 1 && HasBGChange && v32->fields.targetId == v8 && v32->fields.priority > priority )
        {
          condType = v32->fields.condType;
          if ( condType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( CondType__IsQuestClear_38374588(v8, -1, 0, 0LL) )
              goto LABEL_36;
            condType = v32->fields.condType;
          }
          if ( condType == 46 )
          {
            v45 = v8;
            list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_57;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)list,
                                  (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B31D77 )
            {
              sub_1BD3458(&NetworkManager_TypeInfo, v17);
              byte_4B31D77 = 1;
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
            }
            if ( !MasterData_object )
              goto LABEL_57;
            UserQuestMaster__TryGetEntity(
              (UserQuestMaster_o *)MasterData_object,
              &entity,
              (int64_t)list[7].fields.items[4].klass,
              v32->fields.targetId,
              0LL);
            v8 = v45;
            if ( entity )
            {
              if ( entity->fields.questPhase == v32->fields.value )
              {
LABEL_36:
                *changeWarAdd = v32;
                sub_1BD33FC((PartyOrganizationUtility_o *)changeWarAdd, (int64_t)v32, v21, v22, v23, v24, v25, v26);
                priority = v32->fields.priority;
                goto LABEL_49;
              }
            }
          }
        }
        if ( v32->fields.priority >= v30 )
        {
          v46 = v8;
          v38 = v32->fields.condType;
          v37 = v32->fields.targetId;
          value = v32->fields.value;
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = v32->fields.targetId;
            condValue = v32->fields.value;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            value = condValue;
            v37 = targetId;
          }
          if ( CondType__IsOpen(v38, v37, value, 0, 0LL, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            v8 = v46;
            if ( !list )
              goto LABEL_57;
            v30 = v32->fields.priority;
            v40 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v29,
                    (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v40
              && (v41 = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v40->klass->vtable[0].methodPtr) >= (unsigned int)v41) )
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
          else
          {
            v8 = v46;
          }
        }
      }
    }
LABEL_49:
    ++v29;
  }
  while ( Count != v29 );
  if ( priority > v30 )
  {
    if ( v28 )
      return HIDWORD(v28[1].monitor);
    return 0;
  }
LABEL_54:
  *changeWarAdd = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)changeWarAdd, 0LL, v21, v22, v23, v24, v25, v26);
  if ( !v28 )
    return 0;
  return HIDWORD(v28[1].monitor);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarAddEntity__o *__fastcall WarAddMaster__GetCacheByTypeId(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  Il2CppObject *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B38128 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__,
      *(_QWORD *)&type);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__, v7);
    byte_4B38128 = 1;
  }
  value = 0LL;
  v11 = 0LL;
  WarAddMaster__CreateCache(this, *(const MethodInfo **)&type);
  v9 = *(Il2CppObject **)&this->fields.isDirty;
  if ( !v9 )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v9,
          type,
          &value,
          (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__) )
    return 0LL;
  v9 = value;
  if ( !value )
LABEL_11:
    sub_1BD36B4(v9, v8);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)value,
         warId,
         &v11,
         (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_WarAddEntity__o *)v11;
  }
  else
  {
    return 0LL;
  }
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

  if ( (byte_4B38121 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__, *(_QWORD *)&warId);
    sub_1BD3458(&WarAddEntity_TypeInfo, v9);
    byte_4B38121 = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_31D2248 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
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

  if ( (byte_4B38126 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&warId);
    sub_1BD3458(&System_IDisposable_TypeInfo, v9);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BD3458(&WarAddEntity_TypeInfo, v12);
    byte_4B38126 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BD36B4(0LL, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v14);
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
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v23 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_1BD3974(v24);
LABEL_36:
      sub_1BD36B4(v24, v25);
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
    v34 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t Time; // x19
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_WarAddEntity__o *CacheByTypeId; // x0
  System_Collections_Generic_List_object__o *v19; // x20
  WarAddEntity_o *v20; // x23
  int32_t v21; // w21
  int priority; // w27
  WarAddEntity_o *v23; // x22
  int32_t items_high; // w24
  int32_t items; // w26
  int64_t klass_low; // x25
  int32_t v27; // w25
  int v28; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v30; // x26
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w9
  int64_t v34; // x2
  Il2CppObject *v35; // x0
  __int64 v36; // x10
  int32_t v38; // [xsp+Ch] [xbp-74h]
  int64_t condValue; // [xsp+10h] [xbp-70h]
  int32_t targetId; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4B38124 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&CondType_TypeInfo, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_WarAddEntity__get_Count__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_WarAddEntity__get_Item__, v10);
    sub_1BD3458(&NetworkManager_TypeInfo, v11);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    sub_1BD3458(&WarAddEntity_TypeInfo, v13);
    byte_4B38124 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !list )
    goto LABEL_46;
  if ( BYTE1(list[3].klass) )
  {
    CacheByTypeId = WarAddMaster__GetCacheByTypeId(this, type, warId, v17);
    if ( CacheByTypeId )
    {
      v19 = (System_Collections_Generic_List_object__o *)CacheByTypeId;
      if ( CacheByTypeId->fields._size >= 1 )
      {
        v20 = 0LL;
        v21 = 0;
        priority = -1;
        while ( 1 )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                     v19,
                                                                     v21,
                                                                     (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
          if ( !list )
            break;
          v23 = (WarAddEntity_o *)list;
          if ( (__int64)list[2].monitor <= Time
            && (__int64)list[2].fields.items > Time
            && SLODWORD(list[1].klass) >= priority )
          {
            items = (int32_t)list[1].fields.items;
            items_high = HIDWORD(list[1].fields.items);
            klass_low = SLODWORD(list[2].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( CondType__IsOpen(items, items_high, klass_low, 0, 0LL, 0LL) )
            {
              priority = v23->fields.priority;
              v20 = v23;
            }
          }
          if ( ++v21 >= v19->fields._size )
            return v20;
        }
        goto LABEL_46;
      }
    }
  }
  else if ( Count >= 1 )
  {
    v20 = 0LL;
    v27 = 0;
    v28 = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v27,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v30 = Item;
        methodPtr_low = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (WarAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == WarAddEntity_TypeInfo
          && (__int64)Item[3].monitor <= Time
          && (__int64)Item[4].klass > Time
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v28 )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          v34 = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            condValue = SLODWORD(Item[3].klass);
            v38 = (int32_t)Item[2].monitor;
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor = v38;
            v34 = condValue;
            monitor_high = targetId;
          }
          if ( CondType__IsOpen(monitor, monitor_high, v34, 0, 0LL, 0LL) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              break;
            v28 = (int)v30[1].monitor;
            v35 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v27,
                    (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( v35
              && (v36 = LOBYTE(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr),
                  LOBYTE(v35->klass->vtable[0].methodPtr) >= (unsigned int)v36) )
            {
              if ( (WarAddEntity_c *)v35->klass->_2.typeHierarchy[v36 - 1] == WarAddEntity_TypeInfo )
                v20 = (WarAddEntity_o *)v35;
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
      if ( Count == ++v27 )
        return v20;
    }
LABEL_46:
    sub_1BD36B4(list, *(_QWORD *)&type);
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


void __fastcall WarAddMaster__OnListChangedImplementation(
        WarAddMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  *((_BYTE *)&this->fields.revision + 4) = 1;
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

  if ( (byte_4B38122 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__, entity);
    sub_1BD3458(&WarAddEntity_TypeInfo, v11);
    byte_4B38122 = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}