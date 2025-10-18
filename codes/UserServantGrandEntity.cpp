void UserServantGrandEntity___ctor(UserServantGrandEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43FFC & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C43FFC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantGrandEntity__ContainsClassBoardBaseId(
        UserServantGrandEntity_o *this,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4C43FF9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C43FF9 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantGrandEntity__IsSetClassBoardBaseIds(
                                                              this,
                                                              *(const MethodInfo **)&classBoardBaseId);
  if ( v5 )
    LOBYTE(v5) = System_Linq_Enumerable__Contains_int_(
                   v5,
                   classBoardBaseId,
                   (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)v5;
}


System_String_o *UserServantGrandEntity__CreatePK(int64_t userId, int32_t grandGraphId, const MethodInfo *method)
{
  if ( (byte_4C43FFB & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C43FFB = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           grandGraphId,
           (const MethodInfo_30E5EE8 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *equipTarget1; // x1
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *equipTarget2; // x1
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *equipTarget3; // x1
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  _BOOL8 v27; // x0
  __int128 v28; // q0
  int64_t v29; // x0
  struct System_Int64_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4C43FF6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C43FF6 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v3 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
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
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v12[4] = (Il2CppClass *)equipTarget1;
    sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 4), (int32_t)equipTarget1, v6, v7);
  }
  equipTarget2 = (Il2CppObject *)this->fields.equipTarget2;
  v16 = v4->fields._items;
  v17 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v4->fields._version;
  if ( !v16 )
    goto LABEL_37;
  v18 = v4->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      equipTarget2,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v4->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)equipTarget2;
    sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)equipTarget2, v13, v14);
  }
  equipTarget3 = (Il2CppObject *)this->fields.equipTarget3;
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
      equipTarget3,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    v4->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)equipTarget3;
    sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)equipTarget3, v20, v21);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v4,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
  *(_OWORD *)&v39.fields._list = *(_OWORD *)&v38.fields.currentCryptoKey;
  v39.fields._current = (Il2CppObject *)v38.fields.fakeValue;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    if ( !v27 )
      break;
    if ( v39.fields._current )
    {
      v28 = *(_OWORD *)&v39.fields._current[2].monitor;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v39.fields._current[1].monitor;
      *(_OWORD *)&v38.fields.fakeValue = v28;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v37 = v38;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v37, 0);
      if ( !v3 )
        sub_1C372B4(v29);
      v30 = v3->fields._items;
      v31 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !v30 )
        sub_1C372B4(v29);
      v32 = v3->fields._size;
      if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          v29,
          *(const MethodInfo_378B058 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = v32 + 1;
        v30->m_Items[v32] = v29;
      }
    }
    else
    {
      if ( !v3 )
        sub_1C372B4(v27);
      v33 = v3->fields._items;
      v34 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !v33 )
        sub_1C372B4(v27);
      v35 = v3->fields._size;
      if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          0,
          *(const MethodInfo_378B058 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = v35 + 1;
        v33->m_Items[v35] = 0;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
  if ( !v3 )
LABEL_37:
    sub_1C372B4(v5);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
}


int32_t UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C43FF7 & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&StringLiteral_19065/*"equipTarget2SkillChange"*/);
    byte_4C43FF7 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19065/*"equipTarget2SkillChange"*/,
           &value,
           (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  const MethodInfo *v6; // x3
  ClassBoardClassMaster_o *v7; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C43FF8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_4C43FF8 = 1;
  }
  entity = 0;
  if ( this->fields.userSvtId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_object )
      goto LABEL_14;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           this->fields.userSvtId,
           (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( entity )
      {
        v7 = (ClassBoardClassMaster_o *)Master_object;
        Master_object = (Il2CppObject *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0, v6);
        if ( v7 )
          return ClassBoardClassMaster__GetClassBoardBaseId(v7, (int32_t)Master_object, 0) == classBoardBaseId;
      }
LABEL_14:
      sub_1C372B4(Master_object);
    }
  }
  return 0;
}


System_Int32_array *UserServantGrandEntity__IsSetClassBoardBaseIds(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C43FFA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20954/*"isSetClassBoardBaseIds"*/);
    byte_4C43FFA = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_20954/*"isSetClassBoardBaseIds"*/, 0, 0);
}