void __fastcall UserCommandCodeMaster___ctor(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD43 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__);
    byte_4A5BD43 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    252,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserCommandCodeMaster__CheckCommandCodeAdd(
        UserCommandCodeMaster_o *this,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x0
  int v5; // w20
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0

  v4 = (const MethodInfo *)UserCommandCodeMaster__getCount(this, *(const MethodInfo **)&count);
  v5 = (int)v4;
  if ( !UserGameMaster__getSelfUserGame(v4) )
    sub_1B8880C(0LL, v6);
  if ( !byte_4A567BB )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A567BB = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return v5 + count > v7->static_fields->CommandCodeFrameMax;
}


void __fastcall UserCommandCodeMaster__continueDeviceUserCommandCode(
        UserCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject v9; // q0
  int64_t v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-70h]

  if ( (byte_4A5BD46 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserCommandCodeEntity_TypeInfo);
    sub_1B885B0(&UserCommandCodeNewManager_TypeInfo);
    byte_4A5BD46 = 1;
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
        methodPtr_low = LOBYTE(UserCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeEntity_TypeInfo )
        {
          v9 = Item[2];
          *(Il2CppObject *)&v12.fields.currentCryptoKey = Item[1];
          *(Il2CppObject *)&v12.fields.fakeValue = v9;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v11 = v12;
          v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v11, 0LL);
          if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
          UserCommandCodeNewManager__SetOld(v10, 0LL);
        }
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_17:
    sub_1B8880C(list, method);
  }
}


int32_t __fastcall UserCommandCodeMaster__getCount(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w21
  int32_t v6; // w20
  int32_t v7; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BD45 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&UserCommandCodeEntity_TypeInfo);
    byte_4A5BD45 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v7,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(UserCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeEntity_TypeInfo )
        {
          ++v6;
        }
      }
      if ( v5 == ++v7 )
        return v6;
    }
LABEL_15:
    sub_1B8880C(list, method);
  }
  return 0;
}


UserCommandCodeEntity_array *__fastcall UserCommandCodeMaster__getList(
        UserCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w22
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4A5BD44 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
    sub_1B885B0(&UserCommandCodeEntity_TypeInfo);
    byte_4A5BD44 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        method = (const MethodInfo *)list;
        methodPtr_low = LOBYTE(UserCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeEntity_TypeInfo )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v11 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
          }
          else
          {
            v13 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v13[4] = (Il2CppClass *)method;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)method, v7, v8);
          }
        }
      }
      if ( Count == ++v6 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1B8880C(list, method);
  }
LABEL_16:
  if ( !v5 )
    goto LABEL_18;
  return (UserCommandCodeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__);
}