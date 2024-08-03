void __fastcall ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCCE2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__, method);
    byte_49FCCE2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    239,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopGroupMaster__CheckIncludeGroupItemType(
        ShopGroupMaster_o *this,
        int32_t groupId,
        bool *item,
        bool *servant,
        bool *equip,
        bool *quest,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x23
  const MethodInfo *v23; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v25; // x24
  Il2CppObject *Instance; // x0
  __int64 v27; // x8
  int v28; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x25
  int v30; // w29
  ShopGroupEntity_o *v31; // x8
  const MethodInfo *v32; // x1
  ShopEntity_o *v33; // x26
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  int v40; // w28
  int32_t v41; // w24
  int klass; // w8
  ShopEntity_o *v43; // x25
  bool *v44; // x9
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v46; // x1

  if ( (byte_49FCCE5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&groupId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_49FCCE5 = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       item);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v23);
  if ( TargetEntityList )
  {
    v25 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
      v27 = *(_QWORD *)&v25->max_length;
      v28 = v27 - 1;
      if ( (int)v27 >= 1 )
      {
        v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v30 = 0;
        while ( 1 )
        {
          v31 = v25->m_Items[v30];
          if ( !v31 || !v29 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v29,
                       v31->fields.shopId,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v33 = (ShopEntity_o *)Instance;
            Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, v32);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v33, v32);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v22 )
                  break;
                items = v22->fields._items;
                v37 = Method_System_Collections_Generic_List_ShopEntity__Add__;
                ++v22->fields._version;
                if ( !items )
                  break;
                size = v22->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v22,
                    (Il2CppObject *)v33,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                }
                else
                {
                  v39 = &items->obj.klass + size;
                  v22->fields._size = size + 1;
                  v39[4] = (Il2CppClass *)v33;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v33, v34, v35);
                }
              }
            }
          }
          if ( v28 == v30 )
            goto LABEL_21;
          if ( ++v30 >= v25->max_length )
            sub_1B6432C(Instance, v32);
        }
LABEL_38:
        sub_1B64324(Instance);
      }
LABEL_21:
      if ( v22 )
      {
        v40 = v22->fields._size;
        if ( v40 >= 1 )
        {
          v41 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_object___get_Item(
                         v22,
                         v41,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
            if ( !Instance )
              goto LABEL_38;
            klass = (int)Instance[3].klass;
            v43 = (ShopEntity_o *)Instance;
            v44 = item;
            if ( klass == 1 )
              goto LABEL_35;
            if ( klass == 6 )
              break;
            if ( klass == 4 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(v43, v46);
              if ( !MasterData_object )
                goto LABEL_38;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (int32_t)Instance,
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_38;
              if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
                v44 = equip;
              else
                v44 = servant;
              goto LABEL_35;
            }
LABEL_36:
            if ( v40 == ++v41 )
              return;
          }
          v44 = quest;
LABEL_35:
          *v44 = 1;
          goto LABEL_36;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopGroupMaster__GetBuyableCount(ShopGroupMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  const MethodInfo *v12; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v14; // x20
  Il2CppObject *Master_object; // x0
  __int64 v16; // x8
  int v17; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  int v19; // w24
  ShopGroupEntity_o *v20; // x8
  const MethodInfo *v21; // x1
  ShopEntity_o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_49FCCE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, *(_QWORD *)&groupId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ShopEntity__TypeInfo, v10);
    byte_49FCCE4 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v12);
  if ( TargetEntityList )
  {
    v14 = TargetEntityList;
    if ( !*(_QWORD *)&TargetEntityList->max_length )
      goto LABEL_24;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
    v16 = *(_QWORD *)&v14->max_length;
    v17 = v16 - 1;
    if ( (int)v16 >= 1 )
    {
      v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v19 = 0;
      while ( 1 )
      {
        v20 = v14->m_Items[v19];
        if ( !v20 || !v18 )
          break;
        Master_object = DataMasterBase_object__object__int___GetEntity(
                          v18,
                          v20->fields.shopId,
                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_object )
        {
          v22 = (ShopEntity_o *)Master_object;
          Master_object = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Master_object, v21);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (Il2CppObject *)ShopEntity__IsSoldOut(v22, v21);
            if ( ((unsigned __int8)Master_object & 1) == 0 )
            {
              if ( !v11 )
                break;
              items = v11->fields._items;
              v26 = Method_System_Collections_Generic_List_ShopEntity__Add__;
              ++v11->fields._version;
              if ( !items )
                break;
              size = v11->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v11,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                v11->fields._size = size + 1;
                v28[4] = (Il2CppClass *)v22;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
              }
            }
          }
        }
        if ( v17 == v19 )
          goto LABEL_22;
        if ( ++v19 >= v14->max_length )
          sub_1B6432C(Master_object, v21);
      }
      sub_1B64324(Master_object);
    }
LABEL_22:
    if ( v11 )
      LODWORD(TargetEntityList) = v11->fields._size;
    else
LABEL_24:
      LODWORD(TargetEntityList) = 0;
  }
  return (int)TargetEntityList;
}


// local variable allocation has failed, the output may be wrong!
ShopGroupEntity_o *__fastcall ShopGroupMaster__GetEntity(
        ShopGroupMaster_o *this,
        int32_t shopId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCCE0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_49FCCE0 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D41FC *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ShopGroupEntity_array *__fastcall ShopGroupMaster__GetTargetEntityList(
        ShopGroupMaster_o *this,
        int32_t groupId,
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
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FCCE3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo, v9);
    sub_1B640C8(&ShopGroupEntity_TypeInfo, v10);
    byte_49FCCE3 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ShopGroupEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
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
      if ( !list )
        break;
      v17 = list;
      methodPtr_low = LOBYTE(ShopGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopGroupEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == groupId )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v20 = Method_System_Collections_Generic_List_ShopGroupEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v17, v15, v16);
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(list);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (ShopGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopGroupMaster__TryGetEntity(
        ShopGroupMaster_o *this,
        ShopGroupEntity_o **entity,
        int32_t shopId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FCCE1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__, entity);
    byte_49FCCE1 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}