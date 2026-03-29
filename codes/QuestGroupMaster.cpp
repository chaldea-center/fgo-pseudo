void QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3100D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
    byte_4D3100D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    77,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
}


void QuestGroupMaster__CreateCache(QuestGroupMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____o **p_type_groupCache; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w21
  System_Collections_ObjectModel_Collection_T__o *v14; // x22
  System_Collections_Generic_Dictionary_int__object__o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x23
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  Il2CppClass **v26; // x8
  System_Collections_Generic_List_object__o *v27; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D31018 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity_____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
    byte_4D31018 = 1;
  }
  v27 = 0;
  value = 0;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity_____ctor__);
    this->fields.type_groupCache = (struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____o *)v3;
    p_type_groupCache = &this->fields.type_groupCache;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.type_groupCache, (int32_t)v3, v5, v6, v7, v8, v9, v10);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_23:
      sub_1C93D2C(list, v11);
    v13 = 0;
    while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v13,
                                                                   (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
        if ( list )
        {
          v14 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_groupCache;
          if ( *p_type_groupCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    HIDWORD(v14->fields.items),
                    &value,
                    (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__) )
            {
              v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TypeInfo);
              System_Collections_Generic_Dictionary_int__object____ctor(
                v15,
                (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity____ctor__);
              value = (Il2CppObject *)v15;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_groupCache;
              if ( !*p_type_groupCache )
                goto LABEL_23;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                HIDWORD(v14->fields.items),
                (Il2CppObject *)v15,
                (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)value,
                      (int32_t)v14[1].klass,
                      (Il2CppObject **)&v27,
                      (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__) )
              {
                v22 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v22,
                  (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
                list = (System_Collections_ObjectModel_Collection_T__o *)value;
                v27 = v22;
                if ( !value )
                  goto LABEL_23;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)value,
                  (int32_t)v14[1].klass,
                  (Il2CppObject *)v22,
                  (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)v27;
              if ( v27 )
              {
                items = v27->fields._items;
                v24 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
                ++v27->fields._version;
                if ( items )
                {
                  klass_low = SLODWORD(list[1].klass);
                  if ( (unsigned int)klass_low >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)list,
                      (Il2CppObject *)v14,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v26 = &items->obj.klass + klass_low;
                    LODWORD(list[1].klass) = klass_low + 1;
                    v26[4] = (Il2CppClass *)v14;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v14, v16, v17, v18, v19, v20, v21);
                  }
                  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                  ++v13;
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


void QuestGroupMaster__DeleteCache(QuestGroupMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____o **p_type_groupCache; // x19

  this->fields.type_groupCache = 0;
  p_type_groupCache = &this->fields.type_groupCache;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.type_groupCache, 0, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_type_groupCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestGroupEntity__o *QuestGroupMaster__GetCacheByTypeGroup(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *type_groupCache; // x0
  Il2CppObject *v10; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D31019 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__);
    byte_4D31019 = 1;
  }
  value = 0;
  v10 = 0;
  QuestGroupMaster__CreateCache(this, *(const MethodInfo **)&groupId);
  type_groupCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.type_groupCache;
  if ( !type_groupCache )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          type_groupCache,
          type,
          &value,
          (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__) )
    return 0;
  type_groupCache = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_11:
    sub_1C93D2C(type_groupCache, v7);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)value,
         groupId,
         &v10,
         (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_QuestGroupEntity__o *)v10;
  }
  else
  {
    return 0;
  }
}


System_Collections_Generic_List_int__o *QuestGroupMaster__GetClearedGroupOpenQuestListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  System_Collections_Generic_List_object__o *v6; // x20
  System_Collections_Generic_List_int__o *v7; // x21
  System_Collections_Generic_List_int__o *v8; // x24
  __int64 klass_low; // x1
  void *list; // x0
  int v11; // w25
  int32_t i; // w26
  int v13; // w8
  Il2CppObject *v14; // x27
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  char *v24; // x8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  __int64 v29; // x8
  System_Collections_Generic_List_int__o *v30; // x0
  struct System_Int32_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  int v34; // w8
  int v35; // w8
  System_Comparison_T__o *v36; // x22
  Il2CppObject *v37; // x23
  struct QuestGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int v45; // w26
  char v46; // w23
  int32_t v47; // w22
  int v48; // w28
  int v49; // w25
  int32_t v50; // w24
  int v51; // w8
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10

  if ( (byte_4D31013 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_QuestGroupEntity__TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
    sub_1C93AD4(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__);
    sub_1C93AD4(&QuestGroupMaster___c_TypeInfo);
    byte_4D31013 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_65;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v11 = (int)list;
    for ( i = 0; v11 != i; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_65;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               i,
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
      if ( !list )
        continue;
      v13 = *((_DWORD *)list + 5);
      v14 = (Il2CppObject *)list;
      if ( v13 == 1 )
      {
        if ( *((_DWORD *)list + 6) == eventId )
        {
          if ( !v8 )
            goto LABEL_65;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           v8,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_19:
            if ( !v6 )
              goto LABEL_65;
            items = v6->fields._items;
            v26 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_65;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                v14,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v14;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
            }
            continue;
          }
          if ( !v7 )
            goto LABEL_65;
          klass_low = LODWORD(v14[1].klass);
          v31 = v7->fields._items;
          v32 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !v31 )
            goto LABEL_65;
          v33 = v7->fields._size;
          if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
          {
            v29 = v32[4];
            v30 = v7;
            goto LABEL_31;
          }
          v24 = (char *)v31 + 4 * v33;
          v7->fields._size = v33 + 1;
          goto LABEL_29;
        }
      }
      else if ( v13 == 2 )
      {
        if ( !v7 )
          goto LABEL_65;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         v7,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 )
          goto LABEL_19;
        if ( !v8 )
          goto LABEL_65;
        klass_low = LODWORD(v14[1].klass);
        v21 = v8->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v21 )
          goto LABEL_65;
        v23 = v8->fields._size;
        if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
        {
          v29 = v22[4];
          v30 = v8;
LABEL_31:
          System_Collections_Generic_List_int___AddWithResize(
            v30,
            klass_low,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v29 + 192) + 112LL));
          continue;
        }
        v24 = (char *)v21 + 4 * v23;
        v8->fields._size = v23 + 1;
LABEL_29:
        *((_DWORD *)v24 + 8) = klass_low;
      }
    }
  }
  if ( !v7 )
    goto LABEL_65;
  v34 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v34;
  if ( !v8 )
    goto LABEL_65;
  v35 = v8->fields._version + 1;
  v8->fields._size = 0;
  v8->fields._version = v35;
  list = QuestGroupMaster___c_TypeInfo;
  if ( !QuestGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestGroupMaster___c_TypeInfo);
    list = QuestGroupMaster___c_TypeInfo;
  }
  v36 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v36 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = QuestGroupMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)**((_QWORD **)list + 23);
    v36 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_QuestGroupEntity__TypeInfo);
    System_Comparison_object____ctor(
      v36,
      v37,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      0);
    static_fields = QuestGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)v36;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0, (int32_t)v36, v39, v40, v41, v42, v43, v44);
  }
  if ( !v6 )
    goto LABEL_65;
  System_Collections_Generic_List_object___Sort_59225184(
    v6,
    v36,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  v45 = v6->fields._size;
  if ( v45 < 1 )
    return v5;
  v46 = 0;
  v47 = 0;
  v48 = -1;
  do
  {
    list = System_Collections_Generic_List_object___get_Item(
             v6,
             v47,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_65;
    v49 = *((_DWORD *)list + 6);
    list = System_Collections_Generic_List_object___get_Item(
             v6,
             v47,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_65;
    v50 = *((_DWORD *)list + 4);
    if ( v49 == v48 )
    {
      if ( (v46 & 1) != 0 )
      {
        v46 = 1;
        goto LABEL_56;
      }
    }
    else
    {
      if ( (v46 & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_65;
        System_Collections_Generic_List_int___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v48 = v49;
      v51 = v7->fields._version + 1;
      v7->fields._size = 0;
      v7->fields._version = v51;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    list = (void *)CondType__IsQuestClear_41038904(v50, -1, 0, 0);
    v46 = (char)list;
LABEL_56:
    v52 = v7->fields._items;
    v53 = Method_System_Collections_Generic_List_int__Add__;
    ++v7->fields._version;
    if ( !v52 )
      goto LABEL_65;
    v54 = v7->fields._size;
    if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        v50,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = v54 + 1;
      v52->m_Items[v54] = v50;
    }
    ++v47;
  }
  while ( v45 != v47 );
  if ( (v46 & 1) != 0 )
  {
    if ( v5 )
    {
      System_Collections_Generic_List_int___AddRange(
        v5,
        (System_Collections_Generic_IEnumerable_T__o *)v7,
        (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
      return v5;
    }
LABEL_65:
    sub_1C93D2C(list, klass_low);
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
QuestGroupEntity_o *QuestGroupMaster__GetEntity(
        QuestGroupMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D3100B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
    byte_4D3100B = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_34681D4 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestGroupEntity__o *QuestGroupMaster__GetEntityListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4D31012 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
    byte_4D31012 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
      if ( list )
      {
        v8 = list;
        if ( HIDWORD(list->fields.items) == type && LODWORD(list[1].klass) == groupId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v20 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v7;
    }
LABEL_17:
    sub_1C93D2C(list, v8);
  }
  return (System_Collections_Generic_List_QuestGroupEntity__o *)v7;
}


int32_t QuestGroupMaster__GetEventId(QuestGroupMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return QuestGroupMaster__GetGroupId(this, questId, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestGroupMaster__GetEventTowerQuestId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        int32_t tower,
        int32_t floor,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  System_Collections_ObjectModel_Collection_T__o *v13; // x25
  int v14; // w28
  int v15; // w29
  int32_t i; // w26
  int items_high; // w8

  if ( (byte_4D31015 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    byte_4D31015 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_23:
    sub_1C93D2C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_23;
    v13 = list;
    if ( HIDWORD(list->fields.items) == 9 && LODWORD(list[1].klass) == floor )
    {
      v14 = 0;
      v15 = 0;
      for ( i = 0; i != v11; ++i )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_23;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   i,
                                                                   (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
        if ( !list )
          goto LABEL_23;
        if ( LODWORD(list->fields.items) == LODWORD(v13->fields.items) )
        {
          items_high = HIDWORD(list->fields.items);
          if ( items_high == 8 )
          {
            v15 |= LODWORD(list[1].klass) == tower;
          }
          else if ( items_high == 1 )
          {
            v14 |= LODWORD(list[1].klass) == eventId;
          }
        }
      }
      if ( (v15 & v14 & 1) != 0 )
        return (int32_t)v13->fields.items;
    }
    if ( ++v12 == v11 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestGroupMaster__GetGroupId(QuestGroupMaster_o *this, int32_t questId, int32_t type, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4D3100E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    byte_4D3100E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C93D2C(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].klass) == questId && HIDWORD(Item[1].klass) == type )
        return (int32_t)Item[1].monitor;
    }
    if ( v9 == ++v10 )
      return 0;
  }
}


System_Collections_Generic_List_int__o *QuestGroupMaster__GetInterludeQuestIdList(
        QuestGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  unsigned int *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4D31017 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D31017 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestGroupEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo, 0);
    }
    v18 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C93D2C(0, v19);
    v20 = v18[4];
    if ( (_DWORD)v20 != questId && v18[5] == 13 && v18[6] == questId )
    {
      if ( !v5 )
        sub_1C93D2C(v18, v20);
      items = v5->fields._items;
      v22 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C93D2C(v18, v20);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          v20,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size] = v20;
      }
    }
  }
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_31;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_31:
    v27 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v5;
}


System_Collections_Generic_List_int__o *QuestGroupMaster__GetListOfQuestIdByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x19
  System_Collections_ObjectModel_Collection_T__o *Instance; // x0
  __int64 items_low; // x1
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_QuestGroupEntity__o *CacheByTypeGroup; // x0
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  int32_t Count; // w0
  int32_t v18; // w23
  int32_t v19; // w24
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10

  if ( (byte_4D31011 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4D31011 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( BYTE1(Instance[3].klass) )
  {
    CacheByTypeGroup = QuestGroupMaster__GetCacheByTypeGroup(this, groupId, type, v10);
    if ( CacheByTypeGroup )
    {
      v12 = (System_Collections_Generic_List_object__o *)CacheByTypeGroup;
      if ( CacheByTypeGroup->fields._size >= 1 )
      {
        v13 = 0;
        while ( 1 )
        {
          Instance = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v12,
                                                                         v13,
                                                                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
          if ( !Instance )
            break;
          if ( !v7 )
            break;
          items_low = LODWORD(Instance->fields.items);
          items = v7->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              items_low,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v7->fields._size = size + 1;
            items->m_Items[size] = items_low;
          }
          if ( ++v13 >= v12->fields._size )
            return v7;
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
              (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    if ( Count >= 1 )
    {
      v18 = Count;
      v19 = 0;
      while ( 1 )
      {
        Instance = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !Instance )
          break;
        Instance = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                       Instance,
                                                                       v19,
                                                                       (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
        if ( Instance && HIDWORD(Instance->fields.items) == type && LODWORD(Instance[1].klass) == groupId )
        {
          if ( !v7 )
            break;
          items_low = LODWORD(Instance->fields.items);
          v20 = v7->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !v20 )
            break;
          v22 = v7->fields._size;
          if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              items_low,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v7->fields._size = v22 + 1;
            v20->m_Items[v22] = items_low;
          }
        }
        if ( v18 == ++v19 )
          return v7;
      }
LABEL_30:
      sub_1C93D2C(Instance, items_low);
    }
  }
  return v7;
}


System_Int32_array *QuestGroupMaster__GetQuestIdListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return QuestGroupMaster__GetQuestIdListByGroupId(this, eventId, 1, v3);
}


System_Int32_array *QuestGroupMaster__GetQuestIdListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *ListOfQuestIdByGroupId; // x0
  __int64 v8; // x1

  if ( (byte_4D31010 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4D31010 = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_1C93D2C(0, v8);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *QuestGroupMaster__GetQuestIdListByGroupType(
        QuestGroupMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4D31016 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D31016 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestGroupEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    if ( v18 && *(_DWORD *)(v18 + 20) == type )
    {
      if ( !v5 )
        sub_1C93D2C(v18, v19);
      v20 = *(unsigned int *)(v18 + 16);
      items = v5->fields._items;
      v22 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C93D2C(v18, v20);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          v20,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size] = v20;
      }
    }
  }
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_29:
    v27 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v5;
}


System_Collections_Generic_Dictionary_int__int__o *QuestGroupMaster__GetQuestIdToGroupIdDict(
        QuestGroupMaster_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *GroupId; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__int__o *v10; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int size; // w8
  int32_t Item; // w23
  int32_t v15; // w0
  const MethodInfo *v16; // x3
  int32_t Count; // w0
  int32_t v18; // w23
  int32_t v19; // w24
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x25
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D3100F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__BinarySearch__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D3100F = 1;
  }
  memset(&i, 0, sizeof(i));
  v7 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_59097676(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
  if ( !v7 )
    goto LABEL_24;
  System_Collections_Generic_List_int___Sort(
    v7,
    (const MethodInfo_385E2BC *)Method_System_Collections_Generic_List_int__Sort__);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    v7,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v23;
        ;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v10,
          i.fields._current,
          0,
          (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    v11 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v11 )
      break;
    if ( !v10 )
      sub_1C93D2C(v11, v12);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v7->fields._size;
  if ( size > 0 )
  {
    if ( size == 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v7,
               0,
               (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
      v15 = System_Collections_Generic_List_int___get_Item(
              v7,
              0,
              (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
      GroupId = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)QuestGroupMaster__GetGroupId(
                                                                                           this,
                                                                                           v15,
                                                                                           type,
                                                                                           v16);
      if ( v10 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v10,
          Item,
          (int32_t)GroupId,
          (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v10;
      }
    }
    else
    {
      GroupId = this->fields.list;
      if ( GroupId )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                  (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
        if ( Count < 1 )
          return v10;
        v18 = Count;
        v19 = 0;
        while ( 1 )
        {
          GroupId = this->fields.list;
          if ( !GroupId )
            break;
          v20 = System_Collections_ObjectModel_Collection_object___get_Item(
                  (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                  v19,
                  (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
          if ( !v20 )
            goto LABEL_27;
          v21 = v20;
          if ( HIDWORD(v20[1].klass) != type )
            goto LABEL_27;
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_Generic_List_int___BinarySearch_59100320(
                                                                                               v7,
                                                                                               (int32_t)v20[1].klass,
                                                                                               (const MethodInfo_385CCA0 *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) != 0 )
            goto LABEL_27;
          if ( !v10 )
            break;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v10,
            (int32_t)v21[1].klass,
            (int32_t)v21[1].monitor,
            (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          System_Collections_Generic_List_int___Remove(
            v7,
            (int32_t)v21[1].klass,
            (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( v7->fields._size >= 1 )
          {
LABEL_27:
            if ( v18 != ++v19 )
              continue;
          }
          return v10;
        }
      }
    }
LABEL_24:
    sub_1C93D2C(GroupId, v9);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
bool QuestGroupMaster__IsEntryEvent(QuestGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v8; // x22
  int32_t v9; // w23
  bool v10; // w29
  System_Collections_ObjectModel_Collection_T__o *v11; // x25
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4D31014 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31014 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count >= 1 )
  {
    v8 = (UserQuestMaster_o *)MasterData_object;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( HIDWORD(list->fields.items) == 1 && LODWORD(list[1].klass) == eventId )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2A55B )
        {
          sub_1C93AD4(&NetworkManager_TypeInfo);
          byte_4D2A55B = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        }
        if ( !v8 )
          break;
        EntityFromId = UserQuestMaster__getEntityFromId(
                         v8,
                         (int64_t)list[7].fields.items[4].klass,
                         (int32_t)v11->fields.items,
                         0);
        if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0) > 0 )
          return v10;
      }
      v10 = ++v9 < Count;
      if ( Count == v9 )
        return v10;
    }
LABEL_24:
    sub_1C93D2C(list, *(_QWORD *)&eventId);
  }
  return 0;
}


void QuestGroupMaster__OnListChangedImplementation(
        QuestGroupMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool QuestGroupMaster__TryGetEntity(
        QuestGroupMaster_o *this,
        QuestGroupEntity_o **entity,
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D3100C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
    byte_4D3100C = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
}


void QuestGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3101A & 1) == 0 )
  {
    sub_1C93AD4(&QuestGroupMaster___c_TypeInfo);
    byte_4D3101A = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(QuestGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestGroupMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)QuestGroupMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestGroupMaster___c___ctor(QuestGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestGroupMaster___c___GetClearedGroupOpenQuestListByEventId_b__10_0(
        QuestGroupMaster___c_o *this,
        QuestGroupEntity_o *x,
        QuestGroupEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C93D2C(this, x);
  return x->fields.groupId - y->fields.groupId;
}