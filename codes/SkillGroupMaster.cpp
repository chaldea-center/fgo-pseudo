void __fastcall SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B02B6F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo, v6);
    byte_4B02B6F = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v7,
    (const MethodInfo_338A188 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillToGroupDict, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillIdToGroupDict, (int32_t)v10, v11, v12);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    448,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
}


void __fastcall SkillGroupMaster__CreateSkillToGroupDict(SkillGroupMaster_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v39; // x21
  System_Collections_Generic_Dictionary_int__object__o *v40; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v42; // x22
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x22
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x23
  int32_t v59; // w1
  int32_t v60; // w2
  __int64 v61; // x0
  __int64 v62; // x1
  SimpleSkillData_o v63; // x24
  System_Collections_Generic_List_int__o *v64; // x25
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v66; // x1
  __int64 v67; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  int32_t v71; // w24
  System_Collections_Generic_List_int__o *v72; // x25
  Il2CppObject *v73; // x0
  __int64 v74; // x1
  System_Collections_Generic_List_int__o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x1
  struct System_Int32_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  __int64 v85; // x1
  Il2CppObject *v86; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v87; // x22
  System_Int32_array *v88; // x0
  __int64 v89; // x1
  __int64 v90; // x1
  int32_t v91; // w20
  System_Collections_Generic_Dictionary_int__object__o *skillIdToGroupDict; // x21
  System_Int32_array *v93; // x0
  __int64 v94; // x1
  SkillGroupMaster_o *v95; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v96; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v97; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v98; // [xsp+60h] [xbp-90h] BYREF
  SimpleSkillData_o key; // [xsp+88h] [xbp-68h] BYREF
  SimpleSkillData_o p_key; // 0:x0.8
  SimpleSkillData_o v101; // 0:x1.8
  SimpleSkillData_o v102; // 0:x1.8
  SimpleSkillData_o v103; // 0:x1.8
  SimpleSkillData_o v104; // 0:x1.8

  if ( (byte_4B02B6C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int____Clear__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v15);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v16);
    sub_1BC3008(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo, v17);
    sub_1BC3008(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___, v18);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v24);
    sub_1BC3008(&System_IDisposable_TypeInfo, v25);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, v26);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, v27);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v28);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v29);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__, v30);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v31);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__, v32);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v33);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v34);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v35);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v36);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v37);
    byte_4B02B6C = 1;
  }
  key = 0LL;
  memset(&v98, 0, sizeof(v98));
  memset(&v97, 0, sizeof(v97));
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_338ACE0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)skillToGroupDict,
    (const MethodInfo_33086DC *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v39 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v39,
    (const MethodInfo_338A188 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v40 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v40,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_302D068 *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_76;
  klass = skillToGroupDict->klass;
  v42 = skillToGroupDict;
  v43 = *(unsigned __int16 *)(&skillToGroupDict->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&skillToGroupDict->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      --v43;
      p_offset += 4;
      if ( !v43 )
        goto LABEL_10;
    }
    v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v45 = sub_1C13570(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0LL);
  }
  v95 = this;
  v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v45)(
          v42,
          *(_QWORD *)(v45 + 8));
  if ( !v47 )
    sub_1BC3264(0LL, v46);
  while ( 1 )
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_17;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_17:
      v51 = sub_1C13570(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v54 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_24;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_24:
      v55 = sub_1C13570(v47, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0LL);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    v58 = v56;
    if ( !v56 )
      sub_1BC3264(0LL, v57);
    v59 = *(_DWORD *)(v56 + 20);
    v60 = *(_DWORD *)(v56 + 24);
    p_key = (SimpleSkillData_o)&key;
    SimpleSkillData___ctor(p_key, v59, v60, 0LL);
    if ( !v39 )
      sub_1BC3264(v61, v62);
    v101 = key;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v39,
            v101,
            (const MethodInfo_338AD4C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v63 = key;
      v64 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v64,
        (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
      v102 = v63;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v39,
        v102,
        (Il2CppObject *)v64,
        (const MethodInfo_338AB44 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v103 = key;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                                       v39,
                                                       v103,
                                                       (const MethodInfo_338AAB8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_1BC3264(0LL, v66);
    v67 = *(unsigned int *)(v58 + 16);
    items = Item->fields._items;
    v69 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1BC3264(Item, v67);
    size = Item->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        v67,
        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = v67;
    }
    if ( !v40 )
      sub_1BC3264(Item, v67);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            v40,
            *(_DWORD *)(v58 + 20),
            (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v71 = *(_DWORD *)(v58 + 20);
      v72 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v72,
        (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v40,
        v71,
        (Il2CppObject *)v72,
        (const MethodInfo_3308540 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v73 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v40,
            *(_DWORD *)(v58 + 20),
            (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v73 )
      sub_1BC3264(0LL, v74);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v73,
            *(_DWORD *)(v58 + 16),
            (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v75 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        v40,
                                                        *(_DWORD *)(v58 + 20),
                                                        (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v75 )
        sub_1BC3264(0LL, v76);
      v77 = *(unsigned int *)(v58 + 16);
      v78 = v75->fields._items;
      v79 = Method_System_Collections_Generic_List_int__Add__;
      ++v75->fields._version;
      if ( !v78 )
        sub_1BC3264(v75, v77);
      v80 = v75->fields._size;
      if ( (unsigned int)v80 >= v78->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v75,
          v77,
          *(const MethodInfo_3683E1C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v75->fields._size = v80 + 1;
        v78->m_Items[v80 + 1] = v77;
      }
    }
  }
  v81 = *(_QWORD *)v47;
  v82 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
    {
      --v82;
      v83 += 4;
      if ( !v82 )
        goto LABEL_49;
    }
    v84 = v81 + 16LL * *v83 + 312;
  }
  else
  {
LABEL_49:
    v84 = sub_1C13570(v47, System_IDisposable_TypeInfo, 0LL);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v84)(
                                                                                v47,
                                                                                *(_QWORD *)(v84 + 8));
  if ( !v39 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v96,
    v39,
    (const MethodInfo_338AF8C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v98 = v96;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v98,
            (const MethodInfo_346DF3C *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v98.fields._current.fields.value )
      sub_1BC3264(0LL, v85);
    v86 = v98.fields._current.fields.key;
    v87 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v95->fields.skillToGroupDict;
    v88 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v98.fields._current.fields.value,
            (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v87 )
      sub_1BC3264(v88, v89);
    v104 = (SimpleSkillData_o)v86;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v87,
      v104,
      &v88->obj,
      (const MethodInfo_338AB44 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v98,
    (const MethodInfo_346E05C *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( !v40 )
LABEL_76:
    sub_1BC3264(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v97,
    v40,
    (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v97,
            (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v97.fields._current.fields.value )
      sub_1BC3264(0LL, v90);
    v91 = (int32_t)v97.fields._current.fields.key;
    skillIdToGroupDict = (System_Collections_Generic_Dictionary_int__object__o *)v95->fields.skillIdToGroupDict;
    v93 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v97.fields._current.fields.value,
            (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_1BC3264(v93, v94);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      skillIdToGroupDict,
      v91,
      &v93->obj,
      (const MethodInfo_3308540 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v97,
    (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
}


// local variable allocation has failed, the output may be wrong!
SkillGroupEntity_o *__fastcall SkillGroupMaster__GetEntity(
        SkillGroupMaster_o *this,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02B70 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B02B70 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0LL);
  return (SkillGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_32B3B28 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdArray(
        SkillGroupMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  long double inited; // q0
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  SimpleSkillData_o key; // [xsp+8h] [xbp-28h] BYREF
  SimpleSkillData_o p_key; // 0:x0.8
  SimpleSkillData_o v19; // 0:x1.8
  SimpleSkillData_o v20; // 0:x1.8

  if ( (byte_4B02B6D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__, v8);
    byte_4B02B6D = 1;
  }
  p_key = (SimpleSkillData_o)&key;
  key = 0LL;
  SimpleSkillData___ctor(p_key, skillId, skillLv, 0LL);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_16;
  v19 = key;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v19,
         (const MethodInfo_338AD4C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v20 = key;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v20,
                                     (const MethodInfo_338AAB8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_16:
    sub_1BC3264(skillToGroupDict, v9);
  }
  v13 = Method_System_Array_Empty_int___;
  v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v14 )
  {
    sub_1C134C8(Method_System_Array_Empty_int___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1346C(inited);
  if ( !*(_DWORD *)(v15 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v15);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1346C(inited);
  return **(System_Int32_array ***)(v16 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdFromSkillId(
        SkillGroupMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x0
  long double inited; // q0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_4B02B6E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v6);
    byte_4B02B6E = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_16:
    sub_1BC3264(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1C134C8(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1346C(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1346C(inited);
  return **(System_Int32_array ***)(v13 + 184);
}


bool __fastcall SkillGroupMaster__TryGetEntity(
        SkillGroupMaster_o *this,
        SkillGroupEntity_o **entity,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B02B71 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__, entity);
    byte_4B02B71 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}