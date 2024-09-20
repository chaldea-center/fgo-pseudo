void __fastcall StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC58 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
    byte_4A5BC58 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    44,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
}


StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList(
        StoneShopMaster_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_ObjectModel_Collection_T__o *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5BC59 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StoneShopEntity_TypeInfo);
    byte_4A5BC59 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v5 = list;
        methodPtr_low = LOBYTE(StoneShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (StoneShopEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == StoneShopEntity_TypeInfo
          && Time >= SLODWORD(list[2].klass)
          && Time <= SHIDWORD(list[2].klass) )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v13 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v5;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v5, v9, v10);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(list, v5);
  }
LABEL_20:
  if ( !v4 )
    goto LABEL_22;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList_39995148(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5BC5A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StoneShopEntity_TypeInfo);
    byte_4A5BC5A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v7 = list;
        methodPtr_low = LOBYTE(StoneShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (StoneShopEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == StoneShopEntity_TypeInfo
          && LODWORD(list[1].fields.items) == effect
          && Time >= SLODWORD(list[2].klass)
          && Time <= SHIDWORD(list[2].klass) )
        {
          if ( !v6 )
            break;
          items = v6->fields._items;
          v15 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v7, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(list, v7);
  }
LABEL_21:
  if ( !v6 )
    goto LABEL_23;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t __fastcall StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v2; // x1
  const MethodInfo *v3; // x2

  if ( (byte_4A5BC5C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_StoneShopMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5BC5C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v2);
  return StoneShopMaster__GetPrice((StoneShopMaster_o *)Master_object, 5, v3);
}


int32_t __fastcall StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BC5B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
    byte_4A5BC5B = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_311D988 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1B8880C(v5, v6);
  return HIDWORD(entity[2].monitor);
}