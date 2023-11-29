void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB7D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__, method);
    byte_40FB7D7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    44,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
}


System_Collections_Generic_Dictionary_string__List_int_____o *__fastcall ShopScriptMaster__GetOpenScriptsWithOpenEventIds(
        ShopScriptMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v21; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserShopMaster_o *v24; // x21
  int32_t Count; // w0
  const MethodInfo_290DF28 **v26; // x25
  ShopScriptEntity_c **v27; // x26
  NetworkManager_c **v28; // x27
  const MethodInfo_2DA3E8C **v29; // x24
  int32_t v30; // w22
  int32_t v31; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v34; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v35; // x28
  NetworkManager_c *v36; // x0
  int64_t UserId; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x1
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v44; // x8
  NetworkManager_c **v45; // x19
  const MethodInfo_290DF28 **v46; // x27
  ShopScriptEntity_c **v47; // x25
  const MethodInfo_2DA3E8C **v48; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x24
  ShopScriptMaster_o *v51; // [xsp+0h] [xbp-60h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FB7D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____Clear__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int_____ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Count__, v16);
    sub_B16FFC(&System_Collections_Generic_List_int____TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&ShopScriptEntity_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_40FB7D9 = 1;
  }
  entity = 0LL;
  v21 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__List_int_____TypeInfo,
                                                                                        method,
                                                                                        v2,
                                                                                        v3,
                                                                                        v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v21,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_37;
  v24 = (UserShopMaster_o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = (const MethodInfo_290DF28 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v27 = &ShopScriptEntity_TypeInfo;
    v28 = &NetworkManager_TypeInfo;
    v29 = (const MethodInfo_2DA3E8C **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v30 = Count;
    v31 = 0;
    v51 = this;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(list, v31, *v26);
      if ( Item && (v34 = *(&(*v27)->_2.bitflags2 + 1), *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v34) )
      {
        if ( (ShopScriptEntity_c *)Item->klass->_2.typeHierarchy[v34 - 1] == *v27 )
          v35 = Item;
        else
          v35 = 0LL;
      }
      else
      {
        v35 = 0LL;
      }
      v36 = *v28;
      if ( (BYTE3((*v28)->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v36);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v35 || !v24 )
        break;
      if ( UserShopMaster__TryGetEntity(v24, &entity, UserId, (int32_t)v35[1].klass, 0LL) )
      {
        if ( !entity )
          break;
        if ( entity->fields.num >= 1 )
        {
          if ( !v21 )
            break;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 v21,
                 (System_Xml_XmlQualifiedName_o *)v35[2].monitor,
                 *v29) )
          {
            v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v21, (System_Type_o *)v35[2].monitor, (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__);
            if ( v42 && v42->fields._size >= 1 )
            {
              klass = v35[4].klass;
              if ( klass && klass->_1.namespaze )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v42,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)klass,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
              else
                System_Collections_Generic_List_XWeaponTrail_Element___Clear(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)v42,
                  (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_int____Clear__);
            }
          }
          else
          {
            v44 = v35[4].klass;
            if ( v44 && v44->_1.namespaze )
            {
              v45 = v28;
              v46 = v26;
              v47 = v27;
              v48 = v29;
              v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_int____TypeInfo, v38, v39, v40, v41);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v49,
                (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v49 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v49,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v35[4].klass,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                v21,
                (System_Xml_XmlQualifiedName_o *)v35[2].monitor,
                (System_Xml_Schema_XmlSchemaObject_o *)v49,
                (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v29 = v48;
              v27 = v47;
              v26 = v46;
              v28 = v45;
              this = v51;
            }
            else
            {
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                v21,
                (System_Xml_XmlQualifiedName_o *)v35[2].monitor,
                0LL,
                (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( ++v31 >= v30 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v21;
    }
LABEL_37:
    sub_B170D4();
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v21;
}


System_String_o *__fastcall ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB7D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopScriptMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FB7D8 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         shopId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return entity->fields.longName;
LABEL_10:
    sub_B170D4();
  }
  return 0LL;
}