void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421614E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__, method);
    byte_421614E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    44,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v19; // x20
  int64_t Instance; // x0
  UserShopMaster_o *v21; // x21
  int32_t Count; // w0
  const MethodInfo_2AB57BC **v23; // x25
  ShopScriptEntity_c **v24; // x26
  NetworkManager_c **v25; // x27
  const MethodInfo_2E4AEDC **v26; // x24
  int32_t v27; // w22
  int32_t v28; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v30; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x28
  NetworkManager_c *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x1
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v37; // x8
  NetworkManager_c **v38; // x19
  const MethodInfo_2AB57BC **v39; // x27
  ShopScriptEntity_c **v40; // x25
  const MethodInfo_2E4AEDC **v41; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x24
  ShopScriptMaster_o *v44; // [xsp+0h] [xbp-60h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4216150 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____Clear__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int_____ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____get_Count__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&ShopScriptEntity_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4216150 = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__List_int_____TypeInfo,
                                                                                        method,
                                                                                        v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v19,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_37;
  v21 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = (const MethodInfo_2AB57BC **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v24 = &ShopScriptEntity_TypeInfo;
    v25 = &NetworkManager_TypeInfo;
    v26 = (const MethodInfo_2E4AEDC **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v27 = Count;
    v28 = 0;
    v44 = this;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v28,
               *v23);
      if ( Item && (v30 = *(&(*v24)->_2.bitflags2 + 1), *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v30) )
      {
        if ( (ShopScriptEntity_c *)Item->klass->_2.typeHierarchy[v30 - 1] == *v24 )
          v31 = Item;
        else
          v31 = 0LL;
      }
      else
      {
        v31 = 0LL;
      }
      v32 = *v25;
      if ( (BYTE3((*v25)->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v32);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v31 || !v21 )
        break;
      Instance = UserShopMaster__TryGetEntity(v21, &entity, Instance, (int32_t)v31[1].klass, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.num >= 1 )
        {
          if ( !v19 )
            break;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 v19,
                 (System_Xml_XmlQualifiedName_o *)v31[2].monitor,
                 *v26) )
          {
            v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v19, (System_Type_o *)v31[2].monitor, (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__);
            if ( v35 && v35->fields._size >= 1 )
            {
              klass = v31[4].klass;
              if ( klass && klass->_1.namespaze )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v35,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)klass,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
              else
                System_Collections_Generic_List_XWeaponTrail_Element___Clear(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)v35,
                  (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_int____Clear__);
            }
          }
          else
          {
            v37 = v31[4].klass;
            if ( v37 && v37->_1.namespaze )
            {
              v38 = v25;
              v39 = v23;
              v40 = v24;
              v41 = v26;
              v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_int____TypeInfo, v33, v34);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v42,
                (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v42 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v42,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v31[4].klass,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                v19,
                (System_Xml_XmlQualifiedName_o *)v31[2].monitor,
                (System_Xml_Schema_XmlSchemaObject_o *)v42,
                (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v26 = v41;
              v24 = v40;
              v23 = v39;
              v25 = v38;
              this = v44;
            }
            else
            {
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                v19,
                (System_Xml_XmlQualifiedName_o *)v31[2].monitor,
                0LL,
                (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( ++v28 >= v27 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v19;
    }
LABEL_37:
    sub_B0D97C(Instance);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v19;
}


System_String_o *__fastcall ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421614F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopScriptMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421614F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                shopId,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.longName;
LABEL_10:
    sub_B0D97C(Instance);
  }
  return 0LL;
}