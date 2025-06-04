void __fastcall GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02358 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__, method);
    byte_4B02358 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    163,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02356 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__, *(_QWORD *)&guideType);
    byte_4B02356 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_32B3B28 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
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

  if ( (byte_4B02357 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__, entity);
    byte_4B02357 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
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
  Il2CppClass *v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct GuideMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4B02359 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Count__, *(_QWORD *)&type);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Item__, v5);
    sub_1BC3008(&System_Comparison_GuideEntity__TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GuideEntity__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_GuideEntity__Sort__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_GuideEntity__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_GuideEntity___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_GuideEntity__TypeInfo, v11);
    sub_1BC3008(&Method_GuideMaster___c__getDataListByType_b__3_0__, v12);
    sub_1BC3008(&GuideMaster___c_TypeInfo, v13);
    byte_4B02359 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GuideEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Count__);
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
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Item__);
      if ( list )
      {
        v15 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == type )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_GuideEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)list,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v25[4] = v15;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v15, v20, v21);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1BC3264(list, v15);
  }
LABEL_15:
  list = GuideMaster___c_TypeInfo;
  if ( !GuideMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GuideMaster___c_TypeInfo);
    list = GuideMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = GuideMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_GuideEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_GuideMaster___c__getDataListByType_b__3_0__, 0LL);
    static_fields = GuideMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GuideEntity__o *)v26;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v26, v29, v30);
  }
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_57288964(
    v14,
    v26,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v14,
                                (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  GuideEntity_array *DataListByType; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  GuideEntity_array *v10; // x19
  GuideEntity_o *v11; // x21
  __int64 v12; // x25
  NetworkManager_c *v13; // x0
  int32_t condQuestPhase; // w23
  int32_t condQuestId; // w24
  int64_t userIdNumber; // x22

  if ( (byte_4B0235A & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&type);
    sub_1BC3008(&NetworkManager_TypeInfo, v5);
    byte_4B0235A = 1;
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
        sub_1BC326C(DataListByType, v7, v8);
      v11 = v10->m_Items[v12];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v7);
        byte_4AFC1F1 = 1;
      }
      v13 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v13 = NetworkManager_TypeInfo;
      }
      if ( !v11 )
        sub_1BC3264(v13, v7);
      condQuestId = v11->fields.condQuestId;
      condQuestPhase = v11->fields.condQuestPhase;
      userIdNumber = v13->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(
                                              userIdNumber,
                                              condQuestId,
                                              condQuestPhase,
                                              -1,
                                              0,
                                              0LL);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B0235B & 1) == 0 )
  {
    sub_1BC3008(&GuideMaster___c_TypeInfo, v1);
    byte_4B0235B = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(GuideMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GuideMaster___c_TypeInfo->static_fields->__9 = (struct GuideMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)GuideMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, a);
  return b->fields.priority - a->fields.priority;
}