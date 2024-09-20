void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB5C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
    byte_4A5BB5C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    46,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
}


System_Collections_Generic_Dictionary_string__List_int_____o *__fastcall ShopScriptMaster__GetOpenScriptsWithOpenEventIds(
        ShopScriptMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int64_t Instance; // x0
  Il2CppObject *klass; // x1
  UserShopMaster_o *v6; // x21
  int32_t Count; // w0
  const MethodInfo_30BA610 **v8; // x25
  ShopScriptEntity_c **v9; // x26
  NetworkManager_c **v10; // x27
  const MethodInfo_31C73BC **v11; // x28
  const MethodInfo_31C7148 **v12; // x24
  int32_t v13; // w22
  int32_t v14; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v17; // x29
  int32_t v18; // w3
  __int64 v19; // x2
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x8
  Il2CppClass *v23; // x8
  NetworkManager_c **v24; // x19
  const MethodInfo_30BA610 **v25; // x27
  ShopScriptEntity_c **v26; // x25
  const MethodInfo_31C73BC **v27; // x26
  const MethodInfo_31C7148 **v28; // x28
  System_Collections_Generic_List_object__o *v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Array_o *v36; // x8
  int v37; // w9
  ShopScriptMaster_o *v39; // [xsp+0h] [xbp-70h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5BB5E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int____TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ShopScriptEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BB5E = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_44;
  v6 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = (const MethodInfo_30BA610 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v9 = &ShopScriptEntity_TypeInfo;
    v10 = &NetworkManager_TypeInfo;
    v11 = (const MethodInfo_31C73BC **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v12 = (const MethodInfo_31C7148 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__;
    v13 = Count;
    v14 = 0;
    v39 = this;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v14,
               *v8);
      if ( Item
        && (methodPtr_low = LOBYTE((*v9)->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v17 = (ShopScriptEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == *v9 ? Item : 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      if ( !(*v10)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v10);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v17 || !v6 )
        break;
      Instance = UserShopMaster__TryGetEntity(v6, &entity, Instance, (int32_t)v17[1].klass, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.num >= 1 )
        {
          if ( !v3 )
            break;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 v3,
                 (Il2CppObject *)v17[2].monitor,
                 *v11) )
          {
            Instance = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v3,
                                  (Il2CppObject *)v17[2].monitor,
                                  *v12);
            if ( Instance )
            {
              v19 = *(unsigned int *)(Instance + 24);
              if ( (int)v19 >= 1 )
              {
                klass = (Il2CppObject *)v17[4].klass;
                if ( klass && klass[1].monitor )
                {
                  v20 = *(_QWORD *)(Instance + 16);
                  v21 = Method_System_Collections_Generic_List_int____Add__;
                  ++*(_DWORD *)(Instance + 28);
                  if ( !v20 )
                    break;
                  if ( (unsigned int)v19 >= *(_DWORD *)(v20 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Instance,
                      klass,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v22 = v20 + 8 * v19;
                    *(_DWORD *)(Instance + 24) = v19 + 1;
                    *(_QWORD *)(v22 + 32) = klass;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)klass, v19, v18);
                  }
                }
                else
                {
                  v36 = *(System_Array_o **)(Instance + 16);
                  v37 = *(_DWORD *)(Instance + 28) + 1;
                  *(_DWORD *)(Instance + 24) = 0;
                  *(_DWORD *)(Instance + 28) = v37;
                  System_Array__Clear(v36, 0, v19, 0LL);
                }
              }
            }
          }
          else
          {
            v23 = v17[4].klass;
            if ( v23 && v23->_1.namespaze )
            {
              v24 = v10;
              v25 = v8;
              v26 = v9;
              v27 = v11;
              v28 = v12;
              v29 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v29,
                (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v29 )
                break;
              klass = (Il2CppObject *)v17[4].klass;
              items = v29->fields._items;
              v33 = Method_System_Collections_Generic_List_int____Add__;
              ++v29->fields._version;
              if ( !items )
                break;
              size = v29->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v29,
                  klass,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v29->fields._size = size + 1;
                v35[4] = (Il2CppClass *)klass;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)klass, v30, v31);
              }
              System_Collections_Generic_Dictionary_object__object___Add(
                v3,
                (Il2CppObject *)v17[2].monitor,
                (Il2CppObject *)v29,
                (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v12 = v28;
              v11 = v27;
              v9 = v26;
              v8 = v25;
              v10 = v24;
              this = v39;
            }
            else
            {
              System_Collections_Generic_Dictionary_object__object___Add(
                v3,
                (Il2CppObject *)v17[2].monitor,
                0LL,
                (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v3;
    }
LABEL_44:
    sub_1B8880C(Instance, klass);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v3;
}


System_String_o *__fastcall ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BB5D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BB5D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               shopId,
                               (const MethodInfo_311D988 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[2].monitor;
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return 0LL;
}