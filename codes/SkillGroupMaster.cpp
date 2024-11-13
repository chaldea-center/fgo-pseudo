void __fastcall SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_Dictionary_int__object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B16C45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo, v11, v12);
    byte_4B16C45 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v13,
    (const MethodInfo_32825F0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillToGroupDict, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v23 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v20,
                                                                  v21,
                                                                  v22);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v23,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v23;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillIdToGroupDict,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    442,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
}


void __fastcall SkillGroupMaster__CreateSkillToGroupDict(SkillGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v78; // x21
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_Collections_Generic_Dictionary_int__object__o *v82; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v84; // x22
  __int64 v85; // x9
  int32_t *p_offset; // x10
  __int64 v87; // x0
  __int64 v88; // x1
  __int64 v89; // x22
  __int64 v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x8
  __int64 v95; // x9
  int *v96; // x10
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x23
  int32_t v101; // w1
  int32_t v102; // w2
  __int64 v103; // x0
  __int64 v104; // x1
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  SimpleSkillData_o v108; // x24
  System_Collections_Generic_List_int__o *v109; // x25
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v111; // x1
  __int64 v112; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v114; // x9
  __int64 size; // x10
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  int32_t v119; // w24
  System_Collections_Generic_List_int__o *v120; // x25
  Il2CppObject *v121; // x0
  __int64 v122; // x1
  System_Collections_Generic_List_int__o *v123; // x0
  __int64 v124; // x1
  __int64 v125; // x1
  struct System_Int32_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  __int64 v129; // x8
  __int64 v130; // x9
  int *v131; // x10
  __int64 v132; // x0
  __int64 v133; // x1
  Il2CppObject *v134; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v135; // x22
  System_Int32_array *v136; // x0
  __int64 v137; // x1
  __int64 v138; // x1
  int32_t v139; // w20
  System_Collections_Generic_Dictionary_int__object__o *skillIdToGroupDict; // x21
  System_Int32_array *v141; // x0
  __int64 v142; // x1
  SkillGroupMaster_o *v143; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v144; // [xsp+8h] [xbp-E8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v145; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v146; // [xsp+60h] [xbp-90h] BYREF
  SimpleSkillData_o key; // [xsp+88h] [xbp-68h] BYREF
  SimpleSkillData_o p_key; // 0:x0.8
  SimpleSkillData_o v149; // 0:x1.8
  SimpleSkillData_o v150; // 0:x1.8
  SimpleSkillData_o v151; // 0:x1.8
  SimpleSkillData_o v152; // 0:x1.8

  if ( (byte_4B16C42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___, v34, v35);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__,
      v36,
      v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v40, v41);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__,
      v42,
      v43);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__,
      v44,
      v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v46, v47);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v48, v49);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, v50, v51);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, v52, v53);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v54, v55);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v56, v57);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__, v58, v59);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v60, v61);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__, v62, v63);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v64, v65);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v66, v67);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v68, v69);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v70, v71);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v72, v73);
    byte_4B16C42 = 1;
  }
  key = 0LL;
  memset(&v146, 0, sizeof(v146));
  memset(&v145, 0, sizeof(v145));
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_3283148 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)skillToGroupDict,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo,
                                                                   v75,
                                                                   v76,
                                                                   v77);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v78,
    (const MethodInfo_32825F0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v82 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                  v79,
                                                                  v80,
                                                                  v81);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v82,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_76;
  klass = skillToGroupDict->klass;
  v84 = skillToGroupDict;
  v85 = *(unsigned __int16 *)(&skillToGroupDict->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&skillToGroupDict->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      --v85;
      p_offset += 4;
      if ( !v85 )
        goto LABEL_10;
    }
    v87 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v87 = sub_1C1C7C0(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0LL);
  }
  v143 = this;
  v89 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v87)(
          v84,
          *(_QWORD *)(v87 + 8));
  if ( !v89 )
    sub_1BCAA3C(0LL, v88);
  while ( 1 )
  {
    v90 = *(_QWORD *)v89;
    v91 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
    {
      v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v92 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v91;
        v92 += 4;
        if ( !v91 )
          goto LABEL_17;
      }
      v93 = v90 + 16LL * *v92 + 312;
    }
    else
    {
LABEL_17:
      v93 = sub_1C1C7C0(v89, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8)) & 1) == 0 )
      break;
    v94 = *(_QWORD *)v89;
    v95 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
    {
      v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v96 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        --v95;
        v96 += 4;
        if ( !v95 )
          goto LABEL_24;
      }
      v97 = v94 + 16LL * *v96 + 312;
    }
    else
    {
LABEL_24:
      v97 = sub_1C1C7C0(v89, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0LL);
    }
    v98 = (*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v89, *(_QWORD *)(v97 + 8));
    v100 = v98;
    if ( !v98 )
      sub_1BCAA3C(0LL, v99);
    v101 = *(_DWORD *)(v98 + 20);
    v102 = *(_DWORD *)(v98 + 24);
    p_key = (SimpleSkillData_o)&key;
    SimpleSkillData___ctor(p_key, v101, v102, 0LL);
    if ( !v78 )
      sub_1BCAA3C(v103, v104);
    v149 = key;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v78,
            v149,
            (const MethodInfo_32831B4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v108 = key;
      v109 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v105,
                                                         v106,
                                                         v107);
      System_Collections_Generic_List_int____ctor(
        v109,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      v150 = v108;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v78,
        v150,
        (Il2CppObject *)v109,
        (const MethodInfo_3282FAC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v151 = key;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                                       v78,
                                                       v151,
                                                       (const MethodInfo_3282F20 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_1BCAA3C(0LL, v111);
    v112 = *(unsigned int *)(v100 + 16);
    items = Item->fields._items;
    v114 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1BCAA3C(Item, v112);
    size = Item->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        v112,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = v112;
    }
    if ( !v82 )
      sub_1BCAA3C(Item, v112);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            v82,
            *(_DWORD *)(v100 + 20),
            (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v119 = *(_DWORD *)(v100 + 20);
      v120 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v116,
                                                         v117,
                                                         v118);
      System_Collections_Generic_List_int____ctor(
        v120,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__object___set_Item(
        v82,
        v119,
        (Il2CppObject *)v120,
        (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v121 = System_Collections_Generic_Dictionary_int__object___get_Item(
             v82,
             *(_DWORD *)(v100 + 20),
             (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v121 )
      sub_1BCAA3C(0LL, v122);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v121,
            *(_DWORD *)(v100 + 16),
            (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v123 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                         v82,
                                                         *(_DWORD *)(v100 + 20),
                                                         (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v123 )
        sub_1BCAA3C(0LL, v124);
      v125 = *(unsigned int *)(v100 + 16);
      v126 = v123->fields._items;
      v127 = Method_System_Collections_Generic_List_int__Add__;
      ++v123->fields._version;
      if ( !v126 )
        sub_1BCAA3C(v123, v125);
      v128 = v123->fields._size;
      if ( (unsigned int)v128 >= v126->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v123,
          v125,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v123->fields._size = v128 + 1;
        v126->m_Items[v128 + 1] = v125;
      }
    }
  }
  v129 = *(_QWORD *)v89;
  v130 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
  {
    v131 = (int *)(*(_QWORD *)(v129 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v131 - 1) != System_IDisposable_TypeInfo )
    {
      --v130;
      v131 += 4;
      if ( !v130 )
        goto LABEL_49;
    }
    v132 = v129 + 16LL * *v131 + 312;
  }
  else
  {
LABEL_49:
    v132 = sub_1C1C7C0(v89, System_IDisposable_TypeInfo, 0LL);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v132)(
                                                                                v89,
                                                                                *(_QWORD *)(v132 + 8));
  if ( !v78 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v144,
    v78,
    (const MethodInfo_32833F4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v146 = v144;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v146,
            (const MethodInfo_336A3D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v146.fields._current.fields.value )
      sub_1BCAA3C(0LL, v133);
    v134 = v146.fields._current.fields.key;
    v135 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v143->fields.skillToGroupDict;
    v136 = System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)v146.fields._current.fields.value,
             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v135 )
      sub_1BCAA3C(v136, v137);
    v152 = (SimpleSkillData_o)v134;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v135,
      v152,
      &v136->obj,
      (const MethodInfo_3282FAC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v146,
    (const MethodInfo_336A4F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( !v82 )
LABEL_76:
    sub_1BCAA3C(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v145,
    v82,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v145,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v145.fields._current.fields.value )
      sub_1BCAA3C(0LL, v138);
    v139 = (int32_t)v145.fields._current.fields.key;
    skillIdToGroupDict = (System_Collections_Generic_Dictionary_int__object__o *)v143->fields.skillIdToGroupDict;
    v141 = System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)v145.fields._current.fields.value,
             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_1BCAA3C(v141, v142);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      skillIdToGroupDict,
      v139,
      &v141->obj,
      (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v145,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
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

  if ( (byte_4B16C46 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&skillId);
    byte_4B16C46 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0LL);
  return (SkillGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdArray(
        SkillGroupMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  long double inited; // q0
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  SimpleSkillData_o key; // [xsp+8h] [xbp-28h] BYREF
  SimpleSkillData_o p_key; // 0:x0.8
  SimpleSkillData_o v21; // 0:x1.8
  SimpleSkillData_o v22; // 0:x1.8

  if ( (byte_4B16C43 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId, *(_QWORD *)&skillLv);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__, v9, v10);
    byte_4B16C43 = 1;
  }
  p_key = (SimpleSkillData_o)&key;
  key = 0LL;
  SimpleSkillData___ctor(p_key, skillId, skillLv, 0LL);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_16;
  v21 = key;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v21,
         (const MethodInfo_32831B4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v22 = key;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v22,
                                     (const MethodInfo_3282F20 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_16:
    sub_1BCAA3C(skillToGroupDict, v11);
  }
  v15 = Method_System_Array_Empty_int___;
  v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v16 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v11);
    v16 = v15[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v17 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v17, v11);
  v18 = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C1C6BC(inited);
  return **(System_Int32_array ***)(v18 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdFromSkillId(
        SkillGroupMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x0
  long double inited; // q0
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_4B16C44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v7, v8);
    byte_4B16C44 = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_16:
    sub_1BCAA3C(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14, *(_QWORD *)&skillId);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC(inited);
  return **(System_Int32_array ***)(v15 + 184);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillGroupMaster__TryGetEntity(
        SkillGroupMaster_o *this,
        SkillGroupEntity_o **entity,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16C47 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B16C47 = 1;
  }
  PK = (Il2CppObject *)SkillGroupEntity__CreatePK(id, skillId, lv, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}