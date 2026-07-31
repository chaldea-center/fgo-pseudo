void UserCommandCodeMaster___ctor(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939481 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__);
    byte_5939481 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    260,
    (const MethodInfo_3EDD598 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool UserCommandCodeMaster__CheckCommandCodeAdd(UserCommandCodeMaster_o *this, int32_t count, const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0

  v4 = UserCommandCodeMaster__getCount(this, *(const MethodInfo **)&count);
  if ( !UserGameMaster__getSelfUserGame(0) )
    sub_21FFECC(0, v5);
  if ( !byte_59324C8 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_59324C8 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v6 = BalanceConfig_TypeInfo;
  }
  return v4 + count > v6->static_fields->CommandCodeFrameMax;
}


void UserCommandCodeMaster__continueDeviceUserCommandCode(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  Il2CppObject *Item; // x0
  Il2CppObject v8; // q1
  int v9; // w9
  __int64 v10; // x1
  int64_t v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h]

  if ( (byte_5939484 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    byte_5939484 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
      if ( Item )
      {
        v8 = Item[2];
        v9 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(Il2CppObject *)&v13.fields.currentCryptoKey = Item[1];
        *(Il2CppObject *)&v13.fields.fakeValue = v8;
        if ( !v9 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
        v12 = v13;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v12, 0);
        if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v10);
        UserCommandCodeNewManager__SetOld(v11, 0);
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_15:
    sub_21FFECC(list, method);
  }
}


int32_t UserCommandCodeMaster__getCount(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  int32_t v7; // w22

  if ( (byte_5939483 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
    byte_5939483 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
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
      if ( System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v7++,
             (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__) )
      {
        ++v6;
      }
      if ( v5 == v7 )
        return v6;
    }
LABEL_13:
    sub_21FFECC(list, method);
  }
  return 0;
}


UserCommandCodeEntity_array *UserCommandCodeMaster__getList(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_5939482 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
    byte_5939482 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
      if ( list )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        v16 = list;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v16;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
        }
      }
      if ( Count == ++v6 )
        goto LABEL_14;
    }
LABEL_16:
    sub_21FFECC(list, method);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (UserCommandCodeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__);
}