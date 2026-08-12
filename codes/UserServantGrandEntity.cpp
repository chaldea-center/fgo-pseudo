void UserServantGrandEntity___ctor(UserServantGrandEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971907 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971907 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantGrandEntity__ContainsClassBoardBaseId(
        UserServantGrandEntity_o *this,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_5971904 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5971904 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantGrandEntity__IsSetClassBoardBaseIds(
                                                              this,
                                                              *(const MethodInfo **)&classBoardBaseId);
  if ( v5 )
    LOBYTE(v5) = System_Linq_Enumerable__Contains_int_(
                   v5,
                   classBoardBaseId,
                   (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)v5;
}


System_String_o *UserServantGrandEntity__CreatePK(int64_t userId, int32_t grandGraphId, const MethodInfo *method)
{
  if ( (byte_5971906 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_5971906 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           grandGraphId,
           (const MethodInfo_3854538 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  __int128 v39; // q1
  int v40; // w8
  int64_t v41; // x0
  struct System_Int64_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  struct System_Int64_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-A0h] BYREF
  __int64 v51; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v52; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_5971901 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5971901 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v3 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
  if ( !v4 )
    goto LABEL_35;
  items = v4->fields._items;
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget1;
  v14 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v4->fields._version;
  if ( !items )
    goto LABEL_35;
  size = v4->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      equipTarget1,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v16[4] = (Il2CppClass *)equipTarget1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 4), (int32_t)equipTarget1, v7, v8, v9, v10, v11, v12);
  }
  v23 = v4->fields._items;
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget2;
  v24 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v4->fields._version;
  if ( !v23 )
    goto LABEL_35;
  v25 = v4->fields._size;
  if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      equipTarget1,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    v4->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)equipTarget1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)equipTarget1, v17, v18, v19, v20, v21, v22);
  }
  v33 = v4->fields._items;
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget3;
  v34 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v4->fields._version;
  if ( !v33 )
    goto LABEL_35;
  v35 = v4->fields._size;
  if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      equipTarget1,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    v4->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)equipTarget1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)equipTarget1, v27, v28, v29, v30, v31, v32);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    v4,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
  v53 = *(System_Collections_Generic_List_Enumerator_object__o *)&v50.fields.currentCryptoKey;
  v51 = 0;
  v52 = &v53;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    if ( !v37 )
      break;
    if ( v53.fields._current )
    {
      v39 = *(_OWORD *)&v53.fields._current[2].monitor;
      v40 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v53.fields._current[1].monitor;
      *(_OWORD *)&v50.fields.fakeValue = v39;
      if ( !v40 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38);
      v49 = v50;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v49, 0);
      if ( !v3
        || (v42 = v3->fields._items,
            v43 = Method_System_Collections_Generic_List_long__Add__,
            ++v3->fields._version,
            !v42) )
      {
        sub_2213CDC(v41, v41);
      }
      v44 = v3->fields._size;
      if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          v41,
          *(const MethodInfo_446C29C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = v44 + 1;
        v42->m_Items[v44] = v41;
      }
    }
    else
    {
      if ( !v3
        || (v45 = v3->fields._items,
            v46 = Method_System_Collections_Generic_List_long__Add__,
            ++v3->fields._version,
            !v45) )
      {
        sub_2213CDC(v37, v38);
      }
      v47 = v3->fields._size;
      if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          0,
          *(const MethodInfo_446C29C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = v47 + 1;
        v45->m_Items[v47] = 0;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
  if ( !v3 )
LABEL_35:
    sub_2213CDC(v5, equipTarget1);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
}


int32_t UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5971902 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_19953/*"equipTarget2SkillChange"*/);
    byte_5971902 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_19953/*"equipTarget2SkillChange"*/,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v5 = value;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v4);
      LODWORD(script) = System_Convert__ToInt32(v5, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


// local variable allocation has failed, the output may be wrong!
bool UserServantGrandEntity__IsMatchClassBoard(
        UserServantGrandEntity_o *this,
        int32_t classBoardBaseId,
        const MethodInfo *method)
{
  int64_t userSvtId; // x8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  ClassBoardClassMaster_o *v9; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971903 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_5971903 = 1;
  }
  userSvtId = this->fields.userSvtId;
  entity = 0;
  if ( userSvtId >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&classBoardBaseId);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_object )
      goto LABEL_14;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           this->fields.userSvtId,
           (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( entity )
      {
        v9 = (ClassBoardClassMaster_o *)Master_object;
        Master_object = (Il2CppObject *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0, 0);
        if ( v9 )
          return ClassBoardClassMaster__GetClassBoardBaseId(v9, (int32_t)Master_object, 0) == classBoardBaseId;
      }
LABEL_14:
      sub_2213CDC(Master_object, v7);
    }
  }
  return 0;
}


System_Int32_array *UserServantGrandEntity__IsSetClassBoardBaseIds(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971905 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21984/*"isSetClassBoardBaseIds"*/);
    byte_5971905 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21984/*"isSetClassBoardBaseIds"*/, 0, 0);
}