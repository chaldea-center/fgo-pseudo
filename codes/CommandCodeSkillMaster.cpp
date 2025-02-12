void __fastcall CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BC7897 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo, v4);
    byte_4BC7897 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3302340 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v5;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    259,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
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

  if ( (byte_4BC7895 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__,
      *(_QWORD *)&commandCodeId);
    byte_4BC7895 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_324D130 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
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

  if ( (byte_4BC7896 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__, entity);
    byte_4BC7896 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
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
  Il2CppObject *v10; // x1
  const MethodInfo *v11; // x3
  int v12; // w22
  _QWORD *p_image; // x0
  int64_t v14; // x2
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x8
  unsigned int v20; // w9
  unsigned int v21; // w10
  int v22; // w11
  __int64 v23; // x12
  int v24; // w12
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4BC789E & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v8);
    byte_4BC789E = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v12 = 0;
  while ( 1 )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( v12 >= *(_DWORD *)(p_image[23] + 36LL) )
      break;
    p_image = CommandCodeSkillMaster__getEntityListFromIdNum(this, commandCodeId, ++v12, v11);
    if ( p_image )
    {
      v19 = p_image[3];
      if ( v19 )
      {
        if ( (int)v19 >= 1 )
        {
          v20 = 0;
          v21 = 0;
          v22 = 1;
          while ( 1 )
          {
            v23 = p_image[(int)v21 + 4];
            if ( !v23 )
              break;
            v24 = *(_DWORD *)(v23 + 24);
            if ( v24 > v22 )
              v20 = v21;
            ++v21;
            if ( v24 > v22 )
              v22 = v24;
            if ( (_DWORD)v19 == v21 )
              goto LABEL_19;
          }
LABEL_27:
          sub_1C1AE30(p_image, v10);
        }
        v20 = 0;
LABEL_19:
        if ( v20 >= (unsigned int)v19 )
          sub_1C1AE38(p_image, v10);
        if ( !v9 )
          goto LABEL_27;
        v10 = (Il2CppObject *)p_image[(int)v20 + 4];
        items = v9->fields._items;
        v26 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_27;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v10,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v10;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v10, v14, (int32_t)v11, v15, v16, v17, v18);
        }
      }
    }
  }
  if ( !v9 )
    goto LABEL_27;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  v3 = commandCodeId;
  if ( (byte_4BC789A & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Count__,
      *(_QWORD *)&commandCodeId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v9);
    byte_4BC789A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&commandCodeId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v21 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v23[4] = *(Il2CppClass **)&commandCodeId;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)(v23 + 4),
              *(int64_t *)&commandCodeId,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C1AE30(list, *(_QWORD *)&commandCodeId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v12,
                                           (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
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
  __int64 v8; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4BC789B & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_1C1ABD4(
                                         &Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__,
                                         *(_QWORD *)&commandCodeId);
    byte_4BC789B = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_1C1AE30(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
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
  if ( (byte_4BC7898 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1546/*":"*/, *(_QWORD *)&commandCodeId);
    byte_4BC7898 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_63051628(v4, (System_String_o *)StringLiteral_1546/*":"*/, v5, 0LL);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_array *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_String_array *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  const MethodInfo *v39; // x4
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  MethodInfo *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v48; // x24
  unsigned int v49; // w23
  __int64 i; // x27
  CommandCodeSkillEntity_o *v51; // x0
  System_Int32_array *v52; // x8
  System_String_array *v53; // x8
  System_String_array *v54; // x10
  __int64 v55; // x10
  int v56; // w9
  System_String_array *v57; // x8
  unsigned __int64 max_length; // x9
  int64_t v59; // x1
  Il2CppClass **v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_String_array *v67; // x8
  unsigned __int64 v68; // x9
  int64_t v69; // x1
  Il2CppClass **v70; // x0
  System_Int32_array *v71; // x8
  System_String_array *v72; // x8
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_String_array *v79; // x8
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7

  if ( (byte_4BC789D & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, idList);
    sub_1C1ABD4(&int___TypeInfo, v14);
    sub_1C1ABD4(&string___TypeInfo, v15);
    byte_4BC789D = 1;
  }
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, (unsigned int)v16->static_fields->SvtPassiveSkillListMax);
  *idList = v17;
  sub_1C1AB78((PartyOrganizationUtility_o *)idList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_String_array *)sub_1C1AC7C(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v24;
  sub_1C1AB78((PartyOrganizationUtility_o *)titleList, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_String_array *)sub_1C1AC7C(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v31;
  sub_1C1AB78((PartyOrganizationUtility_o *)explanationList, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v38, beforeClearQuestId, v39);
  v48 = 0LL;
  v49 = 0;
  for ( i = 32LL; ; i += 8LL )
  {
    v51 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v51 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v48 >= *(int *)(v51[3].fields.endedAt + 36) )
      break;
    if ( !UseEntityList )
      goto LABEL_43;
    if ( v48 >= UseEntityList->max_length )
      goto LABEL_44;
    v51 = UseEntityList->m_Items[v48];
    v52 = *idList;
    if ( v51 )
    {
      if ( !v52 )
        goto LABEL_43;
      if ( v49 >= v52->max_length )
        goto LABEL_44;
      v52->m_Items[v49 + 1] = v51->fields.skillId;
      v53 = *titleList;
      if ( !*titleList )
        goto LABEL_43;
      v54 = *explanationList;
      if ( !*explanationList )
        goto LABEL_43;
      if ( v49 >= v53->max_length || v49 >= v54->max_length )
        goto LABEL_44;
      CommandCodeSkillEntity__getEffectExplanation(v51, &v53->m_Items[v49], &v54->m_Items[v49], 0, v43);
      if ( v48 != v49 )
        goto LABEL_32;
      goto LABEL_39;
    }
    if ( !v52 )
      goto LABEL_43;
    v55 = *(_QWORD *)&v52->max_length;
    if ( v48 >= (unsigned int)v55 )
      goto LABEL_44;
    v56 = v52->m_Items[v48 + 1];
    if ( v56 >= 1 )
    {
      if ( v48 != v49 )
      {
        if ( v49 >= (unsigned int)v55 )
          goto LABEL_44;
        v52->m_Items[v49 + 1] = v56;
        v57 = *titleList;
        if ( !*titleList )
LABEL_43:
          sub_1C1AE30(v51, v40);
        max_length = v57->max_length;
        if ( v48 >= max_length || v49 >= (unsigned int)max_length )
          goto LABEL_44;
        v59 = (int64_t)v57->m_Items[v48];
        v60 = &v57->obj.klass + (int)v49;
        v60[4] = (Il2CppClass *)v59;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v60 + 4), v59, v41, v42, (System_String_o *)v43, v44, v45, v46);
        v67 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        v68 = v67->max_length;
        if ( v48 >= v68 || v49 >= (unsigned int)v68 )
LABEL_44:
          sub_1C1AE38(v51, v40);
        v69 = (int64_t)v67->m_Items[v48];
        v70 = &v67->obj.klass + (int)v49;
        v70[4] = (Il2CppClass *)v69;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v70 + 4), v69, v61, v62, v63, v64, v65, v66);
LABEL_32:
        v71 = *idList;
        if ( !*idList )
          goto LABEL_43;
        if ( v48 >= v71->max_length )
          goto LABEL_44;
        v71->m_Items[v48 + 1] = 0;
        v72 = *titleList;
        if ( !*titleList )
          goto LABEL_43;
        if ( v48 >= v72->max_length )
          goto LABEL_44;
        v72->m_Items[v48] = 0LL;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)((char *)v72 + i),
          0LL,
          v41,
          v42,
          (System_String_o *)v43,
          v44,
          v45,
          v46);
        v79 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        if ( v48 >= v79->max_length )
          goto LABEL_44;
        v79->m_Items[v48] = 0LL;
        sub_1C1AB78((PartyOrganizationUtility_o *)((char *)v79 + i), 0LL, v73, v74, v75, v76, v77, v78);
      }
LABEL_39:
      ++v49;
    }
    ++v48;
  }
  if ( !v49 )
  {
    *idList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)idList, 0LL, v41, v42, (System_String_o *)v43, v44, v45, v46);
    *titleList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)titleList, 0LL, v80, v81, v82, v83, v84, v85);
    *explanationList = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)explanationList, 0LL, v86, v87, v88, v89, v90, v91);
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
        sub_1C1AE38(EntityListFromIdNum, v8);
      v12 = &v10->obj.klass + i;
      v13 = (CommandCodeSkillEntity_o *)v12[4];
      if ( !v13 )
        sub_1C1AE30(EntityListFromIdNum, v8);
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
  PartyOrganizationUtility_o *i; // x23
  BalanceConfig_c *v15; // x0
  signed __int64 v16; // x25
  CommandCodeSkillEntity_o *UseEntity; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x24
  unsigned __int64 v26; // x25
  __int64 v28; // x0

  if ( (byte_4BC789C & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1C1ABD4(&CommandCodeSkillEntity___TypeInfo, v8);
    byte_4BC789C = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v12 = (CommandCodeSkillEntity_array *)sub_1C1AC7C(
                                          CommandCodeSkillEntity___TypeInfo,
                                          (unsigned int)v9->static_fields->SvtPassiveSkillListMax);
  v13 = 0LL;
  for ( i = (PartyOrganizationUtility_o *)v12->m_Items; ; i = (PartyOrganizationUtility_o *)((char *)i + 8) )
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
      sub_1C1AE30(UseEntity, v18);
    v25 = (int64_t)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_1C1AD10(UseEntity, v12->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v28 = sub_1C1AE54(0LL);
        sub_1C1ACFC(v28, 0LL);
      }
    }
    v26 = v16 - 1;
    if ( v26 >= v12->max_length )
      sub_1C1AE38(UseEntity, v18);
    i->klass = (PartyOrganizationUtility_c *)v25;
    sub_1C1AB78(i, v25, v19, v20, v21, v22, v23, v24);
    v13 = v26 + 1;
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
  System_Collections_Generic_Dictionary_object__object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x23
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_object__o *v56; // x24
  System_Collections_Generic_List_object__o *v57; // x0
  Il2CppClass *v58; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  void **v61; // x8
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  _BOOL8 v66; // x0
  __int64 v67; // x1
  CommandCodeSkillMaster___c_c *v68; // x8
  Il2CppObject *v69; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v72; // x24
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Collections_Generic_Dictionary_object__object__o *v80; // x23
  System_Object_array *v81; // x0
  __int64 v82; // x1
  int32_t monitor; // w2
  int v84; // w8
  CommandCodeSkillMaster_o *v86; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v87; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v88; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BC7899 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__GetEnumerator__, method);
    sub_1C1ABD4(&CommandCodeSkillEntity_TypeInfo, v3);
    sub_1C1ABD4(&System_Comparison_CommandCodeSkillEntity__TypeInfo, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__, v11);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo, v12);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__,
      v13);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__,
      v14);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__,
      v15);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v16);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo, v17);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v21);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__, v22);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__, v23);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v24);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v25);
    sub_1C1ABD4(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v26);
    sub_1C1ABD4(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, v27);
    sub_1C1ABD4(&CommandCodeSkillMaster___c_TypeInfo, v28);
    byte_4BC7899 = 1;
  }
  value = 0LL;
  memset(&v88, 0, sizeof(v88));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3302E78 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v30,
    (const MethodInfo_3302340 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v86 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_CommandCodeSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_17;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_17:
      v40 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_CommandCodeSkillEntity__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v44 = (Il2CppObject *)v41;
    if ( !v41 )
      sub_1C1AE30(0LL, v42);
    methodPtr_low = LOBYTE(CommandCodeSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      sub_1C1B0F0(v41);
LABEL_51:
      sub_1C1AE30(v57, v49);
    }
    PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(
                                    (CommandCodeSkillMaster_o *)v41,
                                    *(_DWORD *)(v41 + 16),
                                    *(_DWORD *)(v41 + 20),
                                    v43);
    if ( !v30 )
      sub_1C1AE30(PriorityKey, v47);
    v48 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v30,
            PriorityKey,
            &value,
            (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v56 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v56,
        (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (Il2CppObject *)v56;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v30,
        v48,
        (Il2CppObject *)v56,
        (const MethodInfo_3302CDC *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    v57 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v58 = value[1].klass;
    v59 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v58 )
      sub_1C1AE30(v57, v49);
    size = v57->fields._size;
    if ( (unsigned int)size >= LODWORD(v58->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v57,
        v44,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->_1.image + size;
      v57->fields._size = size + 1;
      v61[4] = v44;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v44, v50, v51, v52, v53, v54, v55);
    }
  }
  v62 = Enumerator->klass;
  v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_34;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_34:
    v65 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v65 + 8));
  if ( !v30 )
LABEL_57:
    sub_1C1AE30(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v87,
    v30,
    (const MethodInfo_3303120 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v66 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v88,
            (const MethodInfo_33FF700 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    if ( !v66 )
      break;
    v68 = CommandCodeSkillMaster___c_TypeInfo;
    key = v88.fields._current.fields.key;
    v69 = v88.fields._current.fields.value;
    if ( !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo);
      v68 = CommandCodeSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v68->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68);
        v68 = CommandCodeSkillMaster___c_TypeInfo;
      }
      v72 = (Il2CppObject *)v68->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_CommandCodeSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v72, Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, 0LL);
      static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
    }
    if ( !v69 )
      sub_1C1AE30(v66, v67);
    System_Collections_Generic_List_object___Sort_56877908(
      (System_Collections_Generic_List_object__o *)v69,
      _9__5_0,
      (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v80 = (System_Collections_Generic_Dictionary_object__object__o *)v86->fields.listCache;
    v81 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v69,
            (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v80 )
      sub_1C1AE30(v81, v82);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v80,
      key,
      &v81->obj,
      (const MethodInfo_3302CDC *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    monitor = (int32_t)v69[1].monitor;
    v84 = HIDWORD(v69[1].monitor) + 1;
    LODWORD(v69[1].monitor) = 0;
    HIDWORD(v69[1].monitor) = v84;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v69[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v88,
    (const MethodInfo_33FF820 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v30,
    (const MethodInfo_3302E78 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void __fastcall CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC789F & 1) == 0 )
  {
    sub_1C1ABD4(&CommandCodeSkillMaster___c_TypeInfo, v1);
    byte_4BC789F = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(CommandCodeSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommandCodeSkillMaster___c_TypeInfo->static_fields->__9 = (struct CommandCodeSkillMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)CommandCodeSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
  return a->fields.priority - b->fields.priority;
}