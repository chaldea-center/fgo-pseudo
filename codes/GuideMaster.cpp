void __fastcall GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22257 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__, method);
    byte_4C22257 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    163,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22255 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__, *(_QWORD *)&guideType);
    byte_4C22255 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_329F900 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GuideMaster__TryGetEntity(
        GuideMaster_o *this,
        GuideEntity_o **entity,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C22256 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__, entity);
    byte_4C22256 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_array *__fastcall GuideMaster__getDataListByType(
        GuideMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  int64_t v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct GuideMaster___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4C22258 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Count__, *(_QWORD *)&type);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Item__, v5);
    sub_1C3B764(&System_Comparison_GuideEntity__TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GuideEntity__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_GuideEntity__Sort__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_GuideEntity__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_GuideEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_GuideEntity__TypeInfo, v11);
    sub_1C3B764(&Method_GuideMaster___c__getDataListByType_b__3_0__, v12);
    sub_1C3B764(&GuideMaster___c_TypeInfo, v13);
    byte_4C22258 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GuideEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Item__);
      if ( list )
      {
        v15 = (int64_t)list;
        if ( *((_DWORD *)list + 4) == type )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v27 = Method_System_Collections_Generic_List_GuideEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)list,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v15;
            sub_1C3B708((PartyOrganizationUtility_o *)(v29 + 4), v15, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C3B9C0(list, v15);
  }
LABEL_15:
  list = GuideMaster___c_TypeInfo;
  if ( !GuideMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GuideMaster___c_TypeInfo);
    list = GuideMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = GuideMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)list + 23);
    v30 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_GuideEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_GuideMaster___c__getDataListByType_b__3_0__, 0LL);
    static_fields = GuideMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GuideEntity__o *)v30;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v30, v33, v34, v35, v36, v37, v38);
  }
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_57202480(
    v14,
    v30,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v14,
                                (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  GuideEntity_array *DataListByType; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  GuideEntity_array *v9; // x19
  GuideEntity_o *v10; // x21
  __int64 v11; // x25
  NetworkManager_c *v12; // x0
  int32_t condQuestPhase; // w23
  int32_t condQuestId; // w24
  int64_t userIdNumber; // x22

  if ( (byte_4C22259 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&type);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    byte_4C22259 = 1;
  }
  DataListByType = GuideMaster__getDataListByType(this, type, method);
  if ( !DataListByType )
    return 0LL;
  v8 = *(_QWORD *)&DataListByType->max_length;
  v9 = DataListByType;
  v10 = 0LL;
  if ( v8 && (int)v8 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= (unsigned int)v8 )
        sub_1C3B9C8(DataListByType, v7);
      v10 = v9->m_Items[v11];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v7);
        byte_4C1C955 = 1;
      }
      v12 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v12 = NetworkManager_TypeInfo;
      }
      if ( !v10 )
        sub_1C3B9C0(v12, v7);
      condQuestId = v10->fields.condQuestId;
      condQuestPhase = v10->fields.condQuestPhase;
      userIdNumber = v12->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(
                                              userIdNumber,
                                              condQuestId,
                                              condQuestPhase,
                                              -1,
                                              0,
                                              0LL);
      if ( ((unsigned __int8)DataListByType & 1) != 0 || !v10->fields.condQuestId )
        break;
      LODWORD(v8) = v9->max_length;
      if ( (int)++v11 >= (int)v8 )
        return 0LL;
    }
  }
  return v10;
}


void __fastcall GuideMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2225A & 1) == 0 )
  {
    sub_1C3B764(&GuideMaster___c_TypeInfo, v1);
    byte_4C2225A = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(GuideMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GuideMaster___c_TypeInfo->static_fields->__9 = (struct GuideMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)GuideMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall GuideMaster___c___ctor(GuideMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GuideMaster___c___getDataListByType_b__3_0(
        GuideMaster___c_o *this,
        GuideEntity_o *a,
        GuideEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3B9C0(this, a);
  return b->fields.priority - a->fields.priority;
}