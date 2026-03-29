void ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31546 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
    byte_4D31546 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    50,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
}


System_Collections_Generic_Dictionary_string__List_int_____o *ShopScriptMaster__GetOpenScriptsWithOpenEventIds(
        ShopScriptMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  void *Instance; // x0
  MethodInfo *klass; // x1
  UserShopMaster_o *v6; // x21
  int32_t Count; // w0
  const MethodInfo_352ED9C **v8; // x26
  int32_t v9; // w22
  int32_t v10; // w23
  Il2CppObject *Item; // x25
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x2
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x8
  Il2CppClass *v21; // x8
  const MethodInfo_352ED9C **v22; // x28
  System_Collections_Generic_List_object__o *v23; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Array_o *v34; // x8
  int v35; // w9
  UserShopEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D31548 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Item__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31548 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_43;
  v6 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = (const MethodInfo_352ED9C **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v10,
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_ShopScriptEntity__get_Item__);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
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
          Instance = (void *)ShopScriptEntity__IsOpen((ShopScriptEntity_o *)Item, klass);
          if ( ((unsigned __int8)Instance & 1) != 0 )
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
                           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__);
              if ( Instance )
              {
                v17 = *((unsigned int *)Instance + 6);
                if ( (int)v17 >= 1 )
                {
                  klass = (MethodInfo *)Item[4].klass;
                  if ( klass && klass->name )
                  {
                    v18 = *((_QWORD *)Instance + 2);
                    v19 = Method_System_Collections_Generic_List_int____Add__;
                    ++*((_DWORD *)Instance + 7);
                    if ( !v18 )
                      break;
                    if ( (unsigned int)v17 >= *(_DWORD *)(v18 + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)Instance,
                        (Il2CppObject *)klass,
                        *(const MethodInfo_387999C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v20 = v18 + 8 * v17;
                      *((_DWORD *)Instance + 6) = v17 + 1;
                      *(_QWORD *)(v20 + 32) = klass;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)(v20 + 32),
                        (int32_t)klass,
                        v17,
                        v12,
                        v13,
                        v14,
                        v15,
                        v16);
                    }
                  }
                  else
                  {
                    v34 = (System_Array_o *)*((_QWORD *)Instance + 2);
                    v35 = *((_DWORD *)Instance + 7) + 1;
                    *((_DWORD *)Instance + 6) = 0;
                    *((_DWORD *)Instance + 7) = v35;
                    System_Array__Clear(v34, 0, v17, 0);
                  }
                }
              }
            }
            else
            {
              v21 = Item[4].klass;
              if ( v21 && v21->_1.namespaze )
              {
                v22 = v8;
                v23 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_int____TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v23,
                  (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_int_____ctor__);
                if ( !v23 )
                  break;
                klass = (MethodInfo *)Item[4].klass;
                items = v23->fields._items;
                v31 = Method_System_Collections_Generic_List_int____Add__;
                ++v23->fields._version;
                if ( !items )
                  break;
                size = v23->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v23,
                    (Il2CppObject *)klass,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = &items->obj.klass + size;
                  v23->fields._size = size + 1;
                  v33[4] = (Il2CppClass *)klass;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)klass, v24, v25, v26, v27, v28, v29);
                }
                System_Collections_Generic_Dictionary_object__object___Add(
                  v3,
                  (Il2CppObject *)Item[2].monitor,
                  (Il2CppObject *)v23,
                  (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
                v8 = v22;
              }
              else
              {
                System_Collections_Generic_Dictionary_object__object___Add(
                  v3,
                  (Il2CppObject *)Item[2].monitor,
                  0,
                  (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              }
            }
          }
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v3;
    }
LABEL_43:
    sub_1C93D2C(Instance, klass);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v3;
}


System_String_o *ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D31547 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31547 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               shopId,
                               (const MethodInfo_34632C0 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[2].monitor;
LABEL_10:
    sub_1C93D2C(Instance, v4);
  }
  return 0;
}