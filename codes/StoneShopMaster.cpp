void __fastcall StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEEFE & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__, method);
    byte_49FEEFE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    44,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
}


StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList(
        StoneShopMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v11; // x20
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FEEFF & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_StoneShopEntity__Add__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_StoneShopEntity__TypeInfo, v7);
    sub_1B64870(&NetworkManager_TypeInfo, v8);
    sub_1B64870(&StoneShopEntity_TypeInfo, v9);
    byte_49FEEFF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(StoneShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (StoneShopEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == StoneShopEntity_TypeInfo
          && Time >= SLODWORD(list[2].klass)
          && Time <= SHIDWORD(list[2].klass) )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B64ACC(list, v12);
  }
LABEL_20:
  if ( !v11 )
    goto LABEL_22;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList_39582896(
        StoneShopMaster_o *this,
        int32_t effect,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t Time; // x22
  System_Collections_Generic_List_object__o *v13; // x21
  System_Collections_ObjectModel_Collection_T__o *v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v16; // w23
  int32_t v17; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FEF00 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&effect);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_StoneShopEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_StoneShopEntity__TypeInfo, v9);
    sub_1B64870(&NetworkManager_TypeInfo, v10);
    sub_1B64870(&StoneShopEntity_TypeInfo, v11);
    byte_49FEF00 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v16 = (int)list;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = list;
        methodPtr_low = LOBYTE(StoneShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (StoneShopEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == StoneShopEntity_TypeInfo
          && LODWORD(list[1].fields.items) == effect
          && Time >= SLODWORD(list[2].klass)
          && Time <= SHIDWORD(list[2].klass) )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v22 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v14, v18, v19);
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B64ACC(list, v14);
  }
LABEL_21:
  if ( !v13 )
    goto LABEL_23;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t __fastcall StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_49FEF02 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_StoneShopMaster___, v1);
    sub_1B64870(&DataManager_TypeInfo, v2);
    byte_49FEF02 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_object )
    sub_1B64ACC(0LL, v4);
  return StoneShopMaster__GetPrice((StoneShopMaster_o *)Master_object, 5, v5);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEF01 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__, *(_QWORD *)&id);
    byte_49FEF01 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_30D61D4 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1B64ACC(v5, v6);
  return HIDWORD(entity[2].monitor);
}