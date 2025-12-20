void ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D3FB & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
    byte_4D2D3FB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    50,
    (const MethodInfo_345919C *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
}


System_Collections_Generic_Dictionary_string__List_int_____o *ShopScriptMaster__GetOpenScriptsWithOpenEventIds(
        ShopScriptMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  void *Instance; // x0
  Il2CppObject *klass; // x1
  UserShopMaster_o *v6; // x21
  int32_t Count; // w0
  const MethodInfo_33F3BF4 **v8; // x27
  const MethodInfo_3520DE8 **v9; // x26
  const MethodInfo_3520B74 **v10; // x28
  int32_t v11; // w22
  int32_t v12; // w23
  _UNKNOWN **v13; // x29
  Il2CppObject *Item; // x25
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x2
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x8
  Il2CppClass *v24; // x8
  _UNKNOWN **v25; // x19
  const MethodInfo_33F3BF4 **v26; // x29
  const MethodInfo_3520B74 **v27; // x27
  const MethodInfo_3520DE8 **v28; // x28
  System_Collections_Generic_List_object__o *v29; // x26
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Array_o *v40; // x8
  int v41; // w9
  ShopScriptMaster_o *v43; // [xsp+0h] [xbp-70h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2D3FD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Item__);
    sub_1C94098(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C94098(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D3FD = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_42;
  v6 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = (const MethodInfo_33F3BF4 **)&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Item__;
    v9 = (const MethodInfo_3520DE8 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v10 = (const MethodInfo_3520B74 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__;
    v11 = Count;
    v12 = 0;
    v13 = &off_4D26000;
    v43 = this;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v12,
               *v8);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !*((_BYTE *)v13 + 826) )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        *((_BYTE *)v13 + 826) = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !Item || !v6 )
        break;
      Instance = (void *)UserShopMaster__TryGetEntity(
                           v6,
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
                 *v9) )
          {
            Instance = System_Collections_Generic_Dictionary_object__object___get_Item(
                         v3,
                         (Il2CppObject *)Item[2].monitor,
                         *v10);
            if ( Instance )
            {
              v20 = *((unsigned int *)Instance + 6);
              if ( (int)v20 >= 1 )
              {
                klass = (Il2CppObject *)Item[4].klass;
                if ( klass && klass[1].monitor )
                {
                  v21 = *((_QWORD *)Instance + 2);
                  v22 = Method_System_Collections_Generic_List_int____Add__;
                  ++*((_DWORD *)Instance + 7);
                  if ( !v21 )
                    break;
                  if ( (unsigned int)v20 >= *(_DWORD *)(v21 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Instance,
                      klass,
                      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v23 = v21 + 8 * v20;
                    *((_DWORD *)Instance + 6) = v20 + 1;
                    *(_QWORD *)(v23 + 32) = klass;
                    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 32), (int32_t)klass, v20, v15, v16, v17, v18, v19);
                  }
                }
                else
                {
                  v40 = (System_Array_o *)*((_QWORD *)Instance + 2);
                  v41 = *((_DWORD *)Instance + 7) + 1;
                  *((_DWORD *)Instance + 6) = 0;
                  *((_DWORD *)Instance + 7) = v41;
                  System_Array__Clear(v40, 0, v20, 0);
                }
              }
            }
          }
          else
          {
            v24 = Item[4].klass;
            if ( v24 && v24->_1.namespaze )
            {
              v25 = v13;
              v26 = v8;
              v27 = v10;
              v28 = v9;
              v29 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_int____TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v29,
                (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v29 )
                break;
              klass = (Il2CppObject *)Item[4].klass;
              items = v29->fields._items;
              v37 = Method_System_Collections_Generic_List_int____Add__;
              ++v29->fields._version;
              if ( !items )
                break;
              size = v29->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v29,
                  klass,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v29->fields._size = size + 1;
                v39[4] = (Il2CppClass *)klass;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)klass, v30, v31, v32, v33, v34, v35);
              }
              System_Collections_Generic_Dictionary_object__object___Add(
                v3,
                (Il2CppObject *)Item[2].monitor,
                (Il2CppObject *)v29,
                (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v9 = v28;
              v10 = v27;
              v8 = v26;
              v13 = v25;
              this = v43;
            }
            else
            {
              System_Collections_Generic_Dictionary_object__object___Add(
                v3,
                (Il2CppObject *)Item[2].monitor,
                0,
                (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( v11 == ++v12 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v3;
    }
LABEL_42:
    sub_1C942F0(Instance, klass);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v3;
}


System_String_o *ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2D3FC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_1C94098(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D3FC = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               shopId,
                               (const MethodInfo_345B50C *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[2].monitor;
LABEL_10:
    sub_1C942F0(Instance, v4);
  }
  return 0;
}