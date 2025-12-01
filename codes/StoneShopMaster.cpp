void StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC808F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
    byte_4CC808F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    48,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
}


StoneShopEntity_array *StoneShopMaster__GetEnableEntitiyList(StoneShopMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_ObjectModel_Collection_T__o *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4CC8090 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC8090 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
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
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
      if ( list )
      {
        v5 = list;
        if ( Time >= SLODWORD(list[2].klass) && Time <= SHIDWORD(list[2].klass) )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v16 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v5;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v5, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C71608(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


StoneShopEntity_array *StoneShopMaster__GetEnableEntitiyList_43235388(
        StoneShopMaster_o *this,
        int32_t effect,
        const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_ObjectModel_Collection_T__o *v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v9; // w23
  int32_t v10; // w24
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4CC8091 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC8091 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = (int)list;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
      if ( list )
      {
        v7 = list;
        if ( LODWORD(list[1].fields.items) == effect
          && Time >= SLODWORD(list[2].klass)
          && Time <= SHIDWORD(list[2].klass) )
        {
          if ( !v6 )
            break;
          items = v6->fields._items;
          v18 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v7;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C71608(list, v7);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_21;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v2; // x1
  const MethodInfo *v3; // x2

  if ( (byte_4CC8093 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_StoneShopMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC8093 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_object )
    sub_1C71608(0, v2);
  return StoneShopMaster__GetPrice((StoneShopMaster_o *)Master_object, 5, v3);
}


int32_t StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC8092 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
    byte_4CC8092 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3408ECC *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1C71608(v5, v6);
  return *(_DWORD *)((char *)&qword_28 + (_QWORD)entity + 4);
}