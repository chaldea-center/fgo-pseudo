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

  if ( (byte_5971470 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
    byte_5971470 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v3,
    (const MethodInfo_4037D4C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillToGroupDict, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v10;
  sub_2213A04(
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
    (const MethodInfo_3F1339C *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
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
  __int64 v26; // x0
  __int64 v27; // x1
  SimpleSkillData_o v28; // x23
  System_Collections_Generic_List_int__o *v29; // x24
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v31; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  int32_t v35; // w23
  System_Collections_Generic_List_int__o *v36; // x24
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  struct System_Int32_array *v39; // x8
  _QWORD *v40; // x9
  __int64 monitor_low; // x10
  Il2CppObject *v42; // x23
  Il2CppClass *v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v49; // x22
  System_Int32_array *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  int32_t v53; // w20
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x21
  System_Int32_array *v55; // x0
  __int64 v56; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+70h] [xbp-A0h] BYREF
  SimpleSkillData_o key; // [xsp+A0h] [xbp-70h] BYREF
  Il2CppObject *v61; // [xsp+A8h] [xbp-68h] BYREF

  if ( (byte_597146D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_597146D = 1;
  }
  skillToGroupDict = (__int64)this->fields.skillToGroupDict;
  key = 0;
  v61 = 0;
  memset(&v58, 0, sizeof(v58));
  memset(&v59, 0, sizeof(v59));
  if ( !skillToGroupDict )
    goto LABEL_81;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)skillToGroupDict,
    (const MethodInfo_4038884 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (__int64)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_81;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)skillToGroupDict,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v4,
    (const MethodInfo_4037D4C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (__int64)System_Linq_Enumerable__OfType_object_(
                                (System_Collections_IEnumerable_o *)this->fields.list,
                                (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
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
    v10 = sub_224BC3C(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0);
  }
  v11 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  v61 = v11;
  v57.fields._dictionary = 0;
  *(_QWORD *)&v57.fields._version = &v61;
  if ( !v11 )
LABEL_48:
    sub_2213CDC(v11, v12);
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
      v17 = sub_224BC3C(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    skillToGroupDict = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8));
    if ( (skillToGroupDict & 1) == 0 )
      break;
    v18 = v61;
    if ( !v61 )
      sub_2213CDC(skillToGroupDict, method);
    v19 = v61->klass;
    v20 = *(unsigned __int16 *)&v61->klass->_2.rank;
    if ( *(_WORD *)&v61->klass->_2.rank )
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
      v22 = sub_224BC3C(v61, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      sub_2213CDC(0, v24);
    SimpleSkillData___ctor((SimpleSkillData_o)&key, *(_DWORD *)(v23 + 20), *(_DWORD *)(v23 + 24), 0);
    if ( !v4 )
      sub_2213CDC(v26, v27);
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v4,
            key,
            (const MethodInfo_40388F0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v28 = key;
      v29 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v29,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v4,
        v28,
        (Il2CppObject *)v29,
        (const MethodInfo_40386E8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                                       v4,
                                                       key,
                                                       (const MethodInfo_403865C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item
      || (items = Item->fields._items,
          v31 = *(unsigned int *)(v25 + 16),
          v33 = Method_System_Collections_Generic_List_int__Add__,
          ++Item->fields._version,
          !items) )
    {
      sub_2213CDC(Item, v31);
    }
    size = Item->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        v31,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size] = v31;
    }
    if ( !v5 )
      sub_2213CDC(Item, v31);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            v5,
            *(_DWORD *)(v25 + 20),
            (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v35 = *(_DWORD *)(v25 + 20);
      v36 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v36,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v5,
        v35,
        (Il2CppObject *)v36,
        (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v37 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v5,
            *(_DWORD *)(v25 + 20),
            (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v37 )
      sub_2213CDC(0, v38);
    v11 = (Il2CppObject *)System_Collections_Generic_List_int___Contains(
                            (System_Collections_Generic_List_int__o *)v37,
                            *(_DWORD *)(v25 + 16),
                            (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)v11 & 1) == 0 )
    {
      v11 = System_Collections_Generic_Dictionary_int__object___get_Item(
              v5,
              *(_DWORD *)(v25 + 20),
              (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v11
        || (v39 = (struct System_Int32_array *)v11[1].klass,
            v12 = *(unsigned int *)(v25 + 16),
            v40 = Method_System_Collections_Generic_List_int__Add__,
            ++HIDWORD(v11[1].monitor),
            !v39) )
      {
        sub_2213CDC(v11, v12);
      }
      monitor_low = SLODWORD(v11[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(v39->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v11,
          v12,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(v11[1].monitor) = monitor_low + 1;
        v39->m_Items[monitor_low] = v12;
      }
    }
    v13 = v61;
    if ( !v61 )
      goto LABEL_48;
  }
  v42 = v61;
  if ( v61 )
  {
    v43 = v61->klass;
    v44 = *(unsigned __int16 *)&v61->klass->_2.rank;
    if ( *(_WORD *)&v61->klass->_2.rank )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_54;
      }
      v46 = (__int64)&v43->vtable[*v45];
    }
    else
    {
LABEL_54:
      v46 = sub_224BC3C(v61, System_IDisposable_TypeInfo, 0);
    }
    skillToGroupDict = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8));
  }
  if ( !v4 )
    goto LABEL_81;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v57,
    v4,
    (const MethodInfo_4038B34 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v59 = v57;
  v57.fields._dictionary = 0;
  *(_QWORD *)&v57.fields._version = &v59;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v59,
            (const MethodInfo_416FF34 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v59.fields._current.fields.value )
      sub_2213CDC(0, v47);
    v48 = v59.fields._current.fields.key;
    v49 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    v50 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v59.fields._current.fields.value,
            (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v49 )
      sub_2213CDC(v50, v51);
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v49,
      (SimpleSkillData_o)v48,
      &v50->obj,
      (const MethodInfo_40386E8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v59,
    (const MethodInfo_4170054 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( !v5 )
LABEL_81:
    sub_2213CDC(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v58,
    v5,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v57.fields._dictionary = 0;
  *(_QWORD *)&v57.fields._version = &v58;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v58,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v58.fields._current.fields.value )
      sub_2213CDC(0, v52);
    v53 = (int32_t)v58.fields._current.fields.key;
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    v55 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v58.fields._current.fields.value,
            (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_2213CDC(v55, v56);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
      v53,
      &v55->obj,
      (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v58,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
}


SkillGroupEntity_o *SkillGroupMaster__GetEntity(
        SkillGroupMaster_o *this,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971471 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
    byte_5971471 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0);
  return (SkillGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3F157EC *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
}


System_Int32_array *SkillGroupMaster__GetSkillGroupIdArray(
        SkillGroupMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  long double v9; // q0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  SimpleSkillData_o key; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597146E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    byte_597146E = 1;
  }
  key = 0;
  SimpleSkillData___ctor((SimpleSkillData_o)&key, skillId, skillLv, 0);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         key,
         (const MethodInfo_40388F0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     key,
                                     (const MethodInfo_403865C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
LABEL_16:
    sub_2213CDC(skillToGroupDict, v7);
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v9);
  if ( !*(_DWORD *)(v13 + 228) )
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(v13, v7);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v9);
  return **(System_Int32_array ***)(v14 + 184);
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

  if ( (byte_597146F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_597146F = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_16:
    sub_2213CDC(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908(v6);
  if ( !*(_DWORD *)(v10 + 228) )
    *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&skillId);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908(v6);
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

  if ( (byte_5971472 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
    byte_5971472 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}