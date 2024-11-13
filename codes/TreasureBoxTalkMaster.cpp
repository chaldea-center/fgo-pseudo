void __fastcall TreasureBoxTalkMaster___ctor(TreasureBoxTalkMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__, method, v2);
    byte_4B16D72 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    378,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxTalkEntity_o *__fastcall TreasureBoxTalkMaster__GetEntity(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16D70 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__,
      *(_QWORD *)&treasureBoxId,
      *(_QWORD *)&idx);
    byte_4B16D70 = 1;
  }
  PK = (Il2CppObject *)TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxTalkEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31B3198 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
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
  Il2CppObject *v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v21; // w22
  int32_t v22; // w23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v32; // x28
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B16D73 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&treasureBoxId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v14, v15);
    sub_1BCA7E0(&TreasureBoxTalkEntity_TypeInfo, v16, v17);
    byte_4B16D73 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       *(_QWORD *)&treasureBoxId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = (int)list;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v22,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(TreasureBoxTalkEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureBoxTalkEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureBoxTalkEntity_TypeInfo
          && LODWORD(list->fields.items) == treasureBoxId )
        {
          klass = list[1].klass;
          if ( !klass )
            goto LABEL_24;
          namespaze = klass->_1.namespaze;
          if ( (int)namespaze >= 1 )
            break;
        }
      }
LABEL_21:
      if ( ++v22 == v21 )
        goto LABEL_22;
    }
    v32 = 0LL;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)namespaze )
        sub_1BCAA44(list, v19);
      if ( !v18 )
        break;
      v19 = (Il2CppObject *)*((_QWORD *)&klass->_1.byval_arg.data + v32);
      items = v18->fields._items;
      v34 = Method_System_Collections_Generic_List_string__Add__;
      ++v18->fields._version;
      if ( !items )
        break;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          v19,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v19;
        sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v19, v23, v24, v25, v26, v27, v28);
      }
      LODWORD(namespaze) = klass->_1.namespaze;
      if ( (__int64)++v32 >= (int)namespaze )
        goto LABEL_21;
    }
LABEL_24:
    sub_1BCAA3C(list, v19);
  }
LABEL_22:
  if ( !v18 )
    goto LABEL_24;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v18,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureBoxTalkMaster__TryGetEntity(
        TreasureBoxTalkMaster_o *this,
        TreasureBoxTalkEntity_o **entity,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16D71 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&treasureBoxId);
    byte_4B16D71 = 1;
  }
  PK = (Il2CppObject *)TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&treasureBoxId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
}