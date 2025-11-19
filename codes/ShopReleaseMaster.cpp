void ShopReleaseMaster___ctor(ShopReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6E3D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__);
    byte_4CB6E3D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    124,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool ShopReleaseMaster__CondClearCheck(
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
    sub_1C6BC60(EntitiyList, v6);
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
ShopReleaseEntity_array *ShopReleaseMaster__GetEntitiyList(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  v3 = shopId;
  if ( (byte_4CB6E3E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
    byte_4CB6E3E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
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
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&shopId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v12 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v14[4] = *(Il2CppClass **)&shopId;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), shopId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C6BC60(list, *(_QWORD *)&shopId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_array *ShopReleaseMaster__GetEntitiyList_43116032(
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x20
  Il2CppObject *v18; // x21
  struct ShopReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v4 = isClosedDisp;
  v5 = shopId;
  if ( (byte_4CB6E3F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_ShopReleaseEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
    sub_1C6BA08(&Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__);
    sub_1C6BA08(&ShopReleaseMaster___c_TypeInfo);
    byte_4CB6E3F = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
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
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ShopReleaseEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&shopId = list;
        if ( *((_DWORD *)list + 4) == v5 && (((*((_BYTE *)list + 44) != 0) ^ v4) & 1) == 0 )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v14 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v16[4] = *(Il2CppClass **)&shopId;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), shopId, v11, v12);
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C6BC60(list, *(_QWORD *)&shopId);
  }
LABEL_16:
  list = ShopReleaseMaster___c_TypeInfo;
  if ( !ShopReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopReleaseMaster___c_TypeInfo);
    list = ShopReleaseMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopReleaseMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ShopReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__, 0);
    static_fields = ShopReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ShopReleaseEntity__o *)v17;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v17, v20, v21);
  }
  if ( !v9 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_58729528(
    v9,
    v17,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__);
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_o *ShopReleaseMaster__GetEntity(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t condType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6E3B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__);
    byte_4CB6E3B = 1;
  }
  PK = (Il2CppObject *)ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&priority);
  return (ShopReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_33FDB94 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__);
}


System_Collections_Generic_List_ShopReleaseEntity__o *ShopReleaseMaster__GetNotClearShopReleaseEntity(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x19
  System_Collections_Generic_List_object__o *v6; // x20
  _BOOL8 IsCondEnable; // x0
  const MethodInfo *v8; // x1
  il2cpp_array_size_t max_length; // x8
  int v10; // w22
  int v11; // w23
  Il2CppClass **v12; // x8
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4CB6E40 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
    byte_4CB6E40 = 1;
  }
  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( !EntitiyList )
    goto LABEL_17;
  max_length = EntitiyList->max_length;
  v10 = max_length - 1;
  if ( (int)max_length >= 1 )
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
        v17 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v13,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v13;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
        }
      }
      if ( v10 == v11 )
        return (System_Collections_Generic_List_ShopReleaseEntity__o *)v6;
      if ( (unsigned int)++v11 >= LODWORD(EntitiyList->max_length) )
        sub_1C6BC68(IsCondEnable);
    }
LABEL_17:
    sub_1C6BC60(IsCondEnable, v8);
  }
  return (System_Collections_Generic_List_ShopReleaseEntity__o *)v6;
}


int32_t ShopReleaseMaster__GetPurchaseShop(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_43116032; // x0
  __int64 v5; // x1
  int max_length; // w8
  int v7; // w9
  ShopReleaseEntity_o *v8; // x10
  struct System_Int32_array *condValues; // x8
  il2cpp_array_size_t v10; // x9

  EntitiyList_43116032 = ShopReleaseMaster__GetEntitiyList_43116032(this, shopId, 0, v3);
  if ( !EntitiyList_43116032 )
LABEL_13:
    sub_1C6BC60(EntitiyList_43116032, v5);
  max_length = EntitiyList_43116032->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = EntitiyList_43116032->m_Items[v7];
    if ( !v8 )
      goto LABEL_13;
    if ( (v8->fields.condType & 0xFFFFFFFE) == 0xE )
      break;
    if ( max_length == ++v7 )
      return 0;
  }
  condValues = v8->fields.condValues;
  if ( !condValues )
    return 0;
  v10 = condValues->max_length;
  if ( !v10 )
    return 0;
  if ( !(_DWORD)v10 )
    sub_1C6BC68(EntitiyList_43116032);
  return condValues->m_Items[0];
}


int32_t ShopReleaseMaster__GetTargetShopGroupId(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
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
    sub_1C6BC60(EntitiyList, v4);
  if ( !LODWORD(condValues->max_length) )
    sub_1C6BC68(EntitiyList);
  return condValues->m_Items[0];
}


bool ShopReleaseMaster__IsAllCondClear(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
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
        sub_1C6BC68(IsCondEnable);
    }
LABEL_12:
    sub_1C6BC60(EntitiyList, v4);
  }
  v8 = 0;
  return !v8;
}


bool ShopReleaseMaster__IsOpen(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_43116032; // x0
  const MethodInfo *v5; // x1
  il2cpp_array_size_t max_length; // x20
  ShopReleaseEntity_array *v7; // x19
  int v8; // w22
  bool v9; // w21

  EntitiyList_43116032 = ShopReleaseMaster__GetEntitiyList_43116032(this, shopId, 0, v3);
  if ( !EntitiyList_43116032 )
    goto LABEL_13;
  max_length = EntitiyList_43116032->max_length;
  v7 = EntitiyList_43116032;
  if ( (int)max_length >= 1 )
  {
    v8 = 1;
    v9 = 1;
    while ( 1 )
    {
      EntitiyList_43116032 = (ShopReleaseEntity_array *)v7->m_Items[v8 - 1];
      if ( !EntitiyList_43116032 )
        break;
      if ( !BYTE4(EntitiyList_43116032->m_Items[1]) )
      {
        EntitiyList_43116032 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(
                                                            (ShopReleaseEntity_o *)EntitiyList_43116032,
                                                            v5);
        if ( ((unsigned __int8)EntitiyList_43116032 & 1) == 0 )
          return !v9;
      }
      v9 = v8 < (int)max_length;
      if ( (_DWORD)max_length == v8 )
        return !v9;
      if ( (unsigned int)v8++ >= LODWORD(v7->max_length) )
        sub_1C6BC68(EntitiyList_43116032);
    }
LABEL_13:
    sub_1C6BC60(EntitiyList_43116032, v5);
  }
  v9 = 0;
  return !v9;
}


// local variable allocation has failed, the output may be wrong!
bool ShopReleaseMaster__IsPreparation(
        ShopReleaseMaster_o *this,
        System_String_o **message,
        System_String_o **itemName,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList_43116032; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  il2cpp_array_size_t max_length; // x24
  ShopReleaseEntity_array *v12; // x21
  int v13; // w25
  bool v14; // w23
  ShopReleaseEntity_o *v15; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_o **v19; // x0
  System_String_o *closedItemName; // x1
  System_String_o *PreparationConditionText; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  EntitiyList_43116032 = ShopReleaseMaster__GetEntitiyList_43116032(this, shopId, 1, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_43116032 )
LABEL_17:
    sub_1C6BC60(EntitiyList_43116032, v8);
  max_length = EntitiyList_43116032->max_length;
  v12 = EntitiyList_43116032;
  if ( (int)max_length >= 1 )
  {
    v13 = 1;
    v14 = 1;
    while ( 1 )
    {
      v15 = v12->m_Items[v13 - 1];
      if ( !v15 )
        goto LABEL_17;
      if ( v15->fields.isClosedDisp )
      {
        EntitiyList_43116032 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v15, v8);
        if ( (v15->fields.condType != 82) != ((unsigned __int8)EntitiyList_43116032 & 1) )
          goto LABEL_15;
      }
      else if ( v15->fields.condType == 82 )
      {
LABEL_15:
        PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v15, v8);
        *message = PreparationConditionText;
        sub_1C6B9AC((CGThumbnailListItem_o *)message, (int32_t)PreparationConditionText, v22, v23);
        closedItemName = v15->fields.closedItemName;
        v19 = itemName;
        *itemName = closedItemName;
        goto LABEL_16;
      }
      v14 = v13 < (int)max_length;
      if ( (_DWORD)max_length == v13 )
        goto LABEL_14;
      if ( (unsigned int)v13++ >= LODWORD(v12->max_length) )
        sub_1C6BC68(EntitiyList_43116032);
    }
  }
  v14 = 0;
LABEL_14:
  *message = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)message, 0, v9, v10);
  *itemName = 0;
  v19 = itemName;
  LODWORD(closedItemName) = 0;
LABEL_16:
  sub_1C6B9AC((CGThumbnailListItem_o *)v19, (int32_t)closedItemName, v17, v18);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
bool ShopReleaseMaster__TryGetClosedMessage(
        ShopReleaseMaster_o *this,
        System_String_o **message,
        System_String_o **itemName,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList_43116032; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  il2cpp_array_size_t max_length; // x24
  ShopReleaseEntity_array *v12; // x21
  int v13; // w25
  bool v14; // w23
  ShopReleaseEntity_o *v15; // x22
  System_String_o *PreparationConditionText; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *closedItemName; // x1
  System_String_o **v23; // x0

  EntitiyList_43116032 = ShopReleaseMaster__GetEntitiyList_43116032(this, shopId, 0, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_43116032 )
LABEL_15:
    sub_1C6BC60(EntitiyList_43116032, v8);
  max_length = EntitiyList_43116032->max_length;
  v12 = EntitiyList_43116032;
  if ( (int)max_length < 1 )
  {
    v14 = 0;
LABEL_13:
    *message = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)message, 0, v9, v10);
    v23 = itemName;
    LODWORD(closedItemName) = 0;
    *itemName = 0;
  }
  else
  {
    v13 = 1;
    v14 = 1;
    while ( 1 )
    {
      v15 = v12->m_Items[v13 - 1];
      if ( !v15 )
        goto LABEL_15;
      if ( v15->fields.isClosedDisp )
        break;
      EntitiyList_43116032 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v15, v8);
      if ( ((unsigned __int8)EntitiyList_43116032 & 1) != 0 )
        break;
      v14 = v13 < (int)max_length;
      if ( (_DWORD)max_length == v13 )
        goto LABEL_13;
      if ( (unsigned int)v13++ >= LODWORD(v12->max_length) )
        sub_1C6BC68(EntitiyList_43116032);
    }
    PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v15, v8);
    *message = PreparationConditionText;
    sub_1C6B9AC((CGThumbnailListItem_o *)message, (int32_t)PreparationConditionText, v18, v19);
    closedItemName = v15->fields.closedItemName;
    v23 = itemName;
    *itemName = closedItemName;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)v23, (int32_t)closedItemName, v20, v21);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
bool ShopReleaseMaster__TryGetEntity(
        ShopReleaseMaster_o *this,
        ShopReleaseEntity_o **entity,
        int32_t shopId,
        int32_t condType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB6E3C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__);
    byte_4CB6E3C = 1;
  }
  PK = (Il2CppObject *)ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&condType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ShopReleaseMaster__isExistCondType(
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
    sub_1C6BC60(EntitiyList, v6);
  }
  return 0;
}


bool ShopReleaseMaster__isQuestNotClearSet(
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
  il2cpp_array_size_t v12; // x10

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, (const MethodInfo *)questId);
  *questId = 0;
  if ( !EntitiyList )
LABEL_16:
    sub_1C6BC60(EntitiyList, v6);
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
      v12 = condValues->max_length;
      if ( v12 )
      {
        if ( !(_DWORD)v12 )
          sub_1C6BC68(EntitiyList);
        LODWORD(condValues) = condValues->m_Items[0];
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


void ShopReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6E41 & 1) == 0 )
  {
    sub_1C6BA08(&ShopReleaseMaster___c_TypeInfo);
    byte_4CB6E41 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ShopReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ShopReleaseMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ShopReleaseMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ShopReleaseMaster___c___ctor(ShopReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ShopReleaseMaster___c___GetEntitiyList_b__4_0(
        ShopReleaseMaster___c_o *this,
        ShopReleaseEntity_o *a,
        ShopReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C6BC60(this, a);
  return b->fields.priority - a->fields.priority;
}