void __fastcall UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1700F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__,
      method,
      v2);
    byte_4B1700F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    254,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *__fastcall UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1700D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__,
      userId,
      svtId);
    byte_4B1700D = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_31B3198 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_long__o *v15; // x20
  UserServantCommandCodeEntity_c *v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v19; // w21
  int32_t v20; // w22
  __int64 methodPtr_low; // x9
  _QWORD *monitor; // x26
  __int64 v23; // x27
  __int64 v24; // x28
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  UserServantCommandCodeMaster_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_4B17010 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v11, v12);
    sub_1BCA7E0(&UserServantCommandCodeEntity_TypeInfo, v13, v14);
    byte_4B17010 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_1BCAA3C(list, v16);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v15;
  v19 = Count;
  v20 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v20,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_24;
    v16 = UserServantCommandCodeEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UserServantCommandCodeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    monitor = list[3].monitor;
    if ( !monitor )
      goto LABEL_24;
    if ( (int)monitor[3] >= 1 )
    {
      v23 = 0LL;
      v24 = (unsigned int)monitor[3] - 1LL;
      while ( 1 )
      {
        v16 = (UserServantCommandCodeEntity_c *)monitor[v23 + 4];
        if ( (__int64)v16 >= 1 )
        {
          if ( !v15 )
            goto LABEL_24;
          items = v15->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v15,
              (int64_t)v16,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size] = (int64_t)v16;
          }
        }
        if ( v24 == v23 )
          break;
        if ( ++v23 >= (unsigned __int64)*((unsigned int *)monitor + 6) )
          sub_1BCAA44(list, v16);
      }
    }
    if ( ++v20 == v19 )
      return v15;
  }
  sub_1BCACFC(list);
  return (System_Collections_Generic_List_long__o *)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v29, v30);
}


System_Collections_Generic_Dictionary_long__long__o *__fastcall UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_long__long__o *v17; // x20
  int64_t v18; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v21; // w21
  int32_t v22; // w22
  __int64 methodPtr_low; // x9
  __int128 v24; // q0
  __int64 v25; // x28
  int64_t v26; // x23
  __int64 v27; // x29
  __int64 v28; // x24
  System_Collections_Generic_Dictionary_long__long__o *result; // x0
  UserServantCommandCodeMaster_o *v30; // x0
  System_Int64_array **v31; // x1
  int64_t v32; // x2
  const MethodInfo *v33; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-80h]

  if ( (byte_4B17011 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__long___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__long__TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    sub_1BCA7E0(&UserServantCommandCodeEntity_TypeInfo, v15, v16);
    byte_4B17011 = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_long__long__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_long__long__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v17,
    (const MethodInfo_32406E4 *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
LABEL_23:
    sub_1BCAA3C(list, v18);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v17;
  v21 = Count;
  v22 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v22,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    v24 = *(_OWORD *)(list + 64);
    v25 = *(_QWORD *)(list + 80);
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(list + 48);
    *(_OWORD *)&v35.fields.fakeValue = v24;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
        UserServantCommandCodeEntity_TypeInfo);
    v34 = v35;
    list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v34, 0LL);
    if ( !v25 )
      goto LABEL_23;
    if ( (int)*(_QWORD *)(v25 + 24) >= 1 )
    {
      v26 = list;
      v27 = 0LL;
      v28 = (unsigned int)*(_QWORD *)(v25 + 24) - 1LL;
      while ( 1 )
      {
        v18 = *(_QWORD *)(v25 + 32 + 8 * v27);
        if ( v18 >= 1 )
        {
          if ( !v17 )
            goto LABEL_23;
          System_Collections_Generic_Dictionary_long__long___Add(
            v17,
            v18,
            v26,
            (const MethodInfo_32410B4 *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
        }
        if ( v28 == v27 )
          break;
        if ( ++v27 >= (unsigned __int64)*(unsigned int *)(v25 + 24) )
          sub_1BCAA44(list, v18);
      }
    }
    if ( ++v22 == v21 )
      return v17;
  }
  sub_1BCACFC(list);
  UserServantCommandCodeMaster__getAttachList(v30, v31, v32, v33);
  return result;
}


bool __fastcall UserServantCommandCodeMaster__IsAttach(
        UserServantCommandCodeMaster_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_long__o *v18; // x0
  int32_t v19; // w22
  bool v20; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x9
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v25; // w10

  v3 = userCommandCodeId;
  if ( (byte_4B17015 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userCommandCodeId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v9, v10);
    sub_1BCA7E0(&UserServantCommandCodeEntity_TypeInfo, v11, v12);
    byte_4B17015 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_1BCAA3C(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v15,
                                                     v16,
                                                     v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count < 1 )
  {
    return 0;
  }
  else
  {
    v19 = 0;
    v20 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_20;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v19,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        userCommandCodeId = (int64_t)UserServantCommandCodeEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantCommandCodeEntity_TypeInfo )
        {
          sub_1BCACFC(Item);
          goto LABEL_20;
        }
        klass = Item[5].klass;
        if ( klass )
        {
          namespaze = (int)klass->_1.namespaze;
          if ( namespaze >= 1 )
            break;
        }
      }
LABEL_15:
      v20 = ++v19 < Count;
      if ( v19 == Count )
        return v20;
    }
    v25 = 0;
    while ( *((_QWORD *)&klass->_1.byval_arg.data + v25) != v3 )
    {
      if ( namespaze == ++v25 )
        goto LABEL_15;
    }
  }
  return v20;
}


bool __fastcall UserServantCommandCodeMaster__TryGetEntity(
        UserServantCommandCodeMaster_o *this,
        UserServantCommandCodeEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1700E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B1700E = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
}


void __fastcall UserServantCommandCodeMaster__getAttachList(
        UserServantCommandCodeMaster_o *this,
        System_Int64_array **userCommandCodeIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t list; // x0
  int32_t Count; // w23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_long__o *v24; // x22
  int32_t i; // w24
  UserServantCommandCodeEntity_o *v26; // x25
  __int64 methodPtr_low; // x9
  __int128 v28; // q0
  const MethodInfo *v29; // x2
  System_Int64_array *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-80h]

  if ( (byte_4B17012 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userCommandCodeIdList,
      userId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserServantCommandCodeEntity_TypeInfo, v17, v18);
    byte_4B17012 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1BCAA3C(list, userCommandCodeIdList);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v21,
                                                     v22,
                                                     v23);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    for ( i = 0; Count != i; ++i )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_18;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        i,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v26 = (UserServantCommandCodeEntity_o *)list;
        methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
          || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserServantCommandCodeEntity_TypeInfo )
        {
          sub_1BCACFC(list);
          goto LABEL_18;
        }
        v28 = *(_OWORD *)(list + 32);
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v38.fields.fakeValue = v28;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            UserServantCommandCodeEntity_TypeInfo);
        v37 = v38;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v37, 0LL);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v26, v24, v29);
      }
    }
  }
  if ( !v24 )
    goto LABEL_18;
  v30 = System_Collections_Generic_List_long___ToArray(
          v24,
          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v30;
  sub_1BCA784((PartyOrganizationUtility_o *)userCommandCodeIdList, (int64_t)v30, v31, v32, v33, v34, v35, v36);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantCommandCodeMaster__getCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v21; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w21
  BalanceConfig_c *v24; // x0
  System_Int32_array *v25; // x20
  unsigned __int64 v26; // x23
  __int64 v27; // x24
  struct System_Int64_array *v28; // x8
  int64_t v29; // x2
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v33; // [xsp+0h] [xbp-60h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4B17013 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&int___TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B17013 = 1;
  }
  v33 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = (Il2CppObject *)UserServantCommandCodeMaster__TryGetEntity(
                               (UserServantCommandCodeMaster_o *)Instance,
                               &entity,
                               userId,
                               svtId,
                               v21);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
    goto LABEL_33;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_33;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0LL;
  v24 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
    v24 = BalanceConfig_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1BCA888(int___TypeInfo, (unsigned int)v24->static_fields->SvtCommandCardMax);
  v25 = (System_Int32_array *)Instance;
  if ( BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax >= max_length )
    goto LABEL_16;
  max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
    max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  if ( max_length >= 1 )
  {
LABEL_16:
    v26 = 0LL;
    v27 = (unsigned int)max_length;
    while ( entity )
    {
      v28 = entity->fields.userCommandCodeIds;
      if ( !v28 )
        break;
      if ( v26 >= v28->max_length )
        goto LABEL_34;
      v29 = v28->m_Items[v26];
      if ( v29 >= 1 )
      {
        if ( !MasterData_object )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                     &v33,
                                     v29,
                                     (const MethodInfo_31B3040 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v33 )
            break;
          klass = v33[5].klass;
          monitor = v33[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
          *(_QWORD *)&v35.fields.currentCryptoKey = klass;
          *(_QWORD *)&v35.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35, 0LL);
          if ( !v25 )
            break;
          if ( v26 >= v25->max_length )
LABEL_34:
            sub_1BCAA44(Instance, v19);
          v25->m_Items[v26 + 1] = (int)Instance;
        }
      }
      if ( v27 == ++v26 )
        return v25;
    }
LABEL_33:
    sub_1BCAA3C(Instance, v19);
  }
  return v25;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_o *Instance; // x0
  int64_t v19; // x1
  const MethodInfo *v20; // x4
  __int64 v21; // x2
  __int64 v22; // x3
  struct System_Int64_array *userCommandCodeIds; // x8
  int32_t max_length; // w21
  System_Collections_Generic_List_long__o *v25; // x19
  unsigned __int64 v26; // x20
  struct System_Int64_array *v27; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B17014 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B17014 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v20);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
    goto LABEL_30;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_30;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0LL;
  v25 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v19,
                                                     v21,
                                                     v22);
  System_Collections_Generic_List_long____ctor(
    v25,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 48LL) >= max_length )
    goto LABEL_16;
  max_length = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 48LL);
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v19);
    max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  if ( max_length >= 1 )
  {
LABEL_16:
    v26 = 0LL;
    while ( entity )
    {
      v27 = entity->fields.userCommandCodeIds;
      if ( !v27 )
        break;
      if ( v26 >= v27->max_length )
        sub_1BCAA44(Instance, v19);
      v19 = v27->m_Items[v26];
      if ( v19 >= 1 )
      {
        if ( !v25 )
          break;
        items = v25->fields._items;
        v29 = Method_System_Collections_Generic_List_long__Add__;
        ++v25->fields._version;
        if ( !items )
          break;
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v25,
            v19,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v25->fields._size = size + 1;
          items->m_Items[size] = v19;
        }
      }
      if ( max_length == ++v26 )
        return v25;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v19);
  }
  return v25;
}