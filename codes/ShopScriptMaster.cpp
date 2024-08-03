void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCD0B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__, method);
    byte_49FCD0B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    46,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
}


System_Collections_Generic_Dictionary_string__List_int_____o *__fastcall ShopScriptMaster__GetOpenScriptsWithOpenEventIds(
        ShopScriptMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_object__object__o *v19; // x20
  int64_t Instance; // x0
  UserShopMaster_o *v21; // x21
  int32_t Count; // w0
  const MethodInfo_3070B98 **v23; // x25
  ShopScriptEntity_c **v24; // x26
  NetworkManager_c **v25; // x27
  const MethodInfo_31795EC **v26; // x28
  const MethodInfo_3179378 **v27; // x24
  int32_t v28; // w22
  int32_t v29; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject *v32; // x29
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t v35; // w3
  __int64 v36; // x2
  Il2CppObject *klass; // x1
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x8
  Il2CppClass *v41; // x8
  NetworkManager_c **v42; // x19
  const MethodInfo_3070B98 **v43; // x27
  ShopScriptEntity_c **v44; // x25
  const MethodInfo_31795EC **v45; // x26
  const MethodInfo_3179378 **v46; // x28
  System_Collections_Generic_List_object__o *v47; // x24
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x1
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  System_Array_o *v55; // x8
  int v56; // w9
  ShopScriptMaster_o *v58; // [xsp+0h] [xbp-70h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FCD0D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____Clear__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int_____ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____get_Count__, v14);
    sub_1B640C8(&System_Collections_Generic_List_int____TypeInfo, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&ShopScriptEntity_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_49FCD0D = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__List_int_____TypeInfo,
                                                                     method,
                                                                     v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v19,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_44;
  v21 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = (const MethodInfo_3070B98 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v24 = &ShopScriptEntity_TypeInfo;
    v25 = &NetworkManager_TypeInfo;
    v26 = (const MethodInfo_31795EC **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v27 = (const MethodInfo_3179378 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__;
    v28 = Count;
    v29 = 0;
    v58 = this;
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
          if ( !v19 )
            break;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 v19,
                 (Il2CppObject *)v32[2].monitor,
                 *v26) )
          {
            Instance = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v19,
                                  (Il2CppObject *)v32[2].monitor,
                                  *v27);
            if ( Instance )
            {
              v36 = *(unsigned int *)(Instance + 24);
              if ( (int)v36 >= 1 )
              {
                klass = (Il2CppObject *)v32[4].klass;
                if ( klass && klass[1].monitor )
                {
                  v38 = *(_QWORD *)(Instance + 16);
                  v39 = Method_System_Collections_Generic_List_int____Add__;
                  ++*(_DWORD *)(Instance + 28);
                  if ( !v38 )
                    break;
                  if ( (unsigned int)v36 >= *(_DWORD *)(v38 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Instance,
                      klass,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v40 = v38 + 8 * v36;
                    *(_DWORD *)(Instance + 24) = v36 + 1;
                    *(_QWORD *)(v40 + 32) = klass;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 32), (int32_t)klass, v36, v35);
                  }
                }
                else
                {
                  v55 = *(System_Array_o **)(Instance + 16);
                  v56 = *(_DWORD *)(Instance + 28) + 1;
                  *(_DWORD *)(Instance + 24) = 0;
                  *(_DWORD *)(Instance + 28) = v56;
                  System_Array__Clear(v55, 0, v36, 0LL);
                }
              }
            }
          }
          else
          {
            v41 = v32[4].klass;
            if ( v41 && v41->_1.namespaze )
            {
              v42 = v25;
              v43 = v23;
              v44 = v24;
              v45 = v26;
              v46 = v27;
              v47 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                   v33,
                                                                   v34);
              System_Collections_Generic_List_object____ctor(
                v47,
                (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v47 )
                break;
              v50 = (Il2CppObject *)v32[4].klass;
              items = v47->fields._items;
              v52 = Method_System_Collections_Generic_List_int____Add__;
              ++v47->fields._version;
              if ( !items )
                break;
              size = v47->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v47,
                  v50,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
              }
              else
              {
                v54 = &items->obj.klass + size;
                v47->fields._size = size + 1;
                v54[4] = (Il2CppClass *)v50;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v50, v48, v49);
              }
              System_Collections_Generic_Dictionary_object__object___Add(
                v19,
                (Il2CppObject *)v32[2].monitor,
                (Il2CppObject *)v47,
                (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v27 = v46;
              v26 = v45;
              v24 = v44;
              v23 = v43;
              v25 = v42;
              this = v58;
            }
            else
            {
              System_Collections_Generic_Dictionary_object__object___Add(
                v19,
                (Il2CppObject *)v32[2].monitor,
                0LL,
                (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( v28 == ++v29 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v19;
    }
LABEL_44:
    sub_1B64324(Instance);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v19;
}


System_String_o *__fastcall ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCD0C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopScriptMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCD0C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               shopId,
                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[2].monitor;
LABEL_10:
    sub_1B64324(Instance);
  }
  return 0LL;
}