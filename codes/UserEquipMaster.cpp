void UserEquipMaster___ctor(UserEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3177E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
    byte_4D3177E = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    54,
    (const MethodInfo_34634AC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
}


bool UserEquipMaster__TryGetEntityByEquipId(
        UserEquipMaster_o *this,
        UserEquipEntity_o **userEquipEntity,
        int32_t equipId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_object__o *v11; // x21
  Il2CppObject *object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D31781 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ObservableCollectionExtensions_Find_UserEquipEntity___);
    sub_1C93AD4(&System_Predicate_UserEquipEntity__TypeInfo);
    sub_1C93AD4(&Method_UserEquipMaster___c__DisplayClass3_0__TryGetEntityByEquipId_b__0__);
    sub_1C93AD4(&UserEquipMaster___c__DisplayClass3_0_TypeInfo);
    byte_4D31781 = 1;
  }
  v7 = sub_1C93D20(UserEquipMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_DWORD *)(v7 + 16) = equipId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v11 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_UserEquipEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_UserEquipMaster___c__DisplayClass3_0__TryGetEntityByEquipId_b__0__,
    0);
  object = ObservableCollectionExtensions__Find_object_(
             list,
             (System_Predicate_T__o *)v11,
             (const MethodInfo_3231AA0 *)Method_ObservableCollectionExtensions_Find_UserEquipEntity___);
  *userEquipEntity = (UserEquipEntity_o *)object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)userEquipEntity, (int32_t)object, v13, v14, v15, v16, v17, v18);
  return *userEquipEntity != 0;
}


void UserEquipMaster__continueDeviceEquipLvInfo(UserEquipMaster_o *this, const MethodInfo *method)
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

  if ( (byte_4D31780 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&UserEquipNewManager_TypeInfo);
    byte_4D31780 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
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
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
      if ( Item )
      {
        v8 = Item;
        klass = Item[2].klass;
        monitor = Item[2].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = klass;
        *(_QWORD *)&v14.fields.fakeValue = monitor;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0);
        v12 = (int32_t)v8[3].klass;
        v13 = v11;
        if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        UserEquipNewManager__SetOld(v13, v12, 0);
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_15:
    sub_1C93D2C(list, method);
  }
}


UserEquipEntity_array *UserEquipMaster__getList(UserEquipMaster_o *this, int64_t userId, const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = userId;
  if ( (byte_4D3177F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    byte_4D3177F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
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
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)userId;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), userId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C93D2C(list, userId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (UserEquipEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
}


void UserEquipMaster___c__DisplayClass3_0___ctor(
        UserEquipMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEquipMaster___c__DisplayClass3_0___TryGetEntityByEquipId_b__0(
        UserEquipMaster___c__DisplayClass3_0_o *this,
        UserEquipEntity_o *x,
        const MethodInfo *method)
{
  UserEquipMaster___c__DisplayClass3_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4D31782 & 1) == 0 )
  {
    this = (UserEquipMaster___c__DisplayClass3_0_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31782 = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  v6 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v8, 0) == v4->fields.equipId;
}