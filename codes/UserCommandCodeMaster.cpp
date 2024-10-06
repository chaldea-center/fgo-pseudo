void __fastcall UserCommandCodeMaster___ctor(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70A52 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__, method);
    byte_4A70A52 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    252,
    (const MethodInfo_312C714 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__);
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
    sub_1B9026C(0LL, v6);
  if ( !byte_4A6B49B )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, v6);
    byte_4A6B49B = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w20
  int32_t v10; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppObject v13; // q0
  int64_t v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-70h]

  if ( (byte_4A70A55 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B90010(&UserCommandCodeEntity_TypeInfo, v5);
    sub_1B90010(&UserCommandCodeNewManager_TypeInfo, v6);
    byte_4A70A55 = 1;
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
        methodPtr_low = LOBYTE(UserCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeEntity_TypeInfo )
        {
          v13 = Item[2];
          *(Il2CppObject *)&v16.fields.currentCryptoKey = Item[1];
          *(Il2CppObject *)&v16.fields.fakeValue = v13;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v15 = v16;
          v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v15, 0LL);
          if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
          UserCommandCodeNewManager__SetOld(v14, 0LL);
        }
      }
      if ( v9 == ++v10 )
        return;
    }
LABEL_17:
    sub_1B9026C(list, method);
  }
}


int32_t __fastcall UserCommandCodeMaster__getCount(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w20
  int32_t v9; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A70A54 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B90010(&UserCommandCodeEntity_TypeInfo, v4);
    byte_4A70A54 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(UserCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeEntity_TypeInfo )
        {
          ++v8;
        }
      }
      if ( v7 == ++v9 )
        return v8;
    }
LABEL_15:
    sub_1B9026C(list, method);
  }
  return 0;
}


UserCommandCodeEntity_array *__fastcall UserCommandCodeMaster__getList(
        UserCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w22
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A70A53 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v7);
    sub_1B90010(&UserCommandCodeEntity_TypeInfo, v8);
    byte_4A70A53 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        method = (const MethodInfo *)list;
        methodPtr_low = LOBYTE(UserCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserCommandCodeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserCommandCodeEntity_TypeInfo )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v17 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v19[4] = (Il2CppClass *)method;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)method, v13, v14);
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1B9026C(list, method);
  }
LABEL_16:
  if ( !v11 )
    goto LABEL_18;
  return (UserCommandCodeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__);
}