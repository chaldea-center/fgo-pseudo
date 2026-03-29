void SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D31587 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
    byte_4D31587 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v3,
    (const MethodInfo_354BD48 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.skillToGroupDict, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillIdToGroupDict,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    448,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
}


void SkillGroupMaster__CreateSkillToGroupDict(SkillGroupMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x21
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x22
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  SimpleSkillData_o v26; // x24
  System_Collections_Generic_List_int__o *v27; // x25
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  int32_t v34; // w24
  System_Collections_Generic_List_int__o *v35; // x25
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_int__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  struct System_Int32_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x1
  Il2CppObject *v49; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v50; // x22
  System_Int32_array *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x1
  int32_t v54; // w20
  System_Collections_Generic_Dictionary_int__object__o *skillIdToGroupDict; // x21
  System_Int32_array *v56; // x0
  __int64 v57; // x1
  SkillGroupMaster_o *v58; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+60h] [xbp-90h] BYREF
  SimpleSkillData_o key; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4D31584 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D31584 = 1;
  }
  key = 0;
  memset(&v61, 0, sizeof(v61));
  memset(&v60, 0, sizeof(v60));
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_354C8A0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)skillToGroupDict,
    (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v4,
    (const MethodInfo_354BD48 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_31D3358 *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_76;
  klass = skillToGroupDict->klass;
  v7 = skillToGroupDict;
  v8 = *(unsigned __int16 *)&skillToGroupDict->klass->_2.rank;
  if ( *(_WORD *)&skillToGroupDict->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    v10 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v10 = sub_1C69E5C(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0);
  }
  v58 = this;
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v10)(
          v7,
          *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_1C93D2C(0, v11);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_1C69E5C(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    v17 = *(_QWORD *)v12;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_24;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_24:
      v20 = sub_1C69E5C(v12, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_1C93D2C(0, v22);
    SimpleSkillData___ctor((SimpleSkillData_o)&key, *(_DWORD *)(v21 + 20), *(_DWORD *)(v21 + 24), 0);
    if ( !v4 )
      sub_1C93D2C(v24, v25);
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v4,
            key,
            (const MethodInfo_354C90C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v26 = key;
      v27 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v27,
        (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v4,
        v26,
        (Il2CppObject *)v27,
        (const MethodInfo_354C704 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                                       v4,
                                                       key,
                                                       (const MethodInfo_354C678 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_1C93D2C(0, v29);
    v30 = *(unsigned int *)(v23 + 16);
    items = Item->fields._items;
    v32 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1C93D2C(Item, v30);
    size = Item->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        v30,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size] = v30;
    }
    if ( !v5 )
      sub_1C93D2C(Item, v30);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            v5,
            *(_DWORD *)(v23 + 20),
            (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v34 = *(_DWORD *)(v23 + 20);
      v35 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v35,
        (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v5,
        v34,
        (Il2CppObject *)v35,
        (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v36 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v5,
            *(_DWORD *)(v23 + 20),
            (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v36 )
      sub_1C93D2C(0, v37);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v36,
            *(_DWORD *)(v23 + 16),
            (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v38 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        v5,
                                                        *(_DWORD *)(v23 + 20),
                                                        (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v38 )
        sub_1C93D2C(0, v39);
      v40 = *(unsigned int *)(v23 + 16);
      v41 = v38->fields._items;
      v42 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v41 )
        sub_1C93D2C(v38, v40);
      v43 = v38->fields._size;
      if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          v40,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v43 + 1;
        v41->m_Items[v43] = v40;
      }
    }
  }
  v44 = *(_QWORD *)v12;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_49;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_49:
    v47 = sub_1C69E5C(v12, System_IDisposable_TypeInfo, 0);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(
                                                                                v12,
                                                                                *(_QWORD *)(v47 + 8));
  if ( !v4 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v59,
    v4,
    (const MethodInfo_354CB4C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v61 = v59;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v61,
            (const MethodInfo_3633CE4 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v61.fields._current.fields.value )
      sub_1C93D2C(0, v48);
    v49 = v61.fields._current.fields.key;
    v50 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v58->fields.skillToGroupDict;
    v51 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v61.fields._current.fields.value,
            (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v50 )
      sub_1C93D2C(v51, v52);
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v50,
      (SimpleSkillData_o)v49,
      &v51->obj,
      (const MethodInfo_354C704 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v61,
    (const MethodInfo_3633E04 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( !v5 )
LABEL_76:
    sub_1C93D2C(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v60,
    v5,
    (const MethodInfo_34BD1BC *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v60,
            (const MethodInfo_361DC10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v60.fields._current.fields.value )
      sub_1C93D2C(0, v53);
    v54 = (int32_t)v60.fields._current.fields.key;
    skillIdToGroupDict = (System_Collections_Generic_Dictionary_int__object__o *)v58->fields.skillIdToGroupDict;
    v56 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v60.fields._current.fields.value,
            (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_1C93D2C(v56, v57);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      skillIdToGroupDict,
      v54,
      &v56->obj,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v60,
    (const MethodInfo_361DD34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
}


SkillGroupEntity_o *SkillGroupMaster__GetEntity(
        SkillGroupMaster_o *this,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D31588 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
    byte_4D31588 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0);
  return (SkillGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_34681D4 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
}


System_Int32_array *SkillGroupMaster__GetSkillGroupIdArray(
        SkillGroupMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  long double inited; // q0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  SimpleSkillData_o key; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D31585 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    byte_4D31585 = 1;
  }
  key = 0;
  SimpleSkillData___ctor((SimpleSkillData_o)&key, skillId, skillLv, 0);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         key,
         (const MethodInfo_354C90C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     key,
                                     (const MethodInfo_354C678 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
LABEL_16:
    sub_1C93D2C(skillToGroupDict, v7);
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C69B68(inited);
  return **(System_Int32_array ***)(v14 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *SkillGroupMaster__GetSkillGroupIdFromSkillId(
        SkillGroupMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x0
  long double inited; // q0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_4D31586 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_4D31586 = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_16:
    sub_1C93D2C(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C69B68(inited);
  return **(System_Int32_array ***)(v11 + 184);
}


bool SkillGroupMaster__TryGetEntity(
        SkillGroupMaster_o *this,
        SkillGroupEntity_o **entity,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D31589 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
    byte_4D31589 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}