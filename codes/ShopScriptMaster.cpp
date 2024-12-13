void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37BC3 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__, method);
    byte_4B37BC3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    46,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
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
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_object__object__o *v18; // x20
  void *Instance; // x0
  Il2CppObject *klass; // x1
  UserShopMaster_o *v21; // x21
  int32_t Count; // w0
  const MethodInfo_316E550 **v23; // x26
  ShopScriptEntity_c **v24; // x27
  const MethodInfo_3284588 **v25; // x25
  const MethodInfo_3284314 **v26; // x29
  int32_t v27; // w22
  int32_t v28; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v31; // x28
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  __int64 v38; // x8
  _QWORD *v39; // x9
  int64_t v40; // x8
  Il2CppClass *v41; // x8
  const MethodInfo_3284314 **v42; // x19
  const MethodInfo_316E550 **v43; // x29
  ShopScriptEntity_c **v44; // x26
  const MethodInfo_3284588 **v45; // x27
  System_Collections_Generic_List_object__o *v46; // x25
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  System_Array_o *v57; // x8
  int v58; // w9
  ShopScriptMaster_o *v60; // [xsp+0h] [xbp-70h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B37BC5 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserShopMaster___, v4);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__, v8);
    sub_1BD3458(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_int____Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_int____Clear__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_int_____ctor__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_int____get_Count__, v13);
    sub_1BD3458(&System_Collections_Generic_List_int____TypeInfo, v14);
    sub_1BD3458(&NetworkManager_TypeInfo, v15);
    sub_1BD3458(&ShopScriptEntity_TypeInfo, v16);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B37BC5 = 1;
  }
  entity = 0LL;
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v18,
    (const MethodInfo_32839E4 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_48;
  v21 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = (const MethodInfo_316E550 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v24 = &ShopScriptEntity_TypeInfo;
    v25 = (const MethodInfo_3284588 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v26 = (const MethodInfo_3284314 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__;
    v27 = Count;
    v28 = 0;
    v60 = this;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v28,
               *v23);
      if ( Item
        && (methodPtr_low = LOBYTE((*v24)->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ShopScriptEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == *v24 )
          v31 = Item;
        else
          v31 = 0LL;
      }
      else
      {
        v31 = 0LL;
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, klass);
        byte_4B31D77 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !v31 || !v21 )
        break;
      Instance = (void *)UserShopMaster__TryGetEntity(
                           v21,
                           &entity,
                           *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                           (int32_t)v31[1].klass,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.num >= 1 )
        {
          if ( !v18 )
            break;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 v18,
                 (Il2CppObject *)v31[2].monitor,
                 *v25) )
          {
            Instance = System_Collections_Generic_Dictionary_object__object___get_Item(
                         v18,
                         (Il2CppObject *)v31[2].monitor,
                         *v26);
            if ( Instance )
            {
              v37 = *((unsigned int *)Instance + 6);
              if ( (int)v37 >= 1 )
              {
                klass = (Il2CppObject *)v31[4].klass;
                if ( klass && klass[1].monitor )
                {
                  v38 = *((_QWORD *)Instance + 2);
                  v39 = Method_System_Collections_Generic_List_int____Add__;
                  ++*((_DWORD *)Instance + 7);
                  if ( !v38 )
                    break;
                  if ( (unsigned int)v37 >= *(_DWORD *)(v38 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Instance,
                      klass,
                      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v40 = v38 + 8 * v37;
                    *((_DWORD *)Instance + 6) = v37 + 1;
                    *(_QWORD *)(v40 + 32) = klass;
                    sub_1BD33FC((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)klass, v37, v32, v33, v34, v35, v36);
                  }
                }
                else
                {
                  v57 = (System_Array_o *)*((_QWORD *)Instance + 2);
                  v58 = *((_DWORD *)Instance + 7) + 1;
                  *((_DWORD *)Instance + 6) = 0;
                  *((_DWORD *)Instance + 7) = v58;
                  System_Array__Clear(v57, 0, v37, 0LL);
                }
              }
            }
          }
          else
          {
            v41 = v31[4].klass;
            if ( v41 && v41->_1.namespaze )
            {
              v42 = v26;
              v43 = v23;
              v44 = v24;
              v45 = v25;
              v46 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_int____TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v46,
                (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v46 )
                break;
              klass = (Il2CppObject *)v31[4].klass;
              items = v46->fields._items;
              v54 = Method_System_Collections_Generic_List_int____Add__;
              ++v46->fields._version;
              if ( !items )
                break;
              size = v46->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v46,
                  klass,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              }
              else
              {
                v56 = &items->obj.klass + size;
                v46->fields._size = size + 1;
                v56[4] = (Il2CppClass *)klass;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v56 + 4), (int64_t)klass, v47, v48, v49, v50, v51, v52);
              }
              System_Collections_Generic_Dictionary_object__object___Add(
                v18,
                (Il2CppObject *)v31[2].monitor,
                (Il2CppObject *)v46,
                (const MethodInfo_3284394 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v25 = v45;
              v24 = v44;
              v23 = v43;
              v26 = v42;
              this = v60;
            }
            else
            {
              System_Collections_Generic_Dictionary_object__object___Add(
                v18,
                (Il2CppObject *)v31[2].monitor,
                0LL,
                (const MethodInfo_3284394 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( v27 == ++v28 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v18;
    }
LABEL_48:
    sub_1BD36B4(Instance, klass);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v18;
}


System_String_o *__fastcall ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B37BC4 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ShopScriptMaster___, method);
    sub_1BD3458(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B37BC4 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               shopId,
                               (const MethodInfo_31D1F44 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[2].monitor;
LABEL_10:
    sub_1BD36B4(Instance, v6);
  }
  return 0LL;
}