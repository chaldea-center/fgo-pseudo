void WarAddMaster___ctor(WarAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF774 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
    byte_4CEF774 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    167,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string___ctor__);
}


void WarAddMaster__CreateCache(WarAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o **p_type_idCache; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w21
  System_Collections_ObjectModel_Collection_T__o *v14; // x22
  System_Collections_Generic_Dictionary_int__object__o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x23
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  Il2CppClass **v26; // x8
  System_Collections_Generic_List_object__o *v27; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEF778 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___set_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__List_WarAddEntity___TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarAddEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarAddEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_WarAddEntity__TypeInfo);
    byte_4CEF778 = 1;
  }
  v27 = 0;
  value = 0;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity_____ctor__);
    this->fields.type_idCache = (struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o *)v3;
    p_type_idCache = &this->fields.type_idCache;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.type_idCache, (int32_t)v3, v5, v6, v7, v8, v9, v10);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_23:
      sub_1C7BD40(list, v11);
    v13 = 0;
    while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v13,
                                                                   (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
        if ( list )
        {
          v14 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_idCache;
          if ( *p_type_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    HIDWORD(v14->fields.items),
                    &value,
                    (const MethodInfo_3488E9C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__) )
            {
              v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__List_WarAddEntity___TypeInfo);
              System_Collections_Generic_Dictionary_int__object____ctor(
                v15,
                (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity____ctor__);
              value = (Il2CppObject *)v15;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_idCache;
              if ( !*p_type_idCache )
                goto LABEL_23;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                HIDWORD(v14->fields.items),
                (Il2CppObject *)v15,
                (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)value,
                      (int32_t)v14->fields.items,
                      (Il2CppObject **)&v27,
                      (const MethodInfo_3488E9C *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__) )
              {
                v22 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_WarAddEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v22,
                  (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_WarAddEntity___ctor__);
                list = (System_Collections_ObjectModel_Collection_T__o *)value;
                v27 = v22;
                if ( !value )
                  goto LABEL_23;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)value,
                  (int32_t)v14->fields.items,
                  (Il2CppObject *)v22,
                  (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)v27;
              if ( v27 )
              {
                items = v27->fields._items;
                v24 = Method_System_Collections_Generic_List_WarAddEntity__Add__;
                ++v27->fields._version;
                if ( items )
                {
                  klass_low = SLODWORD(list[1].klass);
                  if ( (unsigned int)klass_low >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)list,
                      (Il2CppObject *)v14,
                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v26 = &items->obj.klass + klass_low;
                    LODWORD(list[1].klass) = klass_low + 1;
                    v26[4] = (Il2CppClass *)v14;
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v14, v16, v17, v18, v19, v20, v21);
                  }
                  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                  ++v13;
                  if ( list )
                    continue;
                }
              }
            }
          }
        }
      }
      goto LABEL_23;
    }
  }
}


void WarAddMaster__DeleteCache(WarAddMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____o **p_type_idCache; // x19

  this->fields.type_idCache = 0;
  p_type_idCache = &this->fields.type_idCache;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.type_idCache, 0, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_type_idCache - 8) = 1;
}


int32_t WarAddMaster__GetBGImageID(
        WarAddMaster_o *this,
        WarAddEntity_o **changeWarAdd,
        int32_t warId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int v8; // w23
  int32_t v9; // w21
  const MethodInfo *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  NetworkManager_c **v14; // x20
  int32_t Count; // w24
  int64_t Time; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int64_t v23; // x26
  Il2CppObject *v24; // x29
  int32_t v25; // w27
  WarAddEntity_o *Item; // x0
  WarAddEntity_o *v27; // x28
  bool HasBGChange; // w0
  int32_t condType; // w8
  Il2CppObject *MasterData_object; // x29
  NetworkManager_c **v31; // x19
  int v32; // w21
  int32_t v33; // w20
  int32_t targetId; // w29
  int64_t value; // x23
  Il2CppObject *v37; // [xsp+8h] [xbp-88h]
  Il2CppObject *v38; // [xsp+8h] [xbp-88h]
  WarAddEntity_o **v39; // [xsp+10h] [xbp-80h]
  int32_t v40; // [xsp+1Ch] [xbp-74h]
  int priority; // [xsp+20h] [xbp-70h]
  int v42; // [xsp+24h] [xbp-6Ch]
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v8 = beforeClearQuestId;
  v9 = warId;
  if ( (byte_4CEF776 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF776 = 1;
  }
  entity = 0;
  *changeWarAdd = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)changeWarAdd,
    0,
    warId,
    beforeClearQuestId,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_50:
    sub_1C7BD40(list, v12);
  v14 = &NetworkManager_TypeInfo;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Count < 1 )
  {
    v24 = 0;
    goto LABEL_47;
  }
  v23 = Time;
  v24 = 0;
  v25 = 0;
  priority = -1;
  v42 = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_50;
    Item = (WarAddEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                               list,
                               v25,
                               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    if ( Item )
    {
      v27 = Item;
      if ( Item->fields.startedAt <= v23
        && Item->fields.endedAt > v23
        && Item->fields.warId == v9
        && Item->fields.type == 4 )
      {
        HasBGChange = WarAddEntity__HasBGChange(Item, v12);
        if ( v8 >= 1 && HasBGChange && v27->fields.targetId == v8 && v27->fields.priority > priority )
        {
          condType = v27->fields.condType;
          if ( condType == 1 )
          {
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( CondType__IsQuestClear_40887944(v8, -1, 0, 0) )
              goto LABEL_34;
            condType = v27->fields.condType;
          }
          if ( condType == 46 )
          {
            v37 = v24;
            list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !list )
              goto LABEL_50;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)list,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !(*v14)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v14);
            if ( !byte_4CE827C )
            {
              sub_1C7BAE8(v14);
              byte_4CE827C = 1;
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)*v14;
            if ( !(*v14)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(list);
              list = (System_Collections_ObjectModel_Collection_T__o *)*v14;
            }
            if ( !MasterData_object )
              goto LABEL_50;
            UserQuestMaster__TryGetEntity(
              (UserQuestMaster_o *)MasterData_object,
              &entity,
              (int64_t)list[7].fields.items[4].klass,
              v27->fields.targetId,
              0);
            v24 = v37;
            if ( entity )
            {
              if ( entity->fields.questPhase == v27->fields.value )
              {
LABEL_34:
                *changeWarAdd = v27;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)changeWarAdd, (int32_t)v27, v17, v18, v19, v20, v21, v22);
                priority = v27->fields.priority;
                goto LABEL_42;
              }
            }
          }
        }
        if ( v27->fields.priority >= v42 )
        {
          v38 = v24;
          v39 = changeWarAdd;
          v40 = v9;
          v31 = v14;
          v32 = v8;
          v33 = v27->fields.condType;
          targetId = v27->fields.targetId;
          value = v27->fields.value;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(v33, targetId, value, 0, 0, 0) )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              goto LABEL_50;
            v8 = v32;
            v14 = v31;
            v42 = v27->fields.priority;
            v9 = v40;
            changeWarAdd = v39;
            v24 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v25,
                    (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
          }
          else
          {
            v8 = v32;
            v9 = v40;
            v14 = v31;
            v24 = v38;
            changeWarAdd = v39;
          }
        }
      }
    }
LABEL_42:
    ++v25;
  }
  while ( Count != v25 );
  if ( priority > v42 )
  {
    if ( v24 )
      return HIDWORD(v24[1].monitor);
    return 0;
  }
LABEL_47:
  *changeWarAdd = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)changeWarAdd, 0, v17, v18, v19, v20, v21, v22);
  if ( !v24 )
    return 0;
  return HIDWORD(v24[1].monitor);
}


int32_t WarAddMaster__GetBgObjectId(WarAddMaster_o *this, int32_t warId, const MethodInfo *method)
{
  int64_t Time; // x20
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_WarAddEntity__o *CacheByTypeId; // x0
  System_Collections_Generic_List_object__o *v8; // x21
  System_Collections_Generic_List_object__o *v9; // x19
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x1
  int32_t v12; // w22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  WarAddMaster___c_c *v23; // x0
  System_Comparison_T__o *_9__15_0; // x20
  Il2CppObject *v25; // x21
  struct WarAddMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w20
  Il2CppObject *v34; // x21
  int32_t monitor_high; // w22
  int32_t monitor; // w24
  int64_t klass_low; // x23

  if ( (byte_4CEF77B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_WarAddEntity__TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarAddEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarAddEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarAddEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_WarAddEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_WarAddMaster___c__GetBgObjectId_b__15_0__);
    sub_1C7BAE8(&WarAddMaster___c_TypeInfo);
    byte_4CEF77B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  CacheByTypeId = WarAddMaster__GetCacheByTypeId(this, 24, warId, v6);
  if ( !CacheByTypeId )
    return -1;
  v8 = (System_Collections_Generic_List_object__o *)CacheByTypeId;
  if ( !CacheByTypeId->fields._size )
    return -1;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_WarAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_WarAddEntity___ctor__);
  if ( v8->fields._size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v8,
               v12,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
      if ( !Item )
        break;
      v11 = Item;
      if ( (__int64)Item[3].monitor <= Time && (__int64)Item[4].klass > Time )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v20 = Method_System_Collections_Generic_List_WarAddEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            Item,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v11;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v11, v13, v14, v15, v16, v17, v18);
        }
      }
      if ( ++v12 >= v8->fields._size )
        goto LABEL_18;
    }
LABEL_35:
    sub_1C7BD40(Item, v11);
  }
LABEL_18:
  if ( !v9 )
    goto LABEL_35;
  if ( !v9->fields._size )
    return -1;
  v23 = WarAddMaster___c_TypeInfo;
  if ( !WarAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarAddMaster___c_TypeInfo);
    v23 = WarAddMaster___c_TypeInfo;
  }
  _9__15_0 = (System_Comparison_T__o *)v23->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = WarAddMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__15_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_WarAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__15_0, v25, Method_WarAddMaster___c__GetBgObjectId_b__15_0__, 0);
    static_fields = WarAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_WarAddEntity__o *)_9__15_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0,
      (int32_t)_9__15_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  System_Collections_Generic_List_object___Sort_58984640(
    v9,
    _9__15_0,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_WarAddEntity__Sort__);
  if ( v9->fields._size < 1 )
    return -1;
  v33 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v9,
             v33,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
    if ( !Item )
      goto LABEL_35;
    v34 = Item;
    monitor = (int32_t)Item[2].monitor;
    monitor_high = HIDWORD(Item[2].monitor);
    klass_low = SLODWORD(Item[3].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
      return HIDWORD(v34[1].monitor);
    if ( ++v33 >= v9->fields._size )
      return -1;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarAddEntity__o *WarAddMaster__GetCacheByTypeId(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *type_idCache; // x0
  Il2CppObject *v10; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CEF779 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__);
    byte_4CEF779 = 1;
  }
  value = 0;
  v10 = 0;
  WarAddMaster__CreateCache(this, *(const MethodInfo **)&type);
  type_idCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.type_idCache;
  if ( !type_idCache )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          type_idCache,
          type,
          &value,
          (const MethodInfo_3488E9C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_WarAddEntity____TryGetValue__) )
    return 0;
  type_idCache = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_11:
    sub_1C7BD40(type_idCache, v7);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)value,
         warId,
         &v10,
         (const MethodInfo_3488E9C *)Method_System_Collections_Generic_Dictionary_int__List_WarAddEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_WarAddEntity__o *)v10;
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *WarAddMaster__GetEntity(
        WarAddMaster_o *this,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF772 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
    sub_1C7BAE8(&WarAddEntity_TypeInfo);
    byte_4CEF772 = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&priority);
  return (WarAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_3432DB4 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t WarAddMaster__GetEventTowerBackGroundId(
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
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  WarAddEntity_o *v23; // x23
  WarAddEntity_c *v24; // x0
  int32_t overwriteId; // w21
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4CEF777 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__GetEnumerator__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&WarAddEntity_TypeInfo);
    byte_4CEF777 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, *(_QWORD *)&warId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarAddEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_WarAddEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v23 = (WarAddEntity_o *)v20;
    if ( !v20 )
      sub_1C7BD40(0, v21);
    if ( *(_DWORD *)(v20 + 16) == warId && *(_DWORD *)(v20 + 20) == type )
    {
      v24 = WarAddEntity_TypeInfo;
      if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
        v24 = WarAddEntity_TypeInfo;
      }
      if ( WarAddEntity__getScript(v23, v24->static_fields->EVENT_TOWER_ID, 0, v22) == towerId )
      {
        overwriteId = v23->fields.overwriteId;
        goto LABEL_26;
      }
    }
  }
  overwriteId = 0;
LABEL_26:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_30:
    v29 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return overwriteId;
}


System_String_o *WarAddMaster__GetFirstPlayableBoardEffectName(
        WarAddMaster_o *this,
        System_Collections_Generic_HashSet_int__o *warIds,
        const MethodInfo *method)
{
  WarAddMaster_o *v4; // x19
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0
  const MethodInfo *v7; // x1
  System_String_o *BoardEffectName; // x21
  System_String_o *v9; // x19
  System_Collections_Generic_HashSet_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4CEF77A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    this = (WarAddMaster_o *)sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEF77A = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !warIds )
    sub_1C7BD40(this, warIds);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v11,
    warIds,
    (const MethodInfo_36EA4C8 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v12,
            (const MethodInfo_35B9F18 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
    {
      v9 = 0;
      goto LABEL_16;
    }
    PrioredEntity = WarAddMaster__GetPrioredEntity(v4, 3, (int32_t)v12.fields._current, v5);
    if ( PrioredEntity )
    {
      BoardEffectName = WarAddEntity__GetBoardEffectName(PrioredEntity, v7);
      if ( BoardEffectName )
        break;
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsTerminalEffectPlayed(BoardEffectName, 0) )
    v9 = 0;
  else
    v9 = BoardEffectName;
LABEL_16:
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v12,
    (const MethodInfo_35B9F14 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
WarAddEntity_o *WarAddMaster__GetPrioredEntity(
        WarAddMaster_o *this,
        int32_t type,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t Time; // x19
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_WarAddEntity__o *CacheByTypeId; // x0
  System_Collections_Generic_List_object__o *v12; // x20
  Il2CppObject *v13; // x23
  int32_t v14; // w21
  int monitor; // w27
  Il2CppObject *v16; // x22
  int32_t items_high; // w24
  int32_t items; // w26
  int64_t klass_low; // x25
  int32_t v20; // w25
  int v21; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v23; // x26
  int32_t monitor_high; // w1
  int32_t v25; // w29
  int64_t v26; // x28
  bool IsOpen; // w0
  int32_t targetId; // [xsp+8h] [xbp-68h]
  int v30; // [xsp+Ch] [xbp-64h]

  if ( (byte_4CEF775 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CEF775 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !list )
    goto LABEL_39;
  if ( BYTE1(list[3].klass) )
  {
    CacheByTypeId = WarAddMaster__GetCacheByTypeId(this, type, warId, v10);
    if ( CacheByTypeId )
    {
      v12 = (System_Collections_Generic_List_object__o *)CacheByTypeId;
      if ( CacheByTypeId->fields._size >= 1 )
      {
        v13 = 0;
        v14 = 0;
        monitor = -1;
        while ( 1 )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                     v12,
                                                                     v14,
                                                                     (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_WarAddEntity__get_Item__);
          if ( !list )
            break;
          v16 = (Il2CppObject *)list;
          if ( (__int64)list[2].monitor <= Time
            && (__int64)list[2].fields.items > Time
            && SLODWORD(list[1].klass) >= monitor )
          {
            items = (int32_t)list[1].fields.items;
            items_high = HIDWORD(list[1].fields.items);
            klass_low = SLODWORD(list[2].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( CondType__IsOpen(items, items_high, klass_low, 0, 0, 0) )
            {
              monitor = (int)v16[1].monitor;
              v13 = v16;
            }
          }
          if ( ++v14 >= v12->fields._size )
            return (WarAddEntity_o *)v13;
        }
        goto LABEL_39;
      }
    }
  }
  else if ( Count >= 1 )
  {
    v13 = 0;
    v20 = 0;
    v21 = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v20,
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
      if ( Item )
      {
        v23 = Item;
        if ( (__int64)Item[3].monitor <= Time
          && (__int64)Item[4].klass > Time
          && LODWORD(Item[1].klass) == warId
          && HIDWORD(Item[1].klass) == type
          && SLODWORD(Item[1].monitor) >= v21 )
        {
          v30 = v21;
          v25 = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          v26 = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor_high = targetId;
          }
          IsOpen = CondType__IsOpen(v25, monitor_high, v26, 0, 0, 0);
          v21 = v30;
          if ( IsOpen )
          {
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
            if ( !list )
              break;
            v21 = (int)v23[1].monitor;
            v13 = System_Collections_ObjectModel_Collection_object___get_Item(
                    list,
                    v20,
                    (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_WarAddEntity__get_Item__);
          }
        }
      }
      if ( Count == ++v20 )
        return (WarAddEntity_o *)v13;
    }
LABEL_39:
    sub_1C7BD40(list, *(_QWORD *)&type);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t WarAddMaster__GetPrioredID(
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


System_String_o *WarAddMaster__GetPrioredStr(
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


void WarAddMaster__OnListChangedImplementation(
        WarAddMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool WarAddMaster__TryGetEntity(
        WarAddMaster_o *this,
        WarAddEntity_o **entity,
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF773 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
    sub_1C7BAE8(&WarAddEntity_TypeInfo);
    byte_4CEF773 = 1;
  }
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  PK = (Il2CppObject *)WarAddEntity__CreatePK(warId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_WarAddMaster__WarAddEntity__string__TryGetEntity__);
}


void WarAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEF77C & 1) == 0 )
  {
    sub_1C7BAE8(&WarAddMaster___c_TypeInfo);
    byte_4CEF77C = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(WarAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarAddMaster___c_TypeInfo->static_fields->__9 = (struct WarAddMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)WarAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarAddMaster___c___ctor(WarAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarAddMaster___c___GetBgObjectId_b__15_0(
        WarAddMaster___c_o *this,
        WarAddEntity_o *a,
        WarAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}