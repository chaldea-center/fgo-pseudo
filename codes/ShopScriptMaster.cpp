void ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43B1F & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
    byte_4C43B1F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    50,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
}


System_Collections_Generic_Dictionary_string__List_int_____o *ShopScriptMaster__GetOpenScriptsWithOpenEventIds(
        ShopScriptMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  void *Instance; // x0
  UserShopMaster_o *v5; // x21
  int32_t Count; // w0
  const MethodInfo_333A5A0 **v7; // x27
  const MethodInfo_3463824 **v8; // x26
  const MethodInfo_34635B0 **v9; // x28
  int32_t v10; // w22
  int32_t v11; // w23
  _UNKNOWN **v12; // x29
  Il2CppObject *Item; // x25
  const MethodInfo *v14; // x3
  __int64 v15; // x2
  Il2CppObject *klass; // x1
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x8
  Il2CppClass *v20; // x8
  _UNKNOWN **v21; // x19
  const MethodInfo_333A5A0 **v22; // x29
  const MethodInfo_34635B0 **v23; // x27
  const MethodInfo_3463824 **v24; // x28
  System_Collections_Generic_List_object__o *v25; // x26
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Array_o *v33; // x8
  int v34; // w9
  ShopScriptMaster_o *v36; // [xsp+0h] [xbp-70h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C43B21 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int____Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43B21 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_42;
  v5 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = (const MethodInfo_333A5A0 **)&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Item__;
    v8 = (const MethodInfo_3463824 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v9 = (const MethodInfo_34635B0 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__;
    v10 = Count;
    v11 = 0;
    v12 = &off_4C3C000;
    v36 = this;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v11,
               *v7);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !*((_BYTE *)v12 + 3426) )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        *((_BYTE *)v12 + 3426) = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !Item || !v5 )
        break;
      Instance = (void *)UserShopMaster__TryGetEntity(
                           v5,
                           &entity,
                           *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                           (int32_t)Item[1].klass,
                           0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.num >= 1 )
        {
          if ( !v3 )
            break;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 v3,
                 (Il2CppObject *)Item[2].monitor,
                 *v8) )
          {
            Instance = System_Collections_Generic_Dictionary_object__object___get_Item(
                         v3,
                         (Il2CppObject *)Item[2].monitor,
                         *v9);
            if ( Instance )
            {
              v15 = *((unsigned int *)Instance + 6);
              if ( (int)v15 >= 1 )
              {
                klass = (Il2CppObject *)Item[4].klass;
                if ( klass && klass[1].monitor )
                {
                  v17 = *((_QWORD *)Instance + 2);
                  v18 = Method_System_Collections_Generic_List_int____Add__;
                  ++*((_DWORD *)Instance + 7);
                  if ( !v17 )
                    break;
                  if ( (unsigned int)v15 >= *(_DWORD *)(v17 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Instance,
                      klass,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v19 = v17 + 8 * v15;
                    *((_DWORD *)Instance + 6) = v15 + 1;
                    *(_QWORD *)(v19 + 32) = klass;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)klass, v15, v14);
                  }
                }
                else
                {
                  v33 = (System_Array_o *)*((_QWORD *)Instance + 2);
                  v34 = *((_DWORD *)Instance + 7) + 1;
                  *((_DWORD *)Instance + 6) = 0;
                  *((_DWORD *)Instance + 7) = v34;
                  System_Array__Clear(v33, 0, v15, 0);
                }
              }
            }
          }
          else
          {
            v20 = Item[4].klass;
            if ( v20 && v20->_1.namespaze )
            {
              v21 = v12;
              v22 = v7;
              v23 = v9;
              v24 = v8;
              v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_int____TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v25,
                (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v25 )
                break;
              v28 = (Il2CppObject *)Item[4].klass;
              items = v25->fields._items;
              v30 = Method_System_Collections_Generic_List_int____Add__;
              ++v25->fields._version;
              if ( !items )
                break;
              size = v25->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v25,
                  v28,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                v32 = &items->obj.klass + size;
                v25->fields._size = size + 1;
                v32[4] = (Il2CppClass *)v28;
                sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v28, v26, v27);
              }
              System_Collections_Generic_Dictionary_object__object___Add(
                v3,
                (Il2CppObject *)Item[2].monitor,
                (Il2CppObject *)v25,
                (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v8 = v24;
              v9 = v23;
              v7 = v22;
              v12 = v21;
              this = v36;
            }
            else
            {
              System_Collections_Generic_Dictionary_object__object___Add(
                v3,
                (Il2CppObject *)Item[2].monitor,
                0,
                (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( v10 == ++v11 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v3;
    }
LABEL_42:
    sub_1C372B4(Instance);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v3;
}


System_String_o *ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C43B20 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_1C37058(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43B20 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               shopId,
                               (const MethodInfo_33A10EC *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[2].monitor;
LABEL_10:
    sub_1C372B4(Instance);
  }
  return 0;
}