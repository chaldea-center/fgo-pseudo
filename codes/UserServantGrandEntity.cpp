void UserServantGrandEntity___ctor(UserServantGrandEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7332 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB7332 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantGrandEntity__ContainsClassBoardBaseId(
        UserServantGrandEntity_o *this,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4CB732F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CB732F = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantGrandEntity__IsSetClassBoardBaseIds(
                                                              this,
                                                              *(const MethodInfo **)&classBoardBaseId);
  if ( v5 )
    LOBYTE(v5) = System_Linq_Enumerable__Contains_int_(
                   v5,
                   classBoardBaseId,
                   (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)v5;
}


System_String_o *UserServantGrandEntity__CreatePK(int64_t userId, int32_t grandGraphId, const MethodInfo *method)
{
  if ( (byte_4CB7331 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4CB7331 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           grandGraphId,
           (const MethodInfo_31395F8 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserServantGrandEntity__CreatePrimaryKey(UserServantGrandEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantGrandEntity__CreatePK(this->fields.userId, this->fields.grandGraphId, v2);
}


System_Int64_array *UserServantGrandEntity__GetEquipUserServantIdList(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x21
  __int64 v5; // x0
  Il2CppObject *equipTarget1; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  __int128 v27; // q0
  int64_t v28; // x0
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4CB732C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB732C = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v3 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
  if ( !v4 )
    goto LABEL_37;
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget1;
  items = v4->fields._items;
  v10 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v4->fields._version;
  if ( !items )
    goto LABEL_37;
  size = v4->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      equipTarget1,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v12[4] = (Il2CppClass *)equipTarget1;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 4), (int32_t)equipTarget1, v7, v8);
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget2;
  v15 = v4->fields._items;
  v16 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v4->fields._version;
  if ( !v15 )
    goto LABEL_37;
  v17 = v4->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      equipTarget1,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v4->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)equipTarget1;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)equipTarget1, v13, v14);
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget3;
  v21 = v4->fields._items;
  v22 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v4->fields._version;
  if ( !v21 )
    goto LABEL_37;
  v23 = v4->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      equipTarget1,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    v4->fields._size = v23 + 1;
    v24[4] = (Il2CppClass *)equipTarget1;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)equipTarget1, v19, v20);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    v4,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
  *(_OWORD *)&v38.fields._list = *(_OWORD *)&v37.fields.currentCryptoKey;
  v38.fields._current = (Il2CppObject *)v37.fields.fakeValue;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    if ( !v25 )
      break;
    if ( v38.fields._current )
    {
      v27 = *(_OWORD *)&v38.fields._current[2].monitor;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v38.fields._current[1].monitor;
      *(_OWORD *)&v37.fields.fakeValue = v27;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v36 = v37;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v36, 0);
      if ( !v3 )
        sub_1C6BC60(v28, v28);
      v29 = v3->fields._items;
      v30 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !v29 )
        sub_1C6BC60(v28, v28);
      v31 = v3->fields._size;
      if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          v28,
          *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = v31 + 1;
        v29->m_Items[v31] = v28;
      }
    }
    else
    {
      if ( !v3 )
        sub_1C6BC60(v25, v26);
      v32 = v3->fields._items;
      v33 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !v32 )
        sub_1C6BC60(v25, v26);
      v34 = v3->fields._size;
      if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          0,
          *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = v34 + 1;
        v32->m_Items[v34] = 0;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
  if ( !v3 )
LABEL_37:
    sub_1C6BC60(v5, equipTarget1);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
}


int32_t UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CB732D & 1) == 0 )
  {
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&StringLiteral_19114/*"equipTarget2SkillChange"*/);
    byte_4CB732D = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19114/*"equipTarget2SkillChange"*/,
           &value,
           (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v4 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LODWORD(script) = System_Convert__ToInt32(v4, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


bool UserServantGrandEntity__IsMatchClassBoard(
        UserServantGrandEntity_o *this,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  ClassBoardClassMaster_o *v8; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB732E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_4CB732E = 1;
  }
  entity = 0;
  if ( this->fields.userSvtId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_object )
      goto LABEL_14;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           this->fields.userSvtId,
           (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( entity )
      {
        v8 = (ClassBoardClassMaster_o *)Master_object;
        Master_object = (Il2CppObject *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0, v7);
        if ( v8 )
          return ClassBoardClassMaster__GetClassBoardBaseId(v8, (int32_t)Master_object, 0) == classBoardBaseId;
      }
LABEL_14:
      sub_1C6BC60(Master_object, v6);
    }
  }
  return 0;
}


System_Int32_array *UserServantGrandEntity__IsSetClassBoardBaseIds(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB7330 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21019/*"isSetClassBoardBaseIds"*/);
    byte_4CB7330 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21019/*"isSetClassBoardBaseIds"*/, 0, 0);
}