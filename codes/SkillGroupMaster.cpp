void SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3856A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
    byte_4C3856A = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v3,
    (const MethodInfo_3476108 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillToGroupDict, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillIdToGroupDict, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    448,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
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
  __int64 v11; // x22
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x23
  int32_t v22; // w1
  int32_t v23; // w2
  SimpleSkillData_o p_key; // x0
  __int64 v25; // x0
  SimpleSkillData_o v26; // x1
  SimpleSkillData_o v27; // x24
  System_Collections_Generic_List_int__o *v28; // x25
  SimpleSkillData_o v29; // x1
  SimpleSkillData_o v30; // x1
  System_Collections_Generic_List_int__o *Item; // x0
  int32_t v32; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  int32_t v36; // w24
  System_Collections_Generic_List_int__o *v37; // x25
  Il2CppObject *v38; // x0
  System_Collections_Generic_List_int__o *v39; // x0
  int32_t v40; // w1
  struct System_Int32_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  Il2CppObject *v48; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v49; // x22
  System_Int32_array *v50; // x0
  SimpleSkillData_o v51; // x1
  int32_t v52; // w20
  System_Collections_Generic_Dictionary_int__object__o *skillIdToGroupDict; // x21
  System_Int32_array *v54; // x0
  SkillGroupMaster_o *v55; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+60h] [xbp-90h] BYREF
  SimpleSkillData_o key; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4C38567 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C38567 = 1;
  }
  key = 0;
  memset(&v58, 0, sizeof(v58));
  memset(&v57, 0, sizeof(v57));
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_3476C60 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)skillToGroupDict,
    (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v4,
    (const MethodInfo_3476108 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
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
    v10 = sub_1C83438(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0);
  }
  v55 = this;
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v10)(
          v7,
          *(_QWORD *)(v10 + 8));
  if ( !v11 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v12 = *(_QWORD *)v11;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_17:
      v15 = sub_1C83438(v11, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
      break;
    v16 = *(_QWORD *)v11;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_24;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_24:
      v19 = sub_1C83438(v11, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
    v21 = v20;
    if ( !v20 )
      sub_1C32E7C(0);
    v22 = *(_DWORD *)(v20 + 20);
    v23 = *(_DWORD *)(v20 + 24);
    p_key = (SimpleSkillData_o)&key;
    SimpleSkillData___ctor(p_key, v22, v23, 0);
    if ( !v4 )
      sub_1C32E7C(v25);
    v26 = key;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v4,
            v26,
            (const MethodInfo_3476CCC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v27 = key;
      v28 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v28,
        (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
      v29 = v27;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v4,
        v29,
        (Il2CppObject *)v28,
        (const MethodInfo_3476AC4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v30 = key;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                                       v4,
                                                       v30,
                                                       (const MethodInfo_3476A38 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_1C32E7C(0);
    v32 = *(_DWORD *)(v21 + 16);
    items = Item->fields._items;
    v34 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1C32E7C(Item);
    size = Item->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        v32,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size] = v32;
    }
    if ( !v5 )
      sub_1C32E7C(Item);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            v5,
            *(_DWORD *)(v21 + 20),
            (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v36 = *(_DWORD *)(v21 + 20);
      v37 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v37,
        (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v5,
        v36,
        (Il2CppObject *)v37,
        (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v38 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v5,
            *(_DWORD *)(v21 + 20),
            (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v38 )
      sub_1C32E7C(0);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v38,
            *(_DWORD *)(v21 + 16),
            (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v39 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        v5,
                                                        *(_DWORD *)(v21 + 20),
                                                        (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v39 )
        sub_1C32E7C(0);
      v40 = *(_DWORD *)(v21 + 16);
      v41 = v39->fields._items;
      v42 = Method_System_Collections_Generic_List_int__Add__;
      ++v39->fields._version;
      if ( !v41 )
        sub_1C32E7C(v39);
      v43 = v39->fields._size;
      if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v39,
          v40,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v39->fields._size = v43 + 1;
        v41->m_Items[v43] = v40;
      }
    }
  }
  v44 = *(_QWORD *)v11;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
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
    v47 = sub_1C83438(v11, System_IDisposable_TypeInfo, 0);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(
                                                                                v11,
                                                                                *(_QWORD *)(v47 + 8));
  if ( !v4 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v56,
    v4,
    (const MethodInfo_3476F0C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v58 = v56;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v58,
            (const MethodInfo_355B334 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v58.fields._current.fields.value )
      sub_1C32E7C(0);
    v48 = v58.fields._current.fields.key;
    v49 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v55->fields.skillToGroupDict;
    v50 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v58.fields._current.fields.value,
            (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v49 )
      sub_1C32E7C(v50);
    v51 = (SimpleSkillData_o)v48;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v49,
      v51,
      &v50->obj,
      (const MethodInfo_3476AC4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v58,
    (const MethodInfo_355B454 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( !v5 )
LABEL_76:
    sub_1C32E7C(skillToGroupDict);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v57,
    v5,
    (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v57,
            (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v57.fields._current.fields.value )
      sub_1C32E7C(0);
    v52 = (int32_t)v57.fields._current.fields.key;
    skillIdToGroupDict = (System_Collections_Generic_Dictionary_int__object__o *)v55->fields.skillIdToGroupDict;
    v54 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v57.fields._current.fields.value,
            (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_1C32E7C(v54);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      skillIdToGroupDict,
      v52,
      &v54->obj,
      (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v57,
    (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
}


SkillGroupEntity_o *SkillGroupMaster__GetEntity(
        SkillGroupMaster_o *this,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C3856B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
    byte_4C3856B = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0);
  return (SkillGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_339B2F0 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
}


System_Int32_array *SkillGroupMaster__GetSkillGroupIdArray(
        SkillGroupMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  SimpleSkillData_o p_key; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  SimpleSkillData_o v9; // x1
  long double inited; // q0
  SimpleSkillData_o v11; // x1
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  SimpleSkillData_o key; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C38568 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    byte_4C38568 = 1;
  }
  p_key = (SimpleSkillData_o)&key;
  key = 0;
  SimpleSkillData___ctor(p_key, skillId, skillLv, 0);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_16;
  v9 = key;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v9,
         (const MethodInfo_3476CCC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v11 = key;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v11,
                                     (const MethodInfo_3476A38 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_16:
    sub_1C32E7C(skillToGroupDict);
  }
  v13 = Method_System_Array_Empty_int___;
  v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v14 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v15 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v15);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C83334(inited);
  return **(System_Int32_array ***)(v16 + 184);
}


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

  if ( (byte_4C38569 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_4C38569 = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_16:
    sub_1C32E7C(skillIdToGroupDict);
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C83334(inited);
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

  if ( (byte_4C3856C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
    byte_4C3856C = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}