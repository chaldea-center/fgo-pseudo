void StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38649 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
    byte_4C38649 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    48,
    (const MethodInfo_3394514 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
}


StoneShopEntity_array *StoneShopMaster__GetEnableEntitiyList(StoneShopMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w22
  int32_t v7; // w23
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C3864A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3864A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
      if ( list )
      {
        v10 = list;
        if ( Time >= SLODWORD(list[2].klass) && Time <= SHIDWORD(list[2].klass) )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v12 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v10;
            sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C32E7C(list);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


StoneShopEntity_array *StoneShopMaster__GetEnableEntitiyList_42847268(
        StoneShopMaster_o *this,
        int32_t effect,
        const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w23
  int32_t v9; // w24
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4C3864B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3864B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
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
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
      if ( list )
      {
        v12 = list;
        if ( LODWORD(list[1].fields.items) == effect
          && Time >= SLODWORD(list[2].klass)
          && Time <= SHIDWORD(list[2].klass) )
        {
          if ( !v6 )
            break;
          items = v6->fields._items;
          v14 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v12;
            sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C32E7C(list);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_21;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v2; // x2

  if ( (byte_4C3864D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_StoneShopMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3864D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  return StoneShopMaster__GetPrice((StoneShopMaster_o *)Master_object, 5, v2);
}


int32_t StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3864C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
    byte_4C3864C = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3396884 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1C32E7C(v5);
  return *(_DWORD *)((char *)&qword_28 + (_QWORD)entity + 4);
}