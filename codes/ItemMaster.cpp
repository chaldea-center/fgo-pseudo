void __fastcall ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C8AD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__, method);
    byte_4B1C8AD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    37,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
}


System_Int32_array *__fastcall ItemMaster__GetBoostItemList(
        ItemMaster_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v19; // x2
  ItemEntity_array *EntityList; // x22
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x2
  int max_length; // w8
  unsigned int v24; // w25
  ItemEntity_o *v25; // x23
  SkillLvEntity_o *v26; // x24
  int32_t v27; // w5
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Comparison_T__o *v33; // x20
  Il2CppObject *v34; // x21
  struct ItemMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x20
  System_Int32_array *v39; // x21
  unsigned __int64 v40; // x22

  if ( (byte_4B1C8B5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Comparison_ItemEntity__TypeInfo, setupInfo);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_1BCAFF8(&int___TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BCAFF8(&Method_ItemMaster___c__GetBoostItemList_b__16_0__, v14);
    sub_1BCAFF8(&ItemMaster___c_TypeInfo, v15);
    byte_4B1C8B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v19);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !EntityList )
    goto LABEL_35;
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
LABEL_36:
        sub_1BCB25C(Instance, v17, v22);
      v25 = EntityList->m_Items[v24];
      if ( !v25 || !MasterData_object )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v25->fields.value, 1, 0LL);
      if ( Instance )
      {
        v26 = (SkillLvEntity_o *)Instance;
        v27 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0LL) : 0;
        Instance = (void *)SkillLvEntity__getEventUpVal(v26, -1, 0, 0, setupInfo, v27, 0, 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v21 )
            break;
          items = v21->fields._items;
          v30 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v21->fields._version;
          if ( !items )
            break;
          size = v21->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)v25,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v25;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v25, v22, v28);
          }
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_21;
    }
LABEL_35:
    sub_1BCB254(Instance, v17);
  }
LABEL_21:
  Instance = ItemMaster___c_TypeInfo;
  if ( !ItemMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemMaster___c_TypeInfo);
    Instance = ItemMaster___c_TypeInfo;
  }
  v33 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ItemMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v33 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(v33, v34, Method_ItemMaster___c__GetBoostItemList_b__16_0__, 0LL);
    static_fields = ItemMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_ItemEntity__o *)v33;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)v33, v36, v37);
  }
  if ( !v21 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_57390740(
    v21,
    v33,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v38 = (unsigned int)v21->fields._size;
  v39 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, (unsigned int)v38);
  if ( (int)v38 >= 1 )
  {
    v40 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v21,
                   v40,
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !Instance || !v39 )
        goto LABEL_35;
      if ( v40 >= v39->max_length )
        goto LABEL_36;
      v39->m_Items[++v40] = *((_DWORD *)Instance + 4);
      if ( v38 == v40 )
        return v39;
    }
  }
  return v39;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEntityByType(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  ItemEntity_o *result; // x0

  if ( (byte_4B1C8B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__, *(_QWORD *)&itemType);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__, v5);
    byte_4B1C8B0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (ItemEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                 list,
                                 v9,
                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( result && result->fields.type == itemType )
        return result;
      if ( v8 == ++v9 )
        return 0LL;
    }
LABEL_12:
    sub_1BCB254(list, *(_QWORD *)&itemType);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_array *__fastcall ItemMaster__GetEntityList(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int64_t v15; // x23
  int32_t v16; // w24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int64_t v19; // x8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B1C8AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__, *(_QWORD *)&itemType);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B1C8AF = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v15 = list;
    v16 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v16,
                        (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        if ( *(_DWORD *)(list + 48) == itemType && *(_QWORD *)(list + 88) <= v15 )
        {
          v19 = *(_QWORD *)(list + 96);
          if ( !v19 || v19 >= v15 )
          {
            if ( !v11 )
              break;
            items = v11->fields._items;
            v21 = Method_System_Collections_Generic_List_ItemEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)list,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v12;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 4), v12, v17, v18);
            }
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCB254(list, v12);
  }
LABEL_20:
  if ( !v11 )
    goto LABEL_22;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v11,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ItemEntity__o *__fastcall ItemMaster__GetEntityListByType(
        ItemMaster_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  int64_t Time; // x0
  __int64 v14; // x1
  int64_t v15; // x22
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  int64_t v30; // x8
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4B1C8B1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__, *(_QWORD *)&itemType);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v10);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    byte_4B1C8B1 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1BCB254(Time, v14);
  v15 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ItemEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_18;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_18:
      v25 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v29 = v26;
    if ( v26 )
    {
      if ( *(_DWORD *)(v26 + 48) == itemType && *(_QWORD *)(v26 + 88) <= v15 )
      {
        v30 = *(_QWORD *)(v26 + 96);
        if ( !v30 || v30 >= v15 )
        {
          if ( !v12 )
            sub_1BCB254(v26, v26);
          items = v12->fields._items;
          v32 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1BCB254(v26, v26);
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v26,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v29;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 4), v29, v27, v28);
          }
        }
      }
    }
  }
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
        goto LABEL_34;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_34:
    v38 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ItemEntity_o *result; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_String_o *name; // x8
  ItemEntity_o *v11; // x20
  unsigned __int64 v12; // x21

  if ( (byte_4B1C8B4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1C8B4 = 1;
  }
  result = (ItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result
    || (result = (ItemEntity_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList((ShopMaster_o *)result, eventId, 0LL)) == 0LL )
  {
    sub_1BCB254(result, v8);
  }
  name = result->fields.name;
  v11 = result;
  if ( (int)name < 1 )
    return 0LL;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)name )
      sub_1BCB25C(result, v8, v9);
    result = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               *((_DWORD *)&v11->fields.detail + v12),
                               (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( result )
    {
      if ( result->fields.type == 14 )
        break;
    }
    LODWORD(name) = v11->fields.name;
    if ( (__int64)++v12 >= (int)name )
      return 0LL;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_array *__fastcall ItemMaster__GetIndividualityList(
        ItemMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_ObjectModel_Collection_T__o *v15; // x23
  int32_t v16; // w24
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  _DWORD *monitor; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  int v21; // w8
  __int64 v22; // x9
  char *v23; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4B1C8B6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__, *(_QWORD *)&individuality);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B1C8B6 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v15 = list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( list )
      {
        monitor = list[3].monitor;
        v12 = list;
        if ( monitor )
        {
          if ( (__int64)list[3].fields.items <= (__int64)v15 )
          {
            klass = list[4].klass;
            if ( !klass || (__int64)klass >= (__int64)v15 )
            {
              v21 = monitor[6];
              if ( v21 >= 1 )
              {
                v22 = 0LL;
                v23 = (char *)(monitor + 8);
                while ( 1 )
                {
                  if ( (unsigned int)v22 >= v21 )
                    sub_1BCB25C(list, list, v17);
                  if ( *(_DWORD *)&v23[4 * v22] == individuality )
                    break;
                  if ( (int)++v22 >= v21 )
                    goto LABEL_25;
                }
                if ( !v11 )
                  break;
                items = v11->fields._items;
                v25 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v11->fields._version;
                if ( !items )
                  break;
                size = v11->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v11,
                    (Il2CppObject *)list,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                }
                else
                {
                  v27 = &items->obj.klass + size;
                  v11->fields._size = size + 1;
                  v27[4] = (Il2CppClass *)v12;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v12, v17, v18);
                }
              }
            }
          }
        }
      }
LABEL_25:
      if ( ++v16 == Count )
        goto LABEL_26;
    }
LABEL_28:
    sub_1BCB254(list, v12);
  }
LABEL_26:
  if ( !v11 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v11,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList_41440348(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  int v13; // w22
  int32_t v14; // w23
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  _QWORD *monitor; // x8
  unsigned __int64 v18; // x10
  unsigned __int64 v19; // x9
  signed int max_length; // w12
  __int64 v21; // x14
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B1C8B7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__, individualityList);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v9);
    byte_4B1C8B7 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_29;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    if ( (int)list >= 1 )
    {
      v13 = (int)list;
      v14 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v14,
                                                                   (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
        if ( list )
        {
          monitor = list[3].monitor;
          v12 = list;
          if ( monitor )
          {
            if ( (int)monitor[3] >= 1 )
            {
              v18 = (unsigned int)monitor[3];
              v19 = 0LL;
              while ( 1 )
              {
                if ( v19 >= v18 )
LABEL_28:
                  sub_1BCB25C(list, list, v15);
                max_length = individualityList->max_length;
                if ( max_length >= 1 )
                  break;
LABEL_18:
                if ( (__int64)++v19 >= (int)v18 )
                  goto LABEL_25;
              }
              v21 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v21 >= max_length )
                  goto LABEL_28;
                if ( *((_DWORD *)monitor + v19 + 8) == individualityList->m_Items[v21 + 1] )
                  break;
                if ( (int)++v21 >= max_length )
                  goto LABEL_18;
              }
              if ( !v10 )
                break;
              items = v10->fields._items;
              v23 = Method_System_Collections_Generic_List_ItemEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                break;
              size = v10->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  (Il2CppObject *)list,
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v25 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v25[4] = (Il2CppClass *)v12;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v12, v15, v16);
              }
            }
          }
        }
LABEL_25:
        if ( ++v14 == v13 )
          goto LABEL_26;
      }
LABEL_29:
      sub_1BCB254(list, v12);
    }
  }
LABEL_26:
  if ( !v10 )
    goto LABEL_29;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v10,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetItemData(
        ItemMaster_o *this,
        int32_t itemId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  bool v9; // w8
  ItemEntity_o *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1C8B2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId);
    byte_4B1C8B2 = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         itemId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_1BCB254(0LL, v7);
    if ( ItemEntity__IsEnable_41435520((ItemEntity_o *)entity, eventId, v8) )
      return (ItemEntity_o *)entity;
    else
      return 0LL;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetServantCoinItemEntity(
        ItemMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1C8B9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SvtCoinMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v7);
    byte_4B1C8B9 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( entity && Master_object )
      return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               (int32_t)entity[1].monitor,
                               (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
LABEL_14:
    sub_1BCB254(Master_object, v9);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetTimeLimitAfterItemData(
        ItemMaster_o *this,
        int32_t itemId,
        bool reboot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  ItemEntity_o *v9; // x20

  if ( (byte_4B1C8B3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&itemId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B1C8B3 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             itemId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v9 = (ItemEntity_o *)Entity;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( v9->fields.endedAt > NetworkManager__getTime(0LL) || !reboot )
    return 0LL;
  return v9;
}


int32_t __fastcall ItemMaster__get_Anonymous(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.anonymousId;
}


int32_t __fastcall ItemMaster__get_PurePriShopReset(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.purePriShopResetId;
}


int32_t __fastcall ItemMaster__get_StoneFragments(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.stoneFragmentsId;
}


bool __fastcall ItemMaster__isAnonymous(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.anonymousId == id;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemMaster__isEventPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  __int64 v6; // x1

  if ( (byte_4B1C8B8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&id);
    byte_4B1C8B8 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             id,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_1BCB254(0LL, v6);
  return LODWORD(Entity[3].klass) == 14;
}


bool __fastcall ItemMaster__isFriendPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.friendPointId == id;
}


bool __fastcall ItemMaster__isMana(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.manaId == id;
}


bool __fastcall ItemMaster__isQP(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.qpId == id;
}


bool __fastcall ItemMaster__isRarePri(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.rarePriId == id;
}


bool __fastcall ItemMaster__isStone(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.stoneId == id;
}


bool __fastcall ItemMaster__isStoneFragments(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.stoneFragmentsId == id;
}


bool __fastcall ItemMaster__preProcess(ItemMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  int v19; // w9
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4B1C8AE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__, method);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v3);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, v4);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v5);
    byte_4B1C8AE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ItemEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_1BCB254(0LL, v18);
    v19 = *(_DWORD *)(v17 + 48);
    if ( v19 <= 12 )
    {
      switch ( v19 )
      {
        case 1:
          this->fields.qpId = *(_DWORD *)(v17 + 16);
          break;
        case 2:
          this->fields.stoneId = *(_DWORD *)(v17 + 16);
          break;
        case 5:
          this->fields.manaId = *(_DWORD *)(v17 + 16);
          break;
      }
    }
    else
    {
      switch ( v19 )
      {
        case 13:
          this->fields.friendPointId = *(_DWORD *)(v17 + 16);
          break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
          continue;
        case 20:
          this->fields.stoneFragmentsId = *(_DWORD *)(v17 + 16);
          break;
        case 21:
          this->fields.anonymousId = *(_DWORD *)(v17 + 16);
          break;
        case 22:
          this->fields.rarePriId = *(_DWORD *)(v17 + 16);
          break;
        default:
          if ( v19 == 37 )
            this->fields.purePriShopResetId = *(_DWORD *)(v17 + 16);
          break;
      }
    }
  }
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_37;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_37:
    v23 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return 1;
}


void __fastcall ItemMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C993 & 1) == 0 )
  {
    sub_1BCAFF8(&ItemMaster___c_TypeInfo, v1);
    byte_4B1C993 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ItemMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ItemMaster___c_TypeInfo->static_fields->__9 = (struct ItemMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ItemMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ItemMaster___c___ctor(ItemMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ItemMaster___c___GetBoostItemList_b__16_0(
        ItemMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCB254(this, a);
  return a->fields.priority - b->fields.priority;
}