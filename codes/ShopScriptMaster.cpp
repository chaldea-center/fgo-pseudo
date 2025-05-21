void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B4557B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__, method);
    byte_4B4557B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    50,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
}


System_Collections_Generic_Dictionary_string__List_int_____o *__fastcall ShopScriptMaster__GetOpenScriptsWithOpenEventIds(
        ShopScriptMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_object__object__o *v17; // x20
  void *Instance; // x0
  Il2CppObject *klass; // x1
  UserShopMaster_o *v20; // x21
  int32_t Count; // w0
  const MethodInfo_327D6B4 **v22; // x27
  const MethodInfo_33A0424 **v23; // x26
  const MethodInfo_33A01B0 **v24; // x28
  int32_t v25; // w22
  int32_t v26; // w23
  __int64 *v27; // x29
  Il2CppObject *Item; // x25
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x8
  Il2CppClass *v34; // x8
  __int64 *v35; // x19
  const MethodInfo_327D6B4 **v36; // x29
  const MethodInfo_33A01B0 **v37; // x27
  const MethodInfo_33A0424 **v38; // x28
  System_Collections_Generic_List_object__o *v39; // x26
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Array_o *v46; // x8
  int v47; // w9
  ShopScriptMaster_o *v49; // [xsp+0h] [xbp-70h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B4557D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Item__, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserShopMaster___, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__, v8);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int____Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int____Clear__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int_____ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_int____get_Count__, v13);
    sub_1BDB878(&System_Collections_Generic_List_int____TypeInfo, v14);
    sub_1BDB878(&NetworkManager_TypeInfo, v15);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B4557D = 1;
  }
  entity = 0LL;
  v17 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v17,
    (const MethodInfo_339F880 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_42;
  v20 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v22 = (const MethodInfo_327D6B4 **)&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Item__;
    v23 = (const MethodInfo_33A0424 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v24 = (const MethodInfo_33A01B0 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__;
    v25 = Count;
    v26 = 0;
    v27 = &qword_4B3E000;
    v49 = this;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v26,
               *v22);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !*((_BYTE *)v27 + 3414) )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, klass);
        *((_BYTE *)v27 + 3414) = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !Item || !v20 )
        break;
      Instance = (void *)UserShopMaster__TryGetEntity(
                           v20,
                           &entity,
                           *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                           (int32_t)Item[1].klass,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.num >= 1 )
        {
          if ( !v17 )
            break;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 v17,
                 (Il2CppObject *)Item[2].monitor,
                 *v23) )
          {
            Instance = System_Collections_Generic_Dictionary_object__object___get_Item(
                         v17,
                         (Il2CppObject *)Item[2].monitor,
                         *v24);
            if ( Instance )
            {
              v30 = *((unsigned int *)Instance + 6);
              if ( (int)v30 >= 1 )
              {
                klass = (Il2CppObject *)Item[4].klass;
                if ( klass && klass[1].monitor )
                {
                  v31 = *((_QWORD *)Instance + 2);
                  v32 = Method_System_Collections_Generic_List_int____Add__;
                  ++*((_DWORD *)Instance + 7);
                  if ( !v31 )
                    break;
                  if ( (unsigned int)v30 >= *(_DWORD *)(v31 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Instance,
                      klass,
                      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v33 = v31 + 8 * v30;
                    *((_DWORD *)Instance + 6) = v30 + 1;
                    *(_QWORD *)(v33 + 32) = klass;
                    sub_1BDB81C((CGThumbnailListItem_o *)(v33 + 32), (int32_t)klass, v30, v29);
                  }
                }
                else
                {
                  v46 = (System_Array_o *)*((_QWORD *)Instance + 2);
                  v47 = *((_DWORD *)Instance + 7) + 1;
                  *((_DWORD *)Instance + 6) = 0;
                  *((_DWORD *)Instance + 7) = v47;
                  System_Array__Clear(v46, 0, v30, 0LL);
                }
              }
            }
          }
          else
          {
            v34 = Item[4].klass;
            if ( v34 && v34->_1.namespaze )
            {
              v35 = v27;
              v36 = v22;
              v37 = v24;
              v38 = v23;
              v39 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_int____TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v39,
                (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v39 )
                break;
              klass = (Il2CppObject *)Item[4].klass;
              items = v39->fields._items;
              v43 = Method_System_Collections_Generic_List_int____Add__;
              ++v39->fields._version;
              if ( !items )
                break;
              size = v39->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v39,
                  klass,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
              }
              else
              {
                v45 = &items->obj.klass + size;
                v39->fields._size = size + 1;
                v45[4] = (Il2CppClass *)klass;
                sub_1BDB81C((CGThumbnailListItem_o *)(v45 + 4), (int32_t)klass, v40, v41);
              }
              System_Collections_Generic_Dictionary_object__object___Add(
                v17,
                (Il2CppObject *)Item[2].monitor,
                (Il2CppObject *)v39,
                (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v23 = v38;
              v24 = v37;
              v22 = v36;
              v27 = v35;
              this = v49;
            }
            else
            {
              System_Collections_Generic_Dictionary_object__object___Add(
                v17,
                (Il2CppObject *)Item[2].monitor,
                0LL,
                (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( v25 == ++v26 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v17;
    }
LABEL_42:
    sub_1BDBAD4(Instance, klass);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v17;
}


System_String_o *__fastcall ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B4557C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopScriptMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B4557C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               shopId,
                               (const MethodInfo_32E1E88 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[2].monitor;
LABEL_10:
    sub_1BDBAD4(Instance, v6);
  }
  return 0LL;
}