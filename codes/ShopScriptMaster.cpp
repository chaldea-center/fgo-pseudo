void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE1D4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__, method);
    byte_4BFE1D4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    50,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
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
  const MethodInfo_3215BFC **v22; // x27
  const MethodInfo_3335D68 **v23; // x26
  const MethodInfo_3335AF4 **v24; // x28
  int32_t v25; // w22
  int32_t v26; // w23
  __int64 *v27; // x29
  Il2CppObject *Item; // x25
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  __int64 v35; // x8
  _QWORD *v36; // x9
  int64_t v37; // x8
  Il2CppClass *v38; // x8
  __int64 *v39; // x19
  const MethodInfo_3215BFC **v40; // x29
  const MethodInfo_3335AF4 **v41; // x27
  const MethodInfo_3335D68 **v42; // x28
  System_Collections_Generic_List_object__o *v43; // x26
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Array_o *v54; // x8
  int v55; // w9
  ShopScriptMaster_o *v57; // [xsp+0h] [xbp-70h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BFE1D6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Item__, v3);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserShopMaster___, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__, v8);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int____Add__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int____Clear__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int_____ctor__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int____get_Count__, v13);
    sub_1C2E12C(&System_Collections_Generic_List_int____TypeInfo, v14);
    sub_1C2E12C(&NetworkManager_TypeInfo, v15);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BFE1D6 = 1;
  }
  entity = 0LL;
  v17 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v17,
    (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_42;
  v20 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v22 = (const MethodInfo_3215BFC **)&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Item__;
    v23 = (const MethodInfo_3335D68 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v24 = (const MethodInfo_3335AF4 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__;
    v25 = Count;
    v26 = 0;
    v27 = &qword_4BF8000;
    v57 = this;
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
      if ( !*((_BYTE *)v27 + 469) )
      {
        sub_1C2E12C(&NetworkManager_TypeInfo, klass);
        *((_BYTE *)v27 + 469) = 1;
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
              v34 = *((unsigned int *)Instance + 6);
              if ( (int)v34 >= 1 )
              {
                klass = (Il2CppObject *)Item[4].klass;
                if ( klass && klass[1].monitor )
                {
                  v35 = *((_QWORD *)Instance + 2);
                  v36 = Method_System_Collections_Generic_List_int____Add__;
                  ++*((_DWORD *)Instance + 7);
                  if ( !v35 )
                    break;
                  if ( (unsigned int)v34 >= *(_DWORD *)(v35 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Instance,
                      klass,
                      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v37 = v35 + 8 * v34;
                    *((_DWORD *)Instance + 6) = v34 + 1;
                    *(_QWORD *)(v37 + 32) = klass;
                    sub_1C2E0D0((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)klass, v34, v29, v30, v31, v32, v33);
                  }
                }
                else
                {
                  v54 = (System_Array_o *)*((_QWORD *)Instance + 2);
                  v55 = *((_DWORD *)Instance + 7) + 1;
                  *((_DWORD *)Instance + 6) = 0;
                  *((_DWORD *)Instance + 7) = v55;
                  System_Array__Clear(v54, 0, v34, 0LL);
                }
              }
            }
          }
          else
          {
            v38 = Item[4].klass;
            if ( v38 && v38->_1.namespaze )
            {
              v39 = v27;
              v40 = v22;
              v41 = v24;
              v42 = v23;
              v43 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_int____TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v43,
                (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v43 )
                break;
              klass = (Il2CppObject *)Item[4].klass;
              items = v43->fields._items;
              v51 = Method_System_Collections_Generic_List_int____Add__;
              ++v43->fields._version;
              if ( !items )
                break;
              size = v43->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v43,
                  klass,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
              }
              else
              {
                v53 = &items->obj.klass + size;
                v43->fields._size = size + 1;
                v53[4] = (Il2CppClass *)klass;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)klass, v44, v45, v46, v47, v48, v49);
              }
              System_Collections_Generic_Dictionary_object__object___Add(
                v17,
                (Il2CppObject *)Item[2].monitor,
                (Il2CppObject *)v43,
                (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v23 = v42;
              v24 = v41;
              v22 = v40;
              v27 = v39;
              this = v57;
            }
            else
            {
              System_Collections_Generic_Dictionary_object__object___Add(
                v17,
                (Il2CppObject *)Item[2].monitor,
                0LL,
                (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( v25 == ++v26 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v17;
    }
LABEL_42:
    sub_1C2E388(Instance, klass);
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

  if ( (byte_4BFE1D5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ShopScriptMaster___, method);
    sub_1C2E12C(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v3);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BFE1D5 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               shopId,
                               (const MethodInfo_327B1CC *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[2].monitor;
LABEL_10:
    sub_1C2E388(Instance, v6);
  }
  return 0LL;
}