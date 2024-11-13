void __fastcall GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B164E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__, method, v2);
    byte_4B164E6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    159,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B164E4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__,
      *(_QWORD *)&guideType,
      *(_QWORD *)&priority);
    byte_4B164E4 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_31B3198 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
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

  if ( (byte_4B164E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__, entity, *(_QWORD *)&guideType);
    byte_4B164E5 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_array *__fastcall GuideMaster__getDataListByType(
        GuideMaster_o *this,
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x19
  int64_t v27; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v30; // x2
  __int64 v31; // x3
  int32_t v32; // w22
  int32_t v33; // w23
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x20
  Il2CppObject *v44; // x21
  struct GuideMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B164E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_GuideEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&GuideEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GuideEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GuideEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GuideEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GuideEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_GuideEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_GuideMaster___c__getDataListByType_b__3_0__, v22, v23);
    sub_1BCA7E0(&GuideMaster___c_TypeInfo, v24, v25);
    byte_4B164E7 = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GuideEntity__TypeInfo,
                                                       *(_QWORD *)&type,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v32 = Count;
    v33 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v33,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v27 = (int64_t)list;
        methodPtr_low = LOBYTE(GuideEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(GuideEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == GuideEntity_TypeInfo
          && *((_DWORD *)list + 4) == type )
        {
          if ( !v26 )
            break;
          items = v26->fields._items;
          v40 = Method_System_Collections_Generic_List_GuideEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v27;
            sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v27, v30, v31, v34, v35, v36, v37);
          }
        }
      }
      if ( v32 == ++v33 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BCAA3C(list, v27);
  }
LABEL_17:
  list = GuideMaster___c_TypeInfo;
  if ( !GuideMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GuideMaster___c_TypeInfo, v27);
    list = GuideMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v27);
      list = GuideMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_GuideEntity__TypeInfo, v27, v30, v31);
    System_Comparison_object____ctor(v43, v44, Method_GuideMaster___c__getDataListByType_b__3_0__, 0LL);
    static_fields = GuideMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GuideEntity__o *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v26 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56244000(
    v26,
    v43,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v26,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  GuideEntity_array *DataListByType; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  GuideEntity_array *v10; // x19
  GuideEntity_o *v11; // x20
  __int64 v12; // x24
  int64_t UserId; // x0
  __int64 v14; // x1
  int64_t v15; // x21
  int32_t condQuestPhase; // w22
  int32_t condQuestId; // w23

  if ( (byte_4B164E8 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B164E8 = 1;
  }
  DataListByType = GuideMaster__getDataListByType(this, type, method);
  if ( !DataListByType )
    return 0LL;
  v9 = *(_QWORD *)&DataListByType->max_length;
  v10 = DataListByType;
  v11 = 0LL;
  if ( v9 && (int)v9 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= (unsigned int)v9 )
        sub_1BCAA44(DataListByType, v8);
      v11 = v10->m_Items[v12];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v11 )
        sub_1BCAA3C(UserId, v14);
      v15 = UserId;
      condQuestId = v11->fields.condQuestId;
      condQuestPhase = v11->fields.condQuestPhase;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v14);
      DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(v15, condQuestId, condQuestPhase, -1, 0, 0LL);
      if ( ((unsigned __int8)DataListByType & 1) != 0 || !v11->fields.condQuestId )
        break;
      LODWORD(v9) = v10->max_length;
      if ( (int)++v12 >= (int)v9 )
        return 0LL;
    }
  }
  return v11;
}


void __fastcall GuideMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B164E9 & 1) == 0 )
  {
    sub_1BCA7E0(&GuideMaster___c_TypeInfo, v1, v2);
    byte_4B164E9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(GuideMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  GuideMaster___c_TypeInfo->static_fields->__9 = (struct GuideMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)GuideMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}