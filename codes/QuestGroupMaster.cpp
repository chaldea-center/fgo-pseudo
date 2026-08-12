void QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970EC5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
    byte_5970EC5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    77,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
}


void QuestGroupMaster__CreateCache(QuestGroupMaster_o *this, const MethodInfo *method)
{
  _BOOL4 isDirty; // w8
  System_Collections_Generic_Dictionary_int__object__o *v4; // x21
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____o **p_type_groupCache; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w21
  System_Collections_ObjectModel_Collection_T__o *v15; // x22
  System_Collections_Generic_Dictionary_int__object__o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x23
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 klass_low; // x10
  Il2CppClass **v27; // x8
  System_Collections_Generic_List_object__o *v28; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5970ED0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
    byte_5970ED0 = 1;
  }
  isDirty = this->fields.isDirty;
  v28 = 0;
  value = 0;
  if ( isDirty )
  {
    this->fields.isDirty = 0;
    v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v4,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity_____ctor__);
    this->fields.type_groupCache = (struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____o *)v4;
    p_type_groupCache = &this->fields.type_groupCache;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.type_groupCache,
      (int32_t)v4,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_23:
      sub_2213CDC(list, v12);
    v14 = 0;
    while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v14,
                                                                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
        if ( list )
        {
          v15 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_groupCache;
          if ( *p_type_groupCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    HIDWORD(v15->fields.items),
                    &value,
                    (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__) )
            {
              v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TypeInfo);
              System_Collections_Generic_Dictionary_int__object____ctor(
                v16,
                (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity____ctor__);
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_type_groupCache;
              value = (Il2CppObject *)v16;
              if ( !list )
                goto LABEL_23;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                HIDWORD(v15->fields.items),
                (Il2CppObject *)v16,
                (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)value,
                      (int32_t)v15[1].klass,
                      (Il2CppObject **)&v28,
                      (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__) )
              {
                v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v23,
                  (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
                list = (System_Collections_ObjectModel_Collection_T__o *)value;
                v28 = v23;
                if ( !value )
                  goto LABEL_23;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)value,
                  (int32_t)v15[1].klass,
                  (Il2CppObject *)v23,
                  (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)v28;
              if ( v28 )
              {
                items = v28->fields._items;
                v25 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
                ++v28->fields._version;
                if ( items )
                {
                  klass_low = SLODWORD(list[1].klass);
                  if ( (unsigned int)klass_low >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)list,
                      (Il2CppObject *)v15,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v27 = &items->obj.klass + klass_low;
                    LODWORD(list[1].klass) = klass_low + 1;
                    v27[4] = (Il2CppClass *)v15;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v27 + 4),
                      (int32_t)v15,
                      v17,
                      v18,
                      v19,
                      v20,
                      v21,
                      v22);
                  }
                  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                  ++v14;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____o **p_type_groupCache; // x19

  this->fields.type_groupCache = 0;
  p_type_groupCache = &this->fields.type_groupCache;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.type_groupCache, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_5970ED1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__);
    byte_5970ED1 = 1;
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
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__Dictionary_int__List_QuestGroupEntity____TryGetValue__) )
    return 0;
  type_groupCache = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_11:
    sub_2213CDC(type_groupCache, v7);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)value,
         groupId,
         &v10,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_QuestGroupEntity___TryGetValue__) )
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  char *v24; // x8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_int__o *v33; // x0
  int v34; // w8
  int v35; // w8
  struct QuestGroupMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__10_0; // x22
  Il2CppObject *v38; // x23
  struct QuestGroupMaster___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int v46; // w25
  char v47; // w23
  int32_t v48; // w22
  int v49; // w28
  int v50; // w26
  int32_t v51; // w24
  int v52; // w8
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10

  if ( (byte_5970ECB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_2213A60(&System_Comparison_QuestGroupEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
    sub_2213A60(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__);
    sub_2213A60(&QuestGroupMaster___c_TypeInfo);
    byte_5970ECB = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_65;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
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
                           (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v14;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
            }
            continue;
          }
          if ( !v7 )
            goto LABEL_65;
          v29 = v7->fields._items;
          klass_low = LODWORD(v14[1].klass);
          v30 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !v29 )
            goto LABEL_65;
          v31 = v7->fields._size;
          if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
          {
            v32 = v30[4];
            v33 = v7;
            goto LABEL_31;
          }
          v24 = (char *)v29 + 4 * v31;
          v7->fields._size = v31 + 1;
          goto LABEL_28;
        }
      }
      else if ( v13 == 2 )
      {
        if ( !v7 )
          goto LABEL_65;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         v7,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 )
          goto LABEL_19;
        if ( !v8 )
          goto LABEL_65;
        v21 = v8->fields._items;
        klass_low = LODWORD(v14[1].klass);
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v21 )
          goto LABEL_65;
        v23 = v8->fields._size;
        if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
        {
          v32 = v22[4];
          v33 = v8;
LABEL_31:
          System_Collections_Generic_List_int___AddWithResize(
            v33,
            klass_low,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v32 + 192) + 112LL));
          continue;
        }
        v24 = (char *)v21 + 4 * v23;
        v8->fields._size = v23 + 1;
LABEL_28:
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
  list = QuestGroupMaster___c_TypeInfo;
  v35 = v8->fields._version + 1;
  v8->fields._size = 0;
  v8->fields._version = v35;
  if ( !*((_DWORD *)list + 57) )
  {
    j_il2cpp_runtime_class_init_0(list, klass_low);
    list = QuestGroupMaster___c_TypeInfo;
  }
  static_fields = (struct QuestGroupMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__10_0 = (System_Comparison_T__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, klass_low);
      static_fields = QuestGroupMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_QuestGroupEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__10_0,
      v38,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      0);
    v39 = QuestGroupMaster___c_TypeInfo->static_fields;
    v39->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__10_0, (int32_t)_9__10_0, v40, v41, v42, v43, v44, v45);
  }
  if ( !v6 )
    goto LABEL_65;
  System_Collections_Generic_List_object___Sort_71849708(
    v6,
    _9__10_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  v46 = v6->fields._size;
  if ( v46 < 1 )
    return v5;
  v47 = 0;
  v48 = 0;
  v49 = -1;
  do
  {
    list = System_Collections_Generic_List_object___get_Item(
             v6,
             v48,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_65;
    v50 = *((_DWORD *)list + 6);
    list = System_Collections_Generic_List_object___get_Item(
             v6,
             v48,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_65;
    v51 = *((_DWORD *)list + 4);
    if ( v50 == v49 )
    {
      if ( (v47 & 1) != 0 )
      {
        v47 = 1;
        goto LABEL_56;
      }
    }
    else
    {
      if ( (v47 & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_65;
        System_Collections_Generic_List_int___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v49 = v50;
      v52 = v7->fields._version + 1;
      v7->fields._size = 0;
      v7->fields._version = v52;
    }
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, klass_low);
    list = (void *)CondType__IsQuestClear_47284152(v51, -1, 0, 0);
    v47 = (char)list;
LABEL_56:
    v53 = v7->fields._items;
    v54 = Method_System_Collections_Generic_List_int__Add__;
    ++v7->fields._version;
    if ( !v53 )
      goto LABEL_65;
    v55 = v7->fields._size;
    if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        v51,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = v55 + 1;
      v53->m_Items[v55] = v51;
    }
    ++v48;
  }
  while ( v46 != v48 );
  if ( (v47 & 1) != 0 )
  {
    if ( v5 )
    {
      System_Collections_Generic_List_int___AddRange(
        v5,
        (System_Collections_Generic_IEnumerable_T__o *)v7,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
      return v5;
    }
LABEL_65:
    sub_2213CDC(list, klass_low);
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

  if ( (byte_5970EC3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
    byte_5970EC3 = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3F157EC *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_5970ECA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
    byte_5970ECA = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v7;
    }
LABEL_17:
    sub_2213CDC(list, v8);
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

  if ( (byte_5970ECD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    byte_5970ECD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_23:
    sub_2213CDC(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
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
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
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
                                                                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
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

  if ( (byte_5970EC6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    byte_5970EC6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_2213CDC(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
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
             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
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
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  unsigned int *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  System_Collections_Generic_IEnumerator_T__o *v32; // [xsp+18h] [xbp-38h]

  if ( (byte_5970ECF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970ECF = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__);
  v32 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v32 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v32 )
      sub_2213CDC(v15, v16);
    v17 = v32->klass;
    v18 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestGroupEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v32, System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo, 0);
    }
    v21 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            v32,
                            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_2213CDC(0, v22);
    v23 = v21[4];
    if ( (_DWORD)v23 != questId && v21[5] == 13 && v21[6] == questId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v25 = Method_System_Collections_Generic_List_int__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v21, v23);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          v23,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size] = v23;
      }
    }
  }
  if ( v32 )
  {
    v27 = v32->klass;
    v28 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_36;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_36:
      v30 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(v32, *(_QWORD *)(v30 + 8));
  }
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

  if ( (byte_5970EC9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5970EC9 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
          if ( !Instance )
            break;
          if ( !v7 )
            break;
          items = v7->fields._items;
          items_low = LODWORD(Instance->fields.items);
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
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
              (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
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
                                                                       (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
        if ( Instance && HIDWORD(Instance->fields.items) == type && LODWORD(Instance[1].klass) == groupId )
        {
          if ( !v7 )
            break;
          v20 = v7->fields._items;
          items_low = LODWORD(Instance->fields.items);
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
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
      sub_2213CDC(Instance, items_low);
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

  if ( (byte_5970EC8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_5970EC8 = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_2213CDC(0, v8);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *QuestGroupMaster__GetQuestIdListByGroupType(
        QuestGroupMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  System_Collections_Generic_IEnumerator_T__o *v31; // [xsp+18h] [xbp-38h]

  if ( (byte_5970ECE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970ECE = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__GetEnumerator__);
  v31 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v31 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v31 )
      sub_2213CDC(v15, v16);
    v17 = v31->klass;
    v18 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestGroupEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v31, System_Collections_Generic_IEnumerator_QuestGroupEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v31,
            *(_QWORD *)(v20 + 8));
    if ( v21 && *(_DWORD *)(v21 + 20) == type )
    {
      if ( !v5
        || (items = v5->fields._items,
            v22 = *(unsigned int *)(v21 + 16),
            v24 = Method_System_Collections_Generic_List_int__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v21, v22);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          v22,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size] = v22;
      }
    }
  }
  if ( v31 )
  {
    v26 = v31->klass;
    v27 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_34;
      }
      v29 = (__int64)&v26->vtable[*v28];
    }
    else
    {
LABEL_34:
      v29 = sub_224BC3C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v31, *(_QWORD *)(v29 + 8));
  }
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
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5970EC7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__BinarySearch__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970EC7 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  if ( !v7 )
    goto LABEL_23;
  System_Collections_Generic_List_int___Sort(
    v7,
    (const MethodInfo_4468B78 *)Method_System_Collections_Generic_List_int__Sort__);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    v7,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v24,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v11 )
      break;
    if ( !v10 )
      sub_2213CDC(v11, v12);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v10,
      v24.fields._current,
      0,
      (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v7->fields._size;
  if ( size > 0 )
  {
    if ( size == 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v7,
               0,
               (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      v15 = System_Collections_Generic_List_int___get_Item(
              v7,
              0,
              (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
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
          (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v10;
      }
LABEL_23:
      sub_2213CDC(GroupId, v9);
    }
    GroupId = this->fields.list;
    if ( !GroupId )
      goto LABEL_23;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)GroupId,
              (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    if ( Count < 1 )
      return v10;
    v18 = Count;
    GroupId = this->fields.list;
    if ( !GroupId )
      goto LABEL_23;
    v19 = 0;
    while ( 1 )
    {
      v20 = System_Collections_ObjectModel_Collection_object___get_Item(
              (System_Collections_ObjectModel_Collection_T__o *)GroupId,
              v19,
              (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
      if ( v20 )
      {
        v21 = v20;
        if ( HIDWORD(v20[1].klass) == type )
        {
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_Generic_List_int___BinarySearch_71726492(
                                                                                               v7,
                                                                                               (int32_t)v20[1].klass,
                                                                                               (const MethodInfo_446759C *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) == 0 )
          {
            if ( !v10 )
              goto LABEL_23;
            System_Collections_Generic_Dictionary_int__int___set_Item(
              v10,
              (int32_t)v21[1].klass,
              (int32_t)v21[1].monitor,
              (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
            System_Collections_Generic_List_int___Remove(
              v7,
              (int32_t)v21[1].klass,
              (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
            if ( v7->fields._size < 1 )
              break;
          }
        }
      }
      if ( ++v19 >= v18 )
        break;
      GroupId = this->fields.list;
      if ( !GroupId )
        goto LABEL_23;
    }
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

  if ( (byte_5970ECC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970ECC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_QuestGroupEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( HIDWORD(list->fields.items) == 1 && LODWORD(list[1].klass) == eventId )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
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
    sub_2213CDC(list, *(_QWORD *)&eventId);
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

  if ( (byte_5970EC4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
    byte_5970EC4 = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
}


void QuestGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970ED2 & 1) == 0 )
  {
    sub_2213A60(&QuestGroupMaster___c_TypeInfo);
    byte_5970ED2 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestGroupMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestGroupMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, x);
  return x->fields.groupId - y->fields.groupId;
}