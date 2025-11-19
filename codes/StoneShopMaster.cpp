void StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F67 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
    byte_4CB6F67 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    48,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4CB6F68 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6F68 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
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
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
      if ( list )
      {
        v5 = list;
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
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v5;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v5, v9, v10);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C6BC60(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


StoneShopEntity_array *StoneShopMaster__GetEnableEntitiyList_43191312(
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
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4CB6F69 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6F69 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Count__);
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
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_StoneShopEntity__get_Item__);
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
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v7;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v7, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C6BC60(list, v7);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_21;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v2; // x1
  const MethodInfo *v3; // x2

  if ( (byte_4CB6F6B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_StoneShopMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB6F6B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v2);
  return StoneShopMaster__GetPrice((StoneShopMaster_o *)Master_object, 5, v3);
}


int32_t StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB6F6A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
    byte_4CB6F6A = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1C6BC60(v5, v6);
  return *(_DWORD *)((char *)&qword_28 + (_QWORD)entity + 4);
}