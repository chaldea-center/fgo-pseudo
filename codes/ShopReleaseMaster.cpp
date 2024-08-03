void __fastcall ShopReleaseMaster___ctor(ShopReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCD05 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__, method);
    byte_49FCD05 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    120,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__);
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
    sub_1B64324(EntitiyList);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w23
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FCD06 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&shopId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v9);
    sub_1B640C8(&ShopReleaseEntity_TypeInfo, v10);
    byte_49FCD06 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopReleaseEntity__TypeInfo,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
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
        methodPtr_low = LOBYTE(ShopReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopReleaseEntity_TypeInfo
          && LODWORD(list->fields.items) == shopId )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v22 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v19;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(list);
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_19;
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v15,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_array *__fastcall ShopReleaseMaster__GetEntitiyList_39513948(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        bool isClosedDisp,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *list; // x0
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x21
  Il2CppClass *v22; // x1
  __int64 v23; // x2
  int32_t v24; // w24
  int32_t v25; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x19
  Il2CppObject *v32; // x20
  struct ShopReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3

  v4 = isClosedDisp;
  if ( (byte_49FCD07 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&shopId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_ShopReleaseEntity__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v13);
    sub_1B640C8(&ShopReleaseEntity_TypeInfo, v14);
    sub_1B640C8(&Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__, v15);
    sub_1B640C8(&ShopReleaseMaster___c_TypeInfo, v16);
    byte_49FCD07 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopReleaseEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v24,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v22 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(ShopReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ShopReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ShopReleaseEntity_TypeInfo
          && *((_DWORD *)list + 4) == shopId
          && (((*((_BYTE *)list + 44) != 0) ^ v4) & 1) == 0 )
        {
          if ( !v21 )
            break;
          items = v21->fields._items;
          v28 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
          ++v21->fields._version;
          if ( !items )
            break;
          size = v21->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v21->fields._size = size + 1;
            v30[4] = v22;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v22, v23, v25);
          }
        }
      }
      if ( Count == ++v24 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1B64324(list);
  }
LABEL_18:
  list = ShopReleaseMaster___c_TypeInfo;
  if ( !ShopReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopReleaseMaster___c_TypeInfo);
    list = ShopReleaseMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ShopReleaseMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ShopReleaseEntity__TypeInfo, v22, v23);
    System_Comparison_object____ctor(v31, v32, Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__, 0LL);
    static_fields = ShopReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ShopReleaseEntity__o *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v31, v34, v35);
  }
  if ( !v21 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_55243320(
    v21,
    v31,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__);
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v21,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
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

  if ( (byte_49FCD03 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_49FCD03 = 1;
  }
  PK = (Il2CppObject *)ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&priority);
  return (ShopReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_30D41FC *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ShopReleaseEntity__o *__fastcall ShopReleaseMaster__GetNotClearShopReleaseEntity(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x20
  _BOOL8 IsCondEnable; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x8
  int v14; // w22
  int v15; // w23
  Il2CppClass **v16; // x8
  Il2CppObject *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_49FCD08 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, *(_QWORD *)&shopId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v6);
    byte_49FCD08 = 1;
  }
  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopReleaseEntity__TypeInfo,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( !EntitiyList )
    goto LABEL_17;
  v13 = *(_QWORD *)&EntitiyList->max_length;
  v14 = v13 - 1;
  if ( (int)v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = &EntitiyList->obj.klass + v15;
      v17 = (Il2CppObject *)v16[4];
      if ( !v17 )
        break;
      IsCondEnable = ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)v16[4], v12);
      if ( !IsCondEnable )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v17,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
        }
      }
      if ( v14 == v15 )
        return (System_Collections_Generic_List_ShopReleaseEntity__o *)v10;
      if ( ++v15 >= EntitiyList->max_length )
        sub_1B6432C(IsCondEnable, v12);
    }
LABEL_17:
    sub_1B64324(IsCondEnable);
  }
  return (System_Collections_Generic_List_ShopReleaseEntity__o *)v10;
}


int32_t __fastcall ShopReleaseMaster__GetPurchaseShop(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_39513948; // x0
  __int64 v5; // x1
  int max_length; // w8
  int v7; // w9
  ShopReleaseEntity_o *v8; // x10
  struct System_Int32_array *condValues; // x8
  __int64 v10; // x9

  EntitiyList_39513948 = ShopReleaseMaster__GetEntitiyList_39513948(this, shopId, 0, v3);
  if ( !EntitiyList_39513948 )
LABEL_13:
    sub_1B64324(EntitiyList_39513948);
  max_length = EntitiyList_39513948->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = EntitiyList_39513948->m_Items[v7];
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
    sub_1B6432C(EntitiyList_39513948, v5);
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
    sub_1B64324(EntitiyList);
  if ( !condValues->max_length )
    sub_1B6432C(EntitiyList, v4);
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
        sub_1B6432C(IsCondEnable, v4);
    }
LABEL_12:
    sub_1B64324(EntitiyList);
  }
  v8 = 0;
  return !v8;
}


bool __fastcall ShopReleaseMaster__IsOpen(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_39513948; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x20
  ShopReleaseEntity_array *v7; // x19
  int v8; // w22
  bool v9; // w21

  EntitiyList_39513948 = ShopReleaseMaster__GetEntitiyList_39513948(this, shopId, 0, v3);
  if ( !EntitiyList_39513948 )
    goto LABEL_13;
  v6 = *(_QWORD *)&EntitiyList_39513948->max_length;
  v7 = EntitiyList_39513948;
  if ( (int)v6 >= 1 )
  {
    v8 = 1;
    v9 = 1;
    while ( 1 )
    {
      EntitiyList_39513948 = (ShopReleaseEntity_array *)v7->m_Items[v8 - 1];
      if ( !EntitiyList_39513948 )
        break;
      if ( !BYTE4(EntitiyList_39513948->m_Items[1]) )
      {
        EntitiyList_39513948 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(
                                                            (ShopReleaseEntity_o *)EntitiyList_39513948,
                                                            v5);
        if ( ((unsigned __int8)EntitiyList_39513948 & 1) == 0 )
          return !v9;
      }
      v9 = v8 < (int)v6;
      if ( (_DWORD)v6 == v8 )
        return !v9;
      if ( v8++ >= v7->max_length )
        sub_1B6432C(EntitiyList_39513948, v5);
    }
LABEL_13:
    sub_1B64324(EntitiyList_39513948);
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
  ShopReleaseEntity_array *EntitiyList_39513948; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x24
  ShopReleaseEntity_array *v12; // x21
  int v13; // w25
  bool v14; // w23
  ShopReleaseEntity_o *v15; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o **v19; // x0
  System_String_o *closedItemName; // x1
  System_String_o *PreparationConditionText; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  EntitiyList_39513948 = ShopReleaseMaster__GetEntitiyList_39513948(this, shopId, 1, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_39513948 )
LABEL_17:
    sub_1B64324(EntitiyList_39513948);
  v11 = *(_QWORD *)&EntitiyList_39513948->max_length;
  v12 = EntitiyList_39513948;
  if ( (int)v11 >= 1 )
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
        EntitiyList_39513948 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v15, v8);
        if ( (v15->fields.condType != 82) != ((unsigned __int8)EntitiyList_39513948 & 1) )
          goto LABEL_15;
      }
      else if ( v15->fields.condType == 82 )
      {
LABEL_15:
        PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v15, v8);
        *message = PreparationConditionText;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)message, (int32_t)PreparationConditionText, v22, v23);
        closedItemName = v15->fields.closedItemName;
        v19 = itemName;
        *itemName = closedItemName;
        goto LABEL_16;
      }
      v14 = v13 < (int)v11;
      if ( (_DWORD)v11 == v13 )
        goto LABEL_14;
      if ( v13++ >= v12->max_length )
        sub_1B6432C(EntitiyList_39513948, v8);
    }
  }
  v14 = 0;
LABEL_14:
  *message = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)message, 0, v9, v10);
  *itemName = 0LL;
  v19 = itemName;
  LODWORD(closedItemName) = 0;
LABEL_16:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v19, (int32_t)closedItemName, v17, v18);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__TryGetClosedMessage(
        ShopReleaseMaster_o *this,
        System_String_o **message,
        System_String_o **itemName,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList_39513948; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x24
  ShopReleaseEntity_array *v12; // x21
  int v13; // w25
  bool v14; // w23
  ShopReleaseEntity_o *v15; // x22
  System_String_o *PreparationConditionText; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *closedItemName; // x1
  System_String_o **v23; // x0

  EntitiyList_39513948 = ShopReleaseMaster__GetEntitiyList_39513948(this, shopId, 0, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_39513948 )
LABEL_15:
    sub_1B64324(EntitiyList_39513948);
  v11 = *(_QWORD *)&EntitiyList_39513948->max_length;
  v12 = EntitiyList_39513948;
  if ( (int)v11 < 1 )
  {
    v14 = 0;
LABEL_13:
    *message = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)message, 0, v9, v10);
    v23 = itemName;
    LODWORD(closedItemName) = 0;
    *itemName = 0LL;
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
      EntitiyList_39513948 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v15, v8);
      if ( ((unsigned __int8)EntitiyList_39513948 & 1) != 0 )
        break;
      v14 = v13 < (int)v11;
      if ( (_DWORD)v11 == v13 )
        goto LABEL_13;
      if ( v13++ >= v12->max_length )
        sub_1B6432C(EntitiyList_39513948, v8);
    }
    PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v15, v8);
    *message = PreparationConditionText;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)message, (int32_t)PreparationConditionText, v18, v19);
    closedItemName = v15->fields.closedItemName;
    v23 = itemName;
    *itemName = closedItemName;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v23, (int32_t)closedItemName, v20, v21);
  return v14;
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

  if ( (byte_49FCD04 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__, entity);
    byte_49FCD04 = 1;
  }
  PK = (Il2CppObject *)ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&condType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__isExistCondType(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t type,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  int max_length; // w8
  int v7; // w9
  bool v8; // w10
  ShopReleaseEntity_o *v9; // x11

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, *(const MethodInfo **)&type);
  if ( !EntitiyList )
    goto LABEL_10;
  max_length = EntitiyList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      v9 = EntitiyList->m_Items[v7];
      if ( !v9 )
        break;
      if ( v9->fields.condType != type )
      {
        v8 = ++v7 < max_length;
        if ( max_length != v7 )
          continue;
      }
      return v8;
    }
LABEL_10:
    sub_1B64324(EntitiyList);
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
    sub_1B64324(EntitiyList);
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
          sub_1B6432C(EntitiyList, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCD09 & 1) == 0 )
  {
    sub_1B640C8(&ShopReleaseMaster___c_TypeInfo, v1);
    byte_49FCD09 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ShopReleaseMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ShopReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ShopReleaseMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ShopReleaseMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}