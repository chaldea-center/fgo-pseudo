void __fastcall UserEquipMaster___ctor(UserEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD1BF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
    byte_4BDD1BF = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    54,
    (const MethodInfo_325C000 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
}


void __fastcall UserEquipMaster__continueDeviceEquipLvInfo(UserEquipMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *v8; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v11; // w0
  int32_t v12; // w22
  int32_t v13; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4BDD1C1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&UserEquipNewManager_TypeInfo);
    byte_4BDD1C1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v6,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
      if ( Item )
      {
        v8 = Item;
        klass = Item[2].klass;
        monitor = Item[2].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = klass;
        *(_QWORD *)&v14.fields.fakeValue = monitor;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v14, 0LL);
        v12 = (int32_t)v8[3].klass;
        v13 = v11;
        if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        UserEquipNewManager__SetOld(v13, v12, 0LL);
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_15:
    sub_1C22094(list, method);
  }
}


UserEquipEntity_array *__fastcall UserEquipMaster__getList(
        UserEquipMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = userId;
  if ( (byte_4BDD1C0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEquipEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    byte_4BDD1C0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_UserEquipEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)userId;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), userId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C22094(list, userId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (UserEquipEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
}