void SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59392B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
    byte_59392B0 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v3,
    (const MethodInfo_40045A4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.skillToGroupDict, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillIdToGroupDict,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    450,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
}


void SkillGroupMaster__CreateSkillToGroupDict(SkillGroupMaster_o *this, const MethodInfo *method)
{
  __int64 skillToGroupDict; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x21
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x22
  __int64 v8; // x9
  int *v9; // x10
  __int64 v10; // x0
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x22
  Il2CppClass *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  Il2CppObject *v18; // x22
  Il2CppClass *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x22
  int32_t v26; // w1
  int32_t v27; // w2
  SimpleSkillData_o p_key; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  SimpleSkillData_o v31; // x1
  SimpleSkillData_o v32; // x23
  System_Collections_Generic_List_int__o *v33; // x24
  SimpleSkillData_o v34; // x1
  SimpleSkillData_o v35; // x1
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v37; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  int32_t v41; // w23
  System_Collections_Generic_List_int__o *v42; // x24
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  struct System_Int32_array *v45; // x8
  _QWORD *v46; // x9
  __int64 monitor_low; // x10
  Il2CppObject *v48; // x23
  Il2CppClass *v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x1
  Il2CppObject *v54; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v55; // x22
  System_Int32_array *v56; // x0
  __int64 v57; // x1
  SimpleSkillData_o v58; // x1
  __int64 v59; // x1
  int32_t v60; // w20
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x21
  System_Int32_array *v62; // x0
  __int64 v63; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v64; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v66; // [xsp+70h] [xbp-A0h] BYREF
  SimpleSkillData_o key; // [xsp+A0h] [xbp-70h] BYREF
  Il2CppObject *v68; // [xsp+A8h] [xbp-68h] BYREF

  if ( (byte_59392AD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_59392AD = 1;
  }
  skillToGroupDict = (__int64)this->fields.skillToGroupDict;
  key = 0;
  v68 = 0;
  memset(&v65, 0, sizeof(v65));
  memset(&v66, 0, sizeof(v66));
  if ( !skillToGroupDict )
    goto LABEL_81;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)skillToGroupDict,
    (const MethodInfo_40050DC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (__int64)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_81;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)skillToGroupDict,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v4,
    (const MethodInfo_40045A4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (__int64)System_Linq_Enumerable__OfType_object_(
                                (System_Collections_IEnumerable_o *)this->fields.list,
                                (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_81;
  v6 = *(_QWORD *)skillToGroupDict;
  v7 = skillToGroupDict;
  v8 = *(unsigned __int16 *)(*(_QWORD *)skillToGroupDict + 302LL);
  if ( *(_WORD *)(*(_QWORD *)skillToGroupDict + 302LL) )
  {
    v9 = (int *)(*(_QWORD *)(v6 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)v9 - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      --v8;
      v9 += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    v10 = v6 + 16LL * *v9 + 312;
  }
  else
  {
LABEL_10:
    v10 = sub_2237E2C(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0);
  }
  v11 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  v68 = v11;
  v64.fields._dictionary = 0;
  *(_QWORD *)&v64.fields._version = &v68;
  if ( !v11 )
LABEL_48:
    sub_21FFECC(v11, v12);
  v13 = v11;
  while ( 1 )
  {
    klass = v13->klass;
    v15 = *(unsigned __int16 *)&v13->klass->_2.rank;
    if ( *(_WORD *)&v13->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v17 = sub_2237E2C(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    skillToGroupDict = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8));
    if ( (skillToGroupDict & 1) == 0 )
      break;
    v18 = v68;
    if ( !v68 )
      sub_21FFECC(skillToGroupDict, method);
    v19 = v68->klass;
    v20 = *(unsigned __int16 *)&v68->klass->_2.rank;
    if ( *(_WORD *)&v68->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_26:
      v22 = sub_2237E2C(v68, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      sub_21FFECC(0, v24);
    v26 = *(_DWORD *)(v23 + 20);
    v27 = *(_DWORD *)(v23 + 24);
    p_key = (SimpleSkillData_o)&key;
    SimpleSkillData___ctor(p_key, v26, v27, 0);
    if ( !v4 )
      sub_21FFECC(v29, v30);
    v31 = key;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v4,
            v31,
            (const MethodInfo_4005148 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v32 = key;
      v33 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v33,
        (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
      v34 = v32;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v4,
        v34,
        (Il2CppObject *)v33,
        (const MethodInfo_4004F40 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v35 = key;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                                       v4,
                                                       v35,
                                                       (const MethodInfo_4004EB4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item
      || (items = Item->fields._items,
          v37 = *(unsigned int *)(v25 + 16),
          v39 = Method_System_Collections_Generic_List_int__Add__,
          ++Item->fields._version,
          !items) )
    {
      sub_21FFECC(Item, v37);
    }
    size = Item->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        v37,
        *(const MethodInfo_4433138 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size] = v37;
    }
    if ( !v5 )
      sub_21FFECC(Item, v37);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            v5,
            *(_DWORD *)(v25 + 20),
            (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v41 = *(_DWORD *)(v25 + 20);
      v42 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v42,
        (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v5,
        v41,
        (Il2CppObject *)v42,
        (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v43 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v5,
            *(_DWORD *)(v25 + 20),
            (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v43 )
      sub_21FFECC(0, v44);
    v11 = (Il2CppObject *)System_Collections_Generic_List_int___Contains(
                            (System_Collections_Generic_List_int__o *)v43,
                            *(_DWORD *)(v25 + 16),
                            (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)v11 & 1) == 0 )
    {
      v11 = System_Collections_Generic_Dictionary_int__object___get_Item(
              v5,
              *(_DWORD *)(v25 + 20),
              (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v11
        || (v45 = (struct System_Int32_array *)v11[1].klass,
            v12 = *(unsigned int *)(v25 + 16),
            v46 = Method_System_Collections_Generic_List_int__Add__,
            ++HIDWORD(v11[1].monitor),
            !v45) )
      {
        sub_21FFECC(v11, v12);
      }
      monitor_low = SLODWORD(v11[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(v45->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v11,
          v12,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(v11[1].monitor) = monitor_low + 1;
        v45->m_Items[monitor_low] = v12;
      }
    }
    v13 = v68;
    if ( !v68 )
      goto LABEL_48;
  }
  v48 = v68;
  if ( v68 )
  {
    v49 = v68->klass;
    v50 = *(unsigned __int16 *)&v68->klass->_2.rank;
    if ( *(_WORD *)&v68->klass->_2.rank )
    {
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_54;
      }
      v52 = (__int64)&v49->vtable[*v51];
    }
    else
    {
LABEL_54:
      v52 = sub_2237E2C(v68, System_IDisposable_TypeInfo, 0);
    }
    skillToGroupDict = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8));
  }
  if ( !v4 )
    goto LABEL_81;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v64,
    v4,
    (const MethodInfo_400538C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v66 = v64;
  v64.fields._dictionary = 0;
  *(_QWORD *)&v64.fields._version = &v66;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v66,
            (const MethodInfo_413C3A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v66.fields._current.fields.value )
      sub_21FFECC(0, v53);
    v54 = v66.fields._current.fields.key;
    v55 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    v56 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v66.fields._current.fields.value,
            (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v55 )
      sub_21FFECC(v56, v57);
    v58 = (SimpleSkillData_o)v54;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v55,
      v58,
      &v56->obj,
      (const MethodInfo_4004F40 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v66,
    (const MethodInfo_413C4C8 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( !v5 )
LABEL_81:
    sub_21FFECC(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v65,
    v5,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v64.fields._dictionary = 0;
  *(_QWORD *)&v64.fields._version = &v65;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v65,
            (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v65.fields._current.fields.value )
      sub_21FFECC(0, v59);
    v60 = (int32_t)v65.fields._current.fields.key;
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    v62 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v65.fields._current.fields.value,
            (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_21FFECC(v62, v63);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
      v60,
      &v62->obj,
      (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v65,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
}


SkillGroupEntity_o *SkillGroupMaster__GetEntity(
        SkillGroupMaster_o *this,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59392B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
    byte_59392B1 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0);
  return (SkillGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3EE2044 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
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
  long double v11; // q0
  SimpleSkillData_o v12; // x1
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  SimpleSkillData_o key; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59392AE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    byte_59392AE = 1;
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
         (const MethodInfo_4005148 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v12 = key;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v12,
                                     (const MethodInfo_4004EB4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_16:
    sub_21FFECC(skillToGroupDict, v8);
  }
  v14 = Method_System_Array_Empty_int___;
  v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v15 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_2237AF8(v11);
  if ( !*(_DWORD *)(v16 + 228) )
    *(__n128 *)&v11 = j_il2cpp_runtime_class_init_0(v16, v8);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_2237AF8(v11);
  return **(System_Int32_array ***)(v17 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *SkillGroupMaster__GetSkillGroupIdFromSkillId(
        SkillGroupMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x0
  long double v6; // q0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_59392AF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_59392AF = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_16:
    sub_21FFECC(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_2237AF8(v6);
  if ( !*(_DWORD *)(v10 + 228) )
    *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&skillId);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_2237AF8(v6);
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

  if ( (byte_59392B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
    byte_59392B2 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}