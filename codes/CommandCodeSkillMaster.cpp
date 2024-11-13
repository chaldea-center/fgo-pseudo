void __fastcall CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_object__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B15FEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo, v7, v8);
    byte_4B15FEE = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    255,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
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

  if ( (byte_4B15FEC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__,
      *(_QWORD *)&commandCodeId,
      *(_QWORD *)&num);
    byte_4B15FEC = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
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

  if ( (byte_4B15FED & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&commandCodeId);
    byte_4B15FED = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeActiveSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x21
  Il2CppObject *v15; // x1
  const MethodInfo *v16; // x3
  int v17; // w22
  _QWORD *p_image; // x0
  int64_t v19; // x2
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  unsigned int v25; // w9
  unsigned int v26; // w10
  int v27; // w11
  __int64 v28; // x12
  int v29; // w12
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B15FF5 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v12, v13);
    byte_4B15FF5 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo,
                                                       *(_QWORD *)&commandCodeId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v17 = 0;
  while ( 1 )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( v17 >= *(_DWORD *)(p_image[23] + 36LL) )
      break;
    p_image = CommandCodeSkillMaster__getEntityListFromIdNum(this, commandCodeId, ++v17, v16);
    if ( p_image )
    {
      v24 = p_image[3];
      if ( v24 )
      {
        if ( (int)v24 >= 1 )
        {
          v25 = 0;
          v26 = 0;
          v27 = 1;
          while ( 1 )
          {
            v28 = p_image[(int)v26 + 4];
            if ( !v28 )
              break;
            v29 = *(_DWORD *)(v28 + 24);
            if ( v29 > v27 )
              v25 = v26;
            ++v26;
            if ( v29 > v27 )
              v27 = v29;
            if ( (_DWORD)v24 == v26 )
              goto LABEL_19;
          }
LABEL_27:
          sub_1BCAA3C(p_image, v15);
        }
        v25 = 0;
LABEL_19:
        if ( v25 >= (unsigned int)v24 )
          sub_1BCAA44(p_image, v15);
        if ( !v14 )
          goto LABEL_27;
        v15 = (Il2CppObject *)p_image[(int)v25 + 4];
        items = v14->fields._items;
        v31 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_27;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            v15,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v15;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v15, v19, (int32_t)v16, v20, v21, v22, v23);
        }
      }
    }
  }
  if ( !v14 )
    goto LABEL_27;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v14,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  v3 = commandCodeId;
  if ( (byte_4B15FF1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&commandCodeId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&CommandCodeSkillEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v15, v16);
    byte_4B15FF1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&commandCodeId = list;
        methodPtr_low = LOBYTE(CommandCodeSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (CommandCodeSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == CommandCodeSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v32 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v34[4] = *(Il2CppClass **)&commandCodeId;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)(v34 + 4),
              *(int64_t *)&commandCodeId,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, *(_QWORD *)&commandCodeId);
  }
LABEL_17:
  if ( !v22 )
    goto LABEL_19;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v22,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
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
  if ( (byte_4B15FF2 & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_1BCA7E0(
                                         &Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__,
                                         *(_QWORD *)&commandCodeId,
                                         *(_QWORD *)&num);
    byte_4B15FF2 = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_1BCAA3C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
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
  if ( (byte_4B15FEF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, *(_QWORD *)&commandCodeId, *(_QWORD *)&num);
    byte_4B15FEF = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62412480(v4, (System_String_o *)StringLiteral_1541/*":"*/, v5, 0LL);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  BalanceConfig_c *v18; // x0
  System_Int32_array *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_String_array *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_String_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  const MethodInfo *v41; // x4
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  MethodInfo *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v50; // x24
  unsigned int v51; // w23
  __int64 i; // x27
  CommandCodeSkillEntity_o *v53; // x0
  System_Int32_array *v54; // x8
  System_String_array *v55; // x8
  System_String_array *v56; // x10
  __int64 v57; // x10
  int v58; // w9
  System_String_array *v59; // x8
  unsigned __int64 max_length; // x9
  int64_t v61; // x1
  Il2CppClass **v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_String_array *v69; // x8
  unsigned __int64 v70; // x9
  int64_t v71; // x1
  Il2CppClass **v72; // x0
  System_Int32_array *v73; // x8
  System_String_array *v74; // x8
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_String_array *v81; // x8
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7

  if ( (byte_4B15FF4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, idList, titleList);
    sub_1BCA7E0(&int___TypeInfo, v14, v15);
    sub_1BCA7E0(&string___TypeInfo, v16, v17);
    byte_4B15FF4 = 1;
  }
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, idList);
    v18 = BalanceConfig_TypeInfo;
  }
  v19 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v18->static_fields->SvtPassiveSkillListMax);
  *idList = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_String_array *)sub_1BCA888(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v26;
  sub_1BCA784((PartyOrganizationUtility_o *)titleList, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_String_array *)sub_1BCA888(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v40, beforeClearQuestId, v41);
  v50 = 0LL;
  v51 = 0;
  for ( i = 32LL; ; i += 8LL )
  {
    v53 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v42);
      v53 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v50 >= *(int *)(v53[3].fields.endedAt + 36) )
      break;
    if ( !UseEntityList )
      goto LABEL_43;
    if ( v50 >= UseEntityList->max_length )
      goto LABEL_44;
    v53 = UseEntityList->m_Items[v50];
    v54 = *idList;
    if ( v53 )
    {
      if ( !v54 )
        goto LABEL_43;
      if ( v51 >= v54->max_length )
        goto LABEL_44;
      v54->m_Items[v51 + 1] = v53->fields.skillId;
      v55 = *titleList;
      if ( !*titleList )
        goto LABEL_43;
      v56 = *explanationList;
      if ( !*explanationList )
        goto LABEL_43;
      if ( v51 >= v55->max_length || v51 >= v56->max_length )
        goto LABEL_44;
      CommandCodeSkillEntity__getEffectExplanation(v53, &v55->m_Items[v51], &v56->m_Items[v51], 0, v45);
      if ( v50 != v51 )
        goto LABEL_32;
      goto LABEL_39;
    }
    if ( !v54 )
      goto LABEL_43;
    v57 = *(_QWORD *)&v54->max_length;
    if ( v50 >= (unsigned int)v57 )
      goto LABEL_44;
    v58 = v54->m_Items[v50 + 1];
    if ( v58 >= 1 )
    {
      if ( v50 != v51 )
      {
        if ( v51 >= (unsigned int)v57 )
          goto LABEL_44;
        v54->m_Items[v51 + 1] = v58;
        v59 = *titleList;
        if ( !*titleList )
LABEL_43:
          sub_1BCAA3C(v53, v42);
        max_length = v59->max_length;
        if ( v50 >= max_length || v51 >= (unsigned int)max_length )
          goto LABEL_44;
        v61 = (int64_t)v59->m_Items[v50];
        v62 = &v59->obj.klass + (int)v51;
        v62[4] = (Il2CppClass *)v61;
        sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 4), v61, v43, v44, (System_String_o *)v45, v46, v47, v48);
        v69 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        v70 = v69->max_length;
        if ( v50 >= v70 || v51 >= (unsigned int)v70 )
LABEL_44:
          sub_1BCAA44(v53, v42);
        v71 = (int64_t)v69->m_Items[v50];
        v72 = &v69->obj.klass + (int)v51;
        v72[4] = (Il2CppClass *)v71;
        sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 4), v71, v63, v64, v65, v66, v67, v68);
LABEL_32:
        v73 = *idList;
        if ( !*idList )
          goto LABEL_43;
        if ( v50 >= v73->max_length )
          goto LABEL_44;
        v73->m_Items[v50 + 1] = 0;
        v74 = *titleList;
        if ( !*titleList )
          goto LABEL_43;
        if ( v50 >= v74->max_length )
          goto LABEL_44;
        v74->m_Items[v50] = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)((char *)v74 + i),
          0LL,
          v43,
          v44,
          (System_String_o *)v45,
          v46,
          v47,
          v48);
        v81 = *explanationList;
        if ( !*explanationList )
          goto LABEL_43;
        if ( v50 >= v81->max_length )
          goto LABEL_44;
        v81->m_Items[v50] = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)((char *)v81 + i), 0LL, v75, v76, v77, v78, v79, v80);
      }
LABEL_39:
      ++v51;
    }
    ++v50;
  }
  if ( !v51 )
  {
    *idList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)idList, 0LL, v43, v44, (System_String_o *)v45, v46, v47, v48);
    *titleList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, 0LL, v82, v83, v84, v85, v86, v87);
    *explanationList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, 0LL, v88, v89, v90, v91, v92, v93);
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
        sub_1BCAA44(EntityListFromIdNum, v8);
      v12 = &v10->obj.klass + i;
      v13 = (CommandCodeSkillEntity_o *)v12[4];
      if ( !v13 )
        sub_1BCAA3C(EntityListFromIdNum, v8);
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
  __int64 v9; // x2
  BalanceConfig_c *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x3
  const MethodInfo *v13; // x5
  CommandCodeSkillEntity_array *v14; // x22
  signed __int64 v15; // x24
  PartyOrganizationUtility_o *i; // x23
  BalanceConfig_c *v17; // x0
  signed __int64 v18; // x25
  CommandCodeSkillEntity_o *UseEntity; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x24
  unsigned __int64 v28; // x25
  __int64 v30; // x0

  if ( (byte_4B15FF3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId, userId);
    sub_1BCA7E0(&CommandCodeSkillEntity___TypeInfo, v8, v9);
    byte_4B15FF3 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    v10 = BalanceConfig_TypeInfo;
  }
  v14 = (CommandCodeSkillEntity_array *)sub_1BCA888(
                                          CommandCodeSkillEntity___TypeInfo,
                                          (unsigned int)v10->static_fields->SvtPassiveSkillListMax);
  v15 = 0LL;
  for ( i = (PartyOrganizationUtility_o *)v14->m_Items; ; i = (PartyOrganizationUtility_o *)((char *)i + 8) )
  {
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( v15 >= v17->static_fields->SvtPassiveSkillListMax )
      break;
    v18 = v15 + 1;
    UseEntity = CommandCodeSkillMaster__getUseEntity(this, commandCodeId, (int)v15 + 1, v12, beforeClearQuestId, v13);
    if ( !v14 )
      sub_1BCAA3C(UseEntity, v20);
    v27 = (int64_t)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_1BCA91C(UseEntity, v14->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v30 = sub_1BCAA60(0LL);
        sub_1BCA908(v30, 0LL);
      }
    }
    v28 = v18 - 1;
    if ( v28 >= v14->max_length )
      sub_1BCAA44(UseEntity, v20);
    i->klass = (PartyOrganizationUtility_c *)v27;
    sub_1BCA784(i, v27, v21, v22, v23, v24, v25, v26);
    v15 = v28 + 1;
  }
  return v14;
}


bool __fastcall CommandCodeSkillMaster__preProcess(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_Dictionary_object__object__o *v60; // x20
  __int64 v61; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  const MethodInfo *v73; // x3
  Il2CppObject *v74; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v77; // x1
  Il2CppObject *v78; // x23
  __int64 v79; // x1
  int64_t v80; // x2
  __int64 v81; // x3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_List_object__o *v86; // x24
  System_Collections_Generic_List_object__o *v87; // x0
  Il2CppClass *v88; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  void **v91; // x8
  System_Collections_Generic_IEnumerator_T__c *v92; // x8
  __int64 v93; // x9
  int32_t *v94; // x10
  __int64 v95; // x0
  _BOOL8 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  CommandCodeSkillMaster___c_c *v100; // x8
  Il2CppObject *v101; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__5_0; // x23
  Il2CppObject *v104; // x24
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  System_Collections_Generic_Dictionary_object__object__o *v112; // x23
  System_Object_array *v113; // x0
  __int64 v114; // x1
  int32_t monitor; // w2
  int v116; // w8
  CommandCodeSkillMaster_o *v118; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v119; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v120; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B15FF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&CommandCodeSkillEntity_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Comparison_CommandCodeSkillEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__,
      v14,
      v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__, v18, v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__,
      v20,
      v21);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo, v22, v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__,
      v26,
      v27);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__,
      v28,
      v29);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v32, v33);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v34, v35);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__,
      v36,
      v37);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__,
      v38,
      v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v48, v49);
    sub_1BCA7E0(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, v52, v53);
    sub_1BCA7E0(&CommandCodeSkillMaster___c_TypeInfo, v54, v55);
    byte_4B15FF0 = 1;
  }
  value = 0LL;
  memset(&v120, 0, sizeof(v120));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v60 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo,
                                                                     v57,
                                                                     v58,
                                                                     v59);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v60,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v118 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v61);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v64 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v64;
        p_offset += 4;
        if ( !v64 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v67 = Enumerator->klass;
    v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v69 = &v67->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v69 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v68;
        v69 += 4;
        if ( !v68 )
          goto LABEL_17;
      }
      v70 = (__int64)&v67->vtable[*v69].method;
    }
    else
    {
LABEL_17:
      v70 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v71 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
            Enumerator,
            *(_QWORD *)(v70 + 8));
    v74 = (Il2CppObject *)v71;
    if ( !v71 )
      sub_1BCAA3C(0LL, v72);
    methodPtr_low = LOBYTE(CommandCodeSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v71 + 304LL) < (unsigned int)methodPtr_low
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v71 + 200LL) + 8 * methodPtr_low - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      sub_1BCACFC(v71);
LABEL_51:
      sub_1BCAA3C(v87, v79);
    }
    PriorityKey = (Il2CppObject *)CommandCodeSkillMaster__getPriorityKey(
                                    (CommandCodeSkillMaster_o *)v71,
                                    *(_DWORD *)(v71 + 16),
                                    *(_DWORD *)(v71 + 20),
                                    v73);
    if ( !v60 )
      sub_1BCAA3C(PriorityKey, v77);
    v78 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v60,
            PriorityKey,
            &value,
            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v86 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo,
                                                           v79,
                                                           v80,
                                                           v81);
      System_Collections_Generic_List_object____ctor(
        v86,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (Il2CppObject *)v86;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v60,
        v78,
        (Il2CppObject *)v86,
        (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    v87 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v88 = value[1].klass;
    v89 = Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v88 )
      sub_1BCAA3C(v87, v79);
    size = v87->fields._size;
    if ( (unsigned int)size >= LODWORD(v88->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v87,
        v74,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v88->_1.image + size;
      v87->fields._size = size + 1;
      v91[4] = v74;
      sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v74, v80, v81, v82, v83, v84, v85);
    }
  }
  v92 = Enumerator->klass;
  v93 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v94 = &v92->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
    {
      --v93;
      v94 += 4;
      if ( !v93 )
        goto LABEL_34;
    }
    v95 = (__int64)&v92->vtable[*v94].method;
  }
  else
  {
LABEL_34:
    v95 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v95)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v95 + 8));
  if ( !v60 )
LABEL_57:
    sub_1BCAA3C(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v119,
    v60,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v120 = v119;
  while ( 1 )
  {
    v96 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v120,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    if ( !v96 )
      break;
    v100 = CommandCodeSkillMaster___c_TypeInfo;
    key = v120.fields._current.fields.key;
    v101 = v120.fields._current.fields.value;
    if ( !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo, v97);
      v100 = CommandCodeSkillMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v100->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v100->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v100, v97);
        v100 = CommandCodeSkillMaster___c_TypeInfo;
      }
      v104 = (Il2CppObject *)v100->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_CommandCodeSkillEntity__TypeInfo, v97, v98, v99);
      System_Comparison_object____ctor(_9__5_0, v104, Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, 0LL);
      static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111);
    }
    if ( !v101 )
      sub_1BCAA3C(v96, v97);
    System_Collections_Generic_List_object___Sort_56244000(
      (System_Collections_Generic_List_object__o *)v101,
      _9__5_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v112 = (System_Collections_Generic_Dictionary_object__object__o *)v118->fields.listCache;
    v113 = System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)v101,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v112 )
      sub_1BCAA3C(v113, v114);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v112,
      key,
      &v113->obj,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    monitor = (int32_t)v101[1].monitor;
    v116 = HIDWORD(v101[1].monitor) + 1;
    LODWORD(v101[1].monitor) = 0;
    HIDWORD(v101[1].monitor) = v116;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v101[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v120,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v60,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void __fastcall CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15FF6 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCodeSkillMaster___c_TypeInfo, v1, v2);
    byte_4B15FF6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CommandCodeSkillMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CommandCodeSkillMaster___c_TypeInfo->static_fields->__9 = (struct CommandCodeSkillMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CommandCodeSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}