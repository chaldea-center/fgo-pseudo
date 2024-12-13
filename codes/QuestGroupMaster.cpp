void __fastcall QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37622 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__, method);
    byte_4B37622 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    73,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
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
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_int__object__o *v16; // x21
  bool *p_isDirty; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v26; // w21
  int64_t v27; // x22
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_int__object__o *v29; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_List_object__o *v36; // x23
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 klass_low; // x10
  Il2CppClass **v40; // x8
  System_Collections_Generic_List_object__o *v41; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B3762D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__, v4);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__,
      v5);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity_____ctor__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity____ctor__, v7);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____set_Item__,
      v8);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___set_Item__, v9);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TypeInfo, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v13);
    sub_1BD3458(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v14);
    sub_1BD3458(&QuestGroupEntity_TypeInfo, v15);
    byte_4B3762D = 1;
  }
  v41 = 0LL;
  value = 0LL;
  if ( *((_BYTE *)&this->fields.revision + 4) )
  {
    *((_BYTE *)&this->fields.revision + 4) = 0;
    v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v16,
      (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity_____ctor__);
    *(_QWORD *)&this->fields.isDirty = v16;
    p_isDirty = &this->fields.isDirty;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.isDirty, (int64_t)v16, v18, v19, v20, v21, v22, v23);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_25:
      sub_1BD36B4(list, v24);
    v26 = 0;
    while ( v26 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v26,
                                                                   (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v27 = (int64_t)list;
          methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestGroupEntity_TypeInfo )
          {
            list = *(System_Collections_ObjectModel_Collection_T__o **)p_isDirty;
            if ( *(_QWORD *)p_isDirty )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)list,
                      *(_DWORD *)(v27 + 20),
                      &value,
                      (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__) )
              {
                v29 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TypeInfo);
                System_Collections_Generic_Dictionary_int__object____ctor(
                  v29,
                  (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity____ctor__);
                value = (Il2CppObject *)v29;
                list = *(System_Collections_ObjectModel_Collection_T__o **)p_isDirty;
                if ( !*(_QWORD *)p_isDirty )
                  goto LABEL_25;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)list,
                  *(_DWORD *)(v27 + 20),
                  (Il2CppObject *)v29,
                  (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)value;
              if ( value )
              {
                if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                        (System_Collections_Generic_Dictionary_int__object__o *)value,
                        *(_DWORD *)(v27 + 24),
                        (Il2CppObject **)&v41,
                        (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__) )
                {
                  v36 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v36,
                    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
                  list = (System_Collections_ObjectModel_Collection_T__o *)value;
                  v41 = v36;
                  if ( !value )
                    goto LABEL_25;
                  System_Collections_Generic_Dictionary_int__object___set_Item(
                    (System_Collections_Generic_Dictionary_int__object__o *)value,
                    *(_DWORD *)(v27 + 24),
                    (Il2CppObject *)v36,
                    (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___set_Item__);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)v41;
                if ( v41 )
                {
                  items = v41->fields._items;
                  v38 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
                  ++v41->fields._version;
                  if ( items )
                  {
                    klass_low = SLODWORD(list[1].klass);
                    if ( (unsigned int)klass_low >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)list,
                        (Il2CppObject *)v27,
                        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v40 = &items->obj.klass + klass_low;
                      LODWORD(list[1].klass) = klass_low + 1;
                      v40[4] = (Il2CppClass *)v27;
                      sub_1BD33FC((PartyOrganizationUtility_o *)(v40 + 4), v27, v30, v31, v32, v33, v34, v35);
                    }
                    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                    ++v26;
                    if ( list )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_25;
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
  bool *p_isDirty; // x19

  *(_QWORD *)&this->fields.isDirty = 0LL;
  p_isDirty = &this->fields.isDirty;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.isDirty, 0LL, v2, v3, v4, v5, v6, v7);
  *(p_isDirty - 4) = 1;
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
  Il2CppObject *v9; // x0
  Il2CppObject *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B3762E & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__,
      *(_QWORD *)&groupId);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__,
      v7);
    byte_4B3762E = 1;
  }
  value = 0LL;
  v11 = 0LL;
  QuestGroupMaster__CreateCache(this, *(const MethodInfo **)&groupId);
  v9 = *(Il2CppObject **)&this->fields.isDirty;
  if ( !v9 )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v9,
          type,
          &value,
          (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__) )
    return 0LL;
  v9 = value;
  if ( !value )
LABEL_11:
    sub_1BD36B4(v9, v8);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)value,
         groupId,
         &v11,
         (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__) )
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
  __int64 v22; // x1
  System_Collections_Generic_List_int__o *v23; // x19
  System_Collections_Generic_List_object__o *v24; // x20
  System_Collections_Generic_List_int__o *v25; // x21
  System_Collections_Generic_List_int__o *v26; // x24
  __int64 v27; // x1
  int64_t list; // x0
  int v29; // w25
  int32_t i; // w26
  int64_t v31; // x27
  __int64 methodPtr_low; // x10
  int v33; // w8
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Int32_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  char *v43; // x8
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x8
  System_Collections_Generic_List_int__o *v49; // x0
  struct System_Int32_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  int v53; // w8
  int v54; // w8
  System_Comparison_T__o *v55; // x22
  Il2CppObject *v56; // x23
  struct QuestGroupMaster___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int v64; // w26
  char v65; // w23
  int32_t v66; // w22
  int v67; // w28
  int v68; // w25
  int32_t v69; // w24
  int v70; // w8
  struct System_Int32_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10

  if ( (byte_4B37628 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_QuestGroupEntity__TypeInfo, v6);
    sub_1BD3458(&CondType_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Remove__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v17);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1BD3458(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v19);
    sub_1BD3458(&QuestGroupEntity_TypeInfo, v20);
    sub_1BD3458(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__, v21);
    sub_1BD3458(&QuestGroupMaster___c_TypeInfo, v22);
    byte_4B37628 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v25 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  v26 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_68;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v29 = list;
    for ( i = 0; v29 != i; ++i )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_68;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        i,
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        continue;
      v31 = list;
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
      {
        continue;
      }
      v33 = *(_DWORD *)(list + 20);
      if ( v33 == 1 )
      {
        if ( *(_DWORD *)(list + 24) == eventId )
        {
          if ( !v26 )
            goto LABEL_68;
          list = System_Collections_Generic_List_int___Remove(
                   v26,
                   *(_DWORD *)(list + 16),
                   (const MethodInfo_35A5268 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( (list & 1) != 0 )
          {
LABEL_23:
            if ( !v24 )
              goto LABEL_68;
            items = v24->fields._items;
            v45 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
            ++v24->fields._version;
            if ( !items )
              goto LABEL_68;
            size = v24->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v24,
                (Il2CppObject *)v31,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + size;
              v24->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v31;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v47 + 4), v31, v34, v35, v36, v37, v38, v39);
            }
            continue;
          }
          if ( !v25 )
            goto LABEL_68;
          v27 = *(unsigned int *)(v31 + 16);
          v50 = v25->fields._items;
          v51 = Method_System_Collections_Generic_List_int__Add__;
          ++v25->fields._version;
          if ( !v50 )
            goto LABEL_68;
          v52 = v25->fields._size;
          if ( (unsigned int)v52 >= v50->max_length )
          {
            v48 = v51[4];
            v49 = v25;
            goto LABEL_35;
          }
          v43 = (char *)v50 + 4 * v52;
          v25->fields._size = v52 + 1;
          goto LABEL_33;
        }
      }
      else if ( v33 == 2 )
      {
        if ( !v25 )
          goto LABEL_68;
        list = System_Collections_Generic_List_int___Remove(
                 v25,
                 *(_DWORD *)(list + 16),
                 (const MethodInfo_35A5268 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( (list & 1) != 0 )
          goto LABEL_23;
        if ( !v26 )
          goto LABEL_68;
        v27 = *(unsigned int *)(v31 + 16);
        v40 = v26->fields._items;
        v41 = Method_System_Collections_Generic_List_int__Add__;
        ++v26->fields._version;
        if ( !v40 )
          goto LABEL_68;
        v42 = v26->fields._size;
        if ( (unsigned int)v42 >= v40->max_length )
        {
          v48 = v41[4];
          v49 = v26;
LABEL_35:
          System_Collections_Generic_List_int___AddWithResize(
            v49,
            v27,
            *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v48 + 192) + 112LL));
          continue;
        }
        v43 = (char *)v40 + 4 * v42;
        v26->fields._size = v42 + 1;
LABEL_33:
        *((_DWORD *)v43 + 8) = v27;
      }
    }
  }
  if ( !v25 )
    goto LABEL_68;
  v53 = v25->fields._version + 1;
  v25->fields._size = 0;
  v25->fields._version = v53;
  if ( !v26 )
    goto LABEL_68;
  v54 = v26->fields._version + 1;
  v26->fields._size = 0;
  v26->fields._version = v54;
  list = (int64_t)QuestGroupMaster___c_TypeInfo;
  if ( !QuestGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestGroupMaster___c_TypeInfo);
    list = (int64_t)QuestGroupMaster___c_TypeInfo;
  }
  v55 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v55 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)QuestGroupMaster___c_TypeInfo;
    }
    v56 = **(Il2CppObject ***)(list + 184);
    v55 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_QuestGroupEntity__TypeInfo);
    System_Comparison_object____ctor(
      v55,
      v56,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      0LL);
    static_fields = QuestGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)v55;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__10_0, (int64_t)v55, v58, v59, v60, v61, v62, v63);
  }
  if ( !v24 )
    goto LABEL_68;
  System_Collections_Generic_List_object___Sort_56371284(
    v24,
    v55,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  v64 = v24->fields._size;
  if ( v64 < 1 )
    return v23;
  v65 = 0;
  v66 = 0;
  v67 = -1;
  do
  {
    list = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v24,
                      v66,
                      (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_68;
    v68 = *(_DWORD *)(list + 24);
    list = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v24,
                      v66,
                      (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_68;
    v69 = *(_DWORD *)(list + 16);
    if ( v68 == v67 )
    {
      if ( (v65 & 1) != 0 )
      {
        v65 = 1;
        goto LABEL_59;
      }
    }
    else
    {
      if ( (v65 & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_68;
        System_Collections_Generic_List_int___AddRange(
          v23,
          (System_Collections_Generic_IEnumerable_T__o *)v25,
          (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v67 = v68;
      v70 = v25->fields._version + 1;
      v25->fields._size = 0;
      v25->fields._version = v70;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    list = CondType__IsQuestClear_38374588(v69, -1, 0, 0LL);
    v65 = list;
LABEL_59:
    v71 = v25->fields._items;
    v72 = Method_System_Collections_Generic_List_int__Add__;
    ++v25->fields._version;
    if ( !v71 )
      goto LABEL_68;
    v73 = v25->fields._size;
    if ( (unsigned int)v73 >= v71->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v25,
        v69,
        *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v25->fields._size = v73 + 1;
      v71->m_Items[v73 + 1] = v69;
    }
    ++v66;
  }
  while ( v64 != v66 );
  if ( (v65 & 1) != 0 )
  {
    if ( v23 )
    {
      System_Collections_Generic_List_int___AddRange(
        v23,
        (System_Collections_Generic_IEnumerable_T__o *)v25,
        (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__);
      return v23;
    }
LABEL_68:
    sub_1BD36B4(list, v27);
  }
  return v23;
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

  if ( (byte_4B37620 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4B37620 = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31D2248 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  int64_t v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B37627 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v10);
    sub_1BD3458(&QuestGroupEntity_TypeInfo, v11);
    byte_4B37627 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = (int64_t)list;
        methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestGroupEntity_TypeInfo
          && HIDWORD(list->fields.items) == type
          && LODWORD(list[1].klass) == groupId )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v26 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v13;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 4), v13, v18, v19, v20, v21, v22, v23);
          }
        }
      }
      if ( v16 == ++v17 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v12;
    }
LABEL_19:
    sub_1BD36B4(list, v13);
  }
  return (System_Collections_Generic_List_QuestGroupEntity__o *)v12;
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
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  System_Collections_ObjectModel_Collection_T__o *v15; // x25
  __int64 methodPtr_low; // x10
  int v17; // w29
  int v18; // w19
  int32_t i; // w26
  __int64 v20; // x10
  int items_high; // w8
  int32_t v23; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B3762A & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BD3458(&QuestGroupEntity_TypeInfo, v10);
    byte_4B3762A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_27:
    sub_1BD36B4(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v13 = Count;
  v14 = 0;
  v23 = floor;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v15 = list;
    methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestGroupEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( HIDWORD(list->fields.items) == 9 && LODWORD(list[1].klass) == floor )
    {
      v17 = 0;
      v18 = 0;
      for ( i = 0; i != v13; ++i )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_27;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   i,
                                                                   (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_27;
        v20 = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)v20
          || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] != QuestGroupEntity_TypeInfo )
        {
          goto LABEL_27;
        }
        if ( LODWORD(list->fields.items) == LODWORD(v15->fields.items) )
        {
          items_high = HIDWORD(list->fields.items);
          if ( items_high == 8 )
          {
            v18 |= LODWORD(list[1].klass) == tower;
          }
          else if ( items_high == 1 )
          {
            v17 |= LODWORD(list[1].klass) == eventId;
          }
        }
      }
      floor = v23;
      if ( (v18 & v17 & 1) != 0 )
        return (int32_t)v15->fields.items;
    }
    if ( ++v14 == v13 )
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
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B37623 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&QuestGroupEntity_TypeInfo, v8);
    byte_4B37623 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BD36B4(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                        list,
                        v12,
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * methodPtr_low - 8) == QuestGroupEntity_TypeInfo
        && Item[4] == questId
        && Item[5] == type )
      {
        return Item[6];
      }
    }
    if ( v11 == ++v12 )
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
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  unsigned int *v25; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x9
  __int64 v28; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4B3762C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BD3458(&System_IDisposable_TypeInfo, v5);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BD3458(&QuestGroupEntity_TypeInfo, v11);
    byte_4B3762C = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BD36B4(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
    {
      sub_1BD3974(v25);
LABEL_37:
      sub_1BD36B4(v25, v26);
    }
    v28 = v25[4];
    if ( (_DWORD)v28 != questId && v25[5] == 13 && v25[6] == questId )
    {
      if ( !v12 )
        sub_1BD36B4(v25, v28);
      items = v12->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BD36B4(v25, v28);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          v28,
          *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size + 1] = v28;
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_33;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_33:
    v35 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v12;
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
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x19
  System_Collections_ObjectModel_Collection_T__o *Instance; // x0
  __int64 items_low; // x1
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_QuestGroupEntity__o *CacheByTypeGroup; // x0
  System_Collections_Generic_List_object__o *v20; // x20
  int32_t v21; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int32_t Count; // w0
  int32_t v26; // w23
  int32_t v27; // w24
  __int64 methodPtr_low; // x10
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10

  if ( (byte_4B37626 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v11);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BD3458(&QuestGroupEntity_TypeInfo, v13);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v14);
    byte_4B37626 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  if ( BYTE1(Instance[3].klass) )
  {
    CacheByTypeGroup = QuestGroupMaster__GetCacheByTypeGroup(this, groupId, type, v18);
    if ( CacheByTypeGroup )
    {
      v20 = (System_Collections_Generic_List_object__o *)CacheByTypeGroup;
      if ( CacheByTypeGroup->fields._size >= 1 )
      {
        v21 = 0;
        while ( 1 )
        {
          Instance = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v20,
                                                                         v21,
                                                                         (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
          if ( !Instance )
            break;
          if ( !v15 )
            break;
          items_low = LODWORD(Instance->fields.items);
          items = v15->fields._items;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              items_low,
              *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size + 1] = items_low;
          }
          if ( ++v21 >= v20->fields._size )
            return v15;
        }
        goto LABEL_32;
      }
    }
  }
  else
  {
    Instance = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !Instance )
      goto LABEL_32;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              Instance,
              (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v26 = Count;
      v27 = 0;
      while ( 1 )
      {
        Instance = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !Instance )
          break;
        Instance = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                       Instance,
                                                                       v27,
                                                                       (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (QuestGroupEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestGroupEntity_TypeInfo
            && HIDWORD(Instance->fields.items) == type
            && LODWORD(Instance[1].klass) == groupId )
          {
            if ( !v15 )
              break;
            items_low = LODWORD(Instance->fields.items);
            v29 = v15->fields._items;
            v30 = Method_System_Collections_Generic_List_int__Add__;
            ++v15->fields._version;
            if ( !v29 )
              break;
            v31 = v15->fields._size;
            if ( (unsigned int)v31 >= v29->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v15,
                items_low,
                *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v15->fields._size = v31 + 1;
              v29->m_Items[v31 + 1] = items_low;
            }
          }
        }
        if ( v26 == ++v27 )
          return v15;
      }
LABEL_32:
      sub_1BD36B4(Instance, items_low);
    }
  }
  return v15;
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

  if ( (byte_4B37625 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&groupId);
    byte_4B37625 = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_1BD36B4(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  unsigned int *v25; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x10
  __int64 v28; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4B3762B & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1BD3458(&System_IDisposable_TypeInfo, v5);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BD3458(&QuestGroupEntity_TypeInfo, v11);
    byte_4B3762B = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BD36B4(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) == QuestGroupEntity_TypeInfo
        && v25[5] == type )
      {
        if ( !v12 )
          sub_1BD36B4(v25, v26);
        v28 = v25[4];
        items = v12->fields._items;
        v30 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1BD36B4(v25, v28);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v28,
            *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = v28;
        }
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_31;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_31:
    v35 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v12;
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
  __int64 v22; // x1
  System_Collections_Generic_List_int__o *v23; // x21
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *GroupId; // x0
  __int64 v25; // x1
  System_Collections_Generic_Dictionary_int__int__o *v26; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int size; // w8
  int32_t Item; // w23
  int32_t v31; // w0
  const MethodInfo *v32; // x3
  int32_t Count; // w0
  int32_t v34; // w23
  int32_t v35; // w24
  int32_t *v36; // x0
  int32_t *v37; // x25
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B37624 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questIdList);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v9);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__BinarySearch__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Remove__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Sort__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor___76919736, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1BD3458(&QuestGroupEntity_TypeInfo, v22);
    byte_4B37624 = 1;
  }
  memset(&i, 0, sizeof(i));
  v23 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56243776(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_35A3640 *)Method_System_Collections_Generic_List_int___ctor___76919736);
  if ( !v23 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort(
    v23,
    (const MethodInfo_35A56B0 *)Method_System_Collections_Generic_List_int__Sort__);
  v26 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v26,
    (const MethodInfo_321B960 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v23,
    (const MethodInfo_35A4840 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v40;
        ;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v26,
          i.fields._current,
          0,
          (const MethodInfo_321C310 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    v27 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_3331D84 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v27 )
      break;
    if ( !v26 )
      sub_1BD36B4(v27, v28);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3331D80 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v23->fields._size;
  if ( size > 0 )
  {
    if ( size == 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v23,
               0,
               (const MethodInfo_35A3A7C *)Method_System_Collections_Generic_List_int__get_Item__);
      v31 = System_Collections_Generic_List_int___get_Item(
              v23,
              0,
              (const MethodInfo_35A3A7C *)Method_System_Collections_Generic_List_int__get_Item__);
      GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)QuestGroupMaster__GetGroupId(
                                                                                                  this,
                                                                                                  v31,
                                                                                                  type,
                                                                                                  v32);
      if ( v26 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v26,
          Item,
          (int32_t)GroupId,
          (const MethodInfo_321C310 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v26;
      }
    }
    else
    {
      GroupId = this->fields.list;
      if ( GroupId )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                  (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        if ( Count < 1 )
          return v26;
        v34 = Count;
        v35 = 0;
        while ( 1 )
        {
          GroupId = this->fields.list;
          if ( !GroupId )
            break;
          v36 = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                             (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                             v35,
                             (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !v36 )
            goto LABEL_29;
          v37 = v36;
          methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)methodPtr_low )
            goto LABEL_29;
          if ( *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
            goto LABEL_29;
          if ( v36[5] != type )
            goto LABEL_29;
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_Generic_List_int___BinarySearch_56246420(v23, v36[4], (const MethodInfo_35A4094 *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) != 0 )
            goto LABEL_29;
          if ( !v26 )
            break;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v26,
            v37[4],
            v37[6],
            (const MethodInfo_321C310 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          System_Collections_Generic_List_int___Remove(
            v23,
            v37[4],
            (const MethodInfo_35A5268 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( v23->fields._size >= 1 )
          {
LABEL_29:
            if ( v34 != ++v35 )
              continue;
          }
          return v26;
        }
      }
    }
LABEL_26:
    sub_1BD36B4(GroupId, v25);
  }
  return v26;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__IsEntryEvent(QuestGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v13; // x22
  int32_t v14; // w23
  bool v15; // w28
  System_Collections_ObjectModel_Collection_T__o *v16; // x25
  __int64 methodPtr_low; // x10
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4B37629 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1BD3458(&NetworkManager_TypeInfo, v7);
    sub_1BD3458(&QuestGroupEntity_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B37629 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count >= 1 )
  {
    v13 = (UserQuestMaster_o *)MasterData_object;
    v14 = 0;
    v15 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v16 = list;
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestGroupEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == 1 && LODWORD(list[1].klass) == eventId )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B31D77 )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
          byte_4B31D77 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( !v13 )
          break;
        EntityFromId = UserQuestMaster__getEntityFromId(
                         v13,
                         (int64_t)list[7].fields.items[4].klass,
                         (int32_t)v16->fields.items,
                         0LL);
        if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
          return v15;
      }
      v15 = ++v14 < Count;
      if ( Count == v14 )
        return v15;
    }
LABEL_26:
    sub_1BD36B4(list, *(_QWORD *)&eventId);
  }
  return 0;
}


void __fastcall QuestGroupMaster__OnListChangedImplementation(
        QuestGroupMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  *((_BYTE *)&this->fields.revision + 4) = 1;
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

  if ( (byte_4B37621 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__, entity);
    byte_4B37621 = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
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

  if ( (byte_4B3762F & 1) == 0 )
  {
    sub_1BD3458(&QuestGroupMaster___c_TypeInfo, v1);
    byte_4B3762F = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(QuestGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestGroupMaster___c_o *)v2;
  sub_1BD33FC(
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
    sub_1BD36B4(this, x);
  return x->fields.groupId - y->fields.groupId;
}