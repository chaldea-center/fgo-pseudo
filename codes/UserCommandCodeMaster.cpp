void UserCommandCodeMaster___ctor(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D618 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__);
    byte_4D2D618 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    258,
    (const MethodInfo_345B6F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool UserCommandCodeMaster__CheckCommandCodeAdd(UserCommandCodeMaster_o *this, int32_t count, const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0

  v4 = UserCommandCodeMaster__getCount(this, *(const MethodInfo **)&count);
  if ( !UserGameMaster__getSelfUserGame(0) )
    sub_1C942F0(0, v5);
  if ( !byte_4D269E5 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D269E5 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
  Il2CppObject v8; // q0
  int64_t v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h]

  if ( (byte_4D2D61B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&UserCommandCodeNewManager_TypeInfo);
    byte_4D2D61B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
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
               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
      if ( Item )
      {
        v8 = Item[2];
        *(Il2CppObject *)&v11.fields.currentCryptoKey = Item[1];
        *(Il2CppObject *)&v11.fields.fakeValue = v8;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v10 = v11;
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v10, 0);
        if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
        UserCommandCodeNewManager__SetOld(v9, 0);
      }
      if ( v5 == ++v6 )
        return;
    }
LABEL_15:
    sub_1C942F0(list, method);
  }
}


int32_t UserCommandCodeMaster__getCount(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w21
  int32_t v6; // w20
  int32_t v7; // w22

  if ( (byte_4D2D61A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
    byte_4D2D61A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
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
             (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__) )
      {
        ++v6;
      }
      if ( v5 == v7 )
        return v6;
    }
LABEL_13:
    sub_1C942F0(list, method);
  }
  return 0;
}


UserCommandCodeEntity_array *UserCommandCodeMaster__getList(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4D2D619 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
    byte_4D2D619 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
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
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
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
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v16;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
        }
      }
      if ( Count == ++v6 )
        goto LABEL_14;
    }
LABEL_16:
    sub_1C942F0(list, method);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (UserCommandCodeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__);
}