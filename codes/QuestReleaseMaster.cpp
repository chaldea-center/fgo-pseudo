void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B16778 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo, v7, v8);
    byte_4B16778 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.isCached, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    70,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0

  if ( (byte_4B1677A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__, method, v2);
    byte_4B1677A = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v5 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isCached;
  if ( !v5 )
    sub_1BCAA3C(0LL, v4);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v5,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestReleaseMaster__EventPointWinActionType(
        QuestReleaseMaster_o *this,
        int32_t questId,
        bool winGroup1,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int klass_high; // w8

  if ( (byte_4B16781 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      winGroup1);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v9, v10);
    byte_4B16781 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1BCAA3C(list, *(_QWORD *)&questId);
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v12,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == questId )
      {
        klass_high = HIDWORD(Item[1].klass);
        if ( klass_high == 49 )
          return 3;
        if ( klass_high == 48 )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_14;
  }
  if ( winGroup1 )
    return 1;
  else
    return 2;
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_o *__fastcall QuestReleaseMaster__GetEntity(
        QuestReleaseMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16776 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&type);
    byte_4B16776 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__GetQuestIdList(
        QuestReleaseMaster_o *this,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  __int64 v49; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Collections_Generic_List_object__o *v54; // x23
  int32_t v55; // w25
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 methodPtr_low; // x10
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  int64_t v68; // x1
  Il2CppClass **v69; // x0
  System_Comparison_T__o *v70; // x19
  Il2CppObject *v71; // x20
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_Collections_Generic_List_int__o *v82; // x19
  _BOOL8 v83; // x0
  __int64 v84; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B16780 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&type,
      *(_QWORD *)&targetId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&System_Comparison_QuestEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity__Add__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity__Sort__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v34, v35);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestEntity__TypeInfo, v38, v39);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43);
    sub_1BCA7E0(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, v44, v45);
    sub_1BCA7E0(&QuestReleaseMaster___c_TypeInfo, v46, v47);
    byte_4B16780 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  v54 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                       v51,
                                                       v52,
                                                       v53);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_23;
  v55 = 0;
  while ( v55 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v55,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Instance )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Instance + 5) == type
        && *((_DWORD *)Instance + 6) == targetId
        && ((value & 0x80000000) != 0 || *((_DWORD *)Instance + 8) == value) )
      {
        if ( !MasterData_object )
          goto LABEL_23;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     *((_DWORD *)Instance + 4),
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Instance )
        {
          if ( !v54 )
            goto LABEL_23;
          items = v54->fields._items;
          v66 = Method_System_Collections_Generic_List_QuestEntity__Add__;
          ++v54->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v54->fields._size;
          v68 = (int64_t)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v54,
              (Il2CppObject *)Instance,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &items->obj.klass + size;
            v54->fields._size = size + 1;
            v69[4] = (Il2CppClass *)v68;
            sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), v68, v59, v60, v61, v62, v63, v64);
          }
        }
      }
    }
    Instance = this->fields.list;
    ++v55;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = QuestReleaseMaster___c_TypeInfo;
  if ( !QuestReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestReleaseMaster___c_TypeInfo, v49);
    Instance = QuestReleaseMaster___c_TypeInfo;
  }
  v70 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v70 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v49);
      Instance = QuestReleaseMaster___c_TypeInfo;
    }
    v71 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v70 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_QuestEntity__TypeInfo, v49, v56, v57);
    System_Comparison_object____ctor(v70, v71, Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, 0LL);
    static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_QuestEntity__o *)v70;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)v70, v73, v74, v75, v76, v77, v78);
  }
  if ( !v54 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_56244000(
    v54,
    v70,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v82 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v79,
                                                    v80,
                                                    v81);
  System_Collections_Generic_List_int____ctor(
    v82,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v91,
    v54,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v92 = v91;
  while ( 1 )
  {
    v83 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v92,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v83 )
      break;
    if ( !v92.fields._current )
      sub_1BCAA3C(v83, v84);
    if ( !v82 )
      sub_1BCAA3C(v83, v84);
    klass_low = LODWORD(v92.fields._current[1].klass);
    v86 = v82->fields._items;
    v87 = Method_System_Collections_Generic_List_int__Add__;
    ++v82->fields._version;
    if ( !v86 )
      sub_1BCAA3C(v83, klass_low);
    v88 = v82->fields._size;
    if ( (unsigned int)v88 >= v86->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v82,
        klass_low,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v82->fields._size = v88 + 1;
      v86->m_Items[v88 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v92,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v82 )
LABEL_23:
    sub_1BCAA3C(Instance, v49);
  return System_Collections_Generic_List_int___ToArray(
           v82,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsContainCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
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
  void *Master_object; // x0
  __int64 v16; // x1
  CommonReleaseMaster_o *v17; // x22
  int32_t Count; // w0
  int32_t v19; // w23
  int32_t v20; // w24
  __int64 methodPtr_low; // x10
  int v22; // w8

  if ( (byte_4B1677F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&targetId,
      *(_QWORD *)&condType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v13, v14);
    byte_4B1677F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_20:
    sub_1BCAA3C(Master_object, v16);
  v17 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v19 = Count;
  v20 = 0;
  while ( 1 )
  {
    Master_object = this->fields.list;
    if ( !Master_object )
      goto LABEL_20;
    Master_object = System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                      v20,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Master_object )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Master_object + 4) == targetId )
      {
        v22 = *((_DWORD *)Master_object + 5);
        if ( v22 == condType )
          return 1;
        if ( v22 == 113 )
        {
          if ( !v17 )
            goto LABEL_20;
          if ( CommonReleaseMaster__IsContainCondType(v17, *((_DWORD *)Master_object + 6), condType, 0LL) )
            return 1;
        }
      }
    }
    if ( v19 == ++v20 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
        QuestReleaseMaster_o *this,
        System_Int32_array *questIdList,
        int32_t targetId,
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
  __int64 v29; // x21
  QuestGroupMaster_o *Master_object; // x0
  __int64 v31; // x1
  QuestGroupMaster_o *v32; // x22
  int32_t Count; // w0
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  int32_t v36; // w23
  int32_t v37; // w24
  Il2CppObject *v38; // x27
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  QuestReleaseEntity_c *v45; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v47; // x10
  int64_t v48; // x1
  PartyOrganizationUtility_o *v49; // x26
  System_Predicate_int__o *v50; // x28
  PartyOrganizationUtility_c *klass; // x8
  int v52; // w9
  int name_high; // w10
  PartyOrganizationUtility_c *v54; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v56; // x27
  System_Predicate_int__o *v57; // x28
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  PartyOrganizationUtility_o *v65; // [xsp+0h] [xbp-70h]

  if ( (byte_4B16783 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Exists_int___, questIdList, *(_QWORD *)&targetId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__, v21, v22);
    sub_1BCA7E0(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__, v25, v26);
    sub_1BCA7E0(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v27, v28);
    byte_4B16783 = 1;
  }
  v29 = sub_1BCAA2C(QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, questIdList, *(_QWORD *)&targetId, method);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_48;
  *(_DWORD *)(v29 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
  Master_object = (QuestGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_48:
    sub_1BCAA3C(Master_object, v31);
  v32 = Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v36 = Count;
  v37 = 0;
  v65 = (PartyOrganizationUtility_o *)(v29 + 24);
  while ( 1 )
  {
    v38 = (Il2CppObject *)sub_1BCAA2C(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v31, v34, v35);
    System_Object___ctor(v38, 0LL);
    Master_object = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_object )
      goto LABEL_48;
    Master_object = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                            v37,
                                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v38 )
      goto LABEL_48;
    if ( Master_object )
    {
      v45 = QuestReleaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        v47 = (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
            ? (Il2CppClass *)Master_object
            : 0LL;
      else
        v47 = 0LL;
      v38[1].klass = v47;
      v49 = (PartyOrganizationUtility_o *)&v38[1];
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        v48 = (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == v45
            ? (int64_t)Master_object
            : 0LL;
      else
        v48 = 0LL;
    }
    else
    {
      v48 = 0LL;
      v38[1].klass = 0LL;
      v49 = (PartyOrganizationUtility_o *)&v38[1];
    }
    sub_1BCA784(v49, v48, v39, v40, v41, v42, v43, v44);
    if ( v49->klass )
    {
      v50 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v31, v34, v35);
      System_Predicate_int____ctor(
        v50,
        v38,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        0LL);
      Master_object = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                              questIdList,
                                              (System_Predicate_T__o *)v50,
                                              (const MethodInfo_300C514 *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        klass = v49->klass;
        if ( !v49->klass )
          goto LABEL_48;
        v52 = *(_DWORD *)(v29 + 16);
        if ( LODWORD(klass->_1.name) != v52 )
        {
          name_high = HIDWORD(klass->_1.name);
          if ( name_high == 32 )
          {
            Master_object = v32;
            if ( !v32 )
              goto LABEL_48;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v32, (int32_t)klass->_1.namespaze, 2, v35);
            if ( !QuestIdListByGroupId )
              goto LABEL_45;
            v56 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_45;
            v57 = (System_Predicate_int__o *)v65->klass;
            if ( !v65->klass )
            {
              v57 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v31, v34, v35);
              System_Predicate_int____ctor(
                v57,
                (Il2CppObject *)v29,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                0LL);
              *(_QWORD *)(v29 + 24) = v57;
              sub_1BCA784(v65, (int64_t)v57, v58, v59, v60, v61, v62, v63);
            }
            if ( !System_Array__Exists_int_(
                    v56,
                    (System_Predicate_T__o *)v57,
                    (const MethodInfo_300C514 *)Method_System_Array_Exists_int___) )
              goto LABEL_45;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v54 = v49->klass;
            if ( !v49->klass || !Master_object )
              goto LABEL_48;
          }
          else
          {
            if ( name_high != 1 || LODWORD(klass->_1.namespaze) != v52 )
              goto LABEL_45;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v54 = v49->klass;
            if ( !v49->klass || !Master_object )
              goto LABEL_48;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, (int32_t)v54->_1.name, 0LL) )
            return 1;
          Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !v49->klass || !Master_object )
            goto LABEL_48;
          if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, (int32_t)v49->klass->_1.name, 0, 0LL) )
            return 1;
        }
      }
    }
LABEL_45:
    if ( v36 == ++v37 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsQuestOfResultBattleCleared(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w21
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4B16782 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&targetId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9, v10);
    byte_4B16782 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BCAA3C(list, *(_QWORD *)&targetId);
  v12 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v12 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v12,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v15 = Item;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48
        && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_15;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v15[1].klass, 0, 0LL) )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_15;
  }
  return v12 < Count;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__TryGetEntity(
        QuestReleaseMaster_o *this,
        QuestReleaseEntity_o **entity,
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16777 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    byte_4B16777 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
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
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B16779 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&qid, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v16, v17);
    byte_4B16779 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&qid,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v21,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *(_DWORD *)(list + 16) == qid )
      {
        if ( !v18 )
          goto LABEL_20;
        items = v18->fields._items;
        v30 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v18 )
LABEL_20:
    sub_1BCAA3C(list, v19);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v18,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestReleaseMaster__getListByQuestID_40252920(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
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
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_object__o *v43; // x22
  __int64 v44; // x1
  int64_t Master_object; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v48; // x8
  int32_t v49; // w2
  int v50; // w9
  const MethodInfo *v51; // x1
  System_Collections_Generic_List_object__o *v52; // x20
  Il2CppObject *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  const MethodInfo_3207670 **v65; // x26
  int v66; // w22
  int32_t v67; // w23
  int64_t v68; // x24
  __int64 methodPtr_low; // x10
  int32_t v70; // w25
  int64_t v71; // x2
  __int64 v72; // x3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  const MethodInfo_3207670 **v77; // x29
  System_Collections_Generic_List_object__o *v78; // x26
  Il2CppClass *klass; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  void **v82; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v83; // x8
  int32_t size; // w2
  int v85; // w9
  int monitor; // w22
  int32_t v87; // w20
  System_Collections_Generic_List_object__o *v88; // x21
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct System_Object_array *items; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  int64_t v98; // x1
  Il2CppClass **v99; // x0
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v101; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B1677B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      resultList);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v37, v38);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v39, v40);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v41, v42);
    byte_4B1677B = 1;
  }
  memset(&v103, 0, sizeof(v103));
  v101 = 0LL;
  value = 0LL;
  v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       resultList,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v43;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_53;
  Master_object = QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                    (QuestReleaseOverwriteMaster_o *)Master_object,
                    &entityList,
                    questId,
                    0LL,
                    v47);
  if ( (Master_object & 1) == 0 )
  {
    if ( !*((_BYTE *)&this->fields.revision + 4) )
    {
      Master_object = (int64_t)this->fields.list;
      if ( !Master_object )
        goto LABEL_53;
      Master_object = System_Collections_ObjectModel_Collection_object___get_Count(
                        (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                        (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v65 = (const MethodInfo_3207670 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__;
        v66 = Master_object;
        v67 = 0;
        do
        {
          Master_object = (int64_t)this->fields.list;
          if ( !Master_object )
            goto LABEL_53;
          Master_object = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                     (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                     v67,
                                     (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Master_object )
          {
            v68 = Master_object;
            methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) >= (unsigned int)methodPtr_low
              && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo )
            {
              Master_object = *(_QWORD *)&this->fields.isCached;
              if ( !Master_object )
                goto LABEL_53;
              v70 = *(_DWORD *)(v68 + 16);
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      v70,
                      &value,
                      *v65) )
              {
                v77 = v65;
                v78 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                     v46,
                                                                     v71,
                                                                     v72);
                System_Collections_Generic_List_object____ctor(
                  v78,
                  (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
                value = (Il2CppObject *)v78;
                Master_object = *(_QWORD *)&this->fields.isCached;
                if ( !Master_object )
                  goto LABEL_53;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  v70,
                  (Il2CppObject *)v78,
                  (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
                v65 = v77;
              }
              Master_object = (int64_t)value;
              if ( !value )
                goto LABEL_53;
              klass = value[1].klass;
              v80 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( !klass )
                goto LABEL_53;
              v81 = *(int *)(Master_object + 24);
              if ( (unsigned int)v81 >= LODWORD(klass->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Master_object,
                  (Il2CppObject *)v68,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
              }
              else
              {
                v82 = &klass->_1.image + v81;
                *(_DWORD *)(Master_object + 24) = v81 + 1;
                v82[4] = (void *)v68;
                sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 4), v68, v71, v72, v73, v74, v75, v76);
              }
            }
          }
        }
        while ( v66 != ++v67 );
      }
      *((_BYTE *)&this->fields.revision + 4) = 1;
    }
    v83 = *resultList;
    if ( *resultList )
    {
      size = v83->fields._size;
      v85 = v83->fields._version + 1;
      v83->fields._size = 0;
      v83->fields._version = v85;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v83->fields._items, 0, size, 0LL);
      Master_object = *(_QWORD *)&this->fields.isCached;
      if ( Master_object )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                questId,
                &v101,
                (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        Master_object = (int64_t)v101;
        if ( v101 )
        {
          monitor = (int)v101[1].monitor;
          if ( monitor < 1 )
            return;
          v87 = 0;
          do
          {
            v88 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)Master_object,
                                       v87,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v88 )
              break;
            items = v88->fields._items;
            v96 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v88->fields._version;
            if ( !items )
              break;
            v97 = v88->fields._size;
            v98 = Master_object;
            if ( (unsigned int)v97 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v88,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
            }
            else
            {
              v99 = &items->obj.klass + v97;
              v88->fields._size = v97 + 1;
              v99[4] = (Il2CppClass *)v98;
              sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 4), v98, v89, v90, v91, v92, v93, v94);
            }
            if ( monitor == ++v87 )
              return;
            Master_object = (int64_t)v101;
          }
          while ( v101 );
        }
      }
    }
LABEL_53:
    sub_1BCAA3C(Master_object, v46);
  }
  v48 = *resultList;
  if ( !*resultList )
    goto LABEL_53;
  v49 = v48->fields._size;
  v50 = v48->fields._version + 1;
  v48->fields._size = 0;
  v48->fields._version = v50;
  if ( v49 >= 1 )
    System_Array__Clear((System_Array_o *)v48->fields._items, 0, v49, 0LL);
  if ( !v43 )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v100,
    v43,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v103 = v100;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v103,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v103.fields._current )
      sub_1BCAA3C(0LL, v51);
    v52 = (System_Collections_Generic_List_object__o *)*resultList;
    v53 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v103.fields._current,
                            v51);
    v60 = (int64_t)v53;
    if ( !v52 )
      sub_1BCAA3C(v53, v53);
    v61 = v52->fields._items;
    v62 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
    ++v52->fields._version;
    if ( !v61 )
      sub_1BCAA3C(v53, v53);
    v63 = v52->fields._size;
    if ( (unsigned int)v63 >= v61->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v52,
        v53,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = &v61->obj.klass + v63;
      v52->fields._size = v63 + 1;
      v64[4] = (Il2CppClass *)v60;
      sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), v60, v54, v55, v56, v57, v58, v59);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v103,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
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

  if ( (byte_4B1677E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&targetId,
      *(_QWORD *)&condType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v15, v16);
    byte_4B1677E = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&targetId,
                                                       *(_QWORD *)&condType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
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
        methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
          && LODWORD(list[1].klass) == targetId
          && HIDWORD(list->fields.items) == condType )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v31 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
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
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v17;
    }
LABEL_19:
    sub_1BCAA3C(list, v18);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
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
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B1677C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v16, v17);
    byte_4B1677C = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&type,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v21,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *(_DWORD *)(list + 20) == type )
      {
        if ( !v18 )
          goto LABEL_20;
        items = v18->fields._items;
        v30 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v18 )
LABEL_20:
    sub_1BCAA3C(list, v19);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v18,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
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
  System_Collections_Generic_List_int__o *v19; // x22
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v22; // w23
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_4B1677D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&targetId,
      *(_QWORD *)&openCondType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v17, v18);
    byte_4B1677D = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&targetId,
                                                    *(_QWORD *)&openCondType,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  v22 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v22 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v22,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list[1].klass) == targetId
        && HIDWORD(list->fields.items) == openCondType )
      {
        if ( !v19 )
          goto LABEL_21;
        items_low = LODWORD(list->fields.items);
        items = v19->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            items_low,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size + 1] = items_low;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v22;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v19 )
LABEL_21:
    sub_1BCAA3C(list, items_low);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16784 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestReleaseMaster___c_TypeInfo, v1, v2);
    byte_4B16784 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestReleaseMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall QuestReleaseMaster___c___ctor(QuestReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestReleaseMaster___c___GetQuestIdList_b__12_0(
        QuestReleaseMaster___c_o *this,
        QuestEntity_o *a,
        QuestEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (QuestReleaseMaster___c_o *)QuestEntity__getPriority(b, (const MethodInfo *)a), !a) )
    sub_1BCAA3C(this, a);
  return (_DWORD)this - QuestEntity__getPriority(a, (const MethodInfo *)a);
}


void __fastcall QuestReleaseMaster___c__DisplayClass15_0___ctor(
        QuestReleaseMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestReleaseMaster___c__DisplayClass15_0___IsContainUnPlayableQuestByTargetId_b__1(
        QuestReleaseMaster___c__DisplayClass15_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.targetId == x;
}


void __fastcall QuestReleaseMaster___c__DisplayClass15_1___ctor(
        QuestReleaseMaster___c__DisplayClass15_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster___c__DisplayClass15_1___IsContainUnPlayableQuestByTargetId_b__0(
        QuestReleaseMaster___c__DisplayClass15_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return data->fields.questId == x;
}