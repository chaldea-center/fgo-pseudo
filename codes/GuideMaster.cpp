void GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CCAD & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
    byte_4D2CCAD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    163,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2CCAB & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
    byte_4D2CCAB = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_345FF78 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GuideMaster__TryGetEntity(
        GuideMaster_o *this,
        GuideEntity_o **entity,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2CCAC & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
    byte_4D2CCAC = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
}


GuideEntity_array *GuideMaster__getDataListByType(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct GuideMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4D2CCAE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Item__);
    sub_1C94098(&System_Comparison_GuideEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GuideEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GuideEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_GuideEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_GuideEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GuideEntity__TypeInfo);
    sub_1C94098(&Method_GuideMaster___c__getDataListByType_b__3_0__);
    sub_1C94098(&GuideMaster___c_TypeInfo);
    byte_4D2CCAE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GuideEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_GuideEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == type )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_GuideEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = v6;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C942F0(list, v6);
  }
LABEL_15:
  list = GuideMaster___c_TypeInfo;
  if ( !GuideMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GuideMaster___c_TypeInfo);
    list = GuideMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = GuideMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_GuideEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_GuideMaster___c__getDataListByType_b__3_0__, 0);
    static_fields = GuideMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GuideEntity__o *)v21;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_59164920(
    v5,
    v21,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


GuideEntity_o *GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  GuideEntity_array *DataListByType; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  GuideEntity_array *v8; // x19
  GuideEntity_o *v9; // x21
  __int64 v10; // x25
  NetworkManager_c *v11; // x0
  int32_t condQuestPhase; // w23
  int32_t condQuestId; // w24
  int64_t userIdNumber; // x22

  if ( (byte_4D2CCAF & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2CCAF = 1;
  }
  DataListByType = GuideMaster__getDataListByType(this, type, method);
  if ( !DataListByType )
    return 0;
  max_length = DataListByType->max_length;
  v8 = DataListByType;
  v9 = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v10 >= (unsigned int)max_length )
        sub_1C942F8(DataListByType);
      v9 = v8->m_Items[v10];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
      }
      v11 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v11 = NetworkManager_TypeInfo;
      }
      if ( !v9 )
        sub_1C942F0(v11, v6);
      condQuestId = v9->fields.condQuestId;
      condQuestPhase = v9->fields.condQuestPhase;
      userIdNumber = v11->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(
                                              userIdNumber,
                                              condQuestId,
                                              condQuestPhase,
                                              -1,
                                              0,
                                              0);
      if ( ((unsigned __int8)DataListByType & 1) != 0 || !v9->fields.condQuestId )
        break;
      LODWORD(max_length) = v8->max_length;
      if ( (int)++v10 >= (int)max_length )
        return 0;
    }
  }
  return v9;
}


void GuideMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2CCB0 & 1) == 0 )
  {
    sub_1C94098(&GuideMaster___c_TypeInfo);
    byte_4D2CCB0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(GuideMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GuideMaster___c_TypeInfo->static_fields->__9 = (struct GuideMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)GuideMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GuideMaster___c___ctor(GuideMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t GuideMaster___c___getDataListByType_b__3_0(
        GuideMaster___c_o *this,
        GuideEntity_o *a,
        GuideEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C942F0(this, a);
  return b->fields.priority - a->fields.priority;
}