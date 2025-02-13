void __fastcall ShopReleaseMaster___ctor(ShopReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCF9D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__);
    byte_4BDCF9D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    124,
    (const MethodInfo_325E55C *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__CondClearCheck(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t kind,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  const MethodInfo *v6; // x1
  int max_length; // w9
  int v8; // w10
  ShopReleaseEntity_o *v9; // x8

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, *(const MethodInfo **)&kind);
  if ( !EntitiyList )
LABEL_9:
    sub_1C22094(EntitiyList, v6);
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  while ( 1 )
  {
    v9 = EntitiyList->m_Items[v8];
    if ( !v9 )
      goto LABEL_9;
    if ( v9->fields.condType == kind )
      return ShopReleaseEntity__IsCondEnable(EntitiyList->m_Items[v8], v6);
    if ( max_length == ++v8 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_array *__fastcall ShopReleaseMaster__GetEntitiyList(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = shopId;
  if ( (byte_4BDCF9E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
    byte_4BDCF9E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&shopId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&shopId;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), *(int64_t *)&shopId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C22094(list, *(_QWORD *)&shopId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_array *__fastcall ShopReleaseMaster__GetEntitiyList_41201180(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        bool isClosedDisp,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  int32_t v5; // w21
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v9; // x19
  int32_t v10; // w24
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct ShopReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  v4 = isClosedDisp;
  v5 = shopId;
  if ( (byte_4BDCF9F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Item__);
    sub_1C21E38(&System_Comparison_ShopReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__);
    sub_1C21E38(&ShopReleaseMaster___c_TypeInfo);
    byte_4BDCF9F = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&shopId = list;
        if ( *((_DWORD *)list + 4) == v5 && (((*((_BYTE *)list + 44) != 0) ^ v4) & 1) == 0 )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = *(Il2CppClass **)&shopId;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), *(int64_t *)&shopId, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C22094(list, *(_QWORD *)&shopId);
  }
LABEL_16:
  list = ShopReleaseMaster___c_TypeInfo;
  if ( !ShopReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopReleaseMaster___c_TypeInfo);
    list = ShopReleaseMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopReleaseMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_ShopReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__, 0LL);
    static_fields = ShopReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ShopReleaseEntity__o *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v9 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_56953720(
    v9,
    v21,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__);
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_o *__fastcall ShopReleaseMaster__GetEntity(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t condType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDCF9B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__);
    byte_4BDCF9B = 1;
  }
  PK = (Il2CppObject *)ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&priority);
  return (ShopReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_3260880 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__);
}


System_Collections_Generic_List_ShopReleaseEntity__o *__fastcall ShopReleaseMaster__GetNotClearShopReleaseEntity(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x19
  System_Collections_Generic_List_object__o *v6; // x20
  _BOOL8 IsCondEnable; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  int v10; // w22
  int v11; // w23
  Il2CppClass **v12; // x8
  Il2CppObject *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BDCFA0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
    byte_4BDCFA0 = 1;
  }
  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( !EntitiyList )
    goto LABEL_17;
  v9 = *(_QWORD *)&EntitiyList->max_length;
  v10 = v9 - 1;
  if ( (int)v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = &EntitiyList->obj.klass + v11;
      v13 = (Il2CppObject *)v12[4];
      if ( !v13 )
        break;
      IsCondEnable = ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)v12[4], v8);
      if ( !IsCondEnable )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v21 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v13,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v13, v14, v15, v16, v17, v18, v19);
        }
      }
      if ( v10 == v11 )
        return (System_Collections_Generic_List_ShopReleaseEntity__o *)v6;
      if ( ++v11 >= EntitiyList->max_length )
        sub_1C2209C(IsCondEnable, v8);
    }
LABEL_17:
    sub_1C22094(IsCondEnable, v8);
  }
  return (System_Collections_Generic_List_ShopReleaseEntity__o *)v6;
}


int32_t __fastcall ShopReleaseMaster__GetPurchaseShop(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_41201180; // x0
  __int64 v5; // x1
  int max_length; // w8
  int v7; // w9
  ShopReleaseEntity_o *v8; // x10
  struct System_Int32_array *condValues; // x8
  __int64 v10; // x9

  EntitiyList_41201180 = ShopReleaseMaster__GetEntitiyList_41201180(this, shopId, 0, v3);
  if ( !EntitiyList_41201180 )
LABEL_13:
    sub_1C22094(EntitiyList_41201180, v5);
  max_length = EntitiyList_41201180->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = EntitiyList_41201180->m_Items[v7];
    if ( !v8 )
      goto LABEL_13;
    if ( (v8->fields.condType & 0xFFFFFFFE) == 14 )
      break;
    if ( max_length == ++v7 )
      return 0;
  }
  condValues = v8->fields.condValues;
  if ( !condValues )
    return 0;
  v10 = *(_QWORD *)&condValues->max_length;
  if ( !v10 )
    return 0;
  if ( !(_DWORD)v10 )
    sub_1C2209C(EntitiyList_41201180, v5);
  return condValues->m_Items[1];
}


int32_t __fastcall ShopReleaseMaster__GetTargetShopGroupId(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v4; // x1
  int max_length; // w8
  int v6; // w9
  ShopReleaseEntity_o *v7; // x10
  struct System_Int32_array *condValues; // x8

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  if ( !EntitiyList )
    goto LABEL_11;
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = EntitiyList->m_Items[v6];
    if ( !v7 )
      goto LABEL_11;
    if ( v7->fields.condType == 82 )
      break;
    if ( max_length == ++v6 )
      return 0;
  }
  condValues = v7->fields.condValues;
  if ( !condValues )
LABEL_11:
    sub_1C22094(EntitiyList, v4);
  if ( !condValues->max_length )
    sub_1C2209C(EntitiyList, v4);
  return condValues->m_Items[1];
}


bool __fastcall ShopReleaseMaster__IsAllCondClear(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  ShopReleaseEntity_o *EntitiyList; // x0
  const MethodInfo *v4; // x1
  struct System_Int32_array *condValues; // x20
  ShopReleaseEntity_o *v6; // x19
  int v7; // w22
  bool v8; // w21
  _BOOL8 IsCondEnable; // x0

  EntitiyList = (ShopReleaseEntity_o *)ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  if ( !EntitiyList )
    goto LABEL_12;
  condValues = EntitiyList->fields.condValues;
  v6 = EntitiyList;
  if ( (int)condValues >= 1 )
  {
    v7 = 1;
    v8 = 1;
    while ( 1 )
    {
      EntitiyList = (ShopReleaseEntity_o *)*((_QWORD *)&v6->fields.condValues + v7);
      if ( !EntitiyList )
        break;
      IsCondEnable = ShopReleaseEntity__IsCondEnable(EntitiyList, v4);
      if ( !IsCondEnable )
        return !v8;
      v8 = v7 < (int)condValues;
      if ( (_DWORD)condValues == v7 )
        return !v8;
      if ( (unsigned int)v7++ >= LODWORD(v6->fields.condValues) )
        sub_1C2209C(IsCondEnable, v4);
    }
LABEL_12:
    sub_1C22094(EntitiyList, v4);
  }
  v8 = 0;
  return !v8;
}


bool __fastcall ShopReleaseMaster__IsOpen(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_41201180; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x20
  ShopReleaseEntity_array *v7; // x19
  int v8; // w22
  bool v9; // w21

  EntitiyList_41201180 = ShopReleaseMaster__GetEntitiyList_41201180(this, shopId, 0, v3);
  if ( !EntitiyList_41201180 )
    goto LABEL_13;
  v6 = *(_QWORD *)&EntitiyList_41201180->max_length;
  v7 = EntitiyList_41201180;
  if ( (int)v6 >= 1 )
  {
    v8 = 1;
    v9 = 1;
    while ( 1 )
    {
      EntitiyList_41201180 = (ShopReleaseEntity_array *)v7->m_Items[v8 - 1];
      if ( !EntitiyList_41201180 )
        break;
      if ( !BYTE4(EntitiyList_41201180->m_Items[1]) )
      {
        EntitiyList_41201180 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(
                                                            (ShopReleaseEntity_o *)EntitiyList_41201180,
                                                            v5);
        if ( ((unsigned __int8)EntitiyList_41201180 & 1) == 0 )
          return !v9;
      }
      v9 = v8 < (int)v6;
      if ( (_DWORD)v6 == v8 )
        return !v9;
      if ( v8++ >= v7->max_length )
        sub_1C2209C(EntitiyList_41201180, v5);
    }
LABEL_13:
    sub_1C22094(EntitiyList_41201180, v5);
  }
  v9 = 0;
  return !v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__IsPreparation(
        ShopReleaseMaster_o *this,
        System_String_o **message,
        System_String_o **itemName,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList_41201180; // x0
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x24
  ShopReleaseEntity_array *v16; // x21
  int v17; // w25
  bool v18; // w23
  ShopReleaseEntity_o *v19; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_String_o **v27; // x0
  System_String_o *closedItemName; // x1
  System_String_o *PreparationConditionText; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  EntitiyList_41201180 = ShopReleaseMaster__GetEntitiyList_41201180(this, shopId, 1, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_41201180 )
LABEL_17:
    sub_1C22094(EntitiyList_41201180, v8);
  v15 = *(_QWORD *)&EntitiyList_41201180->max_length;
  v16 = EntitiyList_41201180;
  if ( (int)v15 >= 1 )
  {
    v17 = 1;
    v18 = 1;
    while ( 1 )
    {
      v19 = v16->m_Items[v17 - 1];
      if ( !v19 )
        goto LABEL_17;
      if ( v19->fields.isClosedDisp )
      {
        EntitiyList_41201180 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v19, v8);
        if ( (v19->fields.condType != 82) != ((unsigned __int8)EntitiyList_41201180 & 1) )
          goto LABEL_15;
      }
      else if ( v19->fields.condType == 82 )
      {
LABEL_15:
        PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v19, v8);
        *message = PreparationConditionText;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)message,
          (int64_t)PreparationConditionText,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        closedItemName = v19->fields.closedItemName;
        v27 = itemName;
        *itemName = closedItemName;
        goto LABEL_16;
      }
      v18 = v17 < (int)v15;
      if ( (_DWORD)v15 == v17 )
        goto LABEL_14;
      if ( v17++ >= v16->max_length )
        sub_1C2209C(EntitiyList_41201180, v8);
    }
  }
  v18 = 0;
LABEL_14:
  *message = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)message, 0LL, v9, v10, v11, v12, v13, v14);
  *itemName = 0LL;
  v27 = itemName;
  closedItemName = 0LL;
LABEL_16:
  sub_1C21DDC((PartyOrganizationUtility_o *)v27, (int64_t)closedItemName, v21, v22, v23, v24, v25, v26);
  return v18;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__TryGetClosedMessage(
        ShopReleaseMaster_o *this,
        System_String_o **message,
        System_String_o **itemName,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList_41201180; // x0
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x24
  ShopReleaseEntity_array *v16; // x21
  int v17; // w25
  bool v18; // w23
  ShopReleaseEntity_o *v19; // x22
  System_String_o *PreparationConditionText; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_o *closedItemName; // x1
  System_String_o **v35; // x0

  EntitiyList_41201180 = ShopReleaseMaster__GetEntitiyList_41201180(this, shopId, 0, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_41201180 )
LABEL_15:
    sub_1C22094(EntitiyList_41201180, v8);
  v15 = *(_QWORD *)&EntitiyList_41201180->max_length;
  v16 = EntitiyList_41201180;
  if ( (int)v15 < 1 )
  {
    v18 = 0;
LABEL_13:
    *message = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)message, 0LL, v9, v10, v11, v12, v13, v14);
    v35 = itemName;
    closedItemName = 0LL;
    *itemName = 0LL;
  }
  else
  {
    v17 = 1;
    v18 = 1;
    while ( 1 )
    {
      v19 = v16->m_Items[v17 - 1];
      if ( !v19 )
        goto LABEL_15;
      if ( v19->fields.isClosedDisp )
        break;
      EntitiyList_41201180 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v19, v8);
      if ( ((unsigned __int8)EntitiyList_41201180 & 1) != 0 )
        break;
      v18 = v17 < (int)v15;
      if ( (_DWORD)v15 == v17 )
        goto LABEL_13;
      if ( v17++ >= v16->max_length )
        sub_1C2209C(EntitiyList_41201180, v8);
    }
    PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v19, v8);
    *message = PreparationConditionText;
    sub_1C21DDC((PartyOrganizationUtility_o *)message, (int64_t)PreparationConditionText, v22, v23, v24, v25, v26, v27);
    closedItemName = v19->fields.closedItemName;
    v35 = itemName;
    *itemName = closedItemName;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)v35, (int64_t)closedItemName, v28, v29, v30, v31, v32, v33);
  return v18;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__TryGetEntity(
        ShopReleaseMaster_o *this,
        ShopReleaseEntity_o **entity,
        int32_t shopId,
        int32_t condType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDCF9C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__);
    byte_4BDCF9C = 1;
  }
  PK = (Il2CppObject *)ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&condType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__isExistCondType(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t type,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v6; // x1
  int max_length; // w8
  int v8; // w9
  bool v9; // w10
  ShopReleaseEntity_o *v10; // x11

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, *(const MethodInfo **)&type);
  if ( !EntitiyList )
    goto LABEL_10;
  max_length = EntitiyList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      v10 = EntitiyList->m_Items[v8];
      if ( !v10 )
        break;
      if ( v10->fields.condType != type )
      {
        v9 = ++v8 < max_length;
        if ( max_length != v8 )
          continue;
      }
      return v9;
    }
LABEL_10:
    sub_1C22094(EntitiyList, v6);
  }
  return 0;
}


bool __fastcall ShopReleaseMaster__isQuestNotClearSet(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t *questId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v6; // x1
  int max_length; // w9
  int v8; // w10
  bool v9; // w8
  ShopReleaseEntity_o *v10; // x11
  struct System_Int32_array *condValues; // x9
  __int64 v12; // x10

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, (const MethodInfo *)questId);
  *questId = 0;
  if ( !EntitiyList )
LABEL_16:
    sub_1C22094(EntitiyList, v6);
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
  {
    return 0;
  }
  else
  {
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      v10 = EntitiyList->m_Items[v8];
      if ( !v10 )
        goto LABEL_16;
      if ( v10->fields.condType == 36 )
        break;
      v9 = ++v8 < max_length;
      if ( max_length == v8 )
        return v9;
    }
    condValues = v10->fields.condValues;
    if ( condValues )
    {
      v12 = *(_QWORD *)&condValues->max_length;
      if ( v12 )
      {
        if ( !(_DWORD)v12 )
          sub_1C2209C(EntitiyList, v6);
        LODWORD(condValues) = condValues->m_Items[1];
      }
      else
      {
        LODWORD(condValues) = 0;
      }
    }
    *questId = (int)condValues;
  }
  return v9;
}


void __fastcall ShopReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDCFA1 & 1) == 0 )
  {
    sub_1C21E38(&ShopReleaseMaster___c_TypeInfo);
    byte_4BDCFA1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ShopReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ShopReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ShopReleaseMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ShopReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ShopReleaseMaster___c___ctor(ShopReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ShopReleaseMaster___c___GetEntitiyList_b__4_0(
        ShopReleaseMaster___c_o *this,
        ShopReleaseEntity_o *a,
        ShopReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}