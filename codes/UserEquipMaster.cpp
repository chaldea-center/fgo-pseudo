void __fastcall UserEquipMaster___ctor(UserEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD6C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
    byte_4A5BD6C = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    50,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
}


void __fastcall UserEquipMaster__continueDeviceEquipLvInfo(UserEquipMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *v8; // x22
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v12; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5BD6E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserEquipEntity_TypeInfo);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5BD6E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v8 = Item;
        methodPtr_low = LOBYTE(UserEquipEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEquipEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEquipEntity_TypeInfo )
        {
          klass = Item[2].klass;
          monitor = Item[2].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v15.fields.currentCryptoKey = klass;
          *(_QWORD *)&v15.fields.fakeValue = monitor;
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
          v13 = (int32_t)v8[3].klass;
          v14 = v12;
          if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
          UserEquipNewManager__SetOld(v14, v13, 0LL);
        }
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_17:
    sub_1B8880C(list, method);
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
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  v3 = userId;
  if ( (byte_4A5BD6D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    sub_1B885B0(&UserEquipEntity_TypeInfo);
    byte_4A5BD6D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        methodPtr_low = LOBYTE(UserEquipEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEquipEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEquipEntity_TypeInfo
          && list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_UserEquipEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = (Il2CppClass *)userId;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), userId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, userId);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return (UserEquipEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
}