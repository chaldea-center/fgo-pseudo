void __fastcall SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5BB93 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
    byte_4A5BB93 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v3,
    (const MethodInfo_31E43B8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillToGroupDict, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillIdToGroupDict, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    442,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
}


void __fastcall SkillGroupMaster__CreateSkillToGroupDict(SkillGroupMaster_o *this, const MethodInfo *method)
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
  __int64 v26; // x0
  __int64 v27; // x1
  SimpleSkillData_o v28; // x24
  System_Collections_Generic_List_int__o *v29; // x25
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  int32_t v36; // w24
  System_Collections_Generic_List_int__o *v37; // x25
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_int__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x1
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x1
  Il2CppObject *v51; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v52; // x22
  System_Int32_array *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x1
  int32_t v56; // w20
  System_Collections_Generic_Dictionary_int__object__o *skillIdToGroupDict; // x21
  System_Int32_array *v58; // x0
  __int64 v59; // x1
  SkillGroupMaster_o *v60; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v63; // [xsp+60h] [xbp-90h] BYREF
  SimpleSkillData_o key; // [xsp+88h] [xbp-68h] BYREF
  SimpleSkillData_o p_key; // 0:x0.8
  SimpleSkillData_o v66; // 0:x1.8
  SimpleSkillData_o v67; // 0:x1.8
  SimpleSkillData_o v68; // 0:x1.8
  SimpleSkillData_o v69; // 0:x1.8

  if ( (byte_4A5BB90 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5BB90 = 1;
  }
  key = 0LL;
  memset(&v63, 0, sizeof(v63));
  memset(&v62, 0, sizeof(v62));
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_31E4F10 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)skillToGroupDict,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v4,
    (const MethodInfo_31E43B8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_76;
  klass = skillToGroupDict->klass;
  v7 = skillToGroupDict;
  v8 = *(unsigned __int16 *)(&skillToGroupDict->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&skillToGroupDict->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v10 = sub_1BDA590(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0LL);
  }
  v60 = this;
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v10)(
          v7,
          *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_1B8880C(0LL, v11);
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
      v16 = sub_1BDA590(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v20 = sub_1BDA590(v12, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_1B8880C(0LL, v22);
    v24 = *(_DWORD *)(v21 + 20);
    v25 = *(_DWORD *)(v21 + 24);
    p_key = (SimpleSkillData_o)&key;
    SimpleSkillData___ctor(p_key, v24, v25, 0LL);
    if ( !v4 )
      sub_1B8880C(v26, v27);
    v66 = key;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v4,
            v66,
            (const MethodInfo_31E4F7C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v28 = key;
      v29 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v29,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      v67 = v28;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v4,
        v67,
        (Il2CppObject *)v29,
        (const MethodInfo_31E4D74 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v68 = key;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                                       v4,
                                                       v68,
                                                       (const MethodInfo_31E4CE8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_1B8880C(0LL, v31);
    v32 = *(unsigned int *)(v23 + 16);
    items = Item->fields._items;
    v34 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1B8880C(Item, v32);
    size = Item->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        v32,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = v32;
    }
    if ( !v5 )
      sub_1B8880C(Item, v32);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            v5,
            *(_DWORD *)(v23 + 20),
            (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v36 = *(_DWORD *)(v23 + 20);
      v37 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v37,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v5,
        v36,
        (Il2CppObject *)v37,
        (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v38 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v5,
            *(_DWORD *)(v23 + 20),
            (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v38 )
      sub_1B8880C(0LL, v39);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v38,
            *(_DWORD *)(v23 + 16),
            (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v40 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        v5,
                                                        *(_DWORD *)(v23 + 20),
                                                        (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v40 )
        sub_1B8880C(0LL, v41);
      v42 = *(unsigned int *)(v23 + 16);
      v43 = v40->fields._items;
      v44 = Method_System_Collections_Generic_List_int__Add__;
      ++v40->fields._version;
      if ( !v43 )
        sub_1B8880C(v40, v42);
      v45 = v40->fields._size;
      if ( (unsigned int)v45 >= v43->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v40,
          v42,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v40->fields._size = v45 + 1;
        v43->m_Items[v45 + 1] = v42;
      }
    }
  }
  v46 = *(_QWORD *)v12;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_49;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_49:
    v49 = sub_1BDA590(v12, System_IDisposable_TypeInfo, 0LL);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v49)(
                                                                                v12,
                                                                                *(_QWORD *)(v49 + 8));
  if ( !v4 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v61,
    v4,
    (const MethodInfo_31E51BC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v63 = v61;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v63,
            (const MethodInfo_32CA028 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v63.fields._current.fields.value )
      sub_1B8880C(0LL, v50);
    v51 = v63.fields._current.fields.key;
    v52 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v60->fields.skillToGroupDict;
    v53 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v63.fields._current.fields.value,
            (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v52 )
      sub_1B8880C(v53, v54);
    v69 = (SimpleSkillData_o)v51;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v52,
      v69,
      &v53->obj,
      (const MethodInfo_31E4D74 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v63,
    (const MethodInfo_32CA148 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( !v5 )
LABEL_76:
    sub_1B8880C(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v62,
    v5,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v62,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v62.fields._current.fields.value )
      sub_1B8880C(0LL, v55);
    v56 = (int32_t)v62.fields._current.fields.key;
    skillIdToGroupDict = (System_Collections_Generic_Dictionary_int__object__o *)v60->fields.skillIdToGroupDict;
    v58 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v62.fields._current.fields.value,
            (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_1B8880C(v58, v59);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      skillIdToGroupDict,
      v56,
      &v58->obj,
      (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v62,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
}


SkillGroupEntity_o *__fastcall SkillGroupMaster__GetEntity(
        SkillGroupMaster_o *this,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BB94 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
    byte_4A5BB94 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0LL);
  return (SkillGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
}


System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdArray(
        SkillGroupMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  SimpleSkillData_o key; // [xsp+8h] [xbp-28h] BYREF
  SimpleSkillData_o p_key; // 0:x0.8
  SimpleSkillData_o v16; // 0:x1.8
  SimpleSkillData_o v17; // 0:x1.8

  if ( (byte_4A5BB91 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    byte_4A5BB91 = 1;
  }
  p_key = (SimpleSkillData_o)&key;
  key = 0LL;
  SimpleSkillData___ctor(p_key, skillId, skillLv, 0LL);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_16;
  v16 = key;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v16,
         (const MethodInfo_31E4F7C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v17 = key;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v17,
                                     (const MethodInfo_31E4CE8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_16:
    sub_1B8880C(skillToGroupDict, v7);
  }
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BDA48C(v12);
  if ( !*(_DWORD *)(v12 + 224) )
    j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BDA48C(v13);
  return **(System_Int32_array ***)(v13 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdFromSkillId(
        SkillGroupMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_4A5BB92 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_4A5BB92 = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_16:
    sub_1B8880C(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  if ( !*(_DWORD *)(v9 + 224) )
    j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  return **(System_Int32_array ***)(v10 + 184);
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

  if ( (byte_4A5BB95 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
    byte_4A5BB95 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}