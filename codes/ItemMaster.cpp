void ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37E47 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
    byte_4C37E47 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    37,
    (const MethodInfo_3394514 *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
}


System_Int32_array *ItemMaster__GetBoostItemList(
        ItemMaster_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v7; // x2
  ItemEntity_array *EntityList; // x22
  System_Collections_Generic_List_object__o *v9; // x19
  int max_length; // w8
  unsigned int v11; // w25
  ItemEntity_o *v12; // x23
  SkillLvEntity_o *v13; // x24
  int32_t v14; // w5
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct ItemMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x20
  __int64 v27; // x21
  unsigned __int64 v28; // x22

  if ( (byte_4C37E4F & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_ItemEntity__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_ItemMaster___c__GetBoostItemList_b__16_0__);
    sub_1C32C20(&ItemMaster___c_TypeInfo);
    byte_4C37E4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v7);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !EntityList )
    goto LABEL_35;
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
LABEL_36:
        sub_1C32E84(Instance);
      v12 = EntityList->m_Items[v11];
      if ( !v12 || !MasterData_object )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v12->fields.value, 1, 0);
      if ( Instance )
      {
        v13 = (SkillLvEntity_o *)Instance;
        v14 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0) : 0;
        Instance = (void *)SkillLvEntity__getEventUpVal(v13, -1, 0, 0, setupInfo, v14, 0, 1, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v12,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v12;
            sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
          }
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_21;
    }
LABEL_35:
    sub_1C32E7C(Instance);
  }
LABEL_21:
  Instance = ItemMaster___c_TypeInfo;
  if ( !ItemMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemMaster___c_TypeInfo);
    Instance = ItemMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ItemMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v21 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_ItemMaster___c__GetBoostItemList_b__16_0__, 0);
    static_fields = ItemMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_ItemEntity__o *)v21;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)v21, v24, v25);
  }
  if ( !v9 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_58303104(
    v9,
    v21,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v26 = (unsigned int)v9->fields._size;
  v27 = sub_1C32CC8(int___TypeInfo, (unsigned int)v26);
  if ( (int)v26 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v28,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !Instance || !v27 )
        goto LABEL_35;
      if ( v28 >= *(unsigned int *)(v27 + 24) )
        goto LABEL_36;
      *(_DWORD *)(v27 + 32 + 4 * v28++) = *((_DWORD *)Instance + 4);
      if ( v26 == v28 )
        return (System_Int32_array *)v27;
    }
  }
  return (System_Int32_array *)v27;
}


ItemEntity_o *ItemMaster__GetEntityByType(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  ItemEntity_o *result; // x0

  if ( (byte_4C37E4A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    byte_4C37E4A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (ItemEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                 list,
                                 v8,
                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( result && result->fields.type == itemType )
        return result;
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_12:
    sub_1C32E7C(list);
  }
  return 0;
}


ItemEntity_array *ItemMaster__GetEntityList(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t list; // x0
  int32_t Count; // w22
  int64_t v8; // x23
  int32_t v9; // w24
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int64_t v12; // x1
  int64_t v13; // x8
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C37E49 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37E49 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0);
  if ( Count >= 1 )
  {
    v8 = list;
    v9 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v9,
                        (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        if ( *(_DWORD *)(list + 48) == itemType && *(_QWORD *)(list + 88) <= v8 )
        {
          v13 = *(_QWORD *)(list + 96);
          if ( !v13 || v13 >= v8 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v15 = Method_System_Collections_Generic_List_ItemEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)list,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v17 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v17[4] = (Il2CppClass *)v12;
              sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), v12, v10, v11);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C32E7C(list);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


System_Collections_Generic_List_ItemEntity__o *ItemMaster__GetEntityListByType(
        ItemMaster_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t Time; // x0
  int64_t v7; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  int64_t v21; // x8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C37E4B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37E4B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    sub_1C32E7C(Time);
  v7 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ItemEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_18:
      v16 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v20 = v17;
    if ( v17 )
    {
      if ( *(_DWORD *)(v17 + 48) == itemType && *(_QWORD *)(v17 + 88) <= v7 )
      {
        v21 = *(_QWORD *)(v17 + 96);
        if ( !v21 || v21 >= v7 )
        {
          if ( !v5 )
            sub_1C32E7C(v17);
          items = v5->fields._items;
          v23 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C32E7C(v17);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v17,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v20;
            sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), v20, v18, v19);
          }
        }
      }
    }
  }
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
        goto LABEL_34;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_34:
    v29 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v5;
}


ItemEntity_o *ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  ItemEntity_o *result; // x0
  struct System_String_o *name; // x8
  ItemEntity_o *v7; // x20
  unsigned __int64 v8; // x21

  if ( (byte_4C37E4E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37E4E = 1;
  }
  result = (ItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result
    || (result = (ItemEntity_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList((ShopMaster_o *)result, eventId, 0)) == 0 )
  {
    sub_1C32E7C(result);
  }
  name = result->fields.name;
  v7 = result;
  if ( (int)name < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)name )
      sub_1C32E84(result);
    result = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               *((_DWORD *)&v7->fields.detail + v8),
                               (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( result )
    {
      if ( result->fields.type == 14 )
        break;
    }
    LODWORD(name) = v7->fields.name;
    if ( (__int64)++v8 >= (int)name )
      return 0;
  }
  return result;
}


ItemEntity_array *ItemMaster__GetIndividualityList(ItemMaster_o *this, int32_t individuality, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_ObjectModel_Collection_T__o *v8; // x23
  int32_t v9; // w24
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _DWORD *monitor; // x10
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  int v15; // w8
  __int64 v16; // x9
  char *v17; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C37E50 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37E50 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  if ( Count >= 1 )
  {
    v8 = list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( list )
      {
        monitor = list[3].monitor;
        v13 = list;
        if ( monitor )
        {
          if ( (__int64)list[3].fields.items <= (__int64)v8 )
          {
            klass = list[4].klass;
            if ( !klass || (__int64)klass >= (__int64)v8 )
            {
              v15 = monitor[6];
              if ( v15 >= 1 )
              {
                v16 = 0;
                v17 = (char *)(monitor + 8);
                while ( 1 )
                {
                  if ( (unsigned int)v16 >= v15 )
                    sub_1C32E84(list);
                  if ( *(_DWORD *)&v17[4 * v16] == individuality )
                    break;
                  if ( (int)++v16 >= v15 )
                    goto LABEL_25;
                }
                if ( !v5 )
                  break;
                items = v5->fields._items;
                v19 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v5->fields._version;
                if ( !items )
                  break;
                size = v5->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v5,
                    (Il2CppObject *)list,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                }
                else
                {
                  v21 = &items->obj.klass + size;
                  v5->fields._size = size + 1;
                  v21[4] = (Il2CppClass *)v13;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v10, v11);
                }
              }
            }
          }
        }
      }
LABEL_25:
      if ( ++v9 == Count )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C32E7C(list);
  }
LABEL_26:
  if ( !v5 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *ItemMaster__GetIndividualityList_42266720(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  _QWORD *monitor; // x8
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  unsigned __int64 v13; // x10
  unsigned __int64 v14; // x9
  int max_length; // w12
  __int64 v16; // x14
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C37E51 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    byte_4C37E51 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_29;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    if ( (int)list >= 1 )
    {
      v7 = (int)list;
      v8 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v8,
                                                                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
        if ( list )
        {
          monitor = list[3].monitor;
          v12 = list;
          if ( monitor )
          {
            if ( (int)monitor[3] >= 1 )
            {
              v13 = (unsigned int)monitor[3];
              v14 = 0;
              while ( 1 )
              {
                if ( v14 >= v13 )
LABEL_28:
                  sub_1C32E84(list);
                max_length = individualityList->max_length;
                if ( max_length >= 1 )
                  break;
LABEL_18:
                if ( (__int64)++v14 >= (int)v13 )
                  goto LABEL_25;
              }
              v16 = 0;
              while ( 1 )
              {
                if ( (unsigned int)v16 >= max_length )
                  goto LABEL_28;
                if ( *((_DWORD *)monitor + v14 + 8) == individualityList->m_Items[v16] )
                  break;
                if ( (int)++v16 >= max_length )
                  goto LABEL_18;
              }
              if ( !v5 )
                break;
              items = v5->fields._items;
              v18 = Method_System_Collections_Generic_List_ItemEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)list,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v20 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v20[4] = (Il2CppClass *)v12;
                sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v9, v10);
              }
            }
          }
        }
LABEL_25:
        if ( ++v8 == v7 )
          goto LABEL_26;
      }
LABEL_29:
      sub_1C32E7C(list);
    }
  }
LABEL_26:
  if ( !v5 )
    goto LABEL_29;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_o *ItemMaster__GetItemData(ItemMaster_o *this, int32_t itemId, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  bool v8; // w8
  ItemEntity_o *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C37E4C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4C37E4C = 1;
  }
  entity = 0;
  v8 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         itemId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0;
  if ( v8 )
  {
    if ( !entity )
      sub_1C32E7C(0);
    if ( ItemEntity__IsEnable_42261892((ItemEntity_o *)entity, eventId, v7) )
      return (ItemEntity_o *)entity;
    else
      return 0;
  }
  return result;
}


ItemEntity_o *ItemMaster__GetServantCoinItemEntity(ItemMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37E53 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    byte_4C37E53 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( entity && Master_object )
      return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               (int32_t)entity[1].monitor,
                               (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
LABEL_14:
    sub_1C32E7C(Master_object);
  }
  return 0;
}


ItemEntity_o *ItemMaster__GetTimeLimitAfterItemData(
        ItemMaster_o *this,
        int32_t itemId,
        bool reboot,
        const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  ItemEntity_o *v8; // x20

  if ( (byte_4C37E4D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37E4D = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             itemId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v8 = (ItemEntity_o *)Entity;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( v8->fields.endedAt > NetworkManager__getTime(0) || !reboot )
    return 0;
  return v8;
}


int32_t ItemMaster__get_Anonymous(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.anonymousId;
}


int32_t ItemMaster__get_PurePriShopReset(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.purePriShopResetId;
}


int32_t ItemMaster__get_Qp(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.qpId;
}


int32_t ItemMaster__get_StoneFragments(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.stoneFragmentsId;
}


bool ItemMaster__isAnonymous(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.anonymousId == id;
}


bool ItemMaster__isEventPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0

  if ( (byte_4C37E52 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4C37E52 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             id,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_1C32E7C(0);
  return LODWORD(Entity[3].klass) == 14;
}


bool ItemMaster__isFriendPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.friendPointId == id;
}


bool ItemMaster__isMana(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.manaId == id;
}


bool ItemMaster__isQP(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.qpId == id;
}


bool ItemMaster__isRarePri(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.rarePriId == id;
}


bool ItemMaster__isStone(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.stoneId == id;
}


bool ItemMaster__isStoneFragments(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.stoneFragmentsId == id;
}


bool ItemMaster__preProcess(ItemMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  int v14; // w9
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0

  if ( (byte_4C37E48 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C37E48 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_9;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v8 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v8)(
            Enumerator,
            *(_QWORD *)(v8 + 8))
        & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ItemEntity__c **)v11 - 1) != System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_16;
      }
      v12 = (__int64)&v9->vtable[*v11];
    }
    else
    {
LABEL_16:
      v12 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8));
    if ( !v13 )
      sub_1C32E7C(0);
    v14 = *(_DWORD *)(v13 + 48);
    if ( v14 <= 12 )
    {
      switch ( v14 )
      {
        case 1:
          this->fields.qpId = *(_DWORD *)(v13 + 16);
          break;
        case 2:
          this->fields.stoneId = *(_DWORD *)(v13 + 16);
          break;
        case 5:
          this->fields.manaId = *(_DWORD *)(v13 + 16);
          break;
      }
    }
    else
    {
      switch ( v14 )
      {
        case 13:
          this->fields.friendPointId = *(_DWORD *)(v13 + 16);
          break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
          continue;
        case 20:
          this->fields.stoneFragmentsId = *(_DWORD *)(v13 + 16);
          break;
        case 21:
          this->fields.anonymousId = *(_DWORD *)(v13 + 16);
          break;
        case 22:
          this->fields.rarePriId = *(_DWORD *)(v13 + 16);
          break;
        default:
          if ( v14 == 37 )
            this->fields.purePriShopResetId = *(_DWORD *)(v13 + 16);
          break;
      }
    }
  }
  v15 = Enumerator->klass;
  v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v17 = &v15->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v17 - 1) != System_IDisposable_TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_37;
    }
    v18 = (__int64)&v15->vtable[*v17];
  }
  else
  {
LABEL_37:
    v18 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(Enumerator, *(_QWORD *)(v18 + 8));
  return 1;
}


void ItemMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37E54 & 1) == 0 )
  {
    sub_1C32C20(&ItemMaster___c_TypeInfo);
    byte_4C37E54 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ItemMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ItemMaster___c_TypeInfo->static_fields->__9 = (struct ItemMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ItemMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ItemMaster___c___ctor(ItemMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ItemMaster___c___GetBoostItemList_b__16_0(
        ItemMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C32E7C(this);
  return a->fields.priority - b->fields.priority;
}