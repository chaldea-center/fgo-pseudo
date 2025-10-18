void ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43AF6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
    byte_4C43AF6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    245,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
}


void ShopGroupMaster__CheckIncludeGroupItemType(
        ShopGroupMaster_o *this,
        int32_t groupId,
        bool *item,
        bool *servant,
        bool *equip,
        bool *quest,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v13; // x23
  const MethodInfo *v14; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v16; // x24
  Il2CppObject *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  int v19; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x25
  int v21; // w29
  ShopGroupEntity_o *v22; // x8
  ShopEntity_o *v23; // x26
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  int v30; // w28
  int32_t v31; // w24
  int klass; // w8
  ShopEntity_o *v33; // x25
  bool *v34; // x9
  Il2CppObject *MasterData_object; // x26

  if ( (byte_4C43AF9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43AF9 = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v14);
  if ( TargetEntityList )
  {
    v16 = TargetEntityList;
    if ( TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v16->max_length;
      v19 = max_length - 1;
      if ( (int)max_length >= 1 )
      {
        v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v21 = 0;
        while ( 1 )
        {
          v22 = v16->m_Items[v21];
          if ( !v22 || !v20 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v20,
                       v22->fields.shopId,
                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v23 = (ShopEntity_o *)Instance;
            Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v23, 0);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v13 )
                  break;
                items = v13->fields._items;
                v27 = Method_System_Collections_Generic_List_ShopEntity__Add__;
                ++v13->fields._version;
                if ( !items )
                  break;
                size = v13->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v13,
                    (Il2CppObject *)v23,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                }
                else
                {
                  v29 = &items->obj.klass + size;
                  v13->fields._size = size + 1;
                  v29[4] = (Il2CppClass *)v23;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v23, v24, v25);
                }
              }
            }
          }
          if ( v19 == v21 )
            goto LABEL_21;
          if ( (unsigned int)++v21 >= LODWORD(v16->max_length) )
            sub_1C372BC(Instance);
        }
LABEL_38:
        sub_1C372B4(Instance);
      }
LABEL_21:
      if ( v13 )
      {
        v30 = v13->fields._size;
        if ( v30 >= 1 )
        {
          v31 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_object___get_Item(
                         v13,
                         v31,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
            if ( !Instance )
              goto LABEL_38;
            klass = (int)Instance[3].klass;
            v33 = (ShopEntity_o *)Instance;
            v34 = item;
            if ( klass == 1 )
              goto LABEL_35;
            if ( klass == 6 )
              break;
            if ( klass == 4 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(v33, 0);
              if ( !MasterData_object )
                goto LABEL_38;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (int32_t)Instance,
                           (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_38;
              if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0) )
                v34 = equip;
              else
                v34 = servant;
              goto LABEL_35;
            }
LABEL_36:
            if ( v30 == ++v31 )
              return;
          }
          v34 = quest;
LABEL_35:
          *v34 = 1;
          goto LABEL_36;
        }
      }
    }
  }
}


int32_t ShopGroupMaster__GetBuyableCount(ShopGroupMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v8; // x20
  Il2CppObject *Master_object; // x0
  il2cpp_array_size_t max_length; // x8
  int v11; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  int v13; // w24
  ShopGroupEntity_o *v14; // x8
  ShopEntity_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C43AF8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4C43AF8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v6);
  if ( TargetEntityList )
  {
    v8 = TargetEntityList;
    if ( !TargetEntityList->max_length )
      goto LABEL_24;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopMaster___);
    max_length = v8->max_length;
    v11 = max_length - 1;
    if ( (int)max_length >= 1 )
    {
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v13 = 0;
      while ( 1 )
      {
        v14 = v8->m_Items[v13];
        if ( !v14 || !v12 )
          break;
        Master_object = DataMasterBase_object__object__int___GetEntity(
                          v12,
                          v14->fields.shopId,
                          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_object )
        {
          v15 = (ShopEntity_o *)Master_object;
          Master_object = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Master_object, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (Il2CppObject *)ShopEntity__IsSoldOut(v15, 0);
            if ( ((unsigned __int8)Master_object & 1) == 0 )
            {
              if ( !v5 )
                break;
              items = v5->fields._items;
              v19 = Method_System_Collections_Generic_List_ShopEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)v15,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              }
              else
              {
                v21 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v21[4] = (Il2CppClass *)v15;
                sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
              }
            }
          }
        }
        if ( v11 == v13 )
          goto LABEL_22;
        if ( (unsigned int)++v13 >= LODWORD(v8->max_length) )
          sub_1C372BC(Master_object);
      }
      sub_1C372B4(Master_object);
    }
LABEL_22:
    if ( v5 )
      LODWORD(TargetEntityList) = v5->fields._size;
    else
LABEL_24:
      LODWORD(TargetEntityList) = 0;
  }
  return (int)TargetEntityList;
}


// local variable allocation has failed, the output may be wrong!
ShopGroupEntity_o *ShopGroupMaster__GetEntity(
        ShopGroupMaster_o *this,
        int32_t shopId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43AF4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
    byte_4C43AF4 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_33A5B58 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
}


ShopGroupEntity_array *ShopGroupMaster__GetTargetEntityList(
        ShopGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C43AF7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
    byte_4C43AF7 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( HIDWORD(list->fields.items) == groupId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_ShopGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v11;
          sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C372B4(list);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (ShopGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool ShopGroupMaster__TryGetEntity(
        ShopGroupMaster_o *this,
        ShopGroupEntity_o **entity,
        int32_t shopId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C43AF5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
    byte_4C43AF5 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}