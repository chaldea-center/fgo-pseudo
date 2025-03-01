void __fastcall UserEquipMaster___ctor(UserEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE3F5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__, method);
    byte_4BFE3F5 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    54,
    (const MethodInfo_327B3B8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
}


void __fastcall UserEquipMaster__continueDeviceEquipLvInfo(UserEquipMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w20
  int32_t v9; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v14; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4BFE3F7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__, v3);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C2E12C(&UserEquipNewManager_TypeInfo, v5);
    byte_4BFE3F7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
      if ( Item )
      {
        v11 = Item;
        klass = Item[2].klass;
        monitor = Item[2].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v17.fields.currentCryptoKey = klass;
        *(_QWORD *)&v17.fields.fakeValue = monitor;
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v17, 0LL);
        v15 = (int32_t)v11[3].klass;
        v16 = v14;
        if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        UserEquipNewManager__SetOld(v16, v15, 0LL);
      }
      if ( v8 == ++v9 )
        return;
    }
LABEL_15:
    sub_1C2E388(list, method);
  }
}


UserEquipEntity_array *__fastcall UserEquipMaster__getList(
        UserEquipMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  v3 = userId;
  if ( (byte_4BFE3F6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__, userId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserEquipEntity__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserEquipEntity__ToArray__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_UserEquipEntity__TypeInfo, v9);
    byte_4BFE3F6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        if ( list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v21 = Method_System_Collections_Generic_List_UserEquipEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v23[4] = (Il2CppClass *)userId;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v23 + 4), userId, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2E388(list, userId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (UserEquipEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
}