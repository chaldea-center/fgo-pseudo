void __fastcall UserServantGrandEntity___ctor(UserServantGrandEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02FF5 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B02FF5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserServantGrandEntity__CreatePK(
        int64_t userId,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  if ( (byte_4B02FF4 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&grandGraphId);
    byte_4B02FF4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           grandGraphId,
           (const MethodInfo_30000F4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantGrandEntity__CreatePrimaryKey(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserServantGrandEntity__CreatePK(this->fields.userId, this->fields.grandGraphId, v2);
}


System_Int64_array *__fastcall UserServantGrandEntity__GetEquipUserServantIdList(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x19
  System_Collections_Generic_List_object__o *v15; // x21
  __int64 v16; // x0
  Il2CppObject *equipTarget1; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int128 v38; // q0
  int64_t v39; // x0
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  struct System_Int64_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4B02FF2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo, v11);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4B02FF2 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v14 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
  if ( !v15 )
    goto LABEL_37;
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget1;
  items = v15->fields._items;
  v21 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_37;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      equipTarget1,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v23[4] = (Il2CppClass *)equipTarget1;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)equipTarget1, v18, v19);
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget2;
  v26 = v15->fields._items;
  v27 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v15->fields._version;
  if ( !v26 )
    goto LABEL_37;
  v28 = v15->fields._size;
  if ( (unsigned int)v28 >= v26->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      equipTarget1,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v26->obj.klass + v28;
    v15->fields._size = v28 + 1;
    v29[4] = (Il2CppClass *)equipTarget1;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)equipTarget1, v24, v25);
  }
  equipTarget1 = (Il2CppObject *)this->fields.equipTarget3;
  v32 = v15->fields._items;
  v33 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__;
  ++v15->fields._version;
  if ( !v32 )
    goto LABEL_37;
  v34 = v15->fields._size;
  if ( (unsigned int)v34 >= v32->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      equipTarget1,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &v32->obj.klass + v34;
    v15->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)equipTarget1;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)equipTarget1, v30, v31);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v15,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EquipTargetInfo__GetEnumerator__);
  *(_OWORD *)&v49.fields._list = *(_OWORD *)&v48.fields.currentCryptoKey;
  v49.fields._current = (Il2CppObject *)v48.fields.fakeValue;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__MoveNext__);
    if ( !v36 )
      break;
    if ( v49.fields._current )
    {
      v38 = *(_OWORD *)&v49.fields._current[2].monitor;
      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&v49.fields._current[1].monitor;
      *(_OWORD *)&v48.fields.fakeValue = v38;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v47 = v48;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v47, 0LL);
      if ( !v14 )
        sub_1BC3264(v39, v39);
      v40 = v14->fields._items;
      v41 = Method_System_Collections_Generic_List_long__Add__;
      ++v14->fields._version;
      if ( !v40 )
        sub_1BC3264(v39, v39);
      v42 = v14->fields._size;
      if ( (unsigned int)v42 >= v40->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v14,
          v39,
          *(const MethodInfo_3688E74 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v14->fields._size = v42 + 1;
        v40->m_Items[v42] = v39;
      }
    }
    else
    {
      if ( !v14 )
        sub_1BC3264(v36, v37);
      v43 = v14->fields._items;
      v44 = Method_System_Collections_Generic_List_long__Add__;
      ++v14->fields._version;
      if ( !v43 )
        sub_1BC3264(v36, v37);
      v45 = v14->fields._size;
      if ( (unsigned int)v45 >= v43->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v14,
          0LL,
          *(const MethodInfo_3688E74 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v14->fields._size = v45 + 1;
        v43->m_Items[v45] = 0LL;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EquipTargetInfo__Dispose__);
  if ( !v14 )
LABEL_37:
    sub_1BC3264(v16, equipTarget1);
  return System_Collections_Generic_List_long___ToArray(
           v14,
           (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
}


int32_t __fastcall UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
        UserServantGrandEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B02FF3 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1BC3008(&StringLiteral_18882/*"equipTarget2SkillChange"*/, v4);
    byte_4B02FF3 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_18882/*"equipTarget2SkillChange"*/,
           &value,
           (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LODWORD(script) = System_Convert__ToInt32(v6, 0LL);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}