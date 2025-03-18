void __fastcall QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2240E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__, method);
    byte_4C2240E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    77,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
}


void __fastcall QuestGroupMaster__CreateCache(QuestGroupMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__object__o *v15; // x21
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____o **p_type_groupCache; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v25; // w21
  int64_t v26; // x22
  System_Collections_Generic_Dictionary_int__object__o *v27; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_object__o *v34; // x23
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 klass_low; // x10
  Il2CppClass **v38; // x8
  System_Collections_Generic_List_object__o *v39; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C22419 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__, v4);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__,
      v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity_____ctor__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity____ctor__, v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____set_Item__,
      v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___set_Item__, v9);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TypeInfo, v10);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v13);
    sub_1C3B764(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v14);
    byte_4C22419 = 1;
  }
  v39 = 0LL;
  value = 0LL;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v15,
      (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity_____ctor__);
    this->fields.type_groupCache = (struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____o *)v15;
    p_type_groupCache = &this->fields.type_groupCache;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.type_groupCache, (int64_t)v15, v17, v18, v19, v20, v21, v22);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_23:
      sub_1C3B9C0(list, v23);
    v25 = 0;
    while ( v25 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v25,
                                                                   (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
        if ( list )
        {
          v26 = (int64_t)list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_groupCache;
          if ( *p_type_groupCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    *(_DWORD *)(v26 + 20),
                    &value,
                    (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__) )
            {
              v27 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TypeInfo);
              System_Collections_Generic_Dictionary_int__object____ctor(
                v27,
                (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity____ctor__);
              value = (Il2CppObject *)v27;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_groupCache;
              if ( !*p_type_groupCache )
                goto LABEL_23;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                *(_DWORD *)(v26 + 20),
                (Il2CppObject *)v27,
                (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)value,
                      *(_DWORD *)(v26 + 24),
                      (Il2CppObject **)&v39,
                      (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__) )
              {
                v34 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v34,
                  (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
                list = (System_Collections_ObjectModel_Collection_T__o *)value;
                v39 = v34;
                if ( !value )
                  goto LABEL_23;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)value,
                  *(_DWORD *)(v26 + 24),
                  (Il2CppObject *)v34,
                  (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)v39;
              if ( v39 )
              {
                items = v39->fields._items;
                v36 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
                ++v39->fields._version;
                if ( items )
                {
                  klass_low = SLODWORD(list[1].klass);
                  if ( (unsigned int)klass_low >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)list,
                      (Il2CppObject *)v26,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v38 = &items->obj.klass + klass_low;
                    LODWORD(list[1].klass) = klass_low + 1;
                    v38[4] = (Il2CppClass *)v26;
                    sub_1C3B708((PartyOrganizationUtility_o *)(v38 + 4), v26, v28, v29, v30, v31, v32, v33);
                  }
                  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                  ++v25;
                  if ( list )
                    continue;
                }
              }
            }
          }
        }
      }
      goto LABEL_23;
    }
  }
}


void __fastcall QuestGroupMaster__DeleteCache(QuestGroupMaster_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____o **p_type_groupCache; // x19

  this->fields.type_groupCache = 0LL;
  p_type_groupCache = &this->fields.type_groupCache;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.type_groupCache, 0LL, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_type_groupCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestGroupEntity__o *__fastcall QuestGroupMaster__GetCacheByTypeGroup(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__object__o *type_groupCache; // x0
  Il2CppObject *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C2241A & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__,
      *(_QWORD *)&groupId);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__,
      v7);
    byte_4C2241A = 1;
  }
  value = 0LL;
  v11 = 0LL;
  QuestGroupMaster__CreateCache(this, *(const MethodInfo **)&groupId);
  type_groupCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.type_groupCache;
  if ( !type_groupCache )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          type_groupCache,
          type,
          &value,
          (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__) )
    return 0LL;
  type_groupCache = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_11:
    sub_1C3B9C0(type_groupCache, v8);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)value,
         groupId,
         &v11,
         (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_QuestGroupEntity__o *)v11;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetClearedGroupOpenQuestListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v22; // x19
  System_Collections_Generic_List_object__o *v23; // x20
  System_Collections_Generic_List_int__o *v24; // x21
  System_Collections_Generic_List_int__o *v25; // x24
  __int64 v26; // x1
  int64_t list; // x0
  int v28; // w25
  int32_t i; // w26
  int v30; // w8
  int64_t v31; // x27
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  char *v41; // x8
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  __int64 v46; // x8
  System_Collections_Generic_List_int__o *v47; // x0
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  int v51; // w8
  int v52; // w8
  System_Comparison_T__o *v53; // x22
  Il2CppObject *v54; // x23
  struct QuestGroupMaster___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int v62; // w26
  char v63; // w23
  int32_t v64; // w22
  int v65; // w28
  int v66; // w25
  int32_t v67; // w24
  int v68; // w8
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10

  if ( (byte_4C22414 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__, v5);
    sub_1C3B764(&System_Comparison_QuestGroupEntity__TypeInfo, v6);
    sub_1C3B764(&CondType_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Remove__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v17);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1C3B764(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v19);
    sub_1C3B764(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__, v20);
    sub_1C3B764(&QuestGroupMaster___c_TypeInfo, v21);
    byte_4C22414 = 1;
  }
  v22 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v24 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v25 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_65;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v28 = list;
    for ( i = 0; v28 != i; ++i )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_65;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        i,
                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
      if ( !list )
        continue;
      v30 = *(_DWORD *)(list + 20);
      v31 = list;
      if ( v30 == 1 )
      {
        if ( *(_DWORD *)(list + 24) == eventId )
        {
          if ( !v25 )
            goto LABEL_65;
          list = System_Collections_Generic_List_int___Remove(
                   v25,
                   *(_DWORD *)(list + 16),
                   (const MethodInfo_3670144 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( (list & 1) != 0 )
          {
LABEL_19:
            if ( !v23 )
              goto LABEL_65;
            items = v23->fields._items;
            v43 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_65;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v23,
                (Il2CppObject *)v31,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = &items->obj.klass + size;
              v23->fields._size = size + 1;
              v45[4] = (Il2CppClass *)v31;
              sub_1C3B708((PartyOrganizationUtility_o *)(v45 + 4), v31, v32, v33, v34, v35, v36, v37);
            }
            continue;
          }
          if ( !v24 )
            goto LABEL_65;
          v26 = *(unsigned int *)(v31 + 16);
          v48 = v24->fields._items;
          v49 = Method_System_Collections_Generic_List_int__Add__;
          ++v24->fields._version;
          if ( !v48 )
            goto LABEL_65;
          v50 = v24->fields._size;
          if ( (unsigned int)v50 >= v48->max_length )
          {
            v46 = v49[4];
            v47 = v24;
            goto LABEL_31;
          }
          v41 = (char *)v48 + 4 * v50;
          v24->fields._size = v50 + 1;
          goto LABEL_29;
        }
      }
      else if ( v30 == 2 )
      {
        if ( !v24 )
          goto LABEL_65;
        list = System_Collections_Generic_List_int___Remove(
                 v24,
                 *(_DWORD *)(list + 16),
                 (const MethodInfo_3670144 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( (list & 1) != 0 )
          goto LABEL_19;
        if ( !v25 )
          goto LABEL_65;
        v26 = *(unsigned int *)(v31 + 16);
        v38 = v25->fields._items;
        v39 = Method_System_Collections_Generic_List_int__Add__;
        ++v25->fields._version;
        if ( !v38 )
          goto LABEL_65;
        v40 = v25->fields._size;
        if ( (unsigned int)v40 >= v38->max_length )
        {
          v46 = v39[4];
          v47 = v25;
LABEL_31:
          System_Collections_Generic_List_int___AddWithResize(
            v47,
            v26,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v46 + 192) + 112LL));
          continue;
        }
        v41 = (char *)v38 + 4 * v40;
        v25->fields._size = v40 + 1;
LABEL_29:
        *((_DWORD *)v41 + 8) = v26;
      }
    }
  }
  if ( !v24 )
    goto LABEL_65;
  v51 = v24->fields._version + 1;
  v24->fields._size = 0;
  v24->fields._version = v51;
  if ( !v25 )
    goto LABEL_65;
  v52 = v25->fields._version + 1;
  v25->fields._size = 0;
  v25->fields._version = v52;
  list = (int64_t)QuestGroupMaster___c_TypeInfo;
  if ( !QuestGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestGroupMaster___c_TypeInfo);
    list = (int64_t)QuestGroupMaster___c_TypeInfo;
  }
  v53 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v53 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)QuestGroupMaster___c_TypeInfo;
    }
    v54 = **(Il2CppObject ***)(list + 184);
    v53 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_QuestGroupEntity__TypeInfo);
    System_Comparison_object____ctor(
      v53,
      v54,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      0LL);
    static_fields = QuestGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)v53;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__10_0, (int64_t)v53, v56, v57, v58, v59, v60, v61);
  }
  if ( !v23 )
    goto LABEL_65;
  System_Collections_Generic_List_object___Sort_57202480(
    v23,
    v53,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  v62 = v23->fields._size;
  if ( v62 < 1 )
    return v22;
  v63 = 0;
  v64 = 0;
  v65 = -1;
  do
  {
    list = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v23,
                      v64,
                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_65;
    v66 = *(_DWORD *)(list + 24);
    list = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v23,
                      v64,
                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_65;
    v67 = *(_DWORD *)(list + 16);
    if ( v66 == v65 )
    {
      if ( (v63 & 1) != 0 )
      {
        v63 = 1;
        goto LABEL_56;
      }
    }
    else
    {
      if ( (v63 & 1) != 0 )
      {
        if ( !v22 )
          goto LABEL_65;
        System_Collections_Generic_List_int___AddRange(
          v22,
          (System_Collections_Generic_IEnumerable_T__o *)v24,
          (const MethodInfo_366EE54 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v65 = v66;
      v68 = v24->fields._version + 1;
      v24->fields._size = 0;
      v24->fields._version = v68;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    list = CondType__IsQuestClear_39011304(v67, -1, 0, 0LL);
    v63 = list;
LABEL_56:
    v69 = v24->fields._items;
    v70 = Method_System_Collections_Generic_List_int__Add__;
    ++v24->fields._version;
    if ( !v69 )
      goto LABEL_65;
    v71 = v24->fields._size;
    if ( (unsigned int)v71 >= v69->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v24,
        v67,
        *(const MethodInfo_366EC48 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v24->fields._size = v71 + 1;
      v69->m_Items[v71 + 1] = v67;
    }
    ++v64;
  }
  while ( v62 != v64 );
  if ( (v63 & 1) != 0 )
  {
    if ( v22 )
    {
      System_Collections_Generic_List_int___AddRange(
        v22,
        (System_Collections_Generic_IEnumerable_T__o *)v24,
        (const MethodInfo_366EE54 *)Method_System_Collections_Generic_List_int__AddRange__);
      return v22;
    }
LABEL_65:
    sub_1C3B9C0(list, v26);
  }
  return v22;
}


// local variable allocation has failed, the output may be wrong!
QuestGroupEntity_o *__fastcall QuestGroupMaster__GetEntity(
        QuestGroupMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2240C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4C2240C = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_329F900 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestGroupEntity__o *__fastcall QuestGroupMaster__GetEntityListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x22
  int64_t v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C22413 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__, *(_QWORD *)&groupId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v10);
    byte_4C22413 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
      if ( list )
      {
        v12 = (int64_t)list;
        if ( HIDWORD(list->fields.items) == type && LODWORD(list[1].klass) == groupId )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v12;
            sub_1C3B708((PartyOrganizationUtility_o *)(v26 + 4), v12, v17, v18, v19, v20, v21, v22);
          }
        }
      }
      if ( v15 == ++v16 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v11;
    }
LABEL_17:
    sub_1C3B9C0(list, v12);
  }
  return (System_Collections_Generic_List_QuestGroupEntity__o *)v11;
}


int32_t __fastcall QuestGroupMaster__GetEventId(QuestGroupMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return QuestGroupMaster__GetGroupId(this, questId, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestGroupMaster__GetEventTowerQuestId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        int32_t tower,
        int32_t floor,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w23
  int32_t v13; // w24
  System_Collections_ObjectModel_Collection_T__o *v14; // x25
  int v15; // w28
  int v16; // w29
  int32_t i; // w26
  int items_high; // w8

  if ( (byte_4C22416 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__, v9);
    byte_4C22416 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_23:
    sub_1C3B9C0(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v12 = Count;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_23;
    v14 = list;
    if ( HIDWORD(list->fields.items) == 9 && LODWORD(list[1].klass) == floor )
    {
      v15 = 0;
      v16 = 0;
      for ( i = 0; i != v12; ++i )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_23;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   i,
                                                                   (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
        if ( !list )
          goto LABEL_23;
        if ( LODWORD(list->fields.items) == LODWORD(v14->fields.items) )
        {
          items_high = HIDWORD(list->fields.items);
          if ( items_high == 8 )
          {
            v16 |= LODWORD(list[1].klass) == tower;
          }
          else if ( items_high == 1 )
          {
            v15 |= LODWORD(list[1].klass) == eventId;
          }
        }
      }
      if ( (v16 & v15 & 1) != 0 )
        return (int32_t)v14->fields.items;
    }
    if ( ++v13 == v12 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestGroupMaster__GetGroupId(
        QuestGroupMaster_o *this,
        int32_t questId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4C2240F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__, *(_QWORD *)&questId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__, v7);
    byte_4C2240F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C3B9C0(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v11,
             (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].klass) == questId && HIDWORD(Item[1].klass) == type )
        return (int32_t)Item[1].monitor;
    }
    if ( v10 == ++v11 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetInterludeQuestIdList(
        QuestGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  unsigned int *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4C22418 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4C22418 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestGroupEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo, 0LL);
    }
    v24 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                            Enumerator,
                            *(_QWORD *)(v23 + 8));
    if ( !v24 )
      sub_1C3B9C0(0LL, v25);
    v26 = v24[4];
    if ( (_DWORD)v26 != questId && v24[5] == 13 && v24[6] == questId )
    {
      if ( !v11 )
        sub_1C3B9C0(v24, v26);
      items = v11->fields._items;
      v28 = Method_System_Collections_Generic_List_int__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(v24, v26);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v11,
          v26,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = size + 1;
        items->m_Items[size + 1] = v26;
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_31;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_31:
    v33 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetListOfQuestIdByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x19
  System_Collections_ObjectModel_Collection_T__o *Instance; // x0
  __int64 items_low; // x1
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_QuestGroupEntity__o *CacheByTypeGroup; // x0
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int32_t Count; // w0
  int32_t v25; // w23
  int32_t v26; // w24
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10

  if ( (byte_4C22412 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__, *(_QWORD *)&groupId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v11);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    byte_4C22412 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( BYTE1(Instance[3].klass) )
  {
    CacheByTypeGroup = QuestGroupMaster__GetCacheByTypeGroup(this, groupId, type, v17);
    if ( CacheByTypeGroup )
    {
      v19 = (System_Collections_Generic_List_object__o *)CacheByTypeGroup;
      if ( CacheByTypeGroup->fields._size >= 1 )
      {
        v20 = 0;
        while ( 1 )
        {
          Instance = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v19,
                                                                         v20,
                                                                         (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
          if ( !Instance )
            break;
          if ( !v14 )
            break;
          items_low = LODWORD(Instance->fields.items);
          items = v14->fields._items;
          v22 = Method_System_Collections_Generic_List_int__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v14,
              items_low,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v14->fields._size = size + 1;
            items->m_Items[size + 1] = items_low;
          }
          if ( ++v20 >= v19->fields._size )
            return v14;
        }
        goto LABEL_30;
      }
    }
  }
  else
  {
    Instance = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !Instance )
      goto LABEL_30;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              Instance,
              (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    if ( Count >= 1 )
    {
      v25 = Count;
      v26 = 0;
      while ( 1 )
      {
        Instance = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !Instance )
          break;
        Instance = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                       Instance,
                                                                       v26,
                                                                       (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
        if ( Instance && HIDWORD(Instance->fields.items) == type && LODWORD(Instance[1].klass) == groupId )
        {
          if ( !v14 )
            break;
          items_low = LODWORD(Instance->fields.items);
          v27 = v14->fields._items;
          v28 = Method_System_Collections_Generic_List_int__Add__;
          ++v14->fields._version;
          if ( !v27 )
            break;
          v29 = v14->fields._size;
          if ( (unsigned int)v29 >= v27->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v14,
              items_low,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v14->fields._size = v29 + 1;
            v27->m_Items[v29 + 1] = items_low;
          }
        }
        if ( v25 == ++v26 )
          return v14;
      }
LABEL_30:
      sub_1C3B9C0(Instance, items_low);
    }
  }
  return v14;
}


System_Int32_array *__fastcall QuestGroupMaster__GetQuestIdListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return QuestGroupMaster__GetQuestIdListByGroupId(this, eventId, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestGroupMaster__GetQuestIdListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *ListOfQuestIdByGroupId; // x0
  __int64 v8; // x1

  if ( (byte_4C22411 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&groupId);
    byte_4C22411 = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_1C3B9C0(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetQuestIdListByGroupType(
        QuestGroupMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4C22417 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__, *(_QWORD *)&type);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4C22417 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestGroupEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    if ( v24 && *(_DWORD *)(v24 + 20) == type )
    {
      if ( !v11 )
        sub_1C3B9C0(v24, v25);
      v26 = *(unsigned int *)(v24 + 16);
      items = v11->fields._items;
      v28 = Method_System_Collections_Generic_List_int__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(v24, v26);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v11,
          v26,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = size + 1;
        items->m_Items[size + 1] = v26;
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_29;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_29:
    v33 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v11;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestGroupMaster__GetQuestIdToGroupIdDict(
        QuestGroupMaster_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        int32_t type,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v22; // x21
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *GroupId; // x0
  __int64 v24; // x1
  System_Collections_Generic_Dictionary_int__int__o *v25; // x22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int size; // w8
  int32_t Item; // w23
  int32_t v30; // w0
  const MethodInfo *v31; // x3
  int32_t Count; // w0
  int32_t v33; // w23
  int32_t v34; // w24
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x25
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C22410 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__, questIdList);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v9);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__BinarySearch__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Remove__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Sort__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor___77852768, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v21);
    byte_4C22410 = 1;
  }
  memset(&i, 0, sizeof(i));
  v22 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57074972(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_366E51C *)Method_System_Collections_Generic_List_int___ctor___77852768);
  if ( !v22 )
    goto LABEL_24;
  System_Collections_Generic_List_int___Sort(
    v22,
    (const MethodInfo_367058C *)Method_System_Collections_Generic_List_int__Sort__);
  v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v25,
    (const MethodInfo_32EB708 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v22,
    (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v38;
        ;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v25,
          i.fields._current,
          0,
          (const MethodInfo_32EC0B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    v26 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v26 )
      break;
    if ( !v25 )
      sub_1C3B9C0(v26, v27);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v22->fields._size;
  if ( size > 0 )
  {
    if ( size == 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v22,
               0,
               (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
      v30 = System_Collections_Generic_List_int___get_Item(
              v22,
              0,
              (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
      GroupId = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)QuestGroupMaster__GetGroupId(
                                                                                           this,
                                                                                           v30,
                                                                                           type,
                                                                                           v31);
      if ( v25 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v25,
          Item,
          (int32_t)GroupId,
          (const MethodInfo_32EC0B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v25;
      }
    }
    else
    {
      GroupId = this->fields.list;
      if ( GroupId )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                  (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
        if ( Count < 1 )
          return v25;
        v33 = Count;
        v34 = 0;
        while ( 1 )
        {
          GroupId = this->fields.list;
          if ( !GroupId )
            break;
          v35 = System_Collections_ObjectModel_Collection_object___get_Item(
                  (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                  v34,
                  (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
          if ( !v35 )
            goto LABEL_27;
          v36 = v35;
          if ( HIDWORD(v35[1].klass) != type )
            goto LABEL_27;
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_Generic_List_int___BinarySearch_57077616(
                                                                                               v22,
                                                                                               (int32_t)v35[1].klass,
                                                                                               (const MethodInfo_366EF70 *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) != 0 )
            goto LABEL_27;
          if ( !v25 )
            break;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v25,
            (int32_t)v36[1].klass,
            (int32_t)v36[1].monitor,
            (const MethodInfo_32EC0B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          System_Collections_Generic_List_int___Remove(
            v22,
            (int32_t)v36[1].klass,
            (const MethodInfo_3670144 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( v22->fields._size >= 1 )
          {
LABEL_27:
            if ( v33 != ++v34 )
              continue;
          }
          return v25;
        }
      }
    }
LABEL_24:
    sub_1C3B9C0(GroupId, v24);
  }
  return v25;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__IsEntryEvent(QuestGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v12; // x22
  int32_t v13; // w23
  bool v14; // w29
  System_Collections_ObjectModel_Collection_T__o *v15; // x25
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4C22415 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C22415 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count >= 1 )
  {
    v12 = (UserQuestMaster_o *)MasterData_object;
    v13 = 0;
    v14 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
      if ( !list )
        break;
      v15 = list;
      if ( HIDWORD(list->fields.items) == 1 && LODWORD(list[1].klass) == eventId )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
          byte_4C1C955 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( !v12 )
          break;
        EntityFromId = UserQuestMaster__getEntityFromId(
                         v12,
                         (int64_t)list[7].fields.items[4].klass,
                         (int32_t)v15->fields.items,
                         0LL);
        if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
          return v14;
      }
      v14 = ++v13 < Count;
      if ( Count == v13 )
        return v14;
    }
LABEL_24:
    sub_1C3B9C0(list, *(_QWORD *)&eventId);
  }
  return 0;
}


void __fastcall QuestGroupMaster__OnListChangedImplementation(
        QuestGroupMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__TryGetEntity(
        QuestGroupMaster_o *this,
        QuestGroupEntity_o **entity,
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2240D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__, entity);
    byte_4C2240D = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2241B & 1) == 0 )
  {
    sub_1C3B764(&QuestGroupMaster___c_TypeInfo, v1);
    byte_4C2241B = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(QuestGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestGroupMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)QuestGroupMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall QuestGroupMaster___c___ctor(QuestGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestGroupMaster___c___GetClearedGroupOpenQuestListByEventId_b__10_0(
        QuestGroupMaster___c_o *this,
        QuestGroupEntity_o *x,
        QuestGroupEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C3B9C0(this, x);
  return x->fields.groupId - y->fields.groupId;
}