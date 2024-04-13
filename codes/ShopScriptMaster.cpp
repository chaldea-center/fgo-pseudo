void __fastcall ShopScriptMaster___ctor(ShopScriptMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA6F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA6F9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    45,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int___ctor__);
}


System_Collections_Generic_Dictionary_string__List_int_____o *__fastcall ShopScriptMaster__GetOpenScriptsWithOpenEventIds(
        ShopScriptMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v50; // x20
  int64_t Instance; // x0
  __int64 v52; // x1
  UserShopMaster_o *v53; // x21
  int32_t Count; // w0
  const MethodInfo_2BB8668 **v55; // x25
  ShopScriptEntity_c **v56; // x26
  NetworkManager_c **v57; // x27
  const MethodInfo_2F26E30 **v58; // x24
  int32_t v59; // w22
  int32_t v60; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v62; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v63; // x28
  NetworkManager_c *v64; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x1
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v67; // x8
  NetworkManager_c **v68; // x19
  const MethodInfo_2BB8668 **v69; // x27
  ShopScriptEntity_c **v70; // x25
  const MethodInfo_2F26E30 **v71; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x24
  ShopScriptMaster_o *v74; // [xsp+0h] [xbp-60h]
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EA6FB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__List_int_____Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__List_int______ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__List_int_____TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____Clear__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int_____ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Count__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, v38, v39, v40);
    sub_B5D5C4(&NetworkManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&ShopScriptEntity_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    byte_42EA6FB = 1;
  }
  entity = 0LL;
  v50 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__List_int_____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v50,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__List_int______ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !this->fields.list )
    goto LABEL_37;
  v53 = (UserShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v55 = (const MethodInfo_2BB8668 **)&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__;
    v56 = &ShopScriptEntity_TypeInfo;
    v57 = &NetworkManager_TypeInfo;
    v58 = (const MethodInfo_2F26E30 **)&Method_System_Collections_Generic_Dictionary_string__List_int_____ContainsKey__;
    v59 = Count;
    v60 = 0;
    v74 = this;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v60,
               *v55);
      if ( Item && (v62 = *(&(*v56)->_2.bitflags2 + 1), *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v62) )
      {
        if ( (ShopScriptEntity_c *)Item->klass->_2.typeHierarchy[v62 - 1] == *v56 )
          v63 = Item;
        else
          v63 = 0LL;
      }
      else
      {
        v63 = 0LL;
      }
      v64 = *v57;
      if ( (BYTE3((*v57)->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v64);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v63 || !v53 )
        break;
      Instance = UserShopMaster__TryGetEntity(v53, &entity, Instance, (int32_t)v63[1].klass, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.num >= 1 )
        {
          if ( !v50 )
            break;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 v50,
                 (System_Xml_XmlQualifiedName_o *)v63[2].monitor,
                 *v58) )
          {
            v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v50, (System_Type_o *)v63[2].monitor, (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__List_int_____get_Item__);
            if ( v65 && v65->fields._size >= 1 )
            {
              klass = v63[4].klass;
              if ( klass && klass->_1.namespaze )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v65,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)klass,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
              else
                System_Collections_Generic_List_XWeaponTrail_Element___Clear(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)v65,
                  (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_int____Clear__);
            }
          }
          else
          {
            v67 = v63[4].klass;
            if ( v67 && v67->_1.namespaze )
            {
              v68 = v57;
              v69 = v55;
              v70 = v56;
              v71 = v58;
              v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v72,
                (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
              if ( !v72 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v72,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v63[4].klass,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                v50,
                (System_Xml_XmlQualifiedName_o *)v63[2].monitor,
                (System_Xml_Schema_XmlSchemaObject_o *)v72,
                (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
              v58 = v71;
              v56 = v70;
              v55 = v69;
              v57 = v68;
              this = v74;
            }
            else
            {
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                v50,
                (System_Xml_XmlQualifiedName_o *)v63[2].monitor,
                0LL,
                (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__List_int_____Add__);
            }
          }
        }
      }
      if ( ++v60 >= v59 )
        return (System_Collections_Generic_Dictionary_string__List_int_____o *)v50;
    }
LABEL_37:
    sub_B5D69C(Instance, v52);
  }
  return (System_Collections_Generic_Dictionary_string__List_int_____o *)v50;
}


System_String_o *__fastcall ShopScriptMaster__GetScriptId(int32_t shopId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA6FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopScriptMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA6FA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                shopId,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.longName;
LABEL_10:
    sub_B5D69C(Instance, v12);
  }
  return 0LL;
}