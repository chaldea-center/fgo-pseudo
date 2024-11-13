void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C0D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__, method, v2);
    byte_4B16C0D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    46,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
}


System_Collections_Generic_Dictionary_string__List_int_____o *__fastcall ShopScriptMaster__GetOpenScriptsWithOpenEventIds(
        ShopScriptMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_Dictionary_object__object__o *v35; // x20
  int64_t Instance; // x0
  Il2CppObject *klass; // x1
  UserShopMaster_o *v38; // x21
  int32_t Count; // w0
  const MethodInfo_314F4A0 **v40; // x25
  ShopScriptEntity_c **v41; // x26
  NetworkManager_c **v42; // x27
  const MethodInfo_3265454 **v43; // x28
  const MethodInfo_32651E0 **v44; // x24
  int32_t v45; // w22
  int32_t v46; // w23
  Il2CppObject *Item; // x0
  __int64 v48; // x1
  __int64 methodPtr_low; // x10
  Il2CppObject *v50; // x29
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  __int64 v60; // x8
  _QWORD *v61; // x9
  int64_t v62; // x8
  Il2CppClass *v63; // x8
  NetworkManager_c **v64; // x19
  const MethodInfo_314F4A0 **v65; // x27
  ShopScriptEntity_c **v66; // x25
  const MethodInfo_3265454 **v67; // x26
  const MethodInfo_32651E0 **v68; // x28
  System_Collections_Generic_List_object__o *v69; // x24
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  System_Array_o *v80; // x8
  int v81; // w9
  ShopScriptMaster_o *v83; // [xsp+0h] [xbp-70h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16C0F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____Clear__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int_____ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Count__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_int____TypeInfo, v27, v28);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&ShopScriptEntity_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    byte_4B16C0F = 1;
  }
  entity = 0LL;
  v35 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__List_int_____TypeInfo,
                                                                     method,
                                                                     v2,
                                                                     v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v35,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_44;
  v38 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v40 = (const MethodInfo_314F4A0 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v41 = &ShopScriptEntity_TypeInfo;
    v42 = &NetworkManager_TypeInfo;
    v43 = (const MethodInfo_3265454 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v44 = (const MethodInfo_32651E0 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__;
    v45 = Count;
    v46 = 0;
    v83 = this;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v46,
               *v40);
      if ( Item
        && (methodPtr_low = LOBYTE((*v41)->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v50 = (ShopScriptEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == *v41 ? Item : 0LL;
      }
      else
      {
        v50 = 0LL;
      }
      if ( !(*v42)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v42, v48);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v50 || !v38 )
        break;
      Instance = UserShopMaster__TryGetEntity(v38, &entity, Instance, (int32_t)v50[1].klass, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.num >= 1 )
        {
          if ( !v35 )
            break;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 v35,
                 (Il2CppObject *)v50[2].monitor,
                 *v43) )
          {
            Instance = (int64_t)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v35,
                                  (Il2CppObject *)v50[2].monitor,
                                  *v44);
            if ( Instance )
            {
              v59 = *(unsigned int *)(Instance + 24);
              if ( (int)v59 >= 1 )
              {
                klass = (Il2CppObject *)v50[4].klass;
                if ( klass && klass[1].monitor )
                {
                  v60 = *(_QWORD *)(Instance + 16);
                  v61 = Method_System_Collections_Generic_List_int____Add__;
                  ++*(_DWORD *)(Instance + 28);
                  if ( !v60 )
                    break;
                  if ( (unsigned int)v59 >= *(_DWORD *)(v60 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)Instance,
                      klass,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v62 = v60 + 8 * v59;
                    *(_DWORD *)(Instance + 24) = v59 + 1;
                    *(_QWORD *)(v62 + 32) = klass;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 32), (int64_t)klass, v59, v54, v55, v56, v57, v58);
                  }
                }
                else
                {
                  v80 = *(System_Array_o **)(Instance + 16);
                  v81 = *(_DWORD *)(Instance + 28) + 1;
                  *(_DWORD *)(Instance + 24) = 0;
                  *(_DWORD *)(Instance + 28) = v81;
                  System_Array__Clear(v80, 0, v59, 0LL);
                }
              }
            }
          }
          else
          {
            v63 = v50[4].klass;
            if ( v63 && v63->_1.namespaze )
            {
              v64 = v42;
              v65 = v40;
              v66 = v41;
              v67 = v43;
              v68 = v44;
              v69 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                   v51,
                                                                   v52,
                                                                   v53);
              System_Collections_Generic_List_object____ctor(
                v69,
                (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v69 )
                break;
              klass = (Il2CppObject *)v50[4].klass;
              items = v69->fields._items;
              v77 = Method_System_Collections_Generic_List_int____Add__;
              ++v69->fields._version;
              if ( !items )
                break;
              size = v69->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v69,
                  klass,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
              }
              else
              {
                v79 = &items->obj.klass + size;
                v69->fields._size = size + 1;
                v79[4] = (Il2CppClass *)klass;
                sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 4), (int64_t)klass, v70, v71, v72, v73, v74, v75);
              }
              System_Collections_Generic_Dictionary_object__object___Add(
                v35,
                (Il2CppObject *)v50[2].monitor,
                (Il2CppObject *)v69,
                (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v44 = v68;
              v43 = v67;
              v41 = v66;
              v40 = v65;
              v42 = v64;
              this = v83;
            }
            else
            {
              System_Collections_Generic_Dictionary_object__object___Add(
                v35,
                (Il2CppObject *)v50[2].monitor,
                0LL,
                (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( v45 == ++v46 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v35;
    }
LABEL_44:
    sub_1BCAA3C(Instance, klass);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v35;
}


System_String_o *__fastcall ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16C0E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopScriptMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16C0E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               shopId,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[2].monitor;
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  }
  return 0LL;
}