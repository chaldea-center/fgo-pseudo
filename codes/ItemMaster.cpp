void __fastcall ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC71B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__, method);
    byte_49FC71B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    37,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
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
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v18; // x2
  ItemEntity_array *EntityList; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  int max_length; // w8
  unsigned int v26; // w25
  ItemEntity_o *v27; // x23
  SkillLvEntity_o *v28; // x24
  int32_t v29; // w5
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x20
  Il2CppObject *v36; // x21
  struct ItemMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x20
  System_Int32_array *v41; // x21
  unsigned __int64 v42; // x22

  if ( (byte_49FC723 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_ItemEntity__TypeInfo, setupInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_ItemMaster___c__GetBoostItemList_b__15_0__, v14);
    sub_1B640C8(&ItemMaster___c_TypeInfo, v15);
    byte_49FC723 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v18);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !EntityList )
    goto LABEL_35;
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
LABEL_36:
        sub_1B6432C(Instance, v23);
      v27 = EntityList->m_Items[v26];
      if ( !v27 || !MasterData_object )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v27->fields.value, 1, 0LL);
      if ( Instance )
      {
        v28 = (SkillLvEntity_o *)Instance;
        v29 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0LL) : 0;
        Instance = (void *)SkillLvEntity__getEventUpVal(v28, -1, 0, 0, setupInfo, v29, 0, 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v32 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)v27,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v27;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v27, v24, v30);
          }
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_21;
    }
LABEL_35:
    sub_1B64324(Instance);
  }
LABEL_21:
  Instance = ItemMaster___c_TypeInfo;
  if ( !ItemMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemMaster___c_TypeInfo);
    Instance = ItemMaster___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ItemMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v35 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ItemEntity__TypeInfo, v23, v24);
    System_Comparison_object____ctor(v35, v36, Method_ItemMaster___c__GetBoostItemList_b__15_0__, 0LL);
    static_fields = ItemMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_ItemEntity__o *)v35;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0, (int32_t)v35, v38, v39);
  }
  if ( !v22 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_55243320(
    v22,
    v35,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v40 = (unsigned int)v22->fields._size;
  v41 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v40);
  if ( (int)v40 >= 1 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v22,
                   v42,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !Instance || !v41 )
        goto LABEL_35;
      if ( v42 >= v41->max_length )
        goto LABEL_36;
      v41->m_Items[++v42] = *((_DWORD *)Instance + 4);
      if ( v40 == v42 )
        return v41;
    }
  }
  return v41;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEntityByType(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  ItemEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FC71E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&itemType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&ItemEntity_TypeInfo, v6);
    byte_49FC71E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (ItemEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                 list,
                                 v10,
                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ItemEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == ItemEntity_TypeInfo
          && result->fields.type == itemType )
        {
          return result;
        }
      }
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_14:
    sub_1B64324(list);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  int64_t list; // x0
  int32_t Count; // w22
  int64_t v15; // x23
  int32_t v16; // w24
  int32_t v17; // w2
  int32_t v18; // w3
  int64_t v19; // x1
  __int64 methodPtr_low; // x10
  int64_t v21; // x8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_49FC71D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&itemType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&ItemEntity_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    byte_49FC71D = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       *(_QWORD *)&itemType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ItemEntity_TypeInfo
          && *(_DWORD *)(list + 48) == itemType
          && *(_QWORD *)(list + 88) <= v15 )
        {
          v21 = *(_QWORD *)(list + 96);
          if ( !v21 || v21 >= v15 )
          {
            if ( !v12 )
              break;
            items = v12->fields._items;
            v23 = Method_System_Collections_Generic_List_ItemEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)list,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v19;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), v19, v17, v18);
            }
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B64324(list);
  }
LABEL_22:
  if ( !v12 )
    goto LABEL_24;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v12,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
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
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t Time; // x0
  int64_t v15; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x8
  __int64 methodPtr_low; // x10
  Il2CppClass *v30; // x9
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_49FC71F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&itemType);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&ItemEntity_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    byte_49FC71F = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       *(_QWORD *)&itemType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1B64324(Time);
  v15 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_18;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_18:
      v24 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    v28 = v25;
    if ( v25 )
    {
      methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v25->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ItemEntity_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] != ItemEntity_TypeInfo )
      {
        sub_1B645E4(v25);
LABEL_40:
        sub_1B64324(v25);
      }
      if ( LODWORD(v25[3].klass) == itemType && (__int64)v25[5].monitor <= v15 )
      {
        v30 = v25[6].klass;
        if ( !v30 || (__int64)v30 >= v15 )
        {
          if ( !v13 )
            goto LABEL_40;
          items = v13->fields._items;
          v32 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            sub_1B64324(v25);
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              v25,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v28;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v28, v26, v27);
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
        goto LABEL_36;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_36:
    v38 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ItemEntity_o *result; // x0
  __int64 v8; // x1
  struct System_String_o *name; // x8
  ItemEntity_o *v10; // x20
  unsigned __int64 v11; // x21

  if ( (byte_49FC722 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FC722 = 1;
  }
  result = (ItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result
    || (result = (ItemEntity_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList((ShopMaster_o *)result, eventId, 0LL)) == 0LL )
  {
    sub_1B64324(result);
  }
  name = result->fields.name;
  v10 = result;
  if ( (int)name < 1 )
    return 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)name )
      sub_1B6432C(result, v8);
    result = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               *((_DWORD *)&v10->fields.detail + v11),
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( result )
    {
      if ( result->fields.type == 14 )
        break;
    }
    LODWORD(name) = v10->fields.name;
    if ( (__int64)++v11 >= (int)name )
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_ObjectModel_Collection_T__o *v15; // x23
  int32_t v16; // w24
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  __int64 methodPtr_low; // x10
  _DWORD *monitor; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  int v23; // w8
  __int64 v24; // x9
  char *v25; // x10
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_49FC724 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&individuality);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&ItemEntity_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    byte_49FC724 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       *(_QWORD *)&individuality,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ItemEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ItemEntity_TypeInfo )
        {
          monitor = list[3].monitor;
          if ( monitor )
          {
            if ( (__int64)list[3].fields.items <= (__int64)v15 )
            {
              klass = list[4].klass;
              if ( !klass || (__int64)klass >= (__int64)v15 )
              {
                v23 = monitor[6];
                if ( v23 >= 1 )
                {
                  v24 = 0LL;
                  v25 = (char *)(monitor + 8);
                  while ( 1 )
                  {
                    if ( (unsigned int)v24 >= v23 )
                      sub_1B6432C(list, list);
                    if ( *(_DWORD *)&v25[4 * v24] == individuality )
                      break;
                    if ( (int)++v24 >= v23 )
                      goto LABEL_12;
                  }
                  if ( !v12 )
                    break;
                  items = v12->fields._items;
                  v27 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                  ++v12->fields._version;
                  if ( !items )
                    break;
                  size = v12->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v12,
                      (Il2CppObject *)list,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v29 = &items->obj.klass + size;
                    v12->fields._size = size + 1;
                    v29[4] = (Il2CppClass *)v19;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v17, v18);
                  }
                }
              }
            }
          }
        }
      }
LABEL_12:
      if ( ++v16 == Count )
        goto LABEL_29;
    }
LABEL_31:
    sub_1B64324(list);
  }
LABEL_29:
  if ( !v12 )
    goto LABEL_31;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v12,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList_39068124(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_ObjectModel_Collection_T__o *v17; // x1
  __int64 methodPtr_low; // x10
  _QWORD *monitor; // x8
  unsigned __int64 v20; // x10
  unsigned __int64 v21; // x9
  signed int max_length; // w12
  __int64 v23; // x14
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_49FC725 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, individualityList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&ItemEntity_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ItemEntity__TypeInfo, v10);
    byte_49FC725 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       individualityList,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_32;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v17 = list;
          methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (ItemEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ItemEntity_TypeInfo )
          {
            monitor = list[3].monitor;
            if ( monitor )
            {
              if ( (int)monitor[3] >= 1 )
              {
                v20 = (unsigned int)monitor[3];
                v21 = 0LL;
                while ( 1 )
                {
                  if ( v21 >= v20 )
LABEL_31:
                    sub_1B6432C(list, list);
                  max_length = individualityList->max_length;
                  if ( max_length >= 1 )
                    break;
LABEL_22:
                  if ( (__int64)++v21 >= (int)v20 )
                    goto LABEL_11;
                }
                v23 = 0LL;
                while ( 1 )
                {
                  if ( (unsigned int)v23 >= max_length )
                    goto LABEL_31;
                  if ( *((_DWORD *)monitor + v21 + 8) == individualityList->m_Items[v23 + 1] )
                    break;
                  if ( (int)++v23 >= max_length )
                    goto LABEL_22;
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
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                }
                else
                {
                  v27 = &items->obj.klass + size;
                  v11->fields._size = size + 1;
                  v27[4] = (Il2CppClass *)v17;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v17, v15, v16);
                }
              }
            }
          }
        }
LABEL_11:
        if ( ++v14 == v13 )
          goto LABEL_29;
      }
LABEL_32:
      sub_1B64324(list);
    }
  }
LABEL_29:
  if ( !v11 )
    goto LABEL_32;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v11,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetItemData(ItemMaster_o *this, int32_t itemId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool v6; // w8
  ItemEntity_o *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC720 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId);
    byte_49FC720 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         itemId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_1B64324(0LL);
    if ( ItemEntity__IsEnable((ItemEntity_o *)entity, v5) )
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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC727 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMaster_SvtCoinMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v7);
    byte_49FC727 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( entity && Master_object )
      return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               (int32_t)entity[1].monitor,
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
LABEL_14:
    sub_1B64324(Master_object);
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

  if ( (byte_49FC721 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&itemId);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    byte_49FC721 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             itemId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  return this->fields.stoneFragmentsId;
}


int32_t __fastcall ItemMaster__get_StoneFragments(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.stoneId;
}


bool __fastcall ItemMaster__isAnonymous(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.stoneFragmentsId == id;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemMaster__isEventPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0

  if ( (byte_49FC726 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&id);
    byte_49FC726 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             id,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_1B64324(0LL);
  return LODWORD(Entity[3].klass) == 14;
}


bool __fastcall ItemMaster__isFriendPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.rarePriId == id;
}


bool __fastcall ItemMaster__isMana(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.qpId == id;
}


bool __fastcall ItemMaster__isQP(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return *(&this->fields.revision + 1) == id;
}


bool __fastcall ItemMaster__isRarePri(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.manaId == id;
}


bool __fastcall ItemMaster__isStone(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.friendPointId == id;
}


bool __fastcall ItemMaster__isStoneFragments(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.stoneId == id;
}


bool __fastcall ItemMaster__preProcess(ItemMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  int32_t *v17; // x0
  __int64 methodPtr_low; // x9
  int v19; // w8
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_49FC71C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B640C8(&ItemEntity_TypeInfo, v6);
    byte_49FC71C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v16 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                       Enumerator,
                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_41;
    methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)methodPtr_low
      || *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * methodPtr_low - 8) != ItemEntity_TypeInfo )
    {
      sub_1B645E4(v17);
LABEL_41:
      sub_1B64324(v17);
    }
    v19 = v17[12];
    if ( v19 <= 12 )
    {
      switch ( v19 )
      {
        case 1:
          *(&this->fields.revision + 1) = v17[4];
          break;
        case 2:
          this->fields.friendPointId = v17[4];
          break;
        case 5:
          this->fields.qpId = v17[4];
          break;
      }
    }
    else
    {
      switch ( v19 )
      {
        case 13:
          this->fields.rarePriId = v17[4];
          break;
        case 20:
          this->fields.stoneId = v17[4];
          break;
        case 21:
          this->fields.stoneFragmentsId = v17[4];
          break;
        case 22:
          this->fields.manaId = v17[4];
          break;
        default:
          continue;
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
    v23 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return 1;
}


void __fastcall ItemMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC728 & 1) == 0 )
  {
    sub_1B640C8(&ItemMaster___c_TypeInfo, v1);
    byte_49FC728 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ItemMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ItemMaster___c_TypeInfo->static_fields->__9 = (struct ItemMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ItemMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall ItemMaster___c___ctor(ItemMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ItemMaster___c___GetBoostItemList_b__15_0(
        ItemMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}