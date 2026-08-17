void CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5970606 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
    byte_5970606 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    263,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
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

  if ( (byte_5970604 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
    byte_5970604 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3F157EC *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
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

  if ( (byte_5970605 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
    byte_5970605 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
}


CommandCodeSkillEntity_array *CommandCodeSkillMaster__getCommandCodeActiveSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  Il2CppObject *v6; // x1
  MethodInfo *v7; // x3
  int v8; // w22
  _QWORD *p_image; // x0
  System_String_o *v10; // x2
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x8
  __int64 v16; // x10
  unsigned int v17; // w9
  int v18; // w12
  __int64 v19; // x13
  int v20; // w13
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_597060D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    byte_597060D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v8 = 0;
  while ( 1 )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
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
            v19 = p_image[v16 + 4];
            if ( !v19 )
              break;
            v20 = *(_DWORD *)(v19 + 24);
            if ( v20 > v18 )
              v17 = v16;
            ++v16;
            if ( v20 > v18 )
              v18 = v20;
            if ( (_DWORD)v15 == (_DWORD)v16 )
              goto LABEL_19;
          }
LABEL_27:
          sub_2213CDC(p_image, v6);
        }
        v17 = 0;
LABEL_19:
        if ( v17 >= (unsigned int)v15 )
          sub_2213CE4(p_image);
        if ( !v5 )
          goto LABEL_27;
        items = v5->fields._items;
        v6 = (Il2CppObject *)p_image[(int)v17 + 4];
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v6;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v24 + 4),
            (int32_t)v6,
            v10,
            (System_String_o *)v7,
            v11,
            v12,
            v13,
            v14);
        }
      }
    }
  }
  if ( !v5 )
    goto LABEL_27;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = commandCodeId;
  if ( (byte_5970609 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    byte_5970609 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Item__);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&commandCodeId;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), commandCodeId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(list, *(_QWORD *)&commandCodeId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
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
  if ( (byte_597060A & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__);
    byte_597060A = 1;
  }
  value = 0;
  PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_2213CDC(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
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

  v8 = commandCodeId;
  v7 = num;
  if ( (byte_5970607 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5970607 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  return System_String__Concat_75694928(v4, (System_String_o *)StringLiteral_1533/*":"*/, v5, 0);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_array *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int64_t v36; // x2
  const MethodInfo *v37; // x4
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  const MethodInfo *v41; // x4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v46; // x24
  unsigned int v47; // w23
  __int64 i; // x27
  CommandCodeSkillEntity_o *v49; // x0
  System_Int32_array *v50; // x8
  char *v51; // x11
  System_String_array *v52; // x8
  System_String_array *v53; // x10
  il2cpp_array_size_t max_length; // x10
  int v55; // w9
  char *v56; // x10
  System_String_array *v57; // x8
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v59; // x0
  System_String_o *v60; // x1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_String_array *v67; // x8
  unsigned __int64 v68; // x9
  Il2CppClass **v69; // x0
  System_String_o *v70; // x1
  System_Int32_array *v71; // x8
  char *v72; // x9
  System_String_array *v73; // x8
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_String_array *v80; // x8
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7

  if ( (byte_597060C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&string___TypeInfo);
    byte_597060C = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, idList);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)v14->static_fields->SvtPassiveSkillListMax);
  *idList = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_String_array *)sub_2213B20(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_String_array *)sub_2213B20(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v36, beforeClearQuestId, v37);
  v46 = 0;
  v47 = 0;
  for ( i = 32; ; i += 8 )
  {
    v49 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v38);
      v49 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v46 >= *(int *)(v49[3].fields.endedAt + 44) )
      break;
    if ( !UseEntityList )
      goto LABEL_44;
    if ( v46 >= LODWORD(UseEntityList->max_length) )
      goto LABEL_43;
    v49 = UseEntityList->m_Items[v46];
    v50 = *idList;
    if ( v49 )
    {
      if ( !v50 )
        goto LABEL_44;
      if ( v47 >= LODWORD(v50->max_length) )
        goto LABEL_43;
      v51 = (char *)v50 + 4 * (int)v47;
      v52 = *titleList;
      *((_DWORD *)v51 + 8) = v49->fields.skillId;
      if ( !v52 )
        goto LABEL_44;
      v53 = *explanationList;
      if ( !*explanationList )
        goto LABEL_44;
      if ( v47 >= LODWORD(v52->max_length) || v47 >= LODWORD(v53->max_length) )
        goto LABEL_43;
      CommandCodeSkillEntity__getEffectExplanation(v49, &v52->m_Items[v47], &v53->m_Items[v47], 0, v41);
      if ( v46 != v47 )
        goto LABEL_32;
      goto LABEL_39;
    }
    if ( !v50 )
      goto LABEL_44;
    max_length = v50->max_length;
    if ( v46 >= (unsigned int)max_length )
      goto LABEL_43;
    v55 = v50->m_Items[v46];
    if ( v55 >= 1 )
    {
      if ( v46 != v47 )
      {
        if ( v47 >= (unsigned int)max_length )
          goto LABEL_43;
        v56 = (char *)v50 + 4 * (int)v47;
        v57 = *titleList;
        *((_DWORD *)v56 + 8) = v55;
        if ( !v57 )
LABEL_44:
          sub_2213CDC(v49, v38);
        max_length_low = LODWORD(v57->max_length);
        if ( v46 >= max_length_low || v47 >= (unsigned int)max_length_low )
          goto LABEL_43;
        v59 = &v57->obj.klass + (int)v47;
        v60 = v57->m_Items[v46];
        v59[4] = (Il2CppClass *)v60;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v59 + 4), (int32_t)v60, v39, v40, (int32_t)v41, v42, v43, v44);
        v67 = *explanationList;
        if ( !*explanationList )
          goto LABEL_44;
        v68 = LODWORD(v67->max_length);
        if ( v46 >= v68 || v47 >= (unsigned int)v68 )
LABEL_43:
          sub_2213CE4(v49);
        v69 = &v67->obj.klass + (int)v47;
        v70 = v67->m_Items[v46];
        v69[4] = (Il2CppClass *)v70;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 4), (int32_t)v70, v61, v62, v63, v64, v65, v66);
LABEL_32:
        v71 = *idList;
        if ( !*idList )
          goto LABEL_44;
        if ( v46 >= LODWORD(v71->max_length) )
          goto LABEL_43;
        v72 = (char *)v71 + 4 * v46;
        v73 = *titleList;
        *((_DWORD *)v72 + 8) = 0;
        if ( !v73 )
          goto LABEL_44;
        if ( v46 >= LODWORD(v73->max_length) )
          goto LABEL_43;
        v73->m_Items[v46] = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v73 + i), 0, v39, v40, (int32_t)v41, v42, v43, v44);
        v80 = *explanationList;
        if ( !*explanationList )
          goto LABEL_44;
        if ( v46 >= LODWORD(v80->max_length) )
          goto LABEL_43;
        v80->m_Items[v46] = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v80 + i), 0, v74, v75, v76, v77, v78, v79);
      }
LABEL_39:
      ++v47;
    }
    ++v46;
  }
  if ( !v47 )
  {
    *idList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)idList, 0, v39, v40, (int32_t)v41, v42, v43, v44);
    *titleList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)titleList, 0, v81, v82, v83, v84, v85, v86);
    *explanationList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)explanationList, 0, v87, v88, v89, v90, v91, v92);
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
  unsigned int max_length; // w22
  CommandCodeSkillEntity_array *v11; // x20
  Il2CppClass **v12; // x8
  CommandCodeSkillEntity_o *v13; // x21

  EntityListFromIdNum = CommandCodeSkillMaster__getEntityListFromIdNum(
                          this,
                          commandCodeId,
                          num,
                          (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    max_length = EntityListFromIdNum->max_length;
    v11 = EntityListFromIdNum;
    while ( (--max_length & 0x80000000) == 0 )
    {
      if ( max_length >= LODWORD(v11->max_length) )
        sub_2213CE4(EntityListFromIdNum);
      v12 = &v11->obj.klass + max_length;
      v13 = (CommandCodeSkillEntity_o *)v12[4];
      if ( !v13 )
        sub_2213CDC(EntityListFromIdNum, v8);
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


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *CommandCodeSkillMaster__getUseEntityList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  BalanceConfig_c *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x3
  const MethodInfo *v11; // x5
  unsigned int *v12; // x22
  signed __int64 v13; // x24
  MissionNaviTransitionBoardItem_o *i; // x23
  BalanceConfig_c *v15; // x0
  signed __int64 v16; // x25
  CommandCodeSkillEntity_o *UseEntity; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  MissionNaviTransitionBoardItem_c *v25; // x24
  __int64 v26; // x1
  unsigned __int64 v27; // x25
  __int64 v29; // x0

  if ( (byte_597060B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommandCodeSkillEntity___TypeInfo);
    byte_597060B = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    v8 = BalanceConfig_TypeInfo;
  }
  v12 = (unsigned int *)sub_2213B20(
                          CommandCodeSkillEntity___TypeInfo,
                          (unsigned int)v8->static_fields->SvtPassiveSkillListMax);
  v13 = 0;
  for ( i = (MissionNaviTransitionBoardItem_o *)(v12 + 8); ; i = (MissionNaviTransitionBoardItem_o *)((char *)i + 8) )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
      v15 = BalanceConfig_TypeInfo;
    }
    if ( v13 >= v15->static_fields->SvtPassiveSkillListMax )
      break;
    v16 = v13 + 1;
    UseEntity = CommandCodeSkillMaster__getUseEntity(this, commandCodeId, (int)v13 + 1, v10, beforeClearQuestId, v11);
    if ( !v12 )
      sub_2213CDC(UseEntity, v18);
    v25 = (MissionNaviTransitionBoardItem_c *)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_2213BB4(UseEntity, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
      if ( !UseEntity )
      {
        v29 = sub_2213D00(0, v26);
        sub_2213BA0(v29, 0);
      }
    }
    v27 = v16 - 1;
    if ( v27 >= v12[6] )
      sub_2213CE4(UseEntity);
    i->klass = v25;
    sub_2213A04(i, (int32_t)v25, v19, v20, v21, v22, v23, v24);
    v13 = v27 + 1;
  }
  return (CommandCodeSkillEntity_array *)v12;
}


bool CommandCodeSkillMaster__preProcess(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  __int64 listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *v7; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__o *v12; // x21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x21
  __int64 naturalAligment; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_object__o *v33; // x23
  System_Collections_Generic_List_object__o *v34; // x0
  Il2CppClass *v35; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  void **v38; // x8
  CommandCodeSkillMaster_o *v39; // x24
  System_Collections_Generic_IEnumerator_T__o *v40; // x22
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  CommandCodeSkillMaster___c_c *v46; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v50; // x24
  struct CommandCodeSkillMaster___c_StaticFields *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_Collections_Generic_Dictionary_object__object__o *v58; // x23
  System_Object_array *v59; // x0
  __int64 v60; // x1
  int32_t monitor; // w2
  int v62; // w8
  CommandCodeSkillMaster_o *v64; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v66; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *value; // [xsp+60h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v68; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_5970608 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__GetEnumerator__);
    sub_2213A60(&CommandCodeSkillEntity_TypeInfo);
    sub_2213A60(&System_Comparison_CommandCodeSkillEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    sub_2213A60(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__);
    sub_2213A60(&CommandCodeSkillMaster___c_TypeInfo);
    byte_5970608 = 1;
  }
  listCache = (__int64)this->fields.listCache;
  value = 0;
  v68 = 0;
  memset(&v66, 0, sizeof(v66));
  if ( !listCache )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)listCache,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (__int64)this->fields.list;
  v64 = this;
  if ( !listCache )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__GetEnumerator__);
  v68 = Enumerator;
  v65.fields._dictionary = 0;
  *(_QWORD *)&v65.fields._version = &v68;
  if ( !Enumerator )
LABEL_33:
    sub_2213CDC(Enumerator, v6);
  v7 = Enumerator;
  while ( 1 )
  {
    klass = v7->klass;
    v9 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(v7, System_Collections_IEnumerator_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
                  v7,
                  *(_QWORD *)(v11 + 8));
    if ( (listCache & 1) == 0 )
      break;
    v12 = v68;
    if ( !v68 )
      sub_2213CDC(listCache, method);
    v13 = v68->klass;
    v14 = *(unsigned __int16 *)&v68->klass->_2.rank;
    if ( *(_WORD *)&v68->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_19:
      v16 = sub_224BC3C(v68, System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v12,
            *(_QWORD *)(v16 + 8));
    v21 = (Il2CppObject *)v17;
    if ( !v17 )
      sub_2213CDC(0, v18);
    naturalAligment = CommandCodeSkillEntity_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)naturalAligment
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * naturalAligment - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      sub_221405C(v17, CommandCodeSkillEntity_TypeInfo, v19, v20);
LABEL_57:
      sub_2213CDC(v34, v26);
    }
    PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(
                                    (CommandCodeSkillMaster_o *)v17,
                                    *(_DWORD *)(v17 + 16),
                                    *(_DWORD *)(v17 + 20),
                                    v20);
    if ( !v4 )
      sub_2213CDC(PriorityKey, v24);
    v25 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v33,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (Il2CppObject *)v33;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v25,
        (Il2CppObject *)v33,
        (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    v34 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_57;
    v35 = value[1].klass;
    v36 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v35 )
      goto LABEL_57;
    size = v34->fields._size;
    if ( (unsigned int)size >= LODWORD(v35->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        v21,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &v35->_1.image + size;
      v34->fields._size = size + 1;
      v38[4] = v21;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v21, v27, v28, v29, v30, v31, v32);
    }
    v7 = v68;
    if ( !v68 )
      goto LABEL_33;
  }
  v39 = v64;
  v40 = v68;
  if ( v68 )
  {
    v41 = v68->klass;
    v42 = *(unsigned __int16 *)&v68->klass->_2.rank;
    if ( *(_WORD *)&v68->klass->_2.rank )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_39;
      }
      v44 = (__int64)&v41->vtable[*v43];
    }
    else
    {
LABEL_39:
      v44 = sub_224BC3C(v68, System_IDisposable_TypeInfo, 0);
    }
    listCache = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                  v40,
                  *(_QWORD *)(v44 + 8));
  }
  if ( !v4 )
LABEL_63:
    sub_2213CDC(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v65,
    v4,
    (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v66 = v65;
  v65.fields._dictionary = 0;
  *(_QWORD *)&v65.fields._version = &v66;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v66,
            (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__) )
  {
    v46 = CommandCodeSkillMaster___c_TypeInfo;
    current = v66.fields._current;
    if ( !*(&CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo, v45);
      v46 = CommandCodeSkillMaster___c_TypeInfo;
    }
    static_fields = v46->static_fields;
    _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !*(&v46->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v46, v45);
        static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      }
      v50 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_CommandCodeSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v50, Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, 0);
      v51 = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      v51->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v51->__9__5_0, (int32_t)_9__5_0, v52, v53, v54, v55, v56, v57);
      v39 = v64;
    }
    if ( !current.fields.value )
      sub_2213CDC(v46, v45);
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)current.fields.value,
      _9__5_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v58 = (System_Collections_Generic_Dictionary_object__object__o *)v39->fields.listCache;
    v59 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)current.fields.value,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v58 )
      sub_2213CDC(v59, v60);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v58,
      current.fields.key,
      &v59->obj,
      (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    monitor = (int32_t)current.fields.value[1].monitor;
    v62 = HIDWORD(current.fields.value[1].monitor) + 1;
    LODWORD(current.fields.value[1].monitor) = 0;
    HIDWORD(current.fields.value[1].monitor) = v62;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)current.fields.value[1].klass, 0, monitor, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v66,
    (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597060E & 1) == 0 )
  {
    sub_2213A60(&CommandCodeSkillMaster___c_TypeInfo);
    byte_597060E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CommandCodeSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommandCodeSkillMaster___c_TypeInfo->static_fields->__9 = (struct CommandCodeSkillMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CommandCodeSkillMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return a->fields.priority - b->fields.priority;
}