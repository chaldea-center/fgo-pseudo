void ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27DFA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
    byte_4C27DFA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    245,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
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
  __int64 v18; // x1
  il2cpp_array_size_t max_length; // x8
  int v20; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x25
  int v22; // w29
  ShopGroupEntity_o *v23; // x8
  __int64 v24; // x2
  ShopEntity_o *v25; // x26
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int v31; // w28
  int32_t v32; // w24
  int klass; // w8
  ShopEntity_o *v34; // x25
  bool *v35; // x9
  Il2CppObject *MasterData_object; // x26

  if ( (byte_4C27DFD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C2D490(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27DFD = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v14);
  if ( TargetEntityList )
  {
    v16 = TargetEntityList;
    if ( TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v16->max_length;
      v20 = max_length - 1;
      if ( (int)max_length >= 1 )
      {
        v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v22 = 0;
        while ( 1 )
        {
          v23 = v16->m_Items[v22];
          if ( !v23 || !v21 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v21,
                       v23->fields.shopId,
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v25 = (ShopEntity_o *)Instance;
            Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v25, 0);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v13 )
                  break;
                items = v13->fields._items;
                v28 = Method_System_Collections_Generic_List_ShopEntity__Add__;
                ++v13->fields._version;
                if ( !items )
                  break;
                size = v13->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v13,
                    (Il2CppObject *)v25,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                }
                else
                {
                  v30 = &items->obj.klass + size;
                  v13->fields._size = size + 1;
                  v30[4] = (Il2CppClass *)v25;
                  sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v25, v24, v26);
                }
              }
            }
          }
          if ( v20 == v22 )
            goto LABEL_21;
          if ( (unsigned int)++v22 >= LODWORD(v16->max_length) )
            sub_1C2D6F4(Instance, v18, v24);
        }
LABEL_38:
        sub_1C2D6EC(Instance, v18);
      }
LABEL_21:
      if ( v13 )
      {
        v31 = v13->fields._size;
        if ( v31 >= 1 )
        {
          v32 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_object___get_Item(
                         v13,
                         v32,
                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
            if ( !Instance )
              goto LABEL_38;
            klass = (int)Instance[3].klass;
            v34 = (ShopEntity_o *)Instance;
            v35 = item;
            if ( klass == 1 )
              goto LABEL_35;
            if ( klass == 6 )
              break;
            if ( klass == 4 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_38;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(v34, 0);
              if ( !MasterData_object )
                goto LABEL_38;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (int32_t)Instance,
                           (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_38;
              if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0) )
                v35 = equip;
              else
                v35 = servant;
              goto LABEL_35;
            }
LABEL_36:
            if ( v31 == ++v32 )
              return;
          }
          v35 = quest;
LABEL_35:
          *v35 = 1;
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
  __int64 v10; // x1
  il2cpp_array_size_t max_length; // x8
  int v12; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  int v14; // w24
  ShopGroupEntity_o *v15; // x8
  __int64 v16; // x2
  ShopEntity_o *v17; // x22
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4C27DFC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_4C27DFC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v6);
  if ( TargetEntityList )
  {
    v8 = TargetEntityList;
    if ( !TargetEntityList->max_length )
      goto LABEL_24;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopMaster___);
    max_length = v8->max_length;
    v12 = max_length - 1;
    if ( (int)max_length >= 1 )
    {
      v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v14 = 0;
      while ( 1 )
      {
        v15 = v8->m_Items[v14];
        if ( !v15 || !v13 )
          break;
        Master_object = DataMasterBase_object__object__int___GetEntity(
                          v13,
                          v15->fields.shopId,
                          (const MethodInfo_3387D98 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_object )
        {
          v17 = (ShopEntity_o *)Master_object;
          Master_object = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Master_object, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (Il2CppObject *)ShopEntity__IsSoldOut(v17, 0);
            if ( ((unsigned __int8)Master_object & 1) == 0 )
            {
              if ( !v5 )
                break;
              items = v5->fields._items;
              v20 = Method_System_Collections_Generic_List_ShopEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)v17,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
              }
              else
              {
                v22 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v22[4] = (Il2CppClass *)v17;
                sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v17, v16, v18);
              }
            }
          }
        }
        if ( v12 == v14 )
          goto LABEL_22;
        if ( (unsigned int)++v14 >= LODWORD(v8->max_length) )
          sub_1C2D6F4(Master_object, v10, v16);
      }
      sub_1C2D6EC(Master_object, v10);
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

  if ( (byte_4C27DF8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
    byte_4C27DF8 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_338C850 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
}


ShopGroupEntity_array *ShopGroupMaster__GetTargetEntityList(
        ShopGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C27DFB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
    byte_4C27DFB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
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
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (ShopGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
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

  if ( (byte_4C27DF9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
    byte_4C27DF9 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}