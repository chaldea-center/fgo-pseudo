void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1B00 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
    byte_42B1B00 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    45,
    (const MethodInfo_23E223C *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
}


System_Collections_Generic_Dictionary_string__List_int_____o *__fastcall ShopScriptMaster__GetOpenScriptsWithOpenEventIds(
        ShopScriptMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  int64_t Instance; // x0
  __int64 v5; // x1
  UserShopMaster_o *v6; // x21
  int32_t Count; // w0
  const MethodInfo_2B985FC **v8; // x25
  ShopScriptEntity_c **v9; // x26
  NetworkManager_c **v10; // x27
  const MethodInfo_2F1BA74 **v11; // x24
  int32_t v12; // w22
  int32_t v13; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v15; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x28
  NetworkManager_c *v17; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x1
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v20; // x8
  NetworkManager_c **v21; // x19
  const MethodInfo_2B985FC **v22; // x27
  ShopScriptEntity_c **v23; // x25
  const MethodInfo_2F1BA74 **v24; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x24
  ShopScriptMaster_o *v27; // [xsp+0h] [xbp-60h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B1B02 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int____Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_B52984(&System_Collections_Generic_List_int____TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopScriptEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1B02 = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_37;
  v6 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = (const MethodInfo_2B985FC **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v9 = &ShopScriptEntity_TypeInfo;
    v10 = &NetworkManager_TypeInfo;
    v11 = (const MethodInfo_2F1BA74 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v12 = Count;
    v13 = 0;
    v27 = this;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v13,
               *v8);
      if ( Item && (v15 = *(&(*v9)->_2.bitflags2 + 1), *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
      {
        if ( (ShopScriptEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] == *v9 )
          v16 = Item;
        else
          v16 = 0LL;
      }
      else
      {
        v16 = 0LL;
      }
      v17 = *v10;
      if ( (BYTE3((*v10)->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v17);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v16 || !v6 )
        break;
      Instance = UserShopMaster__TryGetEntity(v6, &entity, Instance, (int32_t)v16[1].klass, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.num >= 1 )
        {
          if ( !v3 )
            break;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 v3,
                 (System_Xml_XmlQualifiedName_o *)v16[2].monitor,
                 *v11) )
          {
            v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v3, (System_Type_o *)v16[2].monitor, (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__);
            if ( v18 && v18->fields._size >= 1 )
            {
              klass = v16[4].klass;
              if ( klass && klass->_1.namespaze )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v18,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)klass,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_int____Add__);
              else
                System_Collections_Generic_List_XWeaponTrail_Element___Clear(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)v18,
                  (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_int____Clear__);
            }
          }
          else
          {
            v20 = v16[4].klass;
            if ( v20 && v20->_1.namespaze )
            {
              v21 = v10;
              v22 = v8;
              v23 = v9;
              v24 = v11;
              v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_int____TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v25,
                (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v25 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v25,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v16[4].klass,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_int____Add__);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                v3,
                (System_Xml_XmlQualifiedName_o *)v16[2].monitor,
                (System_Xml_Schema_XmlSchemaObject_o *)v25,
                (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v11 = v24;
              v9 = v23;
              v8 = v22;
              v10 = v21;
              this = v27;
            }
            else
            {
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                v3,
                (System_Xml_XmlQualifiedName_o *)v16[2].monitor,
                0LL,
                (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( ++v13 >= v12 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v3;
    }
LABEL_37:
    sub_B52A5C(Instance, v5);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v3;
}


System_String_o *__fastcall ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B1B01 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_B52984(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1B01 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                shopId,
                                (const MethodInfo_23E2334 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.longName;
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return 0LL;
}