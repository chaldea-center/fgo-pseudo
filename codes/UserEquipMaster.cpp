void UserEquipMaster___ctor(UserEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971667 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
    byte_5971667 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    54,
    (const MethodInfo_3F10D40 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long___ctor__);
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
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  System_Predicate_object__o *v11; // x20
  Il2CppObject *object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_597166A & 1) == 0 )
  {
    sub_2213A60(&Method_ObservableCollectionExtensions_Find_UserEquipEntity___);
    sub_2213A60(&System_Predicate_UserEquipEntity__TypeInfo);
    sub_2213A60(&Method_UserEquipMaster___c__DisplayClass3_0__TryGetEntityByEquipId_b__0__);
    sub_2213A60(&UserEquipMaster___c__DisplayClass3_0_TypeInfo);
    byte_597166A = 1;
  }
  v7 = sub_2213CCC(UserEquipMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_DWORD *)(v7 + 16) = equipId;
  v11 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_UserEquipEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_UserEquipMaster___c__DisplayClass3_0__TryGetEntityByEquipId_b__0__,
    0);
  object = ObservableCollectionExtensions__Find_object_(
             list,
             (System_Predicate_T__o *)v11,
             (const MethodInfo_38F40E4 *)Method_ObservableCollectionExtensions_Find_UserEquipEntity___);
  *userEquipEntity = (UserEquipEntity_o *)object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)userEquipEntity, (int32_t)object, v13, v14, v15, v16, v17, v18);
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
  Il2CppClass *klass; // x23
  void *monitor; // x24
  int32_t v11; // w0
  __int64 v12; // x1
  int32_t v13; // w22
  int32_t v14; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5971669 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&UserEquipNewManager_TypeInfo);
    byte_5971669 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
      if ( Item )
      {
        v8 = Item;
        klass = Item[2].klass;
        monitor = Item[2].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v15.fields.currentCryptoKey = klass;
        *(_QWORD *)&v15.fields.fakeValue = monitor;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
        v13 = (int32_t)v8[3].klass;
        v14 = v11;
        if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v12);
        UserEquipNewManager__SetOld(v14, v13, 0);
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_15:
    sub_2213CDC(list, method);
  }
}


UserEquipEntity_array *UserEquipMaster__getList(UserEquipMaster_o *this, int64_t userId, const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = userId;
  if ( (byte_5971668 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    byte_5971668 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserEquipEntity__get_Item__);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)userId;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), userId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(list, userId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (UserEquipEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserEquipEntity__ToArray__);
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
  if ( (byte_597166B & 1) == 0 )
  {
    this = (UserEquipMaster___c__DisplayClass3_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597166B = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  v6 = *(_QWORD *)&x->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v8, 0) == v4->fields.equipId;
}