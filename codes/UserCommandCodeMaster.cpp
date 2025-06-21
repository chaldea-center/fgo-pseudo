void __fastcall UserCommandCodeMaster___ctor(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D245 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__, method);
    byte_4B1D245 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    258,
    (const MethodInfo_32C8038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long___ctor__);
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
    sub_1BCB254(0LL, v6);
  if ( !byte_4B1692D )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v6);
    byte_4B1692D = 1;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w20
  int32_t v9; // w21
  Il2CppObject *Item; // x0
  Il2CppObject v11; // q0
  int64_t v12; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-60h]

  if ( (byte_4B1D248 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1BCAFF8(&UserCommandCodeNewManager_TypeInfo, v5);
    byte_4B1D248 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
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
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
      if ( Item )
      {
        v11 = Item[2];
        *(Il2CppObject *)&v14.fields.currentCryptoKey = Item[1];
        *(Il2CppObject *)&v14.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v13 = v14;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v13, 0LL);
        if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
        UserCommandCodeNewManager__SetOld(v12, 0LL);
      }
      if ( v8 == ++v9 )
        return;
    }
LABEL_15:
    sub_1BCB254(list, method);
  }
}


int32_t __fastcall UserCommandCodeMaster__getCount(UserCommandCodeMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v6; // w21
  int32_t v7; // w20
  int32_t v8; // w22

  if ( (byte_4B1D247 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__, v3);
    byte_4B1D247 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v6 = Count;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      if ( System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8++,
             (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__) )
      {
        ++v7;
      }
      if ( v6 == v8 )
        return v7;
    }
LABEL_13:
    sub_1BCB254(list, method);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4B1D246 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo, v7);
    byte_4B1D246 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Count__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserCommandCodeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UserCommandCodeEntity___ctor__);
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_UserCommandCodeEntity__get_Item__);
      if ( list )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v15 = Method_System_Collections_Generic_List_UserCommandCodeEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        v17 = list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v17;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
        }
      }
      if ( Count == ++v11 )
        goto LABEL_14;
    }
LABEL_16:
    sub_1BCB254(list, method);
  }
LABEL_14:
  if ( !v10 )
    goto LABEL_16;
  return (UserCommandCodeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v10,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_UserCommandCodeEntity__ToArray__);
}