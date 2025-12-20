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

  if ( (byte_4D2D43F & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
    byte_4D2D43F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v3,
    (const MethodInfo_353DF34 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.skillToGroupDict, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v10;
  sub_1C9403C(
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
    (const MethodInfo_345DC54 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
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
  int32_t v24; // w1
  int32_t v25; // w2
  SimpleSkillData_o p_key; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  SimpleSkillData_o v29; // x1
  SimpleSkillData_o v30; // x24
  System_Collections_Generic_List_int__o *v31; // x25
  SimpleSkillData_o v32; // x1
  SimpleSkillData_o v33; // x1
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  int32_t v40; // w24
  System_Collections_Generic_List_int__o *v41; // x25
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_int__o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  struct System_Int32_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v56; // x22
  System_Int32_array *v57; // x0
  __int64 v58; // x1
  SimpleSkillData_o v59; // x1
  __int64 v60; // x1
  int32_t v61; // w20
  System_Collections_Generic_Dictionary_int__object__o *skillIdToGroupDict; // x21
  System_Int32_array *v63; // x0
  __int64 v64; // x1
  SkillGroupMaster_o *v65; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v66; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v67; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v68; // [xsp+60h] [xbp-90h] BYREF
  SimpleSkillData_o key; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4D2D43C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2D43C = 1;
  }
  key = 0;
  memset(&v68, 0, sizeof(v68));
  memset(&v67, 0, sizeof(v67));
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_353EA8C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)skillToGroupDict,
    (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v4,
    (const MethodInfo_353DF34 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_31CBB8C *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
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
    v10 = sub_1C6A420(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0);
  }
  v65 = this;
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v10)(
          v7,
          *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_1C942F0(0, v11);
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
      v16 = sub_1C6A420(v12, System_Collections_IEnumerator_TypeInfo, 0);
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
      v20 = sub_1C6A420(v12, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_1C942F0(0, v22);
    v24 = *(_DWORD *)(v21 + 20);
    v25 = *(_DWORD *)(v21 + 24);
    p_key = (SimpleSkillData_o)&key;
    SimpleSkillData___ctor(p_key, v24, v25, 0);
    if ( !v4 )
      sub_1C942F0(v27, v28);
    v29 = key;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v4,
            v29,
            (const MethodInfo_353EAF8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v30 = key;
      v31 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
      v32 = v30;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v4,
        v32,
        (Il2CppObject *)v31,
        (const MethodInfo_353E8F0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v33 = key;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                                       v4,
                                                       v33,
                                                       (const MethodInfo_353E864 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_1C942F0(0, v35);
    v36 = *(unsigned int *)(v23 + 16);
    items = Item->fields._items;
    v38 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1C942F0(Item, v36);
    size = Item->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        v36,
        *(const MethodInfo_384DE10 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size] = v36;
    }
    if ( !v5 )
      sub_1C942F0(Item, v36);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            v5,
            *(_DWORD *)(v23 + 20),
            (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v40 = *(_DWORD *)(v23 + 20);
      v41 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v41,
        (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v5,
        v40,
        (Il2CppObject *)v41,
        (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v42 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v5,
            *(_DWORD *)(v23 + 20),
            (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v42 )
      sub_1C942F0(0, v43);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v42,
            *(_DWORD *)(v23 + 16),
            (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v44 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        v5,
                                                        *(_DWORD *)(v23 + 20),
                                                        (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v44 )
        sub_1C942F0(0, v45);
      v46 = *(unsigned int *)(v23 + 16);
      v47 = v44->fields._items;
      v48 = Method_System_Collections_Generic_List_int__Add__;
      ++v44->fields._version;
      if ( !v47 )
        sub_1C942F0(v44, v46);
      v49 = v44->fields._size;
      if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v44,
          v46,
          *(const MethodInfo_384DE10 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v44->fields._size = v49 + 1;
        v47->m_Items[v49] = v46;
      }
    }
  }
  v50 = *(_QWORD *)v12;
  v51 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_49;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_49:
    v53 = sub_1C6A420(v12, System_IDisposable_TypeInfo, 0);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v53)(
                                                                                v12,
                                                                                *(_QWORD *)(v53 + 8));
  if ( !v4 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v66,
    v4,
    (const MethodInfo_353ED38 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v68 = v66;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v68,
            (const MethodInfo_3624FCC *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v68.fields._current.fields.value )
      sub_1C942F0(0, v54);
    v55 = v68.fields._current.fields.key;
    v56 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v65->fields.skillToGroupDict;
    v57 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v68.fields._current.fields.value,
            (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v56 )
      sub_1C942F0(v57, v58);
    v59 = (SimpleSkillData_o)v55;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v56,
      v59,
      &v57->obj,
      (const MethodInfo_353E8F0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v68,
    (const MethodInfo_36250EC *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( !v5 )
LABEL_76:
    sub_1C942F0(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v67,
    v5,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v67,
            (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v67.fields._current.fields.value )
      sub_1C942F0(0, v60);
    v61 = (int32_t)v67.fields._current.fields.key;
    skillIdToGroupDict = (System_Collections_Generic_Dictionary_int__object__o *)v65->fields.skillIdToGroupDict;
    v63 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v67.fields._current.fields.value,
            (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_1C942F0(v63, v64);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      skillIdToGroupDict,
      v61,
      &v63->obj,
      (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v67,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
}


SkillGroupEntity_o *SkillGroupMaster__GetEntity(
        SkillGroupMaster_o *this,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D440 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
    byte_4D2D440 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0);
  return (SkillGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_345FF78 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
}


System_Int32_array *SkillGroupMaster__GetSkillGroupIdArray(
        SkillGroupMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  SimpleSkillData_o p_key; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  SimpleSkillData_o v10; // x1
  long double inited; // q0
  SimpleSkillData_o v12; // x1
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  SimpleSkillData_o key; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2D43D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    byte_4D2D43D = 1;
  }
  p_key = (SimpleSkillData_o)&key;
  key = 0;
  SimpleSkillData___ctor(p_key, skillId, skillLv, 0);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_16;
  v10 = key;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v10,
         (const MethodInfo_353EAF8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v12 = key;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v12,
                                     (const MethodInfo_353E864 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_16:
    sub_1C942F0(skillToGroupDict, v8);
  }
  v14 = Method_System_Array_Empty_int___;
  v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v15 )
  {
    sub_1C6A188(Method_System_Array_Empty_int___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v16 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C6A12C(inited);
  return **(System_Int32_array ***)(v17 + 184);
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

  if ( (byte_4D2D43E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_4D2D43E = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_16:
    sub_1C942F0(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C6A188(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C6A12C(inited);
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

  if ( (byte_4D2D441 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
    byte_4D2D441 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}