void CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC71C7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
    byte_4CC71C7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    261,
    (const MethodInfo_340B614 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
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

  if ( (byte_4CC71C5 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
    byte_4CC71C5 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_340D938 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
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

  if ( (byte_4CC71C6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
    byte_4CC71C6 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
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
  int32_t v10; // w2
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x8
  unsigned int v16; // w9
  unsigned int v17; // w10
  int v18; // w11
  __int64 v19; // x12
  int v20; // w12
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4CC71CE & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    byte_4CC71CE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
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
          sub_1C71608(p_image, v6);
        }
        v16 = 0;
LABEL_19:
        if ( v16 >= (unsigned int)v15 )
          sub_1C71610(p_image);
        if ( !v5 )
          goto LABEL_27;
        v6 = (Il2CppObject *)p_image[(int)v16 + 4];
        items = v5->fields._items;
        v22 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_27;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v6,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v6;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v6, v10, (int32_t)v7, v11, v12, v13, v14);
        }
      }
    }
  }
  if ( !v5 )
    goto LABEL_27;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = commandCodeId;
  if ( (byte_4CC71CA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    byte_4CC71CA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
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
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&commandCodeId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&commandCodeId;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 4), commandCodeId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C71608(list, *(_QWORD *)&commandCodeId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
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
  if ( (byte_4CC71CB & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__);
    byte_4CC71CB = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_1C71608(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
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
  if ( (byte_4CC71C8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC71C8 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_64069988(v4, (System_String_o *)StringLiteral_1450/*":"*/, v5, 0);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_String_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int64_t v36; // x2
  const MethodInfo *v37; // x4
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  MethodInfo *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v46; // x24
  unsigned int v47; // w23
  __int64 i; // x27
  CommandCodeSkillEntity_o *v49; // x0
  System_Int32_array *v50; // x8
  System_String_array *v51; // x8
  System_String_array *v52; // x10
  il2cpp_array_size_t max_length; // x10
  int v54; // w9
  System_String_array *v55; // x8
  unsigned __int64 max_length_low; // x9
  System_String_o *v57; // x1
  Il2CppClass **v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  System_String_array *v65; // x8
  unsigned __int64 v66; // x9
  System_String_o *v67; // x1
  Il2CppClass **v68; // x0
  System_Int32_array *v69; // x8
  System_String_array *v70; // x8
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  System_String_array *v77; // x8
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7

  if ( (byte_4CC71CD & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    byte_4CC71CD = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (System_Int32_array *)sub_1C71458(int___TypeInfo, (unsigned int)v14->static_fields->SvtPassiveSkillListMax);
  *idList = v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)idList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_String_array *)sub_1C71458(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v22;
  sub_1C71354((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_String_array *)sub_1C71458(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v29;
  sub_1C71354((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v36, beforeClearQuestId, v37);
  v46 = 0;
  v47 = 0;
  for ( i = 32; ; i += 8 )
  {
    v49 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v49 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v46 >= *(int *)(v49[3].fields.endedAt + 44) )
      break;
    if ( !UseEntityList )
      goto LABEL_43;
    if ( v46 >= LODWORD(UseEntityList->max_length) )
      goto LABEL_44;
    v49 = UseEntityList->m_Items[v46];
    v50 = *idList;
    if ( v49 )
    {
      if ( !v50 )
        goto LABEL_43;
      if ( v47 >= LODWORD(v50->max_length) )
        goto LABEL_44;
      v50->m_Items[v47] = v49->fields.skillId;
      v51 = *titleList;
      if ( !*titleList )
        goto LABEL_43;
      v52 = *explanationList;
      if ( !*explanationList )
        goto LABEL_43;
      if ( v47 >= LODWORD(v51->max_length) || v47 >= LODWORD(v52->max_length) )
        goto LABEL_44;
      CommandCodeSkillEntity__getEffectExplanation(v49, &v51->m_Items[v47], &v52->m_Items[v47], 0, v41);
      if ( v46 != v47 )
        goto LABEL_32;
      goto LABEL_39;
    }
    if ( !v50 )
      goto LABEL_43;
    max_length = v50->max_length;
    if ( v46 >= (unsigned int)max_length )
      goto LABEL_44;
    v54 = v50->m_Items[v46];
    if ( v54 >= 1 )
    {
      if ( v46 != v47 )
      {
        if ( v47 >= (unsigned int)max_length )
          goto LABEL_44;
        v50->m_Items[v47] = v54;
        v55 = *titleList;
        if ( !*titleList )
LABEL_43:
          sub_1C71608(v49, v38);
        max_length_low = LODWORD(v55->max_length);
        if ( v46 >= max_length_low || v47 >= (unsigned int)max_length_low )
          goto LABEL_44;
        v57 = v55->m_Items[v46];
        v58 = &v55->obj.klass + (int)v47;
        v58[4] = (Il2CppClass *)v57;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)(v58 + 4),
          (int32_t)v57,
          v39,
          v40,
          (System_String_o *)v41,
          v42,
          v43,
          v44);
        v65 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        v66 = LODWORD(v65->max_length);
        if ( v46 >= v66 || v47 >= (unsigned int)v66 )
LABEL_44:
          sub_1C71610(v49);
        v67 = v65->m_Items[v46];
        v68 = &v65->obj.klass + (int)v47;
        v68[4] = (Il2CppClass *)v67;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v68 + 4), (int32_t)v67, v59, v60, v61, v62, v63, v64);
LABEL_32:
        v69 = *idList;
        if ( !*idList )
          goto LABEL_43;
        if ( v46 >= LODWORD(v69->max_length) )
          goto LABEL_44;
        v69->m_Items[v46] = 0;
        v70 = *titleList;
        if ( !*titleList )
          goto LABEL_43;
        if ( v46 >= LODWORD(v70->max_length) )
          goto LABEL_44;
        v70->m_Items[v46] = 0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)((char *)v70 + i),
          0,
          v39,
          v40,
          (System_String_o *)v41,
          v42,
          v43,
          v44);
        v77 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        if ( v46 >= LODWORD(v77->max_length) )
          goto LABEL_44;
        v77->m_Items[v46] = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)v77 + i), 0, v71, v72, v73, v74, v75, v76);
      }
LABEL_39:
      ++v47;
    }
    ++v46;
  }
  if ( !v47 )
  {
    *idList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)idList, 0, v39, v40, (System_String_o *)v41, v42, v43, v44);
    *titleList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)titleList, 0, v78, v79, v80, v81, v82, v83);
    *explanationList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)explanationList, 0, v84, v85, v86, v87, v88, v89);
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
        sub_1C71610(EntityListFromIdNum);
      v12 = &v10->obj.klass + i;
      v13 = (CommandCodeSkillEntity_o *)v12[4];
      if ( !v13 )
        sub_1C71608(EntityListFromIdNum, v8);
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
  GrandQuestFolderBoardItem_o *i; // x23
  BalanceConfig_c *v14; // x0
  signed __int64 v15; // x25
  CommandCodeSkillEntity_o *UseEntity; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  CommandCodeSkillEntity_o *v24; // x24
  unsigned __int64 v25; // x25
  __int64 v27; // x0

  if ( (byte_4CC71CC & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CommandCodeSkillEntity___TypeInfo);
    byte_4CC71CC = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v11 = (unsigned int *)sub_1C71458(
                          CommandCodeSkillEntity___TypeInfo,
                          (unsigned int)v8->static_fields->SvtPassiveSkillListMax);
  v12 = 0;
  for ( i = (GrandQuestFolderBoardItem_o *)(v11 + 8); ; i = (GrandQuestFolderBoardItem_o *)((char *)i + 8) )
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
      sub_1C71608(UseEntity, v17);
    v24 = UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_1C714EC(UseEntity, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
      if ( !UseEntity )
      {
        v27 = sub_1C7162C(0);
        sub_1C714D8(v27, 0);
      }
    }
    v25 = v15 - 1;
    if ( v25 >= v11[6] )
      sub_1C71610(UseEntity);
    i->klass = (GrandQuestFolderBoardItem_c *)v24;
    sub_1C71354(i, (int32_t)v24, v18, v19, v20, v21, v22, v23);
    v12 = v25 + 1;
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
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_List_object__o *v30; // x24
  System_Collections_Generic_List_object__o *v31; // x0
  Il2CppClass *v32; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  void **v35; // x8
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  _BOOL8 v40; // x0
  __int64 v41; // x1
  CommandCodeSkillMaster___c_c *v42; // x8
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v45; // x24
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Collections_Generic_Dictionary_object__object__o *v53; // x23
  System_Object_array *v54; // x0
  __int64 v55; // x1
  int32_t monitor; // w2
  int v57; // w8
  CommandCodeSkillMaster_o *v59; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CC71C9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__GetEnumerator__);
    sub_1C713B0(&CommandCodeSkillEntity_TypeInfo);
    sub_1C713B0(&System_Comparison_CommandCodeSkillEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    sub_1C713B0(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__);
    sub_1C713B0(&CommandCodeSkillMaster___c_TypeInfo);
    byte_4CC71C9 = 1;
  }
  value = 0;
  memset(&v61, 0, sizeof(v61));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_34CB868 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v59 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v5);
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
      v10 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v14 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (Il2CppObject *)v15;
    if ( !v15 )
      sub_1C71608(0, v16);
    naturalAligment = CommandCodeSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)naturalAligment
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * naturalAligment - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      sub_1C719A4(v15);
LABEL_51:
      sub_1C71608(v31, v23);
    }
    PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(
                                    (CommandCodeSkillMaster_o *)v15,
                                    *(_DWORD *)(v15 + 16),
                                    *(_DWORD *)(v15 + 20),
                                    v17);
    if ( !v4 )
      sub_1C71608(PriorityKey, v21);
    v22 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v30 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v30,
        (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (Il2CppObject *)v30;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v22,
        (Il2CppObject *)v30,
        (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    v31 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v32 = value[1].klass;
    v33 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v32 )
      sub_1C71608(v31, v23);
    size = v31->fields._size;
    if ( (unsigned int)size >= LODWORD(v32->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        v18,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &v32->_1.image + size;
      v31->fields._size = size + 1;
      v35[4] = v18;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v18, v24, v25, v26, v27, v28, v29);
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_34;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_34:
    v39 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v39 + 8));
  if ( !v4 )
LABEL_57:
    sub_1C71608(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v60,
    v4,
    (const MethodInfo_34CBB10 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v40 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v61,
            (const MethodInfo_35C8D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    if ( !v40 )
      break;
    v42 = CommandCodeSkillMaster___c_TypeInfo;
    current = v61.fields._current;
    if ( !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo);
      v42 = CommandCodeSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v42->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = CommandCodeSkillMaster___c_TypeInfo;
      }
      v45 = (Il2CppObject *)v42->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_CommandCodeSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v45, Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, 0);
      static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
        (int32_t)_9__5_0,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    if ( !current.fields.value )
      sub_1C71608(v40, v41);
    System_Collections_Generic_List_object___Sort_58794460(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__5_0,
      (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v53 = (System_Collections_Generic_Dictionary_object__object__o *)v59->fields.listCache;
    v54 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v53 )
      sub_1C71608(v54, v55);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v53,
      current.fields.key,
      &v54->obj,
      (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v57 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v57;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v61,
    (const MethodInfo_35C8EB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_34CB868 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC71CF & 1) == 0 )
  {
    sub_1C713B0(&CommandCodeSkillMaster___c_TypeInfo);
    byte_4CC71CF = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(CommandCodeSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandCodeSkillMaster___c_TypeInfo->static_fields->__9 = (struct CommandCodeSkillMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)CommandCodeSkillMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C71608(this, a);
  return a->fields.priority - b->fields.priority;
}