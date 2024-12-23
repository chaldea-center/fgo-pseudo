void __fastcall QuestReleaseMaster___ctor(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B67159 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo, v4);
    byte_4B67159 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v5;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.isCached, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    74,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string___ctor__);
}


void __fastcall QuestReleaseMaster__Clear(QuestReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x0

  if ( (byte_4B6715B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__, method);
    byte_4B6715B = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isCached;
  if ( !v4 )
    sub_1BE4D28(0LL, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___Clear__);
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
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  int klass_high; // w8

  if ( (byte_4B67162 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&QuestReleaseEntity_TypeInfo, v8);
    byte_4B67162 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1BE4D28(list, *(_QWORD *)&questId);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    ++v10;
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

  if ( (byte_4B67157 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4B67157 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, (const MethodInfo *)value);
  return (QuestReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31FDB1C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__GetEntity__);
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
  void *Instance; // x0
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v31; // x23
  int32_t v32; // w25
  __int64 methodPtr_low; // x10
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  int64_t v43; // x1
  Il2CppClass **v44; // x0
  System_Comparison_T__o *v45; // x19
  Il2CppObject *v46; // x20
  struct QuestReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_List_int__o *v54; // x19
  _BOOL8 v55; // x0
  __int64 v56; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B67161 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1BE4ACC(&System_Comparison_QuestEntity__TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1BE4ACC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestEntity__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestEntity__Sort__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v21);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestEntity__TypeInfo, v23);
    sub_1BE4ACC(&QuestReleaseEntity_TypeInfo, v24);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BE4ACC(&Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, v26);
    sub_1BE4ACC(&QuestReleaseMaster___c_TypeInfo, v27);
    byte_4B67161 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_23;
  v32 = 0;
  while ( v32 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v32,
                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Instance )
        {
          if ( !v31 )
            goto LABEL_23;
          items = v31->fields._items;
          v41 = Method_System_Collections_Generic_List_QuestEntity__Add__;
          ++v31->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v31->fields._size;
          v43 = (int64_t)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              (Il2CppObject *)Instance,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v31->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v43;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v44 + 4), v43, v34, v35, v36, v37, v38, v39);
          }
        }
      }
    }
    Instance = this->fields.list;
    ++v32;
    if ( !Instance )
      goto LABEL_23;
  }
  Instance = QuestReleaseMaster___c_TypeInfo;
  if ( !QuestReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestReleaseMaster___c_TypeInfo);
    Instance = QuestReleaseMaster___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestReleaseMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v45 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_QuestEntity__TypeInfo);
    System_Comparison_object____ctor(v45, v46, Method_QuestReleaseMaster___c__GetQuestIdList_b__12_0__, 0LL);
    static_fields = QuestReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_QuestEntity__o *)v45;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)v45, v48, v49, v50, v51, v52, v53);
  }
  if ( !v31 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_56548584(
    v31,
    v45,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_QuestEntity__Sort__);
  v54 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v54,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    v31,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
  v64 = v63;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    if ( !v55 )
      break;
    if ( !v64.fields._current )
      sub_1BE4D28(v55, v56);
    if ( !v54 )
      sub_1BE4D28(v55, v56);
    klass_low = LODWORD(v64.fields._current[1].klass);
    v58 = v54->fields._items;
    v59 = Method_System_Collections_Generic_List_int__Add__;
    ++v54->fields._version;
    if ( !v58 )
      sub_1BE4D28(v55, klass_low);
    v60 = v54->fields._size;
    if ( (unsigned int)v60 >= v58->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v54,
        klass_low,
        *(const MethodInfo_35CF200 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v54->fields._size = v60 + 1;
      v58->m_Items[v60 + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  if ( !v54 )
LABEL_23:
    sub_1BE4D28(Instance, v29);
  return System_Collections_Generic_List_int___ToArray(
           v54,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseMaster__IsContainCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Master_object; // x0
  __int64 v12; // x1
  CommonReleaseMaster_o *v13; // x22
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  __int64 methodPtr_low; // x10
  int v18; // w8

  if ( (byte_4B67160 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&QuestReleaseEntity_TypeInfo, v10);
    byte_4B67160 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
LABEL_20:
    sub_1BE4D28(Master_object, v12);
  v13 = (CommonReleaseMaster_o *)Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    Master_object = this->fields.list;
    if ( !Master_object )
      goto LABEL_20;
    Master_object = System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                      v16,
                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Master_object )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *((_DWORD *)Master_object + 4) == targetId )
      {
        v18 = *((_DWORD *)Master_object + 5);
        if ( v18 == condType )
          return 1;
        if ( v18 == 113 )
        {
          if ( !v13 )
            goto LABEL_20;
          if ( CommonReleaseMaster__IsContainCondType(v13, *((_DWORD *)Master_object + 6), condType, 0LL) )
            return 1;
        }
      }
    }
    if ( v15 == ++v16 )
      return 0;
  }
}


bool __fastcall QuestReleaseMaster__IsContainUnPlayableQuestByTargetId(
        QuestReleaseMaster_o *this,
        System_Int32_array *questIdList,
        int32_t targetId,
        const MethodInfo *method)
{
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
  __int64 v18; // x21
  QuestGroupMaster_o *Master_object; // x0
  __int64 v20; // x1
  QuestGroupMaster_o *v21; // x22
  int32_t Count; // w0
  int32_t v23; // w23
  int32_t v24; // w24
  Il2CppObject *v25; // x27
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  QuestReleaseEntity_c *v32; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v34; // x10
  int64_t v35; // x1
  PartyOrganizationUtility_o *v36; // x26
  System_Predicate_int__o *v37; // x28
  const MethodInfo *v38; // x3
  PartyOrganizationUtility_c *klass; // x8
  int v40; // w9
  int name_high; // w10
  PartyOrganizationUtility_c *v42; // x8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v44; // x27
  System_Predicate_int__o *v45; // x28
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  PartyOrganizationUtility_o *v53; // [xsp+0h] [xbp-70h]

  if ( (byte_4B67164 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Exists_int___, questIdList);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_QuestGroupMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&System_Predicate_int__TypeInfo, v11);
    sub_1BE4ACC(&QuestReleaseEntity_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13);
    sub_1BE4ACC(&Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__, v14);
    sub_1BE4ACC(&QuestReleaseMaster___c__DisplayClass15_0_TypeInfo, v15);
    sub_1BE4ACC(&Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__, v16);
    sub_1BE4ACC(&QuestReleaseMaster___c__DisplayClass15_1_TypeInfo, v17);
    byte_4B67164 = 1;
  }
  v18 = sub_1BE4D18(QuestReleaseMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_48;
  *(_DWORD *)(v18 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.list )
LABEL_48:
    sub_1BE4D28(Master_object, v20);
  v21 = Master_object;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v23 = Count;
  v24 = 0;
  v53 = (PartyOrganizationUtility_o *)(v18 + 24);
  while ( 1 )
  {
    v25 = (Il2CppObject *)sub_1BE4D18(QuestReleaseMaster___c__DisplayClass15_1_TypeInfo);
    System_Object___ctor(v25, 0LL);
    Master_object = (QuestGroupMaster_o *)this->fields.list;
    if ( !Master_object )
      goto LABEL_48;
    Master_object = (QuestGroupMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                            v24,
                                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v25 )
      goto LABEL_48;
    if ( Master_object )
    {
      v32 = QuestReleaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        v34 = (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
            ? (Il2CppClass *)Master_object
            : 0LL;
      else
        v34 = 0LL;
      v25[1].klass = v34;
      v36 = (PartyOrganizationUtility_o *)&v25[1];
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
        v35 = (QuestReleaseEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] == v32
            ? (int64_t)Master_object
            : 0LL;
      else
        v35 = 0LL;
    }
    else
    {
      v35 = 0LL;
      v25[1].klass = 0LL;
      v36 = (PartyOrganizationUtility_o *)&v25[1];
    }
    sub_1BE4A70(v36, v35, v26, v27, v28, v29, v30, v31);
    if ( v36->klass )
    {
      v37 = (System_Predicate_int__o *)sub_1BE4D18(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v37,
        v25,
        Method_QuestReleaseMaster___c__DisplayClass15_1__IsContainUnPlayableQuestByTargetId_b__0__,
        0LL);
      Master_object = (QuestGroupMaster_o *)System_Array__Exists_int_(
                                              questIdList,
                                              (System_Predicate_T__o *)v37,
                                              (const MethodInfo_305390C *)Method_System_Array_Exists_int___);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        klass = v36->klass;
        if ( !v36->klass )
          goto LABEL_48;
        v40 = *(_DWORD *)(v18 + 16);
        if ( LODWORD(klass->_1.name) != v40 )
        {
          name_high = HIDWORD(klass->_1.name);
          if ( name_high == 32 )
          {
            Master_object = v21;
            if ( !v21 )
              goto LABEL_48;
            QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v21, (int32_t)klass->_1.namespaze, 2, v38);
            if ( !QuestIdListByGroupId )
              goto LABEL_45;
            v44 = QuestIdListByGroupId;
            if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
              goto LABEL_45;
            v45 = (System_Predicate_int__o *)v53->klass;
            if ( !v53->klass )
            {
              v45 = (System_Predicate_int__o *)sub_1BE4D18(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v45,
                (Il2CppObject *)v18,
                Method_QuestReleaseMaster___c__DisplayClass15_0__IsContainUnPlayableQuestByTargetId_b__1__,
                0LL);
              *(_QWORD *)(v18 + 24) = v45;
              sub_1BE4A70(v53, (int64_t)v45, v46, v47, v48, v49, v50, v51);
            }
            if ( !System_Array__Exists_int_(
                    v44,
                    (System_Predicate_T__o *)v45,
                    (const MethodInfo_305390C *)Method_System_Array_Exists_int___) )
              goto LABEL_45;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v42 = v36->klass;
            if ( !v36->klass || !Master_object )
              goto LABEL_48;
          }
          else
          {
            if ( name_high != 1 || LODWORD(klass->_1.namespaze) != v40 )
              goto LABEL_45;
            Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v42 = v36->klass;
            if ( !v36->klass || !Master_object )
              goto LABEL_48;
          }
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Master_object, (int32_t)v42->_1.name, 0LL) )
            return 1;
          Master_object = (QuestGroupMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !v36->klass || !Master_object )
            goto LABEL_48;
          if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Master_object, (int32_t)v36->klass->_1.name, 0, 0LL) )
            return 1;
        }
      }
    }
LABEL_45:
    if ( v23 == ++v24 )
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
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w21
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4B67163 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&QuestReleaseEntity_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    byte_4B67163 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BE4D28(list, *(_QWORD *)&targetId);
  v9 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v9 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = Item;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && (HIDWORD(Item[1].klass) & 0xFFFFFFFE) == 48
        && LODWORD(Item[1].monitor) == targetId )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( !list )
          goto LABEL_15;
        if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)list, (int32_t)v12[1].klass, 0, 0LL) )
          break;
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v9;
    if ( !list )
      goto LABEL_15;
  }
  return v9 < Count;
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

  if ( (byte_4B67158 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, entity);
    byte_4B67158 = 1;
  }
  PK = (Il2CppObject *)QuestReleaseEntity__CreatePK(questId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByQuestID(
        QuestReleaseMaster_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int32_t v14; // w22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B6715A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&qid);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    sub_1BE4ACC(&QuestReleaseEntity_TypeInfo, v10);
    byte_4B6715A = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v14,
                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *(_DWORD *)(list + 16) == qid )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 4), v12, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1BE4D28(list, v12);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestReleaseMaster__getListByQuestID_40470120(
        QuestReleaseMaster_o *this,
        int32_t questId,
        System_Collections_Generic_List_QuestReleaseEntity__o **resultList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v25; // x22
  int64_t Master_object; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *v29; // x8
  int32_t v30; // w2
  int v31; // w9
  const MethodInfo *v32; // x1
  System_Collections_Generic_List_object__o *v33; // x20
  Il2CppObject *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x1
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  const MethodInfo_3251FF4 **v46; // x26
  int v47; // w22
  int32_t v48; // w23
  int64_t v49; // x24
  __int64 methodPtr_low; // x10
  int32_t v51; // w25
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  const MethodInfo_3251FF4 **v58; // x29
  System_Collections_Generic_List_object__o *v59; // x26
  Il2CppClass *klass; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  void **v63; // x8
  System_Collections_Generic_List_QuestReleaseEntity__o *v64; // x8
  int32_t size; // w2
  int v66; // w9
  int monitor; // w22
  int32_t v68; // w20
  System_Collections_Generic_List_object__o *v69; // x21
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  int64_t v79; // x1
  Il2CppClass **v80; // x0
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v82; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B6715C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v8);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v21);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v22);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v23);
    sub_1BE4ACC(&QuestReleaseEntity_TypeInfo, v24);
    byte_4B6715C = 1;
  }
  memset(&v84, 0, sizeof(v84));
  v82 = 0LL;
  value = 0LL;
  v25 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_53;
  Master_object = QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
                    (QuestReleaseOverwriteMaster_o *)Master_object,
                    &entityList,
                    questId,
                    0LL,
                    v28);
  if ( (Master_object & 1) == 0 )
  {
    if ( !*((_BYTE *)&this->fields.revision + 4) )
    {
      Master_object = (int64_t)this->fields.list;
      if ( !Master_object )
        goto LABEL_53;
      Master_object = System_Collections_ObjectModel_Collection_object___get_Count(
                        (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                        (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
      if ( (int)Master_object >= 1 )
      {
        v46 = (const MethodInfo_3251FF4 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__;
        v47 = Master_object;
        v48 = 0;
        do
        {
          Master_object = (int64_t)this->fields.list;
          if ( !Master_object )
            goto LABEL_53;
          Master_object = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                     (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                     v48,
                                     (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Master_object )
          {
            v49 = Master_object;
            methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) >= (unsigned int)methodPtr_low
              && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo )
            {
              Master_object = *(_QWORD *)&this->fields.isCached;
              if ( !Master_object )
                goto LABEL_53;
              v51 = *(_DWORD *)(v49 + 16);
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      v51,
                      &value,
                      *v46) )
              {
                v58 = v46;
                v59 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v59,
                  (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
                value = (Il2CppObject *)v59;
                Master_object = *(_QWORD *)&this->fields.isCached;
                if ( !Master_object )
                  goto LABEL_53;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  v51,
                  (Il2CppObject *)v59,
                  (const MethodInfo_3250854 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___set_Item__);
                v46 = v58;
              }
              Master_object = (int64_t)value;
              if ( !value )
                goto LABEL_53;
              klass = value[1].klass;
              v61 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( !klass )
                goto LABEL_53;
              v62 = *(int *)(Master_object + 24);
              if ( (unsigned int)v62 >= LODWORD(klass->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)Master_object,
                  (Il2CppObject *)v49,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
              }
              else
              {
                v63 = &klass->_1.image + v62;
                *(_DWORD *)(Master_object + 24) = v62 + 1;
                v63[4] = (void *)v49;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v63 + 4), v49, v52, v53, v54, v55, v56, v57);
              }
            }
          }
        }
        while ( v47 != ++v48 );
      }
      *((_BYTE *)&this->fields.revision + 4) = 1;
    }
    v64 = *resultList;
    if ( *resultList )
    {
      size = v64->fields._size;
      v66 = v64->fields._version + 1;
      v64->fields._size = 0;
      v64->fields._version = v66;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v64->fields._items, 0, size, 0LL);
      Master_object = *(_QWORD *)&this->fields.isCached;
      if ( Master_object )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                questId,
                &v82,
                (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestReleaseEntity___TryGetValue__) )
          return;
        Master_object = (int64_t)v82;
        if ( v82 )
        {
          monitor = (int)v82[1].monitor;
          if ( monitor < 1 )
            return;
          v68 = 0;
          do
          {
            v69 = (System_Collections_Generic_List_object__o *)*resultList;
            Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)Master_object,
                                       v68,
                                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
            if ( !v69 )
              break;
            items = v69->fields._items;
            v77 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
            ++v69->fields._version;
            if ( !items )
              break;
            v78 = v69->fields._size;
            v79 = Master_object;
            if ( (unsigned int)v78 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v69,
                (Il2CppObject *)Master_object,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
            }
            else
            {
              v80 = &items->obj.klass + v78;
              v69->fields._size = v78 + 1;
              v80[4] = (Il2CppClass *)v79;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v80 + 4), v79, v70, v71, v72, v73, v74, v75);
            }
            if ( monitor == ++v68 )
              return;
            Master_object = (int64_t)v82;
          }
          while ( v82 );
        }
      }
    }
LABEL_53:
    sub_1BE4D28(Master_object, v27);
  }
  v29 = *resultList;
  if ( !*resultList )
    goto LABEL_53;
  v30 = v29->fields._size;
  v31 = v29->fields._version + 1;
  v29->fields._size = 0;
  v29->fields._version = v31;
  if ( v30 >= 1 )
    System_Array__Clear((System_Array_o *)v29->fields._items, 0, v30, 0LL);
  if ( !v25 )
    goto LABEL_53;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    v25,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v84 = v81;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v84,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v84.fields._current )
      sub_1BE4D28(0LL, v32);
    v33 = (System_Collections_Generic_List_object__o *)*resultList;
    v34 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                            (QuestReleaseOverwriteEntity_o *)v84.fields._current,
                            v32);
    v41 = (int64_t)v34;
    if ( !v33 )
      sub_1BE4D28(v34, v34);
    v42 = v33->fields._items;
    v43 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
    ++v33->fields._version;
    if ( !v42 )
      sub_1BE4D28(v34, v34);
    v44 = v33->fields._size;
    if ( (unsigned int)v44 >= v42->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        v34,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v33->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)v41;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v45 + 4), v41, v35, v36, v37, v38, v39, v40);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v84,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall QuestReleaseMaster__getListByTargetAndCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  int64_t v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B6715F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v10);
    sub_1BE4ACC(&QuestReleaseEntity_TypeInfo, v11);
    byte_4B6715F = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = (int64_t)list;
        methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
          && LODWORD(list[1].klass) == targetId
          && HIDWORD(list->fields.items) == condType )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v26 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v13;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v13, v18, v19, v20, v21, v22, v23);
          }
        }
      }
      if ( v16 == ++v17 )
        return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
    }
LABEL_19:
    sub_1BE4D28(list, v13);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall QuestReleaseMaster__getListByType(
        QuestReleaseMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int32_t v14; // w22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B6715D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v9);
    sub_1BE4ACC(&QuestReleaseEntity_TypeInfo, v10);
    byte_4B6715D = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v14,
                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(QuestReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == QuestReleaseEntity_TypeInfo
        && *(_DWORD *)(list + 20) == type )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 4), v12, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1BE4D28(list, v12);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
        QuestReleaseMaster_o *this,
        int32_t targetId,
        int32_t openCondType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x22
  __int64 items_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v16; // w23
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4B6715E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BE4ACC(&QuestReleaseEntity_TypeInfo, v12);
    byte_4B6715E = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  v16 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v16 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v16,
                                                               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (QuestReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestReleaseEntity_TypeInfo
        && LODWORD(list[1].klass) == targetId
        && HIDWORD(list->fields.items) == openCondType )
      {
        if ( !v13 )
          goto LABEL_21;
        items_low = LODWORD(list->fields.items);
        items = v13->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            items_low,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = items_low;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v13 )
LABEL_21:
    sub_1BE4D28(list, items_low);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall QuestReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B67165 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestReleaseMaster___c_TypeInfo, v1);
    byte_4B67165 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(QuestReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestReleaseMaster___c_TypeInfo->static_fields->__9 = (struct QuestReleaseMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)QuestReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
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


bool __fastcall QuestReleaseMaster___c__DisplayClass15_1___IsContainUnPlayableQuestByTargetId_b__0(
        QuestReleaseMaster___c__DisplayClass15_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BE4D28(this, x);
  return data->fields.questId == x;
}