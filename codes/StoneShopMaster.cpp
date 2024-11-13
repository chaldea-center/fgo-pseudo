void __fastcall StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D0C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__, method, v2);
    byte_4B16D0C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    44,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
}


StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList(
        StoneShopMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int64_t Time; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x1
  int64_t list; // x0
  int v25; // w22
  int32_t v26; // w23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4B16D0D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StoneShopEntity__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_StoneShopEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StoneShopEntity_TypeInfo, v16, v17);
    byte_4B16D0D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_StoneShopEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v25 = list;
    v26 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v26,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = list;
        methodPtr_low = LOBYTE(StoneShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(StoneShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == StoneShopEntity_TypeInfo
          && Time >= *(int *)(list + 48)
          && Time <= *(int *)(list + 52) )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v35 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v23;
            sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), v23, v27, v28, v29, v30, v31, v32);
          }
        }
      }
      if ( v25 == ++v26 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(list, v23);
  }
LABEL_20:
  if ( !v22 )
    goto LABEL_22;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList_40724432(
        StoneShopMaster_o *this,
        int32_t effect,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t Time; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x21
  int64_t v24; // x1
  int64_t list; // x0
  int v26; // w23
  int32_t v27; // w24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4B16D0E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&effect,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StoneShopEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_StoneShopEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&StoneShopEntity_TypeInfo, v17, v18);
    byte_4B16D0E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&effect);
  Time = NetworkManager__getTime(0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_StoneShopEntity__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v26 = list;
    v27 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v27,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v24 = list;
        methodPtr_low = LOBYTE(StoneShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(StoneShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == StoneShopEntity_TypeInfo
          && *(_DWORD *)(list + 40) == effect
          && Time >= *(int *)(list + 48)
          && Time <= *(int *)(list + 52) )
        {
          if ( !v23 )
            break;
          items = v23->fields._items;
          v36 = Method_System_Collections_Generic_List_StoneShopEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            break;
          size = v23->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v24;
            sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), v24, v28, v29, v30, v31, v32, v33);
          }
        }
      }
      if ( v26 == ++v27 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BCAA3C(list, v24);
  }
LABEL_21:
  if ( !v23 )
    goto LABEL_23;
  return (StoneShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v23,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t __fastcall StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B16D10 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_StoneShopMaster___, v1, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    byte_4B16D10 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v6);
  return StoneShopMaster__GetPrice((StoneShopMaster_o *)Master_object, 5, v7);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16D0F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__, *(_QWORD *)&id, method);
    byte_4B16D0F = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1BCAA3C(v5, v6);
  return HIDWORD(entity[2].monitor);
}