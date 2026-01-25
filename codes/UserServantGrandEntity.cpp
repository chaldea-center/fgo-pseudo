void UserServantGrandEntity___ctor(UserServantGrandEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF697 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF697 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantGrandEntity__ContainsClassBoardBaseId(
        UserServantGrandEntity_o *this,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4CEF694 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CEF694 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantGrandEntity__IsSetClassBoardBaseIds(
                                                              this,
                                                              *(const MethodInfo **)&classBoardBaseId);
  if ( v5 )
    LOBYTE(v5) = System_Linq_Enumerable__Contains_int_(
                   v5,
                   classBoardBaseId,
                   (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)v5;
}


System_String_o *UserServantGrandEntity__CreatePK(int64_t userId, int32_t grandGraphId, const MethodInfo *method)
{
  if ( (byte_4CEF696 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4CEF696 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           grandGraphId,
           (const MethodInfo_316E684 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  __int128 v39; // q0
  int64_t v40; // x0
  struct System_Int64_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  struct System_Int64_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4CEF691 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEF691 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v3 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
  if ( !v4 )
    goto LABEL_37;
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget1;
  items = v4->fields._items;
  v14 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v4->fields._version;
  if ( !items )
    goto LABEL_37;
  size = v4->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      equipTarget1,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v16[4] = (Il2CppClass *)equipTarget1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)equipTarget1, v7, v8, v9, v10, v11, v12);
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget2;
  v23 = v4->fields._items;
  v24 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v4->fields._version;
  if ( !v23 )
    goto LABEL_37;
  v25 = v4->fields._size;
  if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      equipTarget1,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    v4->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)equipTarget1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)equipTarget1, v17, v18, v19, v20, v21, v22);
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget3;
  v33 = v4->fields._items;
  v34 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v4->fields._version;
  if ( !v33 )
    goto LABEL_37;
  v35 = v4->fields._size;
  if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      equipTarget1,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    v4->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)equipTarget1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)equipTarget1, v27, v28, v29, v30, v31, v32);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v4,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
  *(_OWORD *)&v50.fields._list = *(_OWORD *)&v49.fields.currentCryptoKey;
  v50.fields._current = (Il2CppObject *)v49.fields.fakeValue;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    if ( !v37 )
      break;
    if ( v50.fields._current )
    {
      v39 = *(_OWORD *)&v50.fields._current[2].monitor;
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v50.fields._current[1].monitor;
      *(_OWORD *)&v49.fields.fakeValue = v39;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v48 = v49;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v48, 0);
      if ( !v3 )
        sub_1C7BD40(v40, v40);
      v41 = v3->fields._items;
      v42 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !v41 )
        sub_1C7BD40(v40, v40);
      v43 = v3->fields._size;
      if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          v40,
          *(const MethodInfo_3826E30 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = v43 + 1;
        v41->m_Items[v43] = v40;
      }
    }
    else
    {
      if ( !v3 )
        sub_1C7BD40(v37, v38);
      v44 = v3->fields._items;
      v45 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !v44 )
        sub_1C7BD40(v37, v38);
      v46 = v3->fields._size;
      if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          0,
          *(const MethodInfo_3826E30 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = v46 + 1;
        v44->m_Items[v46] = 0;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
  if ( !v3 )
LABEL_37:
    sub_1C7BD40(v5, equipTarget1);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
}


int32_t UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CEF692 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Convert_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&StringLiteral_19205/*"equipTarget2SkillChange"*/);
    byte_4CEF692 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19205/*"equipTarget2SkillChange"*/,
           &value,
           (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4CEF693 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_4CEF693 = 1;
  }
  entity = 0;
  if ( this->fields.userSvtId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_object )
      goto LABEL_14;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           this->fields.userSvtId,
           (const MethodInfo_34308A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( entity )
      {
        v8 = (ClassBoardClassMaster_o *)Master_object;
        Master_object = (Il2CppObject *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0, v7);
        if ( v8 )
          return ClassBoardClassMaster__GetClassBoardBaseId(v8, (int32_t)Master_object, 0) == classBoardBaseId;
      }
LABEL_14:
      sub_1C7BD40(Master_object, v6);
    }
  }
  return 0;
}


System_Int32_array *UserServantGrandEntity__IsSetClassBoardBaseIds(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF695 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21135/*"isSetClassBoardBaseIds"*/);
    byte_4CEF695 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21135/*"isSetClassBoardBaseIds"*/, 0, 0);
}