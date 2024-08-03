void __fastcall SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_int__object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FCD42 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo, v7);
    byte_49FCD42 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v8,
    (const MethodInfo_3196788 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillToGroupDict, (int32_t)v8, v9, v10);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v11,
                                                                  v12);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillIdToGroupDict, (int32_t)v13, v14, v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    442,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
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
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_Dictionary_int__object__o *v44; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v46; // x22
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 v49; // x0
  __int64 v50; // x22
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x23
  int32_t v61; // w1
  int32_t v62; // w2
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  SimpleSkillData_o v66; // x24
  System_Collections_Generic_List_int__o *v67; // x25
  System_Collections_Generic_List_int__o *Item; // x0
  int32_t v69; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  __int64 v73; // x1
  __int64 v74; // x2
  int32_t v75; // w24
  System_Collections_Generic_List_int__o *v76; // x25
  Il2CppObject *v77; // x0
  System_Collections_Generic_List_int__o *v78; // x0
  int32_t v79; // w1
  struct System_Int32_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  Il2CppObject *v87; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v88; // x22
  System_Int32_array *v89; // x0
  int32_t v90; // w20
  System_Collections_Generic_Dictionary_int__object__o *skillIdToGroupDict; // x21
  System_Int32_array *v92; // x0
  SkillGroupMaster_o *v93; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v94; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v95; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v96; // [xsp+60h] [xbp-90h] BYREF
  SimpleSkillData_o key; // [xsp+88h] [xbp-68h] BYREF
  SimpleSkillData_o p_key; // 0:x0.8
  SimpleSkillData_o v99; // 0:x1.8
  SimpleSkillData_o v100; // 0:x1.8
  SimpleSkillData_o v101; // 0:x1.8
  SimpleSkillData_o v102; // 0:x1.8

  if ( (byte_49FCD3F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v15);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v16);
    sub_1B640C8(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo, v17);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___, v18);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v24);
    sub_1B640C8(&System_IDisposable_TypeInfo, v25);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, v26);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, v27);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v28);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v36);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v37);
    byte_49FCD3F = 1;
  }
  key = 0LL;
  memset(&v96, 0, sizeof(v96));
  memset(&v95, 0, sizeof(v95));
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_31972E0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)skillToGroupDict,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v41 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo,
                                                                   v39,
                                                                   v40);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v41,
    (const MethodInfo_3196788 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v44 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                  v42,
                                                                  v43);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v44,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_76;
  klass = skillToGroupDict->klass;
  v46 = skillToGroupDict;
  v47 = *(unsigned __int16 *)(&skillToGroupDict->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&skillToGroupDict->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      --v47;
      p_offset += 4;
      if ( !v47 )
        goto LABEL_10;
    }
    v49 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v49 = sub_1BB60A8(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0LL);
  }
  v93 = this;
  v50 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v49)(
          v46,
          *(_QWORD *)(v49 + 8));
  if ( !v50 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v51 = *(_QWORD *)v50;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_17;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_17:
      v54 = sub_1BB60A8(v50, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
      break;
    v55 = *(_QWORD *)v50;
    v56 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v57 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_24;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_24:
      v58 = sub_1BB60A8(v50, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0LL);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v50, *(_QWORD *)(v58 + 8));
    v60 = v59;
    if ( !v59 )
      sub_1B64324(0LL);
    v61 = *(_DWORD *)(v59 + 20);
    v62 = *(_DWORD *)(v59 + 24);
    p_key = (SimpleSkillData_o)&key;
    SimpleSkillData___ctor(p_key, v61, v62, 0LL);
    if ( !v41 )
      sub_1B64324(v63);
    v99 = key;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v41,
            v99,
            (const MethodInfo_319734C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v66 = key;
      v67 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v64,
                                                        v65);
      System_Collections_Generic_List_int____ctor(
        v67,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      v100 = v66;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v41,
        v100,
        (Il2CppObject *)v67,
        (const MethodInfo_3197144 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v101 = key;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                                       v41,
                                                       v101,
                                                       (const MethodInfo_31970B8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_1B64324(0LL);
    v69 = *(_DWORD *)(v60 + 16);
    items = Item->fields._items;
    v71 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1B64324(Item);
    size = Item->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        v69,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = v69;
    }
    if ( !v44 )
      sub_1B64324(Item);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            v44,
            *(_DWORD *)(v60 + 20),
            (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v75 = *(_DWORD *)(v60 + 20);
      v76 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v73,
                                                        v74);
      System_Collections_Generic_List_int____ctor(
        v76,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v44,
        v75,
        (Il2CppObject *)v76,
        (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v77 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v44,
            *(_DWORD *)(v60 + 20),
            (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v77 )
      sub_1B64324(0LL);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v77,
            *(_DWORD *)(v60 + 16),
            (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v78 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        v44,
                                                        *(_DWORD *)(v60 + 20),
                                                        (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v78 )
        sub_1B64324(0LL);
      v79 = *(_DWORD *)(v60 + 16);
      v80 = v78->fields._items;
      v81 = Method_System_Collections_Generic_List_int__Add__;
      ++v78->fields._version;
      if ( !v80 )
        sub_1B64324(v78);
      v82 = v78->fields._size;
      if ( (unsigned int)v82 >= v80->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v78,
          v79,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
      }
      else
      {
        v78->fields._size = v82 + 1;
        v80->m_Items[v82 + 1] = v79;
      }
    }
  }
  v83 = *(_QWORD *)v50;
  v84 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
  {
    v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_49;
    }
    v86 = v83 + 16LL * *v85 + 312;
  }
  else
  {
LABEL_49:
    v86 = sub_1BB60A8(v50, System_IDisposable_TypeInfo, 0LL);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v86)(
                                                                                v50,
                                                                                *(_QWORD *)(v86 + 8));
  if ( !v41 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v94,
    v41,
    (const MethodInfo_319758C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v96 = v94;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v96,
            (const MethodInfo_327C008 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v96.fields._current.fields.value )
      sub_1B64324(0LL);
    v87 = v96.fields._current.fields.key;
    v88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v93->fields.skillToGroupDict;
    v89 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v96.fields._current.fields.value,
            (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v88 )
      sub_1B64324(v89);
    v102 = (SimpleSkillData_o)v87;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v88,
      v102,
      &v89->obj,
      (const MethodInfo_3197144 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v96,
    (const MethodInfo_327C128 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( !v44 )
LABEL_76:
    sub_1B64324(skillToGroupDict);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v95,
    v44,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v95,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v95.fields._current.fields.value )
      sub_1B64324(0LL);
    v90 = (int32_t)v95.fields._current.fields.key;
    skillIdToGroupDict = (System_Collections_Generic_Dictionary_int__object__o *)v93->fields.skillIdToGroupDict;
    v92 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v95.fields._current.fields.value,
            (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_1B64324(v92);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      skillIdToGroupDict,
      v90,
      &v92->obj,
      (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v95,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
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

  if ( (byte_49FCD43 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FCD43 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0LL);
  return (SkillGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_30D41FC *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  SimpleSkillData_o key; // [xsp+8h] [xbp-28h] BYREF
  SimpleSkillData_o p_key; // 0:x0.8
  SimpleSkillData_o v17; // 0:x1.8
  SimpleSkillData_o v18; // 0:x1.8

  if ( (byte_49FCD40 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__, v8);
    byte_49FCD40 = 1;
  }
  p_key = (SimpleSkillData_o)&key;
  key = 0LL;
  SimpleSkillData___ctor(p_key, skillId, skillLv, 0LL);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_16;
  v17 = key;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v17,
         (const MethodInfo_319734C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v18 = key;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v18,
                                     (const MethodInfo_31970B8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_16:
    sub_1B64324(skillToGroupDict);
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB5FA4(v13);
  if ( !*(_DWORD *)(v13 + 224) )
    j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB5FA4(v14);
  return **(System_Int32_array ***)(v14 + 184);
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
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_49FCD41 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v6);
    byte_49FCD41 = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_16:
    sub_1B64324(skillIdToGroupDict);
  }
  v9 = Method_System_Array_Empty_int___;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB5FA4(v11);
  if ( !*(_DWORD *)(v11 + 224) )
    j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  return **(System_Int32_array ***)(v12 + 184);
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

  if ( (byte_49FCD44 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__, entity);
    byte_49FCD44 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}