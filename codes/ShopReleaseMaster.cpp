void __fastcall ShopReleaseMaster___ctor(ShopReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C07 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__, method, v2);
    byte_4B16C07 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    120,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__);
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
    sub_1BCAA3C(EntitiyList, v6);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  v3 = shopId;
  if ( (byte_4B16C08 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&shopId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&ShopReleaseEntity_TypeInfo, v15, v16);
    byte_4B16C08 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopReleaseEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&shopId = list;
        methodPtr_low = LOBYTE(ShopReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ShopReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ShopReleaseEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v32 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v34[4] = *(Il2CppClass **)&shopId;
            sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), *(int64_t *)&shopId, v24, v25, v26, v27, v28, v29);
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, *(_QWORD *)&shopId);
  }
LABEL_17:
  if ( !v22 )
    goto LABEL_19;
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v22,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_array *__fastcall ShopReleaseMaster__GetEntitiyList_40659516(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        bool isClosedDisp,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  int32_t v5; // w20
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
  void *list; // x0
  int32_t Count; // w23
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_object__o *v32; // x21
  int64_t v33; // x2
  __int64 v34; // x3
  int32_t v35; // w24
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Comparison_T__o *v45; // x19
  Il2CppObject *v46; // x20
  struct ShopReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  v4 = isClosedDisp;
  v5 = shopId;
  if ( (byte_4B16C09 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&shopId,
      isClosedDisp);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_ShopReleaseEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&ShopReleaseEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__, v23, v24);
    sub_1BCA7E0(&ShopReleaseMaster___c_TypeInfo, v25, v26);
    byte_4B16C09 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopReleaseEntity__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v35,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&shopId = list;
        methodPtr_low = LOBYTE(ShopReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ShopReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ShopReleaseEntity_TypeInfo
          && *((_DWORD *)list + 4) == v5
          && (((*((_BYTE *)list + 44) != 0) ^ v4) & 1) == 0 )
        {
          if ( !v32 )
            break;
          items = v32->fields._items;
          v42 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
          ++v32->fields._version;
          if ( !items )
            break;
          size = v32->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v32->fields._size = size + 1;
            v44[4] = *(Il2CppClass **)&shopId;
            sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), *(int64_t *)&shopId, v33, v34, v36, v37, v38, v39);
          }
        }
      }
      if ( Count == ++v35 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1BCAA3C(list, *(_QWORD *)&shopId);
  }
LABEL_18:
  list = ShopReleaseMaster___c_TypeInfo;
  if ( !ShopReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopReleaseMaster___c_TypeInfo, *(_QWORD *)&shopId);
    list = ShopReleaseMaster___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&shopId);
      list = ShopReleaseMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)list + 23);
    v45 = (System_Comparison_T__o *)sub_1BCAA2C(
                                      System_Comparison_ShopReleaseEntity__TypeInfo,
                                      *(_QWORD *)&shopId,
                                      v33,
                                      v34);
    System_Comparison_object____ctor(v45, v46, Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__, 0LL);
    static_fields = ShopReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ShopReleaseEntity__o *)v45;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v45, v48, v49, v50, v51, v52, v53);
  }
  if ( !v32 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_56244000(
    v32,
    v45,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__);
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v32,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
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

  if ( (byte_4B16C05 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__,
      *(_QWORD *)&shopId,
      *(_QWORD *)&condType);
    byte_4B16C05 = 1;
  }
  PK = (Il2CppObject *)ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&priority);
  return (ShopReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31B3198 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ShopReleaseEntity__o *__fastcall ShopReleaseMaster__GetNotClearShopReleaseEntity(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  _BOOL8 IsCondEnable; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x8
  int v17; // w22
  int v18; // w23
  Il2CppClass **v19; // x8
  Il2CppObject *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B16C0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, *(_QWORD *)&shopId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v7, v8);
    byte_4B16C0A = 1;
  }
  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopReleaseEntity__TypeInfo,
                                                       v10,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( !EntitiyList )
    goto LABEL_17;
  v16 = *(_QWORD *)&EntitiyList->max_length;
  v17 = v16 - 1;
  if ( (int)v16 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = &EntitiyList->obj.klass + v18;
      v20 = (Il2CppObject *)v19[4];
      if ( !v20 )
        break;
      IsCondEnable = ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)v19[4], v15);
      if ( !IsCondEnable )
      {
        if ( !v13 )
          break;
        items = v13->fields._items;
        v28 = Method_System_Collections_Generic_List_ShopReleaseEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          break;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            v20,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v20;
          sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
        }
      }
      if ( v17 == v18 )
        return (System_Collections_Generic_List_ShopReleaseEntity__o *)v13;
      if ( ++v18 >= EntitiyList->max_length )
        sub_1BCAA44(IsCondEnable, v15);
    }
LABEL_17:
    sub_1BCAA3C(IsCondEnable, v15);
  }
  return (System_Collections_Generic_List_ShopReleaseEntity__o *)v13;
}


int32_t __fastcall ShopReleaseMaster__GetPurchaseShop(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_40659516; // x0
  __int64 v5; // x1
  int max_length; // w8
  int v7; // w9
  ShopReleaseEntity_o *v8; // x10
  struct System_Int32_array *condValues; // x8
  __int64 v10; // x9

  EntitiyList_40659516 = ShopReleaseMaster__GetEntitiyList_40659516(this, shopId, 0, v3);
  if ( !EntitiyList_40659516 )
LABEL_13:
    sub_1BCAA3C(EntitiyList_40659516, v5);
  max_length = EntitiyList_40659516->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = EntitiyList_40659516->m_Items[v7];
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
    sub_1BCAA44(EntitiyList_40659516, v5);
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
    sub_1BCAA3C(EntitiyList, v4);
  if ( !condValues->max_length )
    sub_1BCAA44(EntitiyList, v4);
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
        sub_1BCAA44(IsCondEnable, v4);
    }
LABEL_12:
    sub_1BCAA3C(EntitiyList, v4);
  }
  v8 = 0;
  return !v8;
}


bool __fastcall ShopReleaseMaster__IsOpen(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_40659516; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x20
  ShopReleaseEntity_array *v7; // x19
  int v8; // w22
  bool v9; // w21

  EntitiyList_40659516 = ShopReleaseMaster__GetEntitiyList_40659516(this, shopId, 0, v3);
  if ( !EntitiyList_40659516 )
    goto LABEL_13;
  v6 = *(_QWORD *)&EntitiyList_40659516->max_length;
  v7 = EntitiyList_40659516;
  if ( (int)v6 >= 1 )
  {
    v8 = 1;
    v9 = 1;
    while ( 1 )
    {
      EntitiyList_40659516 = (ShopReleaseEntity_array *)v7->m_Items[v8 - 1];
      if ( !EntitiyList_40659516 )
        break;
      if ( !BYTE4(EntitiyList_40659516->m_Items[1]) )
      {
        EntitiyList_40659516 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(
                                                            (ShopReleaseEntity_o *)EntitiyList_40659516,
                                                            v5);
        if ( ((unsigned __int8)EntitiyList_40659516 & 1) == 0 )
          return !v9;
      }
      v9 = v8 < (int)v6;
      if ( (_DWORD)v6 == v8 )
        return !v9;
      if ( v8++ >= v7->max_length )
        sub_1BCAA44(EntitiyList_40659516, v5);
    }
LABEL_13:
    sub_1BCAA3C(EntitiyList_40659516, v5);
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
  ShopReleaseEntity_array *EntitiyList_40659516; // x0
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

  EntitiyList_40659516 = ShopReleaseMaster__GetEntitiyList_40659516(this, shopId, 1, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_40659516 )
LABEL_17:
    sub_1BCAA3C(EntitiyList_40659516, v8);
  v15 = *(_QWORD *)&EntitiyList_40659516->max_length;
  v16 = EntitiyList_40659516;
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
        EntitiyList_40659516 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v19, v8);
        if ( (v19->fields.condType != 82) != ((unsigned __int8)EntitiyList_40659516 & 1) )
          goto LABEL_15;
      }
      else if ( v19->fields.condType == 82 )
      {
LABEL_15:
        PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v19, v8);
        *message = PreparationConditionText;
        sub_1BCA784(
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
        sub_1BCAA44(EntitiyList_40659516, v8);
    }
  }
  v18 = 0;
LABEL_14:
  *message = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)message, 0LL, v9, v10, v11, v12, v13, v14);
  *itemName = 0LL;
  v27 = itemName;
  closedItemName = 0LL;
LABEL_16:
  sub_1BCA784((PartyOrganizationUtility_o *)v27, (int64_t)closedItemName, v21, v22, v23, v24, v25, v26);
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
  ShopReleaseEntity_array *EntitiyList_40659516; // x0
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

  EntitiyList_40659516 = ShopReleaseMaster__GetEntitiyList_40659516(this, shopId, 0, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_40659516 )
LABEL_15:
    sub_1BCAA3C(EntitiyList_40659516, v8);
  v15 = *(_QWORD *)&EntitiyList_40659516->max_length;
  v16 = EntitiyList_40659516;
  if ( (int)v15 < 1 )
  {
    v18 = 0;
LABEL_13:
    *message = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)message, 0LL, v9, v10, v11, v12, v13, v14);
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
      EntitiyList_40659516 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v19, v8);
      if ( ((unsigned __int8)EntitiyList_40659516 & 1) != 0 )
        break;
      v18 = v17 < (int)v15;
      if ( (_DWORD)v15 == v17 )
        goto LABEL_13;
      if ( v17++ >= v16->max_length )
        sub_1BCAA44(EntitiyList_40659516, v8);
    }
    PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v19, v8);
    *message = PreparationConditionText;
    sub_1BCA784((PartyOrganizationUtility_o *)message, (int64_t)PreparationConditionText, v22, v23, v24, v25, v26, v27);
    closedItemName = v19->fields.closedItemName;
    v35 = itemName;
    *itemName = closedItemName;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v35, (int64_t)closedItemName, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_4B16C06 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&shopId);
    byte_4B16C06 = 1;
  }
  PK = (Il2CppObject *)ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&condType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__);
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
    sub_1BCAA3C(EntitiyList, v6);
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
    sub_1BCAA3C(EntitiyList, v6);
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
          sub_1BCAA44(EntitiyList, v6);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16C0B & 1) == 0 )
  {
    sub_1BCA7E0(&ShopReleaseMaster___c_TypeInfo, v1, v2);
    byte_4B16C0B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ShopReleaseMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ShopReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ShopReleaseMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ShopReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}