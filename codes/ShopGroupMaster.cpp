void ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939245 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
    byte_5939245 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    247,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
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
  System_Collections_Generic_List_object__o *v12; // x23
  const MethodInfo *v13; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v15; // x24
  Il2CppObject *Instance; // x0
  const MethodInfo *v17; // x1
  il2cpp_array_size_t max_length; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x25
  __int64 v20; // x29
  ShopGroupEntity_o *v21; // x8
  ShopEntity_o *v22; // x26
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int v33; // w27
  int32_t v34; // w24
  int klass; // w8
  ShopEntity_o *v36; // x25
  bool *v37; // x9
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v39; // x1

  if ( (byte_5939248 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939248 = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v13);
  if ( TargetEntityList )
  {
    v15 = TargetEntityList;
    if ( TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_37;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v15->max_length;
      if ( (int)max_length >= 1 )
      {
        v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v20 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v20 >= LODWORD(v15->max_length) )
            sub_21FFED4(Instance);
          v21 = v15->m_Items[v20];
          if ( !v21 || !v19 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v19,
                       v21->fields.shopId,
                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v22 = (ShopEntity_o *)Instance;
            Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, v17);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v22, v17);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v12 )
                  break;
                items = v12->fields._items;
                v30 = Method_System_Collections_Generic_List_ShopEntity__Add__;
                ++v12->fields._version;
                if ( !items )
                  break;
                size = v12->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v12,
                    (Il2CppObject *)v22,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v32 = &items->obj.klass + size;
                  v12->fields._size = size + 1;
                  v32[4] = (Il2CppClass *)v22;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v22, v23, v24, v25, v26, v27, v28);
                }
              }
            }
          }
          if ( (_DWORD)max_length == (_DWORD)++v20 )
            goto LABEL_20;
        }
LABEL_37:
        sub_21FFECC(Instance, v17);
      }
LABEL_20:
      if ( v12 )
      {
        v33 = v12->fields._size;
        if ( v33 >= 1 )
        {
          v34 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_object___get_Item(
                         v12,
                         v34,
                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
            if ( !Instance )
              goto LABEL_37;
            klass = (int)Instance[3].klass;
            v36 = (ShopEntity_o *)Instance;
            v37 = item;
            if ( klass == 1 )
              goto LABEL_34;
            if ( klass == 6 )
              break;
            if ( klass == 4 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_37;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
              Instance = (Il2CppObject *)ShopEntity__get_TargetId(v36, v39);
              if ( !MasterData_object )
                goto LABEL_37;
              Instance = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (int32_t)Instance,
                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_37;
              if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0) )
                v37 = equip;
              else
                v37 = servant;
              goto LABEL_34;
            }
LABEL_35:
            if ( v33 == ++v34 )
              return;
          }
          v37 = quest;
LABEL_34:
          *v37 = 1;
          goto LABEL_35;
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
  __int64 v8; // x1
  ShopGroupEntity_array *v9; // x20
  Il2CppObject *Master_object; // x0
  const MethodInfo *v11; // x1
  il2cpp_array_size_t max_length; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  __int64 v14; // x24
  ShopGroupEntity_o *v15; // x8
  ShopEntity_o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_5939247 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ShopMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_5939247 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v6);
  if ( TargetEntityList )
  {
    v9 = TargetEntityList;
    if ( !TargetEntityList->max_length )
      goto LABEL_23;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopMaster___);
    max_length = v9->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      v14 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= LODWORD(v9->max_length) )
          sub_21FFED4(Master_object);
        v15 = v9->m_Items[v14];
        if ( !v15 || !v13 )
          break;
        Master_object = DataMasterBase_object__object__int___GetEntity(
                          v13,
                          v15->fields.shopId,
                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_object )
        {
          v16 = (ShopEntity_o *)Master_object;
          Master_object = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Master_object, v11);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (Il2CppObject *)ShopEntity__IsSoldOut(v16, v11);
            if ( ((unsigned __int8)Master_object & 1) == 0 )
            {
              if ( !v5 )
                break;
              items = v5->fields._items;
              v24 = Method_System_Collections_Generic_List_ShopEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                break;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)v16,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v26[4] = (Il2CppClass *)v16;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
              }
            }
          }
        }
        if ( (_DWORD)max_length == (_DWORD)++v14 )
          goto LABEL_21;
      }
      sub_21FFECC(Master_object, v11);
    }
LABEL_21:
    if ( v5 )
      LODWORD(TargetEntityList) = v5->fields._size;
    else
LABEL_23:
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

  if ( (byte_5939243 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
    byte_5939243 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5939246 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
    byte_5939246 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ShopGroupEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( HIDWORD(list->fields.items) == groupId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v17 = Method_System_Collections_Generic_List_ShopGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (ShopGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
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

  if ( (byte_5939244 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
    byte_5939244 = 1;
  }
  PK = (Il2CppObject *)ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}