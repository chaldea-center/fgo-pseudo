void __fastcall ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC884 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
    byte_4BDC884 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    37,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
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
  int64_t v13; // x23
  SkillLvEntity_o *v14; // x24
  int32_t v15; // w5
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct ItemMaster___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x20
  System_Int32_array *v36; // x21
  unsigned __int64 v37; // x22

  if ( (byte_4BDC88C & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_ItemEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_ItemMaster___c__GetBoostItemList_b__16_0__);
    sub_1C21E38(&ItemMaster___c_TypeInfo);
    byte_4BDC88C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v8);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
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
        sub_1C2209C(Instance, v6);
      v13 = (int64_t)EntityList->m_Items[v12];
      if ( !v13 || !MasterData_object )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, *(_DWORD *)(v13 + 64), 1, 0LL);
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
          v23 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v13,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v13;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), v13, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_21;
    }
LABEL_35:
    sub_1C22094(Instance, v6);
  }
LABEL_21:
  Instance = ItemMaster___c_TypeInfo;
  if ( !ItemMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemMaster___c_TypeInfo);
    Instance = ItemMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ItemMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v26 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_ItemMaster___c__GetBoostItemList_b__16_0__, 0LL);
    static_fields = ItemMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_ItemEntity__o *)v26;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__16_0, (int64_t)v26, v29, v30, v31, v32, v33, v34);
  }
  if ( !v10 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_56953720(
    v10,
    v26,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v35 = (unsigned int)v10->fields._size;
  v36 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)v35);
  if ( (int)v35 >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v10,
                   v37,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !Instance || !v36 )
        goto LABEL_35;
      if ( v37 >= v36->max_length )
        goto LABEL_36;
      v36->m_Items[++v37] = *((_DWORD *)Instance + 4);
      if ( v35 == v37 )
        return v36;
    }
  }
  return v36;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEntityByType(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  ItemEntity_o *result; // x0

  if ( (byte_4BDC887 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    byte_4BDC887 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
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
                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( result && result->fields.type == itemType )
        return result;
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_12:
    sub_1C22094(list, *(_QWORD *)&itemType);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4BDC886 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC886 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
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
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( *(_DWORD *)(list + 48) == itemType && *(_QWORD *)(list + 88) <= v9 )
        {
          v17 = *(_QWORD *)(list + 96);
          if ( !v17 || v17 >= v9 )
          {
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
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v6;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v6, v11, v12, v13, v14, v15, v16);
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C22094(list, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
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
  __int64 v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x8
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4BDC888 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC888 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1C22094(Time, v7);
  v8 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v9);
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
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ItemEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo )
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
      v18 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v26 = v19;
    if ( v19 )
    {
      if ( *(_DWORD *)(v19 + 48) == itemType && *(_QWORD *)(v19 + 88) <= v8 )
      {
        v27 = *(_QWORD *)(v19 + 96);
        if ( !v27 || v27 >= v8 )
        {
          if ( !v5 )
            sub_1C22094(v19, v19);
          items = v5->fields._items;
          v29 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C22094(v19, v19);
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v19,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v26;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 4), v26, v20, v21, v22, v23, v24, v25);
          }
        }
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_34;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_34:
    v35 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v5;
}


ItemEntity_o *__fastcall ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  ItemEntity_o *result; // x0
  __int64 v6; // x1
  struct System_String_o *name; // x8
  ItemEntity_o *v8; // x20
  unsigned __int64 v9; // x21

  if ( (byte_4BDC88B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC88B = 1;
  }
  result = (ItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result
    || (result = (ItemEntity_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList((ShopMaster_o *)result, eventId, 0LL)) == 0LL )
  {
    sub_1C22094(result, v6);
  }
  name = result->fields.name;
  v8 = result;
  if ( (int)name < 1 )
    return 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)name )
      sub_1C2209C(result, v6);
    result = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               *((_DWORD *)&v8->fields.detail + v9),
                               (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  int64_t v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_ObjectModel_Collection_T__o *v9; // x23
  int32_t v10; // w24
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  _DWORD *monitor; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  int v19; // w8
  __int64 v20; // x9
  char *v21; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4BDC88D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC88D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
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
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( list )
      {
        monitor = list[3].monitor;
        v6 = (int64_t)list;
        if ( monitor )
        {
          if ( (__int64)list[3].fields.items <= (__int64)v9 )
          {
            klass = list[4].klass;
            if ( !klass || (__int64)klass >= (__int64)v9 )
            {
              v19 = monitor[6];
              if ( v19 >= 1 )
              {
                v20 = 0LL;
                v21 = (char *)(monitor + 8);
                while ( 1 )
                {
                  if ( (unsigned int)v20 >= v19 )
                    sub_1C2209C(list, list);
                  if ( *(_DWORD *)&v21[4 * v20] == individuality )
                    break;
                  if ( (int)++v20 >= v19 )
                    goto LABEL_25;
                }
                if ( !v5 )
                  break;
                items = v5->fields._items;
                v23 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v5->fields._version;
                if ( !items )
                  break;
                size = v5->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v5,
                    (Il2CppObject *)list,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &items->obj.klass + size;
                  v5->fields._size = size + 1;
                  v25[4] = (Il2CppClass *)v6;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), v6, v11, v12, v13, v14, v15, v16);
                }
              }
            }
          }
        }
      }
LABEL_25:
      if ( ++v10 == Count )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C22094(list, v6);
  }
LABEL_26:
  if ( !v5 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList_40653072(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t list; // x0
  int64_t v7; // x1
  int v8; // w22
  int32_t v9; // w23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  _QWORD *v16; // x8
  unsigned __int64 v17; // x10
  unsigned __int64 v18; // x9
  signed int max_length; // w12
  __int64 v20; // x14
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4BDC88E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    byte_4BDC88E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_29;
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    if ( (int)list >= 1 )
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
                          (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
        if ( list )
        {
          v16 = *(_QWORD **)(list + 80);
          v7 = list;
          if ( v16 )
          {
            if ( (int)v16[3] >= 1 )
            {
              v17 = (unsigned int)v16[3];
              v18 = 0LL;
              while ( 1 )
              {
                if ( v18 >= v17 )
LABEL_28:
                  sub_1C2209C(list, list);
                max_length = individualityList->max_length;
                if ( max_length >= 1 )
                  break;
LABEL_18:
                if ( (__int64)++v18 >= (int)v17 )
                  goto LABEL_25;
              }
              v20 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v20 >= max_length )
                  goto LABEL_28;
                if ( *((_DWORD *)v16 + v18 + 8) == individualityList->m_Items[v20 + 1] )
                  break;
                if ( (int)++v20 >= max_length )
                  goto LABEL_18;
              }
              if ( !v5 )
                break;
              items = v5->fields._items;
              v22 = Method_System_Collections_Generic_List_ItemEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)list,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v7;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), v7, v10, v11, v12, v13, v14, v15);
              }
            }
          }
        }
LABEL_25:
        if ( ++v9 == v8 )
          goto LABEL_26;
      }
LABEL_29:
      sub_1C22094(list, v7);
    }
  }
LABEL_26:
  if ( !v5 )
    goto LABEL_29;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


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

  if ( (byte_4BDC889 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4BDC889 = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         itemId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_1C22094(0LL, v7);
    if ( ItemEntity__IsEnable_40648244((ItemEntity_o *)entity, eventId, v8) )
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

  if ( (byte_4BDC890 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    byte_4BDC890 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( entity && Master_object )
      return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               (int32_t)entity[1].monitor,
                               (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
LABEL_14:
    sub_1C22094(Master_object, v5);
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

  if ( (byte_4BDC88A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC88A = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             itemId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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


bool __fastcall ItemMaster__isEventPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  __int64 v6; // x1

  if ( (byte_4BDC88F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4BDC88F = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             id,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_1C22094(0LL, v6);
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
  __int64 v14; // x0
  __int64 v15; // x1
  int v16; // w9
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0

  if ( (byte_4BDC885 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    byte_4BDC885 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C22094(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v4);
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
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ItemEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo )
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
      v13 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, 0LL);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_1C22094(0LL, v15);
    v16 = *(_DWORD *)(v14 + 48);
    if ( v16 <= 12 )
    {
      switch ( v16 )
      {
        case 1:
          this->fields.qpId = *(_DWORD *)(v14 + 16);
          break;
        case 2:
          this->fields.stoneId = *(_DWORD *)(v14 + 16);
          break;
        case 5:
          this->fields.manaId = *(_DWORD *)(v14 + 16);
          break;
      }
    }
    else
    {
      switch ( v16 )
      {
        case 13:
          this->fields.friendPointId = *(_DWORD *)(v14 + 16);
          break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
          continue;
        case 20:
          this->fields.stoneFragmentsId = *(_DWORD *)(v14 + 16);
          break;
        case 21:
          this->fields.anonymousId = *(_DWORD *)(v14 + 16);
          break;
        case 22:
          this->fields.rarePriId = *(_DWORD *)(v14 + 16);
          break;
        default:
          if ( v16 == 37 )
            this->fields.purePriShopResetId = *(_DWORD *)(v14 + 16);
          break;
      }
    }
  }
  v17 = Enumerator->klass;
  v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_37;
    }
    v20 = (__int64)&v17->vtable[*v19].method;
  }
  else
  {
LABEL_37:
    v20 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(Enumerator, *(_QWORD *)(v20 + 8));
  return 1;
}


void __fastcall ItemMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC891 & 1) == 0 )
  {
    sub_1C21E38(&ItemMaster___c_TypeInfo);
    byte_4BDC891 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ItemMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ItemMaster___c_TypeInfo->static_fields->__9 = (struct ItemMaster___c_o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)ItemMaster___c_TypeInfo->static_fields, (int64_t)v1, v2, v3, v4, v5, v6, v7);
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
    sub_1C22094(this, a);
  return a->fields.priority - b->fields.priority;
}