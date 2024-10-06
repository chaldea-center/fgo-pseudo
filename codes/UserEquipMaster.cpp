void __fastcall UserEquipMaster___ctor(UserEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70A7B & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__, method);
    byte_4A70A7B = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    50,
    (const MethodInfo_312C714 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
}


void __fastcall UserEquipMaster__continueDeviceEquipLvInfo(UserEquipMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w20
  int32_t v10; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x22
  __int64 methodPtr_low; // x10
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v16; // w0
  int32_t v17; // w22
  int32_t v18; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A70A7D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B90010(&UserEquipEntity_TypeInfo, v5);
    sub_1B90010(&UserEquipNewManager_TypeInfo, v6);
    byte_4A70A7D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = Item;
        methodPtr_low = LOBYTE(UserEquipEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEquipEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEquipEntity_TypeInfo )
        {
          klass = Item[2].klass;
          monitor = Item[2].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v19.fields.currentCryptoKey = klass;
          *(_QWORD *)&v19.fields.fakeValue = monitor;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v19, 0LL);
          v17 = (int32_t)v12[3].klass;
          v18 = v16;
          if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
          UserEquipNewManager__SetOld(v18, v17, 0LL);
        }
      }
      if ( v9 == ++v10 )
        return;
    }
LABEL_17:
    sub_1B9026C(list, method);
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
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v3 = userId;
  if ( (byte_4A70A7C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_UserEquipEntity__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_UserEquipEntity__ToArray__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_UserEquipEntity__TypeInfo, v9);
    sub_1B90010(&UserEquipEntity_TypeInfo, v10);
    byte_4A70A7C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        methodPtr_low = LOBYTE(UserEquipEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEquipEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEquipEntity_TypeInfo
          && list[1].klass == (System_Collections_ObjectModel_Collection_T__c *)v3 )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v19 = Method_System_Collections_Generic_List_UserEquipEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v21[4] = (Il2CppClass *)userId;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v21 + 4), userId, v15, v16);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B9026C(list, userId);
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  return (UserEquipEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
}