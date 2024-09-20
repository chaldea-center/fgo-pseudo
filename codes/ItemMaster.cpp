void __fastcall ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B473 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
    byte_4A5B473 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    37,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
}


System_Int32_array *__fastcall ItemMaster__GetBoostItemList(
        ItemMaster_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x2
  ItemEntity_array *EntityList; // x22
  System_Collections_Generic_List_object__o *v10; // x19
  int max_length; // w8
  unsigned int v12; // w25
  ItemEntity_o *v13; // x23
  SkillLvEntity_o *v14; // x24
  int32_t v15; // w5
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct ItemMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x20
  System_Int32_array *v28; // x21
  unsigned __int64 v29; // x22

  if ( (byte_4A5B47B & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_ItemEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ItemMaster___c__GetBoostItemList_b__15_0__);
    sub_1B885B0(&ItemMaster___c_TypeInfo);
    byte_4A5B47B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v8);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !EntityList )
    goto LABEL_35;
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
LABEL_36:
        sub_1B88814(Instance, v6);
      v13 = EntityList->m_Items[v12];
      if ( !v13 || !MasterData_object )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v13->fields.value, 1, 0LL);
      if ( Instance )
      {
        v14 = (SkillLvEntity_o *)Instance;
        v15 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0LL) : 0;
        Instance = (void *)SkillLvEntity__getEventUpVal(v14, -1, 0, 0, setupInfo, v15, 0, 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v19 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v13,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v13;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
          }
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_21;
    }
LABEL_35:
    sub_1B8880C(Instance, v6);
  }
LABEL_21:
  Instance = ItemMaster___c_TypeInfo;
  if ( !ItemMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemMaster___c_TypeInfo);
    Instance = ItemMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ItemMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v22 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_ItemMaster___c__GetBoostItemList_b__15_0__, 0LL);
    static_fields = ItemMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Comparison_ItemEntity__o *)v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0, (int32_t)v22, v25, v26);
  }
  if ( !v10 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_55571192(
    v10,
    v22,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v27 = (unsigned int)v10->fields._size;
  v28 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v27);
  if ( (int)v27 >= 1 )
  {
    v29 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v10,
                   v29,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !Instance || !v28 )
        goto LABEL_35;
      if ( v29 >= v28->max_length )
        goto LABEL_36;
      v28->m_Items[++v29] = *((_DWORD *)Instance + 4);
      if ( v27 == v29 )
        return v28;
    }
  }
  return v28;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEntityByType(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  ItemEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B476 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&ItemEntity_TypeInfo);
    byte_4A5B476 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_14:
    sub_1B8880C(list, *(_QWORD *)&itemType);
  }
  return 0LL;
}


ItemEntity_array *__fastcall ItemMaster__GetEntityList(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int64_t v9; // x23
  int32_t v10; // w24
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  int64_t v14; // x8
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5B475 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&ItemEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B475 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v9 = list;
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v10,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ItemEntity_TypeInfo
          && *(_DWORD *)(list + 48) == itemType
          && *(_QWORD *)(list + 88) <= v9 )
        {
          v14 = *(_QWORD *)(list + 96);
          if ( !v14 || v14 >= v9 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v16 = Method_System_Collections_Generic_List_ItemEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)list,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v6;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v6, v11, v12);
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B8880C(list, v6);
  }
LABEL_22:
  if ( !v5 )
    goto LABEL_24;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


System_Collections_Generic_List_ItemEntity__o *__fastcall ItemMaster__GetEntityListByType(
        ItemMaster_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x22
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x8
  ItemEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  Il2CppClass *v25; // x9
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4A5B477 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ItemEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B477 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1B8880C(Time, v7);
  v8 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_18:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                            Enumerator,
                            *(_QWORD *)(v18 + 8));
    v22 = v19;
    if ( v19 )
    {
      v23 = ItemEntity_TypeInfo;
      methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ItemEntity_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != ItemEntity_TypeInfo )
      {
        sub_1B88ACC(v19);
LABEL_40:
        sub_1B8880C(v19, v23);
      }
      if ( LODWORD(v19[3].klass) == itemType && (__int64)v19[5].monitor <= v8 )
      {
        v25 = v19[6].klass;
        if ( !v25 || (__int64)v25 >= v8 )
        {
          if ( !v5 )
            goto LABEL_40;
          items = v5->fields._items;
          v27 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1B8880C(v19, v23);
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v19,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v22;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v22, v20, v21);
          }
        }
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_36;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_36:
    v33 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v5;
}


ItemEntity_o *__fastcall ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  ItemEntity_o *result; // x0
  __int64 v6; // x1
  struct System_String_o *name; // x8
  ItemEntity_o *v8; // x20
  unsigned __int64 v9; // x21

  if ( (byte_4A5B47A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B47A = 1;
  }
  result = (ItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result
    || (result = (ItemEntity_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList((ShopMaster_o *)result, eventId, 0LL)) == 0LL )
  {
    sub_1B8880C(result, v6);
  }
  name = result->fields.name;
  v8 = result;
  if ( (int)name < 1 )
    return 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)name )
      sub_1B88814(result, v6);
    result = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               *((_DWORD *)&v8->fields.detail + v9),
                               (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( result )
    {
      if ( result->fields.type == 14 )
        break;
    }
    LODWORD(name) = v8->fields.name;
    if ( (__int64)++v9 >= (int)name )
      return 0LL;
  }
  return result;
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList(
        ItemMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_ObjectModel_Collection_T__o *v9; // x23
  int32_t v10; // w24
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  _DWORD *monitor; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  int v16; // w8
  __int64 v17; // x9
  char *v18; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A5B47C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&ItemEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B47C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v9 = list;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ItemEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ItemEntity_TypeInfo )
        {
          monitor = list[3].monitor;
          if ( monitor )
          {
            if ( (__int64)list[3].fields.items <= (__int64)v9 )
            {
              klass = list[4].klass;
              if ( !klass || (__int64)klass >= (__int64)v9 )
              {
                v16 = monitor[6];
                if ( v16 >= 1 )
                {
                  v17 = 0LL;
                  v18 = (char *)(monitor + 8);
                  while ( 1 )
                  {
                    if ( (unsigned int)v17 >= v16 )
                      sub_1B88814(list, list);
                    if ( *(_DWORD *)&v18[4 * v17] == individuality )
                      break;
                    if ( (int)++v17 >= v16 )
                      goto LABEL_12;
                  }
                  if ( !v5 )
                    break;
                  items = v5->fields._items;
                  v20 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                  ++v5->fields._version;
                  if ( !items )
                    break;
                  size = v5->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v5,
                      (Il2CppObject *)list,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v22 = &items->obj.klass + size;
                    v5->fields._size = size + 1;
                    v22[4] = (Il2CppClass *)v6;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v6, v11, v12);
                  }
                }
              }
            }
          }
        }
      }
LABEL_12:
      if ( ++v10 == Count )
        goto LABEL_29;
    }
LABEL_31:
    sub_1B8880C(list, v6);
  }
LABEL_29:
  if ( !v5 )
    goto LABEL_31;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList_39390132(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_ObjectModel_Collection_T__o *v7; // x1
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  _QWORD *monitor; // x8
  unsigned __int64 v14; // x10
  unsigned __int64 v15; // x9
  signed int max_length; // w12
  __int64 v17; // x14
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5B47D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&ItemEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    byte_4A5B47D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_32;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v8 = (int)list;
      v9 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v9,
                                                                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v7 = list;
          methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (ItemEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ItemEntity_TypeInfo )
          {
            monitor = list[3].monitor;
            if ( monitor )
            {
              if ( (int)monitor[3] >= 1 )
              {
                v14 = (unsigned int)monitor[3];
                v15 = 0LL;
                while ( 1 )
                {
                  if ( v15 >= v14 )
LABEL_31:
                    sub_1B88814(list, list);
                  max_length = individualityList->max_length;
                  if ( max_length >= 1 )
                    break;
LABEL_22:
                  if ( (__int64)++v15 >= (int)v14 )
                    goto LABEL_11;
                }
                v17 = 0LL;
                while ( 1 )
                {
                  if ( (unsigned int)v17 >= max_length )
                    goto LABEL_31;
                  if ( *((_DWORD *)monitor + v15 + 8) == individualityList->m_Items[v17 + 1] )
                    break;
                  if ( (int)++v17 >= max_length )
                    goto LABEL_22;
                }
                if ( !v5 )
                  break;
                items = v5->fields._items;
                v19 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v5->fields._version;
                if ( !items )
                  break;
                size = v5->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v5,
                    (Il2CppObject *)list,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                }
                else
                {
                  v21 = &items->obj.klass + size;
                  v5->fields._size = size + 1;
                  v21[4] = (Il2CppClass *)v7;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v7, v10, v11);
                }
              }
            }
          }
        }
LABEL_11:
        if ( ++v9 == v8 )
          goto LABEL_29;
      }
LABEL_32:
      sub_1B8880C(list, v7);
    }
  }
LABEL_29:
  if ( !v5 )
    goto LABEL_32;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_o *__fastcall ItemMaster__GetItemData(ItemMaster_o *this, int32_t itemId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool v6; // w8
  ItemEntity_o *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B478 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4A5B478 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         itemId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_1B8880C(0LL, v5);
    if ( ItemEntity__IsEnable((ItemEntity_o *)entity, v5) )
      return (ItemEntity_o *)entity;
    else
      return 0LL;
  }
  return result;
}


ItemEntity_o *__fastcall ItemMaster__GetServantCoinItemEntity(
        ItemMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B47F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    byte_4A5B47F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( entity && Master_object )
      return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               (int32_t)entity[1].monitor,
                               (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
LABEL_14:
    sub_1B8880C(Master_object, v5);
  }
  return 0LL;
}


ItemEntity_o *__fastcall ItemMaster__GetTimeLimitAfterItemData(
        ItemMaster_o *this,
        int32_t itemId,
        bool reboot,
        const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  ItemEntity_o *v8; // x20

  if ( (byte_4A5B479 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B479 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             itemId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v8 = (ItemEntity_o *)Entity;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( v8->fields.endedAt > NetworkManager__getTime(0LL) || !reboot )
    return 0LL;
  return v8;
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


bool __fastcall ItemMaster__isEventPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  __int64 v6; // x1

  if ( (byte_4A5B47E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4A5B47E = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             id,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_1B8880C(0LL, v6);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  int32_t *v14; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x9
  int v17; // w8
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  if ( (byte_4A5B474 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ItemEntity_TypeInfo);
    byte_4A5B474 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
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
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v12 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12].method;
    }
    else
    {
LABEL_16:
      v13 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v14 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                       Enumerator,
                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_41;
    methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) < (unsigned int)methodPtr_low
      || *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * methodPtr_low - 8) != ItemEntity_TypeInfo )
    {
      sub_1B88ACC(v14);
LABEL_41:
      sub_1B8880C(v14, v15);
    }
    v17 = v14[12];
    if ( v17 <= 12 )
    {
      switch ( v17 )
      {
        case 1:
          *(&this->fields.revision + 1) = v14[4];
          break;
        case 2:
          this->fields.friendPointId = v14[4];
          break;
        case 5:
          this->fields.qpId = v14[4];
          break;
      }
    }
    else
    {
      switch ( v17 )
      {
        case 13:
          this->fields.rarePriId = v14[4];
          break;
        case 20:
          this->fields.stoneId = v14[4];
          break;
        case 21:
          this->fields.stoneFragmentsId = v14[4];
          break;
        case 22:
          this->fields.manaId = v14[4];
          break;
        default:
          continue;
      }
    }
  }
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_37;
    }
    v21 = (__int64)&v18->vtable[*v20].method;
  }
  else
  {
LABEL_37:
    v21 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  return 1;
}


void __fastcall ItemMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B480 & 1) == 0 )
  {
    sub_1B885B0(&ItemMaster___c_TypeInfo);
    byte_4A5B480 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ItemMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ItemMaster___c_TypeInfo->static_fields->__9 = (struct ItemMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ItemMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return a->fields.priority - b->fields.priority;
}