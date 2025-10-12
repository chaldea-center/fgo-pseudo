void CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C377A0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
    byte_4C377A0 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    261,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_o *CommandCodeSkillMaster__GetEntity(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C3779E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
    byte_4C3779E = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_339B2F0 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool CommandCodeSkillMaster__TryGetEntity(
        CommandCodeSkillMaster_o *this,
        CommandCodeSkillEntity_o **entity,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C3779F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
    byte_4C3779F = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
}


CommandCodeSkillEntity_array *CommandCodeSkillMaster__getCommandCodeActiveSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  const MethodInfo *v6; // x3
  int v7; // w22
  _QWORD *p_image; // x0
  int32_t v9; // w2
  __int64 v10; // x8
  unsigned int v11; // w9
  unsigned int v12; // w10
  int v13; // w11
  __int64 v14; // x12
  int v15; // w12
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C377A7 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    byte_4C377A7 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v7 = 0;
  while ( 1 )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( v7 >= *(_DWORD *)(p_image[23] + 44LL) )
      break;
    p_image = CommandCodeSkillMaster__getEntityListFromIdNum(this, commandCodeId, ++v7, v6);
    if ( p_image )
    {
      v10 = p_image[3];
      if ( v10 )
      {
        if ( (int)v10 >= 1 )
        {
          v11 = 0;
          v12 = 0;
          v13 = 1;
          while ( 1 )
          {
            v14 = p_image[(int)v12 + 4];
            if ( !v14 )
              break;
            v15 = *(_DWORD *)(v14 + 24);
            if ( v15 > v13 )
              v11 = v12;
            ++v12;
            if ( v15 > v13 )
              v13 = v15;
            if ( (_DWORD)v10 == v12 )
              goto LABEL_19;
          }
LABEL_27:
          sub_1C32E7C(p_image);
        }
        v11 = 0;
LABEL_19:
        if ( v11 >= (unsigned int)v10 )
          sub_1C32E84(p_image);
        if ( !v5 )
          goto LABEL_27;
        v16 = (Il2CppObject *)p_image[(int)v11 + 4];
        items = v5->fields._items;
        v18 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_27;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v16,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v16;
          sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v16, v9, v6);
        }
      }
    }
  }
  if ( !v5 )
    goto LABEL_27;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


CommandCodeSkillEntity_array *CommandCodeSkillMaster__getCommandCodeSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C377A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    byte_4C377A3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( LODWORD(list->fields.items) == commandCodeId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v11;
            sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C32E7C(list);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


CommandCodeSkillEntity_array *CommandCodeSkillMaster__getEntityListFromIdNum(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        const MethodInfo *method)
{
  CommandCodeSkillMaster_o *v6; // x20
  Il2CppObject *PriorityKey; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4C377A4 & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__);
    byte_4C377A4 = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_1C32E7C(PriorityKey);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
  {
    return (CommandCodeSkillEntity_array *)value;
  }
  else
  {
    return 0;
  }
}


System_String_o *CommandCodeSkillMaster__getPriorityKey(
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
  if ( (byte_4C377A1 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C377A1 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_63556792(v4, (System_String_o *)StringLiteral_1457/*":"*/, v5, 0);
}


void CommandCodeSkillMaster__getSkillInfo(
        CommandCodeSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t commandCodeId,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  BalanceConfig_c *v14; // x0
  System_Int32_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int64_t v24; // x2
  const MethodInfo *v25; // x4
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x4
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v30; // x24
  unsigned int v31; // w23
  __int64 i; // x27
  CommandCodeSkillEntity_o *v33; // x0
  System_Int32_array *v34; // x8
  System_String_array *v35; // x8
  System_String_array *v36; // x10
  il2cpp_array_size_t max_length; // x10
  int v38; // w9
  System_String_array *v39; // x8
  unsigned __int64 max_length_low; // x9
  System_String_o *v41; // x1
  Il2CppClass **v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_String_array *v45; // x8
  unsigned __int64 v46; // x9
  System_String_o *v47; // x1
  Il2CppClass **v48; // x0
  System_Int32_array *v49; // x8
  System_String_array *v50; // x8
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_String_array *v53; // x8
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3

  if ( (byte_4C377A6 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    byte_4C377A6 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, (unsigned int)v14->static_fields->SvtPassiveSkillListMax);
  *idList = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)idList, (int32_t)v15, v16, v17);
  v18 = (System_String_array *)sub_1C32CC8(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)titleList, (int32_t)v18, v19, v20);
  v21 = (System_String_array *)sub_1C32CC8(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v21;
  sub_1C32BC4((CGThumbnailListItem_o *)explanationList, (int32_t)v21, v22, v23);
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v24, beforeClearQuestId, v25);
  v30 = 0;
  v31 = 0;
  for ( i = 32; ; i += 8 )
  {
    v33 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v30 >= *(int *)(v33[3].fields.endedAt + 44) )
      break;
    if ( !UseEntityList )
      goto LABEL_43;
    if ( v30 >= LODWORD(UseEntityList->max_length) )
      goto LABEL_44;
    v33 = UseEntityList->m_Items[v30];
    v34 = *idList;
    if ( v33 )
    {
      if ( !v34 )
        goto LABEL_43;
      if ( v31 >= LODWORD(v34->max_length) )
        goto LABEL_44;
      v34->m_Items[v31] = v33->fields.skillId;
      v35 = *titleList;
      if ( !*titleList )
        goto LABEL_43;
      v36 = *explanationList;
      if ( !*explanationList )
        goto LABEL_43;
      if ( v31 >= LODWORD(v35->max_length) || v31 >= LODWORD(v36->max_length) )
        goto LABEL_44;
      CommandCodeSkillEntity__getEffectExplanation(v33, &v35->m_Items[v31], &v36->m_Items[v31], 0, v28);
      if ( v30 != v31 )
        goto LABEL_32;
      goto LABEL_39;
    }
    if ( !v34 )
      goto LABEL_43;
    max_length = v34->max_length;
    if ( v30 >= (unsigned int)max_length )
      goto LABEL_44;
    v38 = v34->m_Items[v30];
    if ( v38 >= 1 )
    {
      if ( v30 != v31 )
      {
        if ( v31 >= (unsigned int)max_length )
          goto LABEL_44;
        v34->m_Items[v31] = v38;
        v39 = *titleList;
        if ( !*titleList )
LABEL_43:
          sub_1C32E7C(v33);
        max_length_low = LODWORD(v39->max_length);
        if ( v30 >= max_length_low || v31 >= (unsigned int)max_length_low )
          goto LABEL_44;
        v41 = v39->m_Items[v30];
        v42 = &v39->obj.klass + (int)v31;
        v42[4] = (Il2CppClass *)v41;
        sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v41, v26, v27);
        v45 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        v46 = LODWORD(v45->max_length);
        if ( v30 >= v46 || v31 >= (unsigned int)v46 )
LABEL_44:
          sub_1C32E84(v33);
        v47 = v45->m_Items[v30];
        v48 = &v45->obj.klass + (int)v31;
        v48[4] = (Il2CppClass *)v47;
        sub_1C32BC4((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v47, v43, v44);
LABEL_32:
        v49 = *idList;
        if ( !*idList )
          goto LABEL_43;
        if ( v30 >= LODWORD(v49->max_length) )
          goto LABEL_44;
        v49->m_Items[v30] = 0;
        v50 = *titleList;
        if ( !*titleList )
          goto LABEL_43;
        if ( v30 >= LODWORD(v50->max_length) )
          goto LABEL_44;
        v50->m_Items[v30] = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)((char *)v50 + i), 0, v26, v27);
        v53 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        if ( v30 >= LODWORD(v53->max_length) )
          goto LABEL_44;
        v53->m_Items[v30] = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)((char *)v53 + i), 0, v51, v52);
      }
LABEL_39:
      ++v31;
    }
    ++v30;
  }
  if ( !v31 )
  {
    *idList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)idList, 0, v26, v27);
    *titleList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)titleList, 0, v54, v55);
    *explanationList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)explanationList, 0, v56, v57);
  }
}


CommandCodeSkillEntity_o *CommandCodeSkillMaster__getUseEntity(
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
    for ( i = LODWORD(EntityListFromIdNum->max_length) - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= LODWORD(v10->max_length) )
        sub_1C32E84(EntityListFromIdNum);
      v12 = &v10->obj.klass + i;
      v13 = (CommandCodeSkillEntity_o *)v12[4];
      if ( !v13 )
        sub_1C32E7C(EntityListFromIdNum);
      EntityListFromIdNum = (CommandCodeSkillEntity_array *)CommandCodeSkillEntity__isUse(
                                                              (CommandCodeSkillEntity_o *)v12[4],
                                                              v8,
                                                              beforeClearQuestId,
                                                              v9);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v13;
    }
  }
  return 0;
}


CommandCodeSkillEntity_array *CommandCodeSkillMaster__getUseEntityList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  BalanceConfig_c *v8; // x0
  int64_t v9; // x3
  const MethodInfo *v10; // x5
  unsigned int *v11; // x22
  signed __int64 v12; // x24
  CGThumbnailListItem_o *i; // x23
  BalanceConfig_c *v14; // x0
  signed __int64 v15; // x25
  CommandCodeSkillEntity_o *UseEntity; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CommandCodeSkillEntity_o *v19; // x24
  unsigned __int64 v20; // x25
  __int64 v22; // x0

  if ( (byte_4C377A5 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CommandCodeSkillEntity___TypeInfo);
    byte_4C377A5 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v11 = (unsigned int *)sub_1C32CC8(
                          CommandCodeSkillEntity___TypeInfo,
                          (unsigned int)v8->static_fields->SvtPassiveSkillListMax);
  v12 = 0;
  for ( i = (CGThumbnailListItem_o *)(v11 + 8); ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    if ( v12 >= v14->static_fields->SvtPassiveSkillListMax )
      break;
    v15 = v12 + 1;
    UseEntity = CommandCodeSkillMaster__getUseEntity(this, commandCodeId, (int)v12 + 1, v9, beforeClearQuestId, v10);
    if ( !v11 )
      sub_1C32E7C(UseEntity);
    v19 = UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_1C32D5C(UseEntity, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
      if ( !UseEntity )
      {
        v22 = sub_1C32EA0(0);
        sub_1C32D48(v22, 0);
      }
    }
    v20 = v15 - 1;
    if ( v20 >= v11[6] )
      sub_1C32E84(UseEntity);
    i->klass = (CGThumbnailListItem_c *)v19;
    sub_1C32BC4(i, (int32_t)v19, v17, v18);
    v12 = v20 + 1;
  }
  return (CommandCodeSkillEntity_array *)v11;
}


bool CommandCodeSkillMaster__preProcess(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x22
  __int64 naturalAligment; // x9
  Il2CppObject *PriorityKey; // x0
  Il2CppObject *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x24
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppClass *v24; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  void **v27; // x8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  _BOOL8 v32; // x0
  CommandCodeSkillMaster___c_c *v33; // x8
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v36; // x24
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_Dictionary_object__object__o *v40; // x23
  System_Object_array *v41; // x0
  int32_t monitor; // w2
  int v43; // w8
  CommandCodeSkillMaster_o *v45; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C377A2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__GetEnumerator__);
    sub_1C32C20(&CommandCodeSkillEntity_TypeInfo);
    sub_1C32C20(&System_Comparison_CommandCodeSkillEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    sub_1C32C20(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__);
    sub_1C32C20(&CommandCodeSkillMaster___c_TypeInfo);
    byte_4C377A2 = 1;
  }
  value = 0;
  memset(&v47, 0, sizeof(v47));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3458F50 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v45 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_17:
      v13 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    v16 = (Il2CppObject *)v14;
    if ( !v14 )
      sub_1C32E7C(0);
    naturalAligment = CommandCodeSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) < (unsigned int)naturalAligment
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * naturalAligment - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      sub_1C3313C(v14);
LABEL_51:
      sub_1C32E7C(v23);
    }
    PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(
                                    (CommandCodeSkillMaster_o *)v14,
                                    *(_DWORD *)(v14 + 16),
                                    *(_DWORD *)(v14 + 20),
                                    v15);
    if ( !v4 )
      sub_1C32E7C(PriorityKey);
    v19 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v22 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v22,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (Il2CppObject *)v22;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v19,
        (Il2CppObject *)v22,
        (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    v23 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v24 = value[1].klass;
    v25 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v24 )
      sub_1C32E7C(v23);
    size = v23->fields._size;
    if ( (unsigned int)size >= LODWORD(v24->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        v16,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &v24->_1.image + size;
      v23->fields._size = size + 1;
      v27[4] = v16;
      sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v16, v20, v21);
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_34:
    v31 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v31 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C32E7C(listCache);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v46,
    v4,
    (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v32 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v47,
            (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    if ( !v32 )
      break;
    v33 = CommandCodeSkillMaster___c_TypeInfo;
    current = v47.fields._current;
    if ( !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo);
      v33 = CommandCodeSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v33->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = CommandCodeSkillMaster___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_CommandCodeSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v36, Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, 0);
      static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v38, v39);
    }
    if ( !current.fields.value )
      sub_1C32E7C(v32);
    System_Collections_Generic_List_object___Sort_58303104(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__5_0,
      (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v40 = (System_Collections_Generic_Dictionary_object__object__o *)v45->fields.listCache;
    v41 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v40 )
      sub_1C32E7C(v41);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v40,
      current.fields.key,
      &v41->obj,
      (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v43 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v43;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v47,
    (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_3458F50 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C377A8 & 1) == 0 )
  {
    sub_1C32C20(&CommandCodeSkillMaster___c_TypeInfo);
    byte_4C377A8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(CommandCodeSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandCodeSkillMaster___c_TypeInfo->static_fields->__9 = (struct CommandCodeSkillMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)CommandCodeSkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CommandCodeSkillMaster___c___ctor(CommandCodeSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CommandCodeSkillMaster___c___preProcess_b__5_0(
        CommandCodeSkillMaster___c_o *this,
        CommandCodeSkillEntity_o *a,
        CommandCodeSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C32E7C(this);
  return a->fields.priority - b->fields.priority;
}