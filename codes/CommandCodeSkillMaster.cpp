void CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C270A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
    byte_4C270A9 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    261,
    (const MethodInfo_338A52C *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
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

  if ( (byte_4C270A7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
    byte_4C270A7 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_338C850 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
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

  if ( (byte_4C270A8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
    byte_4C270A8 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
}


CommandCodeSkillEntity_array *CommandCodeSkillMaster__getCommandCodeActiveSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  Il2CppObject *v6; // x1
  const MethodInfo *v7; // x3
  int v8; // w22
  _QWORD *p_image; // x0
  __int64 v10; // x2
  __int64 v11; // x8
  unsigned int v12; // w9
  unsigned int v13; // w10
  int v14; // w11
  __int64 v15; // x12
  int v16; // w12
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C270B0 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    byte_4C270B0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v8 = 0;
  while ( 1 )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( v8 >= *(_DWORD *)(p_image[23] + 44LL) )
      break;
    p_image = CommandCodeSkillMaster__getEntityListFromIdNum(this, commandCodeId, ++v8, v7);
    if ( p_image )
    {
      v11 = p_image[3];
      if ( v11 )
      {
        if ( (int)v11 >= 1 )
        {
          v12 = 0;
          v13 = 0;
          v14 = 1;
          while ( 1 )
          {
            v15 = p_image[(int)v13 + 4];
            if ( !v15 )
              break;
            v16 = *(_DWORD *)(v15 + 24);
            if ( v16 > v14 )
              v12 = v13;
            ++v13;
            if ( v16 > v14 )
              v14 = v16;
            if ( (_DWORD)v11 == v13 )
              goto LABEL_19;
          }
LABEL_27:
          sub_1C2D6EC(p_image, v6);
        }
        v12 = 0;
LABEL_19:
        if ( v12 >= (unsigned int)v11 )
          sub_1C2D6F4(p_image, v6, v10);
        if ( !v5 )
          goto LABEL_27;
        v6 = (Il2CppObject *)p_image[(int)v12 + 4];
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
            v6,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v6;
          sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v6, v10, v7);
        }
      }
    }
  }
  if ( !v5 )
    goto LABEL_27;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *CommandCodeSkillMaster__getCommandCodeSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  v3 = commandCodeId;
  if ( (byte_4C270AC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    byte_4C270AC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&commandCodeId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v12 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v14[4] = *(Il2CppClass **)&commandCodeId;
            sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), commandCodeId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(list, *(_QWORD *)&commandCodeId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


CommandCodeSkillEntity_array *CommandCodeSkillMaster__getEntityListFromIdNum(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        const MethodInfo *method)
{
  CommandCodeSkillMaster_o *v6; // x20
  Il2CppObject *PriorityKey; // x0
  __int64 v8; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4C270AD & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__);
    byte_4C270AD = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_1C2D6EC(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
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
  if ( (byte_4C270AA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C270AA = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_63496112(v4, (System_String_o *)StringLiteral_1456/*":"*/, v5, 0);
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
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x4
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v31; // x24
  unsigned int v32; // w23
  __int64 i; // x27
  CommandCodeSkillEntity_o *v34; // x0
  System_Int32_array *v35; // x8
  System_String_array *v36; // x8
  System_String_array *v37; // x10
  il2cpp_array_size_t max_length; // x10
  int v39; // w9
  System_String_array *v40; // x8
  unsigned __int64 max_length_low; // x9
  System_String_o *v42; // x1
  Il2CppClass **v43; // x0
  const MethodInfo *v44; // x3
  System_String_array *v45; // x8
  unsigned __int64 v46; // x9
  System_String_o *v47; // x1
  Il2CppClass **v48; // x0
  System_Int32_array *v49; // x8
  System_String_array *v50; // x8
  const MethodInfo *v51; // x3
  System_String_array *v52; // x8
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3

  if ( (byte_4C270AF & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    byte_4C270AF = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)v14->static_fields->SvtPassiveSkillListMax);
  *idList = v15;
  sub_1C2D434((CGThumbnailListItem_o *)idList, (int32_t)v15, v16, v17);
  v18 = (System_String_array *)sub_1C2D538(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v18;
  sub_1C2D434((CGThumbnailListItem_o *)titleList, (int32_t)v18, v19, v20);
  v21 = (System_String_array *)sub_1C2D538(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v21;
  sub_1C2D434((CGThumbnailListItem_o *)explanationList, (int32_t)v21, v22, v23);
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v24, beforeClearQuestId, v25);
  v31 = 0;
  v32 = 0;
  for ( i = 32; ; i += 8 )
  {
    v34 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v31 >= *(int *)(v34[3].fields.endedAt + 44) )
      break;
    if ( !UseEntityList )
      goto LABEL_43;
    if ( v31 >= LODWORD(UseEntityList->max_length) )
      goto LABEL_44;
    v34 = UseEntityList->m_Items[v31];
    v35 = *idList;
    if ( v34 )
    {
      if ( !v35 )
        goto LABEL_43;
      if ( v32 >= LODWORD(v35->max_length) )
        goto LABEL_44;
      v35->m_Items[v32] = v34->fields.skillId;
      v36 = *titleList;
      if ( !*titleList )
        goto LABEL_43;
      v37 = *explanationList;
      if ( !*explanationList )
        goto LABEL_43;
      if ( v32 >= LODWORD(v36->max_length) || v32 >= LODWORD(v37->max_length) )
        goto LABEL_44;
      CommandCodeSkillEntity__getEffectExplanation(v34, &v36->m_Items[v32], &v37->m_Items[v32], 0, v29);
      if ( v31 != v32 )
        goto LABEL_32;
      goto LABEL_39;
    }
    if ( !v35 )
      goto LABEL_43;
    max_length = v35->max_length;
    if ( v31 >= (unsigned int)max_length )
      goto LABEL_44;
    v39 = v35->m_Items[v31];
    if ( v39 >= 1 )
    {
      if ( v31 != v32 )
      {
        if ( v32 >= (unsigned int)max_length )
          goto LABEL_44;
        v35->m_Items[v32] = v39;
        v40 = *titleList;
        if ( !*titleList )
LABEL_43:
          sub_1C2D6EC(v34, v26);
        max_length_low = LODWORD(v40->max_length);
        if ( v31 >= max_length_low || v32 >= (unsigned int)max_length_low )
          goto LABEL_44;
        v42 = v40->m_Items[v31];
        v43 = &v40->obj.klass + (int)v32;
        v43[4] = (Il2CppClass *)v42;
        sub_1C2D434((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v42, v27, v28);
        v45 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        v46 = LODWORD(v45->max_length);
        if ( v31 >= v46 || v32 >= (unsigned int)v46 )
LABEL_44:
          sub_1C2D6F4(v34, v26, v27);
        v47 = v45->m_Items[v31];
        v48 = &v45->obj.klass + (int)v32;
        v48[4] = (Il2CppClass *)v47;
        sub_1C2D434((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v47, v27, v44);
LABEL_32:
        v49 = *idList;
        if ( !*idList )
          goto LABEL_43;
        if ( v31 >= LODWORD(v49->max_length) )
          goto LABEL_44;
        v49->m_Items[v31] = 0;
        v50 = *titleList;
        if ( !*titleList )
          goto LABEL_43;
        if ( v31 >= LODWORD(v50->max_length) )
          goto LABEL_44;
        v50->m_Items[v31] = 0;
        sub_1C2D434((CGThumbnailListItem_o *)((char *)v50 + i), 0, v27, v28);
        v52 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        if ( v31 >= LODWORD(v52->max_length) )
          goto LABEL_44;
        v52->m_Items[v31] = 0;
        sub_1C2D434((CGThumbnailListItem_o *)((char *)v52 + i), 0, v27, v51);
      }
LABEL_39:
      ++v32;
    }
    ++v31;
  }
  if ( !v32 )
  {
    *idList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)idList, 0, v27, v28);
    *titleList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)titleList, 0, v53, v54);
    *explanationList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)explanationList, 0, v55, v56);
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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  CommandCodeSkillEntity_array *v11; // x20
  unsigned int i; // w22
  Il2CppClass **v13; // x8
  CommandCodeSkillEntity_o *v14; // x21

  EntityListFromIdNum = CommandCodeSkillMaster__getEntityListFromIdNum(
                          this,
                          commandCodeId,
                          num,
                          (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v11 = EntityListFromIdNum;
    for ( i = LODWORD(EntityListFromIdNum->max_length) - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= LODWORD(v11->max_length) )
        sub_1C2D6F4(EntityListFromIdNum, v8, v9);
      v13 = &v11->obj.klass + i;
      v14 = (CommandCodeSkillEntity_o *)v13[4];
      if ( !v14 )
        sub_1C2D6EC(EntityListFromIdNum, v8);
      EntityListFromIdNum = (CommandCodeSkillEntity_array *)CommandCodeSkillEntity__isUse(
                                                              (CommandCodeSkillEntity_o *)v13[4],
                                                              v8,
                                                              beforeClearQuestId,
                                                              v10);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v14;
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
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  CommandCodeSkillEntity_o *v20; // x24
  unsigned __int64 v21; // x25
  __int64 v23; // x0

  if ( (byte_4C270AE & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommandCodeSkillEntity___TypeInfo);
    byte_4C270AE = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v11 = (unsigned int *)sub_1C2D538(
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
      sub_1C2D6EC(UseEntity, v17);
    v20 = UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_1C2D5CC(UseEntity, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
      if ( !UseEntity )
      {
        v23 = sub_1C2D710(0);
        sub_1C2D5B8(v23, 0);
      }
    }
    v21 = v15 - 1;
    if ( v21 >= v11[6] )
      sub_1C2D6F4(UseEntity, v17, v18);
    i->klass = (CGThumbnailListItem_c *)v20;
    sub_1C2D434(i, (int32_t)v20, v18, v19);
    v12 = v21 + 1;
  }
  return (CommandCodeSkillEntity_array *)v11;
}


bool CommandCodeSkillMaster__preProcess(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  __int64 naturalAligment; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x24
  System_Collections_Generic_List_object__o *v27; // x0
  Il2CppClass *v28; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  void **v31; // x8
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  CommandCodeSkillMaster___c_c *v38; // x8
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v41; // x24
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_Dictionary_object__object__o *v45; // x23
  System_Object_array *v46; // x0
  __int64 v47; // x1
  int32_t monitor; // w2
  int v49; // w8
  CommandCodeSkillMaster_o *v51; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v53; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C270AB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__GetEnumerator__);
    sub_1C2D490(&CommandCodeSkillEntity_TypeInfo);
    sub_1C2D490(&System_Comparison_CommandCodeSkillEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    sub_1C2D490(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__);
    sub_1C2D490(&CommandCodeSkillMaster___c_TypeInfo);
    byte_4C270AB = 1;
  }
  value = 0;
  memset(&v53, 0, sizeof(v53));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_344A4B0 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v51 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_17:
      v14 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (Il2CppObject *)v15;
    if ( !v15 )
      sub_1C2D6EC(0, v16);
    naturalAligment = CommandCodeSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)naturalAligment
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * naturalAligment - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      sub_1C2D9AC(v15);
LABEL_51:
      sub_1C2D6EC(v27, v23);
    }
    PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(
                                    (CommandCodeSkillMaster_o *)v15,
                                    *(_DWORD *)(v15 + 16),
                                    *(_DWORD *)(v15 + 20),
                                    v17);
    if ( !v4 )
      sub_1C2D6EC(PriorityKey, v21);
    v22 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v26 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (Il2CppObject *)v26;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v22,
        (Il2CppObject *)v26,
        (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    v27 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v28 = value[1].klass;
    v29 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v28 )
      sub_1C2D6EC(v27, v23);
    size = v27->fields._size;
    if ( (unsigned int)size >= LODWORD(v28->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        v18,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &v28->_1.image + size;
      v27->fields._size = size + 1;
      v31[4] = v18;
      sub_1C2D434((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v18, v24, v25);
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_34;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_34:
    v35 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v35 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C2D6EC(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v52,
    v4,
    (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v36 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v53,
            (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    if ( !v36 )
      break;
    v38 = CommandCodeSkillMaster___c_TypeInfo;
    current = v53.fields._current;
    if ( !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo);
      v38 = CommandCodeSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v38->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = CommandCodeSkillMaster___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v38->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_CommandCodeSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v41, Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, 0);
      static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v43, v44);
    }
    if ( !current.fields.value )
      sub_1C2D6EC(v36, v37);
    System_Collections_Generic_List_object___Sort_58242632(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__5_0,
      (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v45 = (System_Collections_Generic_Dictionary_object__object__o *)v51->fields.listCache;
    v46 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v45 )
      sub_1C2D6EC(v46, v47);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v45,
      current.fields.key,
      &v46->obj,
      (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v49 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v49;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v53,
    (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_344A4B0 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C270B1 & 1) == 0 )
  {
    sub_1C2D490(&CommandCodeSkillMaster___c_TypeInfo);
    byte_4C270B1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(CommandCodeSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandCodeSkillMaster___c_TypeInfo->static_fields->__9 = (struct CommandCodeSkillMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)CommandCodeSkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, a);
  return a->fields.priority - b->fields.priority;
}