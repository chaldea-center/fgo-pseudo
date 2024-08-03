void __fastcall CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FC210 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo, v5);
    byte_49FC210 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo,
                                                                    method,
                                                                    v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listCache, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    255,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_o *__fastcall CommandCodeSkillMaster__GetEntity(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC20E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__,
      *(_QWORD *)&commandCodeId);
    byte_49FC20E = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandCodeSkillMaster__TryGetEntity(
        CommandCodeSkillMaster_o *this,
        CommandCodeSkillEntity_o **entity,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FC20F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__, entity);
    byte_49FC20F = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeActiveSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  const MethodInfo *v10; // x3
  int v11; // w22
  _QWORD *p_image; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  __int64 v15; // x8
  unsigned int v16; // w9
  unsigned int v17; // w10
  int v18; // w11
  __int64 v19; // x12
  int v20; // w12
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_49FC217 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v8);
    byte_49FC217 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo,
                                                      *(_QWORD *)&commandCodeId,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v11 = 0;
  while ( 1 )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( v11 >= *(_DWORD *)(p_image[23] + 36LL) )
      break;
    p_image = CommandCodeSkillMaster__getEntityListFromIdNum(this, commandCodeId, ++v11, v10);
    if ( p_image )
    {
      v15 = p_image[3];
      if ( v15 )
      {
        if ( (int)v15 >= 1 )
        {
          v16 = 0;
          v17 = 0;
          v18 = 1;
          while ( 1 )
          {
            v19 = p_image[(int)v17 + 4];
            if ( !v19 )
              break;
            v20 = *(_DWORD *)(v19 + 24);
            if ( v20 > v18 )
              v16 = v17;
            ++v17;
            if ( v20 > v18 )
              v18 = v20;
            if ( (_DWORD)v15 == v17 )
              goto LABEL_19;
          }
LABEL_27:
          sub_1B64324(p_image);
        }
        v16 = 0;
LABEL_19:
        if ( v16 >= (unsigned int)v15 )
          sub_1B6432C(p_image, v13);
        if ( !v9 )
          goto LABEL_27;
        v21 = (Il2CppObject *)p_image[(int)v16 + 4];
        items = v9->fields._items;
        v23 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_27;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v21,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v21;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v21, v14, (int32_t)v10);
        }
      }
    }
  }
  if ( !v9 )
    goto LABEL_27;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w23
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FC213 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&commandCodeId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&CommandCodeSkillEntity_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v10);
    byte_49FC213 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(CommandCodeSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (CommandCodeSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == CommandCodeSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == commandCodeId )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v22 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v19;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(list);
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_19;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v15,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getEntityListFromIdNum(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        const MethodInfo *method)
{
  CommandCodeSkillMaster_o *v6; // x20
  Il2CppObject *PriorityKey; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_49FC214 & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_1B640C8(
                                         &Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__,
                                         *(_QWORD *)&commandCodeId);
    byte_49FC214 = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_1B64324(PriorityKey);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
  {
    return (CommandCodeSkillEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCodeSkillMaster__getPriorityKey(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  v8 = commandCodeId;
  if ( (byte_49FC211 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1546/*":"*/, *(_QWORD *)&commandCodeId);
    byte_49FC211 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61386656(v4, (System_String_o *)StringLiteral_1546/*":"*/, v5, 0LL);
}


void __fastcall CommandCodeSkillMaster__getSkillInfo(
        CommandCodeSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t commandCodeId,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  BalanceConfig_c *v16; // x0
  System_Int32_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int64_t v26; // x2
  const MethodInfo *v27; // x4
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x4
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v33; // x24
  unsigned int v34; // w23
  __int64 i; // x27
  CommandCodeSkillEntity_o *v36; // x0
  System_Int32_array *v37; // x8
  System_String_array *v38; // x8
  System_String_array *v39; // x10
  __int64 v40; // x10
  int v41; // w9
  System_String_array *v42; // x8
  unsigned __int64 max_length; // x9
  System_String_o *v44; // x1
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_array *v48; // x8
  unsigned __int64 v49; // x9
  System_String_o *v50; // x1
  Il2CppClass **v51; // x0
  System_Int32_array *v52; // x8
  System_String_array *v53; // x8
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_array *v56; // x8
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3

  if ( (byte_49FC216 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, idList);
    sub_1B640C8(&int___TypeInfo, v14);
    sub_1B640C8(&string___TypeInfo, v15);
    byte_49FC216 = 1;
  }
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v16->static_fields->SvtPassiveSkillListMax);
  *idList = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)v17, v18, v19);
  v20 = (System_String_array *)sub_1B64170(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v20, v21, v22);
  v23 = (System_String_array *)sub_1B64170(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v23, v24, v25);
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v26, beforeClearQuestId, v27);
  v33 = 0LL;
  v34 = 0;
  for ( i = 32LL; ; i += 8LL )
  {
    v36 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v33 >= *(int *)(v36[3].fields.endedAt + 36) )
      break;
    if ( !UseEntityList )
      goto LABEL_43;
    if ( v33 >= UseEntityList->max_length )
      goto LABEL_44;
    v36 = UseEntityList->m_Items[v33];
    v37 = *idList;
    if ( v36 )
    {
      if ( !v37 )
        goto LABEL_43;
      if ( v34 >= v37->max_length )
        goto LABEL_44;
      v37->m_Items[v34 + 1] = v36->fields.skillId;
      v38 = *titleList;
      if ( !*titleList )
        goto LABEL_43;
      v39 = *explanationList;
      if ( !*explanationList )
        goto LABEL_43;
      if ( v34 >= v38->max_length || v34 >= v39->max_length )
        goto LABEL_44;
      CommandCodeSkillEntity__getEffectExplanation(v36, &v38->m_Items[v34], &v39->m_Items[v34], 0, v31);
      if ( v33 != v34 )
        goto LABEL_32;
      goto LABEL_39;
    }
    if ( !v37 )
      goto LABEL_43;
    v40 = *(_QWORD *)&v37->max_length;
    if ( v33 >= (unsigned int)v40 )
      goto LABEL_44;
    v41 = v37->m_Items[v33 + 1];
    if ( v41 >= 1 )
    {
      if ( v33 != v34 )
      {
        if ( v34 >= (unsigned int)v40 )
          goto LABEL_44;
        v37->m_Items[v34 + 1] = v41;
        v42 = *titleList;
        if ( !*titleList )
LABEL_43:
          sub_1B64324(v36);
        max_length = v42->max_length;
        if ( v33 >= max_length || v34 >= (unsigned int)max_length )
          goto LABEL_44;
        v44 = v42->m_Items[v33];
        v45 = &v42->obj.klass + (int)v34;
        v45[4] = (Il2CppClass *)v44;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v44, v29, v30);
        v48 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        v49 = v48->max_length;
        if ( v33 >= v49 || v34 >= (unsigned int)v49 )
LABEL_44:
          sub_1B6432C(v36, v28);
        v50 = v48->m_Items[v33];
        v51 = &v48->obj.klass + (int)v34;
        v51[4] = (Il2CppClass *)v50;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v50, v46, v47);
LABEL_32:
        v52 = *idList;
        if ( !*idList )
          goto LABEL_43;
        if ( v33 >= v52->max_length )
          goto LABEL_44;
        v52->m_Items[v33 + 1] = 0;
        v53 = *titleList;
        if ( !*titleList )
          goto LABEL_43;
        if ( v33 >= v53->max_length )
          goto LABEL_44;
        v53->m_Items[v33] = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v53 + i), 0, v29, v30);
        v56 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        if ( v33 >= v56->max_length )
          goto LABEL_44;
        v56->m_Items[v33] = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v56 + i), 0, v54, v55);
      }
LABEL_39:
      ++v34;
    }
    ++v33;
  }
  if ( !v34 )
  {
    *idList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, 0, v29, v30);
    *titleList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, 0, v57, v58);
    *explanationList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, 0, v59, v60);
  }
}


CommandCodeSkillEntity_o *__fastcall CommandCodeSkillMaster__getUseEntity(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  CommandCodeSkillEntity_array *EntityListFromIdNum; // x0
  int64_t v8; // x1
  const MethodInfo *v9; // x3
  CommandCodeSkillEntity_array *v10; // x20
  unsigned int i; // w22
  Il2CppClass **v12; // x8
  CommandCodeSkillEntity_o *v13; // x21

  EntityListFromIdNum = CommandCodeSkillMaster__getEntityListFromIdNum(
                          this,
                          commandCodeId,
                          num,
                          (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v10 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v10->max_length )
        sub_1B6432C(EntityListFromIdNum, v8);
      v12 = &v10->obj.klass + i;
      v13 = (CommandCodeSkillEntity_o *)v12[4];
      if ( !v13 )
        sub_1B64324(EntityListFromIdNum);
      EntityListFromIdNum = (CommandCodeSkillEntity_array *)CommandCodeSkillEntity__isUse(
                                                              (CommandCodeSkillEntity_o *)v12[4],
                                                              v8,
                                                              beforeClearQuestId,
                                                              v9);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v13;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getUseEntityList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  BalanceConfig_c *v9; // x0
  int64_t v10; // x3
  const MethodInfo *v11; // x5
  CommandCodeSkillEntity_array *v12; // x22
  signed __int64 v13; // x24
  ServantStatusBattleListViewItem_o *i; // x23
  BalanceConfig_c *v15; // x0
  signed __int64 v16; // x25
  CommandCodeSkillEntity_o *UseEntity; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  ServantStatusBattleListViewItem_c *v21; // x24
  unsigned __int64 v22; // x25
  __int64 v24; // x0

  if ( (byte_49FC215 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1B640C8(&CommandCodeSkillEntity___TypeInfo, v8);
    byte_49FC215 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v12 = (CommandCodeSkillEntity_array *)sub_1B64170(
                                          CommandCodeSkillEntity___TypeInfo,
                                          (unsigned int)v9->static_fields->SvtPassiveSkillListMax);
  v13 = 0LL;
  for ( i = (ServantStatusBattleListViewItem_o *)v12->m_Items; ; i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    if ( v13 >= v15->static_fields->SvtPassiveSkillListMax )
      break;
    v16 = v13 + 1;
    UseEntity = CommandCodeSkillMaster__getUseEntity(this, commandCodeId, (int)v13 + 1, v10, beforeClearQuestId, v11);
    if ( !v12 )
      sub_1B64324(UseEntity);
    v21 = (ServantStatusBattleListViewItem_c *)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_1B64204(UseEntity, v12->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v24 = sub_1B64348(0LL);
        sub_1B641F0(v24, 0LL);
      }
    }
    v22 = v16 - 1;
    if ( v22 >= v12->max_length )
      sub_1B6432C(UseEntity, v18);
    i->klass = v21;
    sub_1B6406C(i, (int32_t)v21, v19, v20);
    v13 = v22 + 1;
  }
  return v12;
}


bool __fastcall CommandCodeSkillMaster__preProcess(CommandCodeSkillMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_Dictionary_object__object__o *v32; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *PriorityKey; // x0
  Il2CppObject *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  int32_t v50; // w3
  System_Collections_Generic_List_object__o *v51; // x24
  System_Collections_Generic_List_object__o *v52; // x0
  Il2CppClass *v53; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  void **v56; // x8
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  _BOOL8 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  CommandCodeSkillMaster___c_c *v64; // x8
  Il2CppObject *v65; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v68; // x24
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_Collections_Generic_Dictionary_object__object__o *v72; // x23
  System_Object_array *v73; // x0
  int32_t monitor; // w2
  int v75; // w8
  CommandCodeSkillMaster_o *v77; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v78; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v79; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_49FC212 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&CommandCodeSkillEntity_TypeInfo, v3);
    sub_1B640C8(&System_Comparison_CommandCodeSkillEntity__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo, v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__,
      v15);
    sub_1B640C8(&System_IDisposable_TypeInfo, v16);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v25);
    sub_1B640C8(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v26);
    sub_1B640C8(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, v27);
    sub_1B640C8(&CommandCodeSkillMaster___c_TypeInfo, v28);
    byte_49FC212 = 1;
  }
  value = 0LL;
  memset(&v79, 0, sizeof(v79));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v32 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo,
                                                                     v30,
                                                                     v31);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v32,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v77 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        p_offset += 4;
        if ( !v35 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_17;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_17:
      v41 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
            Enumerator,
            *(_QWORD *)(v41 + 8));
    v44 = (Il2CppObject *)v42;
    if ( !v42 )
      sub_1B64324(0LL);
    methodPtr_low = LOBYTE(CommandCodeSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 304LL) < (unsigned int)methodPtr_low
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * methodPtr_low - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      sub_1B645E4(v42);
LABEL_51:
      sub_1B64324(v52);
    }
    PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(
                                    (CommandCodeSkillMaster_o *)v42,
                                    *(_DWORD *)(v42 + 16),
                                    *(_DWORD *)(v42 + 20),
                                    v43);
    if ( !v32 )
      sub_1B64324(PriorityKey);
    v47 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v32,
            PriorityKey,
            &value,
            (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v51 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo,
                                                           v48,
                                                           v49);
      System_Collections_Generic_List_object____ctor(
        v51,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (Il2CppObject *)v51;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v32,
        v47,
        (Il2CppObject *)v51,
        (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    v52 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v53 = value[1].klass;
    v54 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v53 )
      sub_1B64324(v52);
    size = v52->fields._size;
    if ( (unsigned int)size >= LODWORD(v53->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v52,
        v44,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &v53->_1.image + size;
      v52->fields._size = size + 1;
      v56[4] = v44;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v44, v49, v50);
    }
  }
  v57 = Enumerator->klass;
  v58 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_34;
    }
    v60 = (__int64)&v57->vtable[*v59].method;
  }
  else
  {
LABEL_34:
    v60 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v60 + 8));
  if ( !v32 )
LABEL_57:
    sub_1B64324(listCache);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v78,
    v32,
    (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v79 = v78;
  while ( 1 )
  {
    v61 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v79,
            (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    if ( !v61 )
      break;
    v64 = CommandCodeSkillMaster___c_TypeInfo;
    key = v79.fields._current.fields.key;
    v65 = v79.fields._current.fields.value;
    if ( !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo);
      v64 = CommandCodeSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v64->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v64 = CommandCodeSkillMaster___c_TypeInfo;
      }
      v68 = (Il2CppObject *)v64->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_CommandCodeSkillEntity__TypeInfo, v62, v63);
      System_Comparison_object____ctor(_9__5_0, v68, Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, 0LL);
      static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v70, v71);
    }
    if ( !v65 )
      sub_1B64324(v61);
    System_Collections_Generic_List_object___Sort_55243320(
      (System_Collections_Generic_List_object__o *)v65,
      _9__5_0,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v72 = (System_Collections_Generic_Dictionary_object__object__o *)v77->fields.listCache;
    v73 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v65,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v72 )
      sub_1B64324(v73);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v72,
      key,
      &v73->obj,
      (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    monitor = (int32_t)v65[1].monitor;
    v75 = HIDWORD(v65[1].monitor) + 1;
    LODWORD(v65[1].monitor) = 0;
    HIDWORD(v65[1].monitor) = v75;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v65[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v79,
    (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v32,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void __fastcall CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC218 & 1) == 0 )
  {
    sub_1B640C8(&CommandCodeSkillMaster___c_TypeInfo, v1);
    byte_49FC218 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CommandCodeSkillMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CommandCodeSkillMaster___c_TypeInfo->static_fields->__9 = (struct CommandCodeSkillMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CommandCodeSkillMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall CommandCodeSkillMaster___c___ctor(CommandCodeSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CommandCodeSkillMaster___c___preProcess_b__5_0(
        CommandCodeSkillMaster___c_o *this,
        CommandCodeSkillEntity_o *a,
        CommandCodeSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}