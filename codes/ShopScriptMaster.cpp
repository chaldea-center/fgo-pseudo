void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB675C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__, method);
    byte_4AB675C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    46,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
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
  int64_t Instance; // x0
  Il2CppObject *klass; // x1
  UserShopMaster_o *v21; // x21
  int32_t Count; // w0
  const MethodInfo_31003F0 **v23; // x25
  ShopScriptEntity_c **v24; // x26
  NetworkManager_c **v25; // x27
  const MethodInfo_3213740 **v26; // x28
  const MethodInfo_32134CC **v27; // x24
  int32_t v28; // w22
  int32_t v29; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v32; // x29
  int32_t v33; // w3
  __int64 v34; // x2
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x8
  Il2CppClass *v38; // x8
  NetworkManager_c **v39; // x19
  const MethodInfo_31003F0 **v40; // x27
  ShopScriptEntity_c **v41; // x25
  const MethodInfo_3213740 **v42; // x26
  const MethodInfo_32134CC **v43; // x28
  System_Collections_Generic_List_object__o *v44; // x24
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Array_o *v51; // x8
  int v52; // w9
  ShopScriptMaster_o *v54; // [xsp+0h] [xbp-70h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AB675E & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserShopMaster___, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__, v8);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int____Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int____Clear__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int_____ctor__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int____get_Count__, v13);
    sub_1BAB41C(&System_Collections_Generic_List_int____TypeInfo, v14);
    sub_1BAB41C(&NetworkManager_TypeInfo, v15);
    sub_1BAB41C(&ShopScriptEntity_TypeInfo, v16);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4AB675E = 1;
  }
  entity = 0LL;
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v18,
    (const MethodInfo_3212B9C *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_44;
  v21 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = (const MethodInfo_31003F0 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v24 = &ShopScriptEntity_TypeInfo;
    v25 = &NetworkManager_TypeInfo;
    v26 = (const MethodInfo_3213740 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v27 = (const MethodInfo_32134CC **)&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__;
    v28 = Count;
    v29 = 0;
    v54 = this;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v29,
               *v23);
      if ( Item
        && (methodPtr_low = LOBYTE((*v24)->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v32 = (ShopScriptEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == *v24 ? Item : 0LL;
      }
      else
      {
        v32 = 0LL;
      }
      if ( !(*v25)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v25);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v32 || !v21 )
        break;
      Instance = UserShopMaster__TryGetEntity(v21, &entity, Instance, (int32_t)v32[1].klass, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.num >= 1 )
        {
          if ( !v18 )
            break;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 v18,
                 (Il2CppObject *)v32[2].monitor,
                 *v26) )
          {
            Instance = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v18,
                                  (Il2CppObject *)v32[2].monitor,
                                  *v27);
            if ( Instance )
            {
              v34 = *(unsigned int *)(Instance + 24);
              if ( (int)v34 >= 1 )
              {
                klass = (Il2CppObject *)v32[4].klass;
                if ( klass && klass[1].monitor )
                {
                  v35 = *(_QWORD *)(Instance + 16);
                  v36 = Method_System_Collections_Generic_List_int____Add__;
                  ++*(_DWORD *)(Instance + 28);
                  if ( !v35 )
                    break;
                  if ( (unsigned int)v34 >= *(_DWORD *)(v35 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Instance,
                      klass,
                      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v37 = v35 + 8 * v34;
                    *(_DWORD *)(Instance + 24) = v34 + 1;
                    *(_QWORD *)(v37 + 32) = klass;
                    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)klass, v34, v33);
                  }
                }
                else
                {
                  v51 = *(System_Array_o **)(Instance + 16);
                  v52 = *(_DWORD *)(Instance + 28) + 1;
                  *(_DWORD *)(Instance + 24) = 0;
                  *(_DWORD *)(Instance + 28) = v52;
                  System_Array__Clear(v51, 0, v34, 0LL);
                }
              }
            }
          }
          else
          {
            v38 = v32[4].klass;
            if ( v38 && v38->_1.namespaze )
            {
              v39 = v25;
              v40 = v23;
              v41 = v24;
              v42 = v26;
              v43 = v27;
              v44 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_int____TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v44,
                (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v44 )
                break;
              klass = (Il2CppObject *)v32[4].klass;
              items = v44->fields._items;
              v48 = Method_System_Collections_Generic_List_int____Add__;
              ++v44->fields._version;
              if ( !items )
                break;
              size = v44->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v44,
                  klass,
                  *(const MethodInfo_354D8BC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
              }
              else
              {
                v50 = &items->obj.klass + size;
                v44->fields._size = size + 1;
                v50[4] = (Il2CppClass *)klass;
                sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)klass, v45, v46);
              }
              System_Collections_Generic_Dictionary_object__object___Add(
                v18,
                (Il2CppObject *)v32[2].monitor,
                (Il2CppObject *)v44,
                (const MethodInfo_321354C *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v27 = v43;
              v26 = v42;
              v24 = v41;
              v23 = v40;
              v25 = v39;
              this = v54;
            }
            else
            {
              System_Collections_Generic_Dictionary_object__object___Add(
                v18,
                (Il2CppObject *)v32[2].monitor,
                0LL,
                (const MethodInfo_321354C *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( v28 == ++v29 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v18;
    }
LABEL_44:
    sub_1BAB678(Instance, klass);
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

  if ( (byte_4AB675D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ShopScriptMaster___, method);
    sub_1BAB41C(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4AB675D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               shopId,
                               (const MethodInfo_3163DE4 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[2].monitor;
LABEL_10:
    sub_1BAB678(Instance, v6);
  }
  return 0LL;
}