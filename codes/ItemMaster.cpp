void ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938B5B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
    byte_5938B5B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    37,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
}


System_Int32_array *ItemMaster__GetBoostItemList(
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
  unsigned int v12; // w26
  ItemEntity_o *v13; // x23
  SkillLvEntity_o *v14; // x24
  int32_t v15; // w5
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct ItemMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__15_0; // x20
  Il2CppObject *v28; // x21
  struct ItemMaster___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x20
  __int64 v37; // x21
  unsigned __int64 v38; // x22

  if ( (byte_5938B62 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_ItemEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_ItemMaster___c__GetBoostItemList_b__15_0__);
    sub_21FFC50(&ItemMaster___c_TypeInfo);
    byte_5938B62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v8);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
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
        sub_21FFED4(Instance);
      v13 = EntityList->m_Items[v12];
      if ( !v13 || !MasterData_object )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v13->fields.value, 1, 0);
      if ( Instance )
      {
        v14 = (SkillLvEntity_o *)Instance;
        v15 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0) : 0;
        Instance = (void *)SkillLvEntity__getEventUpVal(v14, -1, 0, 0, setupInfo, v15, 0, 1, 0);
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
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v13,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v13;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v13, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_21;
    }
LABEL_35:
    sub_21FFECC(Instance, v6);
  }
LABEL_21:
  Instance = ItemMaster___c_TypeInfo;
  if ( !*(&ItemMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ItemMaster___c_TypeInfo, v6);
    Instance = ItemMaster___c_TypeInfo;
  }
  static_fields = (struct ItemMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__15_0 = (System_Comparison_T__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v6);
      static_fields = ItemMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_object____ctor(_9__15_0, v28, Method_ItemMaster___c__GetBoostItemList_b__15_0__, 0);
    v29 = ItemMaster___c_TypeInfo->static_fields;
    v29->__9__15_0 = (struct System_Comparison_ItemEntity__o *)_9__15_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v29->__9__15_0, (int32_t)_9__15_0, v30, v31, v32, v33, v34, v35);
  }
  if ( !v10 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_71636404(
    v10,
    _9__15_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v36 = (unsigned int)v10->fields._size;
  v37 = sub_21FFD10(int___TypeInfo, (unsigned int)v36);
  if ( (int)v36 >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      Instance = System_Collections_Generic_List_object___get_Item(
                   v10,
                   v38,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !Instance || !v37 )
        goto LABEL_35;
      if ( v38 >= *(unsigned int *)(v37 + 24) )
        goto LABEL_36;
      *(_DWORD *)(v37 + 32 + 4 * v38++) = *((_DWORD *)Instance + 4);
      if ( v36 == v38 )
        return (System_Int32_array *)v37;
    }
  }
  return (System_Int32_array *)v37;
}


int64_t ItemMaster__GetContinueItemTotalNum(ItemMaster_o *this, const MethodInfo *method)
{
  int v3; // w8
  __int64 v4; // x1
  Il2CppObject *Master_object; // x21
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *v11; // x23
  int64_t v12; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *v19; // x23
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_T__o *v24; // x23
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  NetworkManager_c *v26; // x0
  System_Collections_Generic_IEnumerator_T__o *v27; // x20
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  UserItemEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v34; // [xsp+18h] [xbp-58h]

  if ( (byte_5938B69 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938B69 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v34 = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    sub_21FFECC(Time, v7);
  v8 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
  v34 = Enumerator;
  if ( !Enumerator )
LABEL_45:
    sub_21FFECC(Enumerator, v10);
  v11 = Enumerator;
  v12 = 0;
  while ( 1 )
  {
    klass = v11->klass;
    v14 = *(unsigned __int16 *)&v11->klass->_2.rank;
    if ( *(_WORD *)&v11->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_14;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v16 = sub_2237E2C(v11, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v11,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    v19 = v34;
    if ( !v34 )
      sub_21FFECC(v17, v18);
    v20 = v34->klass;
    v21 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ItemEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_22;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_22:
      v23 = sub_2237E2C(v34, System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                                                  v19,
                                                                  *(_QWORD *)(v23 + 8));
    v24 = Enumerator;
    if ( !Enumerator )
      goto LABEL_37;
    if ( LODWORD(Enumerator[3].klass) != 27 )
      goto LABEL_37;
    if ( (__int64)Enumerator[5].monitor > v8 )
      goto LABEL_37;
    v25 = Enumerator[6].klass;
    if ( v25 )
    {
      if ( (__int64)v25 < v8 )
        goto LABEL_37;
    }
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v26 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
      v26 = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      sub_21FFECC(v26, v10);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)UserItemMaster__TryGetEntity(
                                                                  (UserItemMaster_o *)Master_object,
                                                                  &entity,
                                                                  v26->static_fields->userIdNumber,
                                                                  (int32_t)v24[1].klass,
                                                                  0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      if ( !entity )
        sub_21FFECC(Enumerator, v10);
      v11 = v34;
      v12 += entity->fields.num;
      if ( !v34 )
        goto LABEL_45;
    }
    else
    {
LABEL_37:
      v11 = v34;
      if ( !v34 )
        goto LABEL_45;
    }
  }
  v27 = v34;
  if ( v34 )
  {
    v28 = v34->klass;
    v29 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_52;
      }
      v31 = (__int64)&v28->vtable[*v30];
    }
    else
    {
LABEL_52:
      v31 = sub_2237E2C(v34, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *ItemMaster__GetEntityByType(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  ItemEntity_o *result; // x0

  if ( (byte_5938B5E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    byte_5938B5E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
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
                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( result && result->fields.type == itemType )
        return result;
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_12:
    sub_21FFECC(list, *(_QWORD *)&itemType);
  }
  return 0;
}


ItemEntity_array *ItemMaster__GetEntityList(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x1
  int64_t list; // x0
  __int64 v8; // x1
  int32_t Count; // w22
  int64_t v10; // x23
  int32_t v11; // w24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int64_t v18; // x8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_5938B5D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938B5D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  list = NetworkManager__getTime(0);
  if ( Count >= 1 )
  {
    v10 = list;
    v11 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v11,
                        (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( *(_DWORD *)(list + 48) == itemType && *(_QWORD *)(list + 88) <= v10 )
        {
          v18 = *(_QWORD *)(list + 96);
          if ( !v18 || v18 >= v10 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v20 = Method_System_Collections_Generic_List_ItemEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)list,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v6;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), v6, v12, v13, v14, v15, v16, v17);
            }
          }
        }
      }
      if ( Count == ++v11 )
        goto LABEL_20;
    }
LABEL_22:
    sub_21FFECC(list, v6);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


System_Collections_Generic_List_ItemEntity__o *ItemMaster__GetEntityListByType(
        ItemMaster_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  int64_t Time; // x0
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int64_t v10; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  int64_t v32; // x8
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_Collections_Generic_IEnumerator_T__o *v42; // [xsp+18h] [xbp-48h]

  if ( (byte_5938B5F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938B5F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(Time, v8);
  v10 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
  v42 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v12);
  for ( i = Enumerator; ; i = v42 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v17 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            i,
            *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    if ( !v42 )
      sub_21FFECC(v18, v19);
    v20 = v42->klass;
    v21 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ItemEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_20;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_20:
      v23 = sub_2237E2C(v42, System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            v42,
            *(_QWORD *)(v23 + 8));
    v31 = v24;
    if ( v24 )
    {
      if ( *(_DWORD *)(v24 + 48) == itemType && *(_QWORD *)(v24 + 88) <= v10 )
      {
        v32 = *(_QWORD *)(v24 + 96);
        if ( !v32 || v32 >= v10 )
        {
          if ( !v5
            || (items = v5->fields._items,
                v34 = Method_System_Collections_Generic_List_ItemEntity__Add__,
                ++v5->fields._version,
                !items) )
          {
            sub_21FFECC(v24, v24);
          }
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v24,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v31;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), v31, v25, v26, v27, v28, v29, v30);
          }
        }
      }
    }
  }
  if ( v42 )
  {
    v37 = v42->klass;
    v38 = *(unsigned __int16 *)&v42->klass->_2.rank;
    if ( *(_WORD *)&v42->klass->_2.rank )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_39;
      }
      v40 = (__int64)&v37->vtable[*v39];
    }
    else
    {
LABEL_39:
      v40 = sub_2237E2C(v42, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(v42, *(_QWORD *)(v40 + 8));
  }
  return (System_Collections_Generic_List_ItemEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int64_t ItemMaster__GetFriendShipUpItemTotalNum(ItemMaster_o *this, int32_t useIteGroupId, const MethodInfo *method)
{
  int v5; // w8
  __int64 v6; // x1
  Il2CppObject *Master_object; // x22
  int64_t Time; // x0
  __int64 v9; // x1
  int64_t v10; // x23
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerator_T__o *v13; // x24
  int64_t v14; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *v21; // x24
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  System_Collections_Generic_IEnumerator_T__o *v26; // x24
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  NetworkManager_c *v28; // x0
  System_Collections_Generic_IEnumerator_T__o *v29; // x20
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v36; // [xsp+28h] [xbp-58h]

  if ( (byte_5938B6A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938B6A = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v36 = 0;
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&useIteGroupId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    sub_21FFECC(Time, v9);
  v10 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
  v36 = Enumerator;
  if ( !Enumerator )
LABEL_46:
    sub_21FFECC(Enumerator, v12);
  v13 = Enumerator;
  v14 = 0;
  while ( 1 )
  {
    klass = v13->klass;
    v16 = *(unsigned __int16 *)&v13->klass->_2.rank;
    if ( *(_WORD *)&v13->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_14;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v18 = sub_2237E2C(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v13,
            *(_QWORD *)(v18 + 8));
    if ( (v19 & 1) == 0 )
      break;
    v21 = v36;
    if ( !v36 )
      sub_21FFECC(v19, v20);
    v22 = v36->klass;
    v23 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ItemEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_22;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_22:
      v25 = sub_2237E2C(v36, System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                  v21,
                                                                  *(_QWORD *)(v25 + 8));
    v26 = Enumerator;
    if ( !Enumerator )
      goto LABEL_38;
    if ( LODWORD(Enumerator[3].klass) != 30 )
      goto LABEL_38;
    if ( (__int64)Enumerator[5].monitor > v10 )
      goto LABEL_38;
    v27 = Enumerator[6].klass;
    if ( v27 )
    {
      if ( (__int64)v27 < v10 )
        goto LABEL_38;
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)ItemEntity__GetQuestUseItemGroupId(
                                                                  (ItemEntity_o *)Enumerator,
                                                                  v12);
    if ( (_DWORD)Enumerator != useIteGroupId )
      goto LABEL_38;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v28 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
      v28 = NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      sub_21FFECC(v28, v12);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)UserItemMaster__TryGetEntity(
                                                                  (UserItemMaster_o *)Master_object,
                                                                  &entity,
                                                                  v28->static_fields->userIdNumber,
                                                                  (int32_t)v26[1].klass,
                                                                  0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      if ( !entity )
        sub_21FFECC(Enumerator, v12);
      v13 = v36;
      v14 += entity->fields.num;
      if ( !v36 )
        goto LABEL_46;
    }
    else
    {
LABEL_38:
      v13 = v36;
      if ( !v36 )
        goto LABEL_46;
    }
  }
  v29 = v36;
  if ( v36 )
  {
    v30 = v36->klass;
    v31 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_53;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_53:
      v33 = sub_2237E2C(v36, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8));
  }
  return v14;
}


ItemEntity_array *ItemMaster__GetIndividualityList(ItemMaster_o *this, int32_t individuality, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  int32_t Count; // w22
  System_Collections_ObjectModel_Collection_T__o *v10; // x23
  int32_t v11; // w24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  _DWORD *monitor; // x9
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  int v20; // w8
  int *v21; // x9
  int v22; // t1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_5938B63 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938B63 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  if ( Count >= 1 )
  {
    v10 = list;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
      if ( list )
      {
        monitor = list[3].monitor;
        v6 = list;
        if ( monitor )
        {
          if ( (__int64)list[3].fields.items <= (__int64)v10 )
          {
            klass = list[4].klass;
            if ( !klass || (__int64)klass >= (__int64)v10 )
            {
              v20 = monitor[6];
              if ( v20 >= 1 )
              {
                v21 = monitor + 8;
                while ( 1 )
                {
                  v22 = *v21++;
                  if ( v22 == individuality )
                    break;
                  if ( !--v20 )
                    goto LABEL_24;
                }
                if ( !v5 )
                  break;
                items = v5->fields._items;
                v24 = Method_System_Collections_Generic_List_ItemEntity__Add__;
                ++v5->fields._version;
                if ( !items )
                  break;
                size = v5->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v5,
                    (Il2CppObject *)list,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &items->obj.klass + size;
                  v5->fields._size = size + 1;
                  v26[4] = (Il2CppClass *)v6;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v6, v12, v13, v14, v15, v16, v17);
                }
              }
            }
          }
        }
      }
LABEL_24:
      if ( ++v11 == Count )
        goto LABEL_25;
    }
LABEL_27:
    sub_21FFECC(list, v6);
  }
LABEL_25:
  if ( !v5 )
    goto LABEL_27;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *ItemMaster__GetIndividualityList_49326516(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_ObjectModel_Collection_T__o *v7; // x1
  int v8; // w22
  int32_t v9; // w23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  _QWORD *monitor; // x8
  __int64 v17; // x9
  int max_length; // w13
  int32_t *m_Items; // x14
  int v20; // t1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_5938B64 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    byte_5938B64 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Count__);
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
                                                                   (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__get_Item__);
        if ( list )
        {
          monitor = list[3].monitor;
          v7 = list;
          if ( monitor )
          {
            if ( (int)monitor[3] >= 1 )
            {
              v17 = 0;
              while ( SLODWORD(individualityList->max_length) < 1 )
              {
LABEL_16:
                if ( ++v17 == (unsigned int)monitor[3] )
                  goto LABEL_23;
              }
              max_length = individualityList->max_length;
              m_Items = individualityList->m_Items;
              while ( 1 )
              {
                v20 = *m_Items++;
                if ( *((_DWORD *)monitor + v17 + 8) == v20 )
                  break;
                if ( !--max_length )
                  goto LABEL_16;
              }
              if ( !v5 )
                break;
              items = v5->fields._items;
              v22 = Method_System_Collections_Generic_List_ItemEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)list,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v7;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v7, v10, v11, v12, v13, v14, v15);
              }
            }
          }
        }
LABEL_23:
        if ( ++v9 == v8 )
          goto LABEL_24;
      }
LABEL_26:
      sub_21FFECC(list, v7);
    }
  }
LABEL_24:
  if ( !v5 )
    goto LABEL_26;
  return (ItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v5,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_o *ItemMaster__GetItemData(ItemMaster_o *this, int32_t itemId, int32_t eventId, const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  bool v9; // w8
  ItemEntity_o *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938B60 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_5938B60 = 1;
  }
  entity = 0;
  v9 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         itemId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0;
  if ( v9 )
  {
    if ( !entity )
      sub_21FFECC(0, v7);
    if ( ItemEntity__IsEnable_49321584((ItemEntity_o *)entity, eventId, v8) )
      return (ItemEntity_o *)entity;
    else
      return 0;
  }
  return result;
}


int32_t ItemMaster__GetQuestUseItemGroupId(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938B68 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_5938B68 = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          id,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_21FFECC(0, v5);
  return ItemEntity__GetQuestUseItemGroupId((ItemEntity_o *)entity, v5);
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *ItemMaster__GetServantCoinItemEntity(ItemMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938B6B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    byte_5938B6B = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtCoinMaster___);
  if ( !Master_object )
    goto LABEL_14;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( entity && Master_object )
      return (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               (int32_t)entity[1].monitor,
                               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
LABEL_14:
    sub_21FFECC(Master_object, v6);
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
  __int64 v8; // x1
  ItemEntity_o *v9; // x20

  if ( (byte_5938B61 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938B61 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             itemId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v9 = (ItemEntity_o *)Entity;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  if ( v9->fields.endedAt > NetworkManager__getTime(0) || !reboot )
    return 0;
  return v9;
}


bool ItemMaster__IsContinueItem(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938B66 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_5938B66 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_21FFECC(v5, v6);
  return *(int *)((char *)&dword_30 + (_QWORD)entity) == 27;
}


bool ItemMaster__IsFriendShipUpItem(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938B67 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_5938B67 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_21FFECC(v5, v6);
  return *(int *)((char *)&dword_30 + (_QWORD)entity) == 30;
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


bool ItemMaster__isEventPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  __int64 v6; // x1

  if ( (byte_5938B65 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_5938B65 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             id,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_21FFECC(0, v6);
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


bool ItemMaster__preProcess(ItemMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  int v19; // w8
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_T__o *v25; // [xsp+18h] [xbp-28h]

  if ( (byte_5938B5C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938B5C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ItemEntity__GetEnumerator__);
  v25 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v5);
  for ( i = Enumerator; ; i = v25 )
  {
    klass = i->klass;
    v8 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            i,
            *(_QWORD *)(v10 + 8));
    if ( (v11 & 1) == 0 )
      break;
    if ( !v25 )
      sub_21FFECC(v11, v12);
    v13 = v25->klass;
    v14 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
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
      v16 = sub_2237E2C(v25, System_Collections_Generic_IEnumerator_ItemEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v25,
            *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_21FFECC(0, v18);
    v19 = *(_DWORD *)(v17 + 48);
    if ( v19 > 19 )
    {
      if ( v19 > 21 )
      {
        if ( v19 == 22 )
        {
          this->fields.rarePriId = *(_DWORD *)(v17 + 16);
        }
        else if ( v19 == 37 )
        {
          this->fields.purePriShopResetId = *(_DWORD *)(v17 + 16);
        }
      }
      else if ( v19 == 20 )
      {
        this->fields.stoneFragmentsId = *(_DWORD *)(v17 + 16);
      }
      else
      {
        this->fields.anonymousId = *(_DWORD *)(v17 + 16);
      }
    }
    else if ( v19 > 4 )
    {
      if ( v19 == 5 )
      {
        this->fields.manaId = *(_DWORD *)(v17 + 16);
      }
      else if ( v19 == 13 )
      {
        this->fields.friendPointId = *(_DWORD *)(v17 + 16);
      }
    }
    else if ( v19 == 1 )
    {
      this->fields.qpId = *(_DWORD *)(v17 + 16);
    }
    else if ( v19 == 2 )
    {
      this->fields.stoneId = *(_DWORD *)(v17 + 16);
    }
  }
  if ( v25 )
  {
    v20 = v25->klass;
    v21 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_46;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_46:
      v23 = sub_2237E2C(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(v25, *(_QWORD *)(v23 + 8));
  }
  return 1;
}


void ItemMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938B6C & 1) == 0 )
  {
    sub_21FFC50(&ItemMaster___c_TypeInfo);
    byte_5938B6C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ItemMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ItemMaster___c_TypeInfo->static_fields->__9 = (struct ItemMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ItemMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ItemMaster___c___ctor(ItemMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ItemMaster___c___GetBoostItemList_b__15_0(
        ItemMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.priority - b->fields.priority;
}