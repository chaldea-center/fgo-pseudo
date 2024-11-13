void __fastcall QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16673 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__, method, v2);
    byte_4B16673 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    73,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetClearedGroupOpenQuestListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_int__o *v42; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_List_object__o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_List_int__o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Collections_Generic_List_int__o *v54; // x24
  __int64 v55; // x1
  int64_t list; // x0
  int64_t v57; // x2
  __int64 v58; // x3
  int v59; // w25
  int32_t i; // w26
  int64_t v61; // x27
  __int64 methodPtr_low; // x10
  int v63; // w8
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Int32_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  char *v71; // x8
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  __int64 v76; // x8
  System_Collections_Generic_List_int__o *v77; // x0
  struct System_Int32_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  int v81; // w8
  int v82; // w8
  System_Comparison_T__o *v83; // x22
  Il2CppObject *v84; // x23
  struct QuestGroupMaster___c_StaticFields *static_fields; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int v92; // w26
  char v93; // w23
  int32_t v94; // w22
  int v95; // w28
  int v96; // w25
  int32_t v97; // w24
  int v98; // w8
  struct System_Int32_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10

  if ( (byte_4B16679 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_QuestGroupEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&CondType_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v34, v35);
    sub_1BCA7E0(&QuestGroupEntity_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__, v38, v39);
    sub_1BCA7E0(&QuestGroupMaster___c_TypeInfo, v40, v41);
    byte_4B16679 = 1;
  }
  v42 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v46 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestGroupEntity__TypeInfo,
                                                       v43,
                                                       v44,
                                                       v45);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v50 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v47,
                                                    v48,
                                                    v49);
  System_Collections_Generic_List_int____ctor(
    v50,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v54 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v51,
                                                    v52,
                                                    v53);
  System_Collections_Generic_List_int____ctor(
    v54,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_68;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v59 = list;
    for ( i = 0; v59 != i; ++i )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_68;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        i,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        continue;
      v61 = list;
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
      {
        continue;
      }
      v63 = *(_DWORD *)(list + 20);
      if ( v63 == 1 )
      {
        if ( *(_DWORD *)(list + 24) == eventId )
        {
          if ( !v54 )
            goto LABEL_68;
          list = System_Collections_Generic_List_int___Remove(
                   v54,
                   *(_DWORD *)(list + 16),
                   (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( (list & 1) != 0 )
          {
LABEL_23:
            if ( !v46 )
              goto LABEL_68;
            items = v46->fields._items;
            v73 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
            ++v46->fields._version;
            if ( !items )
              goto LABEL_68;
            size = v46->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v46,
                (Il2CppObject *)v61,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
            }
            else
            {
              v75 = &items->obj.klass + size;
              v46->fields._size = size + 1;
              v75[4] = (Il2CppClass *)v61;
              sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), v61, v57, v58, v64, v65, v66, v67);
            }
            continue;
          }
          if ( !v50 )
            goto LABEL_68;
          v55 = *(unsigned int *)(v61 + 16);
          v78 = v50->fields._items;
          v79 = Method_System_Collections_Generic_List_int__Add__;
          ++v50->fields._version;
          if ( !v78 )
            goto LABEL_68;
          v80 = v50->fields._size;
          if ( (unsigned int)v80 >= v78->max_length )
          {
            v76 = v79[4];
            v77 = v50;
            goto LABEL_35;
          }
          v71 = (char *)v78 + 4 * v80;
          v50->fields._size = v80 + 1;
          goto LABEL_33;
        }
      }
      else if ( v63 == 2 )
      {
        if ( !v50 )
          goto LABEL_68;
        list = System_Collections_Generic_List_int___Remove(
                 v50,
                 *(_DWORD *)(list + 16),
                 (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( (list & 1) != 0 )
          goto LABEL_23;
        if ( !v54 )
          goto LABEL_68;
        v55 = *(unsigned int *)(v61 + 16);
        v68 = v54->fields._items;
        v69 = Method_System_Collections_Generic_List_int__Add__;
        ++v54->fields._version;
        if ( !v68 )
          goto LABEL_68;
        v70 = v54->fields._size;
        if ( (unsigned int)v70 >= v68->max_length )
        {
          v76 = v69[4];
          v77 = v54;
LABEL_35:
          System_Collections_Generic_List_int___AddWithResize(
            v77,
            v55,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v76 + 192) + 112LL));
          continue;
        }
        v71 = (char *)v68 + 4 * v70;
        v54->fields._size = v70 + 1;
LABEL_33:
        *((_DWORD *)v71 + 8) = v55;
      }
    }
  }
  if ( !v50 )
    goto LABEL_68;
  v81 = v50->fields._version + 1;
  v50->fields._size = 0;
  v50->fields._version = v81;
  if ( !v54 )
    goto LABEL_68;
  v82 = v54->fields._version + 1;
  v54->fields._size = 0;
  v54->fields._version = v82;
  list = (int64_t)QuestGroupMaster___c_TypeInfo;
  if ( !QuestGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestGroupMaster___c_TypeInfo, v55);
    list = (int64_t)QuestGroupMaster___c_TypeInfo;
  }
  v83 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v83 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list, v55);
      list = (int64_t)QuestGroupMaster___c_TypeInfo;
    }
    v84 = **(Il2CppObject ***)(list + 184);
    v83 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_QuestGroupEntity__TypeInfo, v55, v57, v58);
    System_Comparison_object____ctor(
      v83,
      v84,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      0LL);
    static_fields = QuestGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)v83;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__10_0, (int64_t)v83, v86, v87, v88, v89, v90, v91);
  }
  if ( !v46 )
    goto LABEL_68;
  System_Collections_Generic_List_object___Sort_56244000(
    v46,
    v83,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  v92 = v46->fields._size;
  if ( v92 < 1 )
    return v42;
  v93 = 0;
  v94 = 0;
  v95 = -1;
  do
  {
    list = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v46,
                      v94,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_68;
    v96 = *(_DWORD *)(list + 24);
    list = (int64_t)System_Collections_Generic_List_object___get_Item(
                      v46,
                      v94,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_68;
    v97 = *(_DWORD *)(list + 16);
    if ( v96 == v95 )
    {
      if ( (v93 & 1) != 0 )
      {
        v93 = 1;
        goto LABEL_59;
      }
    }
    else
    {
      if ( (v93 & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_68;
        System_Collections_Generic_List_int___AddRange(
          v42,
          (System_Collections_Generic_IEnumerable_T__o *)v50,
          (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v95 = v96;
      v98 = v50->fields._version + 1;
      v50->fields._size = 0;
      v50->fields._version = v98;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v55);
    list = CondType__IsQuestClear_38310172(v97, -1, 0, 0LL);
    v93 = list;
LABEL_59:
    v99 = v50->fields._items;
    v100 = Method_System_Collections_Generic_List_int__Add__;
    ++v50->fields._version;
    if ( !v99 )
      goto LABEL_68;
    v101 = v50->fields._size;
    if ( (unsigned int)v101 >= v99->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v50,
        v97,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    }
    else
    {
      v50->fields._size = v101 + 1;
      v99->m_Items[v101 + 1] = v97;
    }
    ++v94;
  }
  while ( v92 != v94 );
  if ( (v93 & 1) != 0 )
  {
    if ( v42 )
    {
      System_Collections_Generic_List_int___AddRange(
        v42,
        (System_Collections_Generic_IEnumerable_T__o *)v50,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
      return v42;
    }
LABEL_68:
    sub_1BCAA3C(list, v55);
  }
  return v42;
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

  if ( (byte_4B16671 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&type);
    byte_4B16671 = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestGroupEntity__o *__fastcall QuestGroupMaster__GetEntityListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v17; // x22
  int64_t v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B16678 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&groupId,
      *(_QWORD *)&type);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestGroupEntity_TypeInfo, v15, v16);
    byte_4B16678 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestGroupEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       *(_QWORD *)&type,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v22,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = (int64_t)list;
        methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestGroupEntity_TypeInfo
          && HIDWORD(list->fields.items) == type
          && LODWORD(list[1].klass) == groupId )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v31 = Method_System_Collections_Generic_List_QuestGroupEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v18;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v18, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      if ( v21 == ++v22 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v17;
    }
LABEL_19:
    sub_1BCAA3C(list, v18);
  }
  return (System_Collections_Generic_List_QuestGroupEntity__o *)v17;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  System_Collections_ObjectModel_Collection_T__o *v17; // x25
  __int64 methodPtr_low; // x10
  int v19; // w29
  int v20; // w19
  int32_t i; // w26
  __int64 v22; // x10
  int items_high; // w8
  int32_t v25; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B1667B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&tower);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&QuestGroupEntity_TypeInfo, v11, v12);
    byte_4B1667B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_27:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v15 = Count;
  v16 = 0;
  v25 = floor;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v16,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v17 = list;
    methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestGroupEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( HIDWORD(list->fields.items) == 9 && LODWORD(list[1].klass) == floor )
    {
      v19 = 0;
      v20 = 0;
      for ( i = 0; i != v15; ++i )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          goto LABEL_27;
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   i,
                                                                   (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_27;
        v22 = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)v22
          || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v22 - 1] != QuestGroupEntity_TypeInfo )
        {
          goto LABEL_27;
        }
        if ( LODWORD(list->fields.items) == LODWORD(v17->fields.items) )
        {
          items_high = HIDWORD(list->fields.items);
          if ( items_high == 8 )
          {
            v20 |= LODWORD(list[1].klass) == tower;
          }
          else if ( items_high == 1 )
          {
            v19 |= LODWORD(list[1].klass) == eventId;
          }
        }
      }
      floor = v25;
      if ( (v20 & v19 & 1) != 0 )
        return (int32_t)v17->fields.items;
    }
    if ( ++v16 == v15 )
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16674 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      *(_QWORD *)&type);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&QuestGroupEntity_TypeInfo, v9, v10);
    byte_4B16674 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BCAA3C(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                        list,
                        v14,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( v13 == ++v14 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetInterludeQuestIdList(
        QuestGroupMaster_o *this,
        int32_t questId,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  unsigned int *v33; // x0
  __int64 v34; // x1
  __int64 methodPtr_low; // x9
  __int64 v36; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B1667D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    sub_1BCA7E0(&QuestGroupEntity_TypeInfo, v18, v19);
    byte_4B1667D = 1;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&questId,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                            Enumerator,
                            *(_QWORD *)(v32 + 8));
    if ( !v33 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
    {
      sub_1BCACFC(v33);
LABEL_37:
      sub_1BCAA3C(v33, v34);
    }
    v36 = v33[4];
    if ( (_DWORD)v36 != questId && v33[5] == 13 && v33[6] == questId )
    {
      if ( !v20 )
        sub_1BCAA3C(v33, v36);
      items = v20->fields._items;
      v38 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1BCAA3C(v33, v36);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          v36,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = size + 1;
        items->m_Items[size + 1] = v36;
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_33;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_33:
    v43 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetListOfQuestIdByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v17; // x22
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_4B16677 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&groupId,
      *(_QWORD *)&type);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestGroupEntity_TypeInfo, v15, v16);
    byte_4B16677 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&groupId,
                                                    *(_QWORD *)&type,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v22,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestGroupEntity_TypeInfo
          && HIDWORD(list->fields.items) == type
          && LODWORD(list[1].klass) == groupId )
        {
          if ( !v17 )
            break;
          items_low = LODWORD(list->fields.items);
          items = v17->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v17,
              items_low,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = size + 1;
            items->m_Items[size + 1] = items_low;
          }
        }
      }
      if ( v21 == ++v22 )
        return v17;
    }
LABEL_19:
    sub_1BCAA3C(list, items_low);
  }
  return v17;
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

  if ( (byte_4B16676 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&groupId, *(_QWORD *)&type);
    byte_4B16676 = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_1BCAA3C(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetQuestIdListByGroupType(
        QuestGroupMaster_o *this,
        int32_t type,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  unsigned int *v33; // x0
  __int64 v34; // x1
  __int64 methodPtr_low; // x10
  __int64 v36; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B1667C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&type,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    sub_1BCA7E0(&QuestGroupEntity_TypeInfo, v18, v19);
    byte_4B1667C = 1;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&type,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                            Enumerator,
                            *(_QWORD *)(v32 + 8));
    if ( v33 )
    {
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) == QuestGroupEntity_TypeInfo
        && v33[5] == type )
      {
        if ( !v20 )
          sub_1BCAA3C(v33, v34);
        v36 = v33[4];
        items = v20->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1BCAA3C(v33, v36);
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v20,
            v36,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v20->fields._size = size + 1;
          items->m_Items[size + 1] = v36;
        }
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_31:
    v43 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestGroupMaster__GetQuestIdToGroupIdDict(
        QuestGroupMaster_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        int32_t type,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_int__o *v39; // x21
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *GroupId; // x0
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_Dictionary_int__int__o *v45; // x22
  _BOOL8 v46; // x0
  __int64 v47; // x1
  int size; // w8
  int32_t Item; // w23
  int32_t v50; // w0
  const MethodInfo *v51; // x3
  int32_t Count; // w0
  int32_t v53; // w23
  int32_t v54; // w24
  int32_t *v55; // x0
  int32_t *v56; // x25
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_Enumerator_int__o v59; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B16675 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questIdList,
      *(_QWORD *)&type);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__BinarySearch__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v35, v36);
    sub_1BCA7E0(&QuestGroupEntity_TypeInfo, v37, v38);
    byte_4B16675 = 1;
  }
  memset(&i, 0, sizeof(i));
  v39 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    questIdList,
                                                    *(_QWORD *)&type,
                                                    method);
  System_Collections_Generic_List_int____ctor_56116492(
    v39,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  if ( !v39 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort(
    v39,
    (const MethodInfo_358657C *)Method_System_Collections_Generic_List_int__Sort__);
  v45 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v42,
                                                               v43,
                                                               v44);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v45,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    v39,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v59;
        ;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v45,
          i.fields._current,
          0,
          (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    v46 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v46 )
      break;
    if ( !v45 )
      sub_1BCAA3C(v46, v47);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v39->fields._size;
  if ( size > 0 )
  {
    if ( size == 1 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v39,
               0,
               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      v50 = System_Collections_Generic_List_int___get_Item(
              v39,
              0,
              (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)QuestGroupMaster__GetGroupId(
                                                                                                  this,
                                                                                                  v50,
                                                                                                  type,
                                                                                                  v51);
      if ( v45 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v45,
          Item,
          (int32_t)GroupId,
          (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v45;
      }
    }
    else
    {
      GroupId = this->fields.list;
      if ( GroupId )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        if ( Count < 1 )
          return v45;
        v53 = Count;
        v54 = 0;
        while ( 1 )
        {
          GroupId = this->fields.list;
          if ( !GroupId )
            break;
          v55 = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                             (System_Collections_ObjectModel_Collection_T__o *)GroupId,
                             v54,
                             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !v55 )
            goto LABEL_29;
          v56 = v55;
          methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v55 + 304LL) < (unsigned int)methodPtr_low )
            goto LABEL_29;
          if ( *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v55 + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
            goto LABEL_29;
          if ( v55[5] != type )
            goto LABEL_29;
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_Generic_List_int___BinarySearch_56119136(v39, v55[4], (const MethodInfo_3584F60 *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) != 0 )
            goto LABEL_29;
          if ( !v45 )
            break;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v45,
            v56[4],
            v56[6],
            (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          System_Collections_Generic_List_int___Remove(
            v39,
            v56[4],
            (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( v39->fields._size >= 1 )
          {
LABEL_29:
            if ( v53 != ++v54 )
              continue;
          }
          return v45;
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(GroupId, v41);
  }
  return v45;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__IsEntryEvent(QuestGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
{
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
  int64_t list; // x0
  int32_t Count; // w21
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v18; // x22
  int32_t v19; // w23
  bool v20; // w28
  int64_t v21; // x24
  __int64 methodPtr_low; // x10
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4B1667A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestGroupEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B1667A = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count >= 1 )
  {
    v18 = (UserQuestMaster_o *)MasterData_object;
    v19 = 0;
    v20 = 1;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v19,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v21 = list;
      methodPtr_low = LOBYTE(QuestGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestGroupEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 20) == 1 && *(_DWORD *)(list + 24) == eventId )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
        list = NetworkManager__get_UserId(0LL);
        if ( !v18 )
          break;
        EntityFromId = UserQuestMaster__getEntityFromId(v18, list, *(_DWORD *)(v21 + 16), 0LL);
        if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
          return v20;
      }
      v20 = ++v19 < Count;
      if ( Count == v19 )
        return v20;
    }
LABEL_22:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
  return 0;
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

  if ( (byte_4B16672 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    byte_4B16672 = 1;
  }
  PK = (Il2CppObject *)QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestGroupMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1667E & 1) == 0 )
  {
    sub_1BCA7E0(&QuestGroupMaster___c_TypeInfo, v1, v2);
    byte_4B1667E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestGroupMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestGroupMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestGroupMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
  return x->fields.groupId - y->fields.groupId;
}