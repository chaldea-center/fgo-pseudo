void __fastcall ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16514 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__, method, v2);
    byte_4B16514 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    37,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
}


System_Int32_array *__fastcall ItemMaster__GetBoostItemList(
        ItemMaster_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  void *Instance; // x0
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v30; // x2
  ItemEntity_array *EntityList; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x19
  int64_t v36; // x2
  __int64 v37; // x3
  int max_length; // w8
  unsigned int v39; // w25
  int64_t v40; // x23
  SkillLvEntity_o *v41; // x24
  int32_t v42; // w5
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Comparison_T__o *v51; // x20
  Il2CppObject *v52; // x21
  struct ItemMaster___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x20
  System_Int32_array *v61; // x21
  unsigned __int64 v62; // x22

  if ( (byte_4B1651C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_ItemEntity__TypeInfo, setupInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_ItemMaster___c__GetBoostItemList_b__16_0__, v23, v24);
    sub_1BCA7E0(&ItemMaster___c_TypeInfo, v25, v26);
    byte_4B1651C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v30);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !EntityList )
    goto LABEL_35;
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= max_length )
LABEL_36:
        sub_1BCAA44(Instance, v28);
      v40 = (int64_t)EntityList->m_Items[v39];
      if ( !v40 || !MasterData_object )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, *(_DWORD *)(v40 + 64), 1, 0LL);
      if ( Instance )
      {
        v41 = (SkillLvEntity_o *)Instance;
        v42 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0LL) : 0;
        Instance = (void *)SkillLvEntity__getEventUpVal(v41, -1, 0, 0, setupInfo, v42, 0, 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v35 )
            break;
          items = v35->fields._items;
          v48 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v35->fields._version;
          if ( !items )
            break;
          size = v35->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v35,
              (Il2CppObject *)v40,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &items->obj.klass + size;
            v35->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v40;
            sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), v40, v36, v37, v43, v44, v45, v46);
          }
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_21;
    }
LABEL_35:
    sub_1BCAA3C(Instance, v28);
  }
LABEL_21:
  Instance = ItemMaster___c_TypeInfo;
  if ( !ItemMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemMaster___c_TypeInfo, v28);
    Instance = ItemMaster___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v28);
      Instance = ItemMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v51 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ItemEntity__TypeInfo, v28, v36, v37);
    System_Comparison_object____ctor(v51, v52, Method_ItemMaster___c__GetBoostItemList_b__16_0__, 0LL);
    static_fields = ItemMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_ItemEntity__o *)v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__16_0, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !v35 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_56244000(
    v35,
    v51,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v60 = (unsigned int)v35->fields._size;
  v61 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v60);
  if ( (int)v60 >= 1 )
  {
    v62 = 0LL;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v35,
                   v62,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !Instance || !v61 )
        goto LABEL_35;
      if ( v62 >= v61->max_length )
        goto LABEL_36;
      v61->m_Items[++v62] = *((_DWORD *)Instance + 4);
      if ( v60 == v62 )
        return v61;
    }
  }
  return v61;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEntityByType(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  ItemEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16517 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&itemType,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&ItemEntity_TypeInfo, v7, v8);
    byte_4B16517 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (ItemEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                 list,
                                 v12,
                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_14:
    sub_1BCAA3C(list, *(_QWORD *)&itemType);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_array *__fastcall ItemMaster__GetEntityList(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x21
  int64_t v21; // x1
  int64_t list; // x0
  __int64 v23; // x1
  int32_t Count; // w22
  int64_t v25; // x23
  int32_t v26; // w24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 methodPtr_low; // x10
  int64_t v34; // x8
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4B16516 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&itemType,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&ItemEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    byte_4B16516 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       *(_QWORD *)&itemType,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
  list = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v25 = list;
    v26 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v26,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = list;
        methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ItemEntity_TypeInfo
          && *(_DWORD *)(list + 48) == itemType
          && *(_QWORD *)(list + 88) <= v25 )
        {
          v34 = *(_QWORD *)(list + 96);
          if ( !v34 || v34 >= v25 )
          {
            if ( !v20 )
              break;
            items = v20->fields._items;
            v36 = Method_System_Collections_Generic_List_ItemEntity__Add__;
            ++v20->fields._version;
            if ( !items )
              break;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                (Il2CppObject *)list,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              v20->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v21;
              sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), v21, v27, v28, v29, v30, v31, v32);
            }
          }
        }
      }
      if ( Count == ++v26 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BCAA3C(list, v21);
  }
LABEL_22:
  if ( !v20 )
    goto LABEL_24;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v20,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ItemEntity__o *__fastcall ItemMaster__GetEntityListByType(
        ItemMaster_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  int64_t Time; // x0
  __int64 v25; // x1
  int64_t v26; // x22
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  Il2CppObject *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x8
  ItemEntity_c *v45; // x1
  __int64 methodPtr_low; // x10
  Il2CppClass *v47; // x9
  struct System_Object_array *items; // x9
  _QWORD *v49; // x10
  __int64 size; // x11
  Il2CppClass **v51; // x0
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0

  if ( (byte_4B16518 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&itemType,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&ItemEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    byte_4B16518 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       *(_QWORD *)&itemType,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1BCAA3C(Time, v25);
  v26 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_18;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_18:
      v36 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v37 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                            Enumerator,
                            *(_QWORD *)(v36 + 8));
    v44 = (int64_t)v37;
    if ( v37 )
    {
      v45 = ItemEntity_TypeInfo;
      methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v37->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ItemEntity_c *)v37->klass->_2.typeHierarchy[methodPtr_low - 1] != ItemEntity_TypeInfo )
      {
        sub_1BCACFC(v37);
LABEL_40:
        sub_1BCAA3C(v37, v45);
      }
      if ( LODWORD(v37[3].klass) == itemType && (__int64)v37[5].monitor <= v26 )
      {
        v47 = v37[6].klass;
        if ( !v47 || (__int64)v47 >= v26 )
        {
          if ( !v22 )
            goto LABEL_40;
          items = v22->fields._items;
          v49 = Method_System_Collections_Generic_List_ItemEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            sub_1BCAA3C(v37, v45);
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              v37,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v51[4] = (Il2CppClass *)v44;
            sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), v44, v38, v39, v40, v41, v42, v43);
          }
        }
      }
    }
  }
  v52 = Enumerator->klass;
  v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_36;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_36:
    v55 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(Enumerator, *(_QWORD *)(v55 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v22;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ItemEntity_o *result; // x0
  __int64 v10; // x1
  struct System_String_o *name; // x8
  ItemEntity_o *v12; // x20
  unsigned __int64 v13; // x21

  if ( (byte_4B1651B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1651B = 1;
  }
  result = (ItemEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result
    || (result = (ItemEntity_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList((ShopMaster_o *)result, eventId, 0LL)) == 0LL )
  {
    sub_1BCAA3C(result, v10);
  }
  name = result->fields.name;
  v12 = result;
  if ( (int)name < 1 )
    return 0LL;
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)name )
      sub_1BCAA44(result, v10);
    result = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               *((_DWORD *)&v12->fields.detail + v13),
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( result )
    {
      if ( result->fields.type == 14 )
        break;
    }
    LODWORD(name) = v12->fields.name;
    if ( (__int64)++v13 >= (int)name )
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x21
  int64_t v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  int32_t Count; // w22
  System_Collections_ObjectModel_Collection_T__o *v25; // x23
  int32_t v26; // w24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 methodPtr_low; // x10
  _DWORD *monitor; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  int v36; // w8
  __int64 v37; // x9
  char *v38; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0

  if ( (byte_4B1651D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&individuality,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&ItemEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    byte_4B1651D = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       *(_QWORD *)&individuality,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v25 = list;
    v26 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v26,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = (int64_t)list;
        methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ItemEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ItemEntity_TypeInfo )
        {
          monitor = list[3].monitor;
          if ( monitor )
          {
            if ( (__int64)list[3].fields.items <= (__int64)v25 )
            {
              klass = list[4].klass;
              if ( !klass || (__int64)klass >= (__int64)v25 )
              {
                v36 = monitor[6];
                if ( v36 >= 1 )
                {
                  v37 = 0LL;
                  v38 = (char *)(monitor + 8);
                  while ( 1 )
                  {
                    if ( (unsigned int)v37 >= v36 )
                      sub_1BCAA44(list, list);
                    if ( *(_DWORD *)&v38[4 * v37] == individuality )
                      break;
                    if ( (int)++v37 >= v36 )
                      goto LABEL_12;
                  }
                  if ( !v20 )
                    break;
                  items = v20->fields._items;
                  v40 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                  ++v20->fields._version;
                  if ( !items )
                    break;
                  size = v20->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v20,
                      (Il2CppObject *)list,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v42 = &items->obj.klass + size;
                    v20->fields._size = size + 1;
                    v42[4] = (Il2CppClass *)v21;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v21, v27, v28, v29, v30, v31, v32);
                  }
                }
              }
            }
          }
        }
      }
LABEL_12:
      if ( ++v26 == Count )
        goto LABEL_29;
    }
LABEL_31:
    sub_1BCAA3C(list, v21);
  }
LABEL_29:
  if ( !v20 )
    goto LABEL_31;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v20,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList_40114148(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t list; // x0
  int64_t v20; // x1
  int v21; // w22
  int32_t v22; // w23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  _QWORD *v30; // x8
  unsigned __int64 v31; // x10
  unsigned __int64 v32; // x9
  signed int max_length; // w12
  __int64 v34; // x14
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4B1651E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      individualityList,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&ItemEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemEntity__TypeInfo, v16, v17);
    byte_4B1651E = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                       individualityList,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_32;
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v21 = list;
      v22 = 0;
      while ( 1 )
      {
        list = (int64_t)this->fields.list;
        if ( !list )
          break;
        list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                          (System_Collections_ObjectModel_Collection_T__o *)list,
                          v22,
                          (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v20 = list;
          methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
            && *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ItemEntity_TypeInfo )
          {
            v30 = *(_QWORD **)(list + 80);
            if ( v30 )
            {
              if ( (int)v30[3] >= 1 )
              {
                v31 = (unsigned int)v30[3];
                v32 = 0LL;
                while ( 1 )
                {
                  if ( v32 >= v31 )
LABEL_31:
                    sub_1BCAA44(list, list);
                  max_length = individualityList->max_length;
                  if ( max_length >= 1 )
                    break;
LABEL_22:
                  if ( (__int64)++v32 >= (int)v31 )
                    goto LABEL_11;
                }
                v34 = 0LL;
                while ( 1 )
                {
                  if ( (unsigned int)v34 >= max_length )
                    goto LABEL_31;
                  if ( *((_DWORD *)v30 + v32 + 8) == individualityList->m_Items[v34 + 1] )
                    break;
                  if ( (int)++v34 >= max_length )
                    goto LABEL_22;
                }
                if ( !v18 )
                  break;
                items = v18->fields._items;
                v36 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v18->fields._version;
                if ( !items )
                  break;
                size = v18->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v18,
                    (Il2CppObject *)list,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v38 = &items->obj.klass + size;
                  v18->fields._size = size + 1;
                  v38[4] = (Il2CppClass *)v20;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), v20, v23, v24, v25, v26, v27, v28);
                }
              }
            }
          }
        }
LABEL_11:
        if ( ++v22 == v21 )
          goto LABEL_29;
      }
LABEL_32:
      sub_1BCAA3C(list, v20);
    }
  }
LABEL_29:
  if ( !v18 )
    goto LABEL_32;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v18,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetItemData(ItemMaster_o *this, int32_t itemId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool v6; // w8
  ItemEntity_o *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16519 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId, method);
    byte_4B16519 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         itemId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_1BCAA3C(0LL, v5);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16520 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtCoinMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v10, v11);
    byte_4B16520 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( entity && Master_object )
      return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               (int32_t)entity[1].monitor,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
LABEL_14:
    sub_1BCAA3C(Master_object, v13);
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
  __int64 v8; // x2
  Il2CppObject *Entity; // x0
  __int64 v10; // x1
  ItemEntity_o *v11; // x20

  if ( (byte_4B1651A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&itemId, reboot);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B1651A = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             itemId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v11 = (ItemEntity_o *)Entity;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  if ( v11->fields.endedAt > NetworkManager__getTime(0LL) || !reboot )
    return 0LL;
  return v11;
}


int32_t __fastcall ItemMaster__get_Anonymous(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.stoneFragmentsId;
}


int32_t __fastcall ItemMaster__get_PurePriShopReset(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.anonymousId;
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
  __int64 v6; // x1

  if ( (byte_4B1651F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&id, method);
    byte_4B1651F = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             id,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  int32_t *v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  int v26; // w8
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4B16515 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v8, v9);
    sub_1BCA7E0(&ItemEntity_TypeInfo, v10, v11);
    byte_4B16515 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
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
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                       Enumerator,
                       *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_43;
    methodPtr_low = LOBYTE(ItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
      || *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != ItemEntity_TypeInfo )
    {
      sub_1BCACFC(v23);
LABEL_43:
      sub_1BCAA3C(v23, v24);
    }
    v26 = v23[12];
    if ( v26 <= 12 )
    {
      switch ( v26 )
      {
        case 1:
          *(&this->fields.revision + 1) = v23[4];
          break;
        case 2:
          this->fields.friendPointId = v23[4];
          break;
        case 5:
          this->fields.qpId = v23[4];
          break;
      }
    }
    else
    {
      switch ( v26 )
      {
        case 13:
          this->fields.rarePriId = v23[4];
          break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
          continue;
        case 20:
          this->fields.stoneId = v23[4];
          break;
        case 21:
          this->fields.stoneFragmentsId = v23[4];
          break;
        case 22:
          this->fields.manaId = v23[4];
          break;
        default:
          if ( v26 == 37 )
            this->fields.anonymousId = v23[4];
          break;
      }
    }
  }
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
        goto LABEL_39;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_39:
    v30 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return 1;
}


void __fastcall ItemMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16521 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemMaster___c_TypeInfo, v1, v2);
    byte_4B16521 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ItemMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ItemMaster___c_TypeInfo->static_fields->__9 = (struct ItemMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ItemMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}