void __fastcall GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70152 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__, method);
    byte_4A70152 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    159,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A70150 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__, *(_QWORD *)&guideType);
    byte_4A70150 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_312C900 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
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

  if ( (byte_4A70151 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__, entity);
    byte_4A70151 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
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
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppClass *v16; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v19; // w22
  int32_t v20; // w23
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct GuideMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_4A70153 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&System_Comparison_GuideEntity__TypeInfo, v6);
    sub_1B90010(&GuideEntity_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_GuideEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_GuideEntity__Sort__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_GuideEntity__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_GuideEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_GuideEntity__TypeInfo, v12);
    sub_1B90010(&Method_GuideMaster___c__getDataListByType_b__3_0__, v13);
    sub_1B90010(&GuideMaster___c_TypeInfo, v14);
    byte_4A70153 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_GuideEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(GuideEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(GuideEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == GuideEntity_TypeInfo
          && *((_DWORD *)list + 4) == type )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_GuideEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = v16;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v16, v21, v22);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B9026C(list, v16);
  }
LABEL_17:
  list = GuideMaster___c_TypeInfo;
  if ( !GuideMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GuideMaster___c_TypeInfo);
    list = GuideMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = GuideMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_GuideEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_GuideMaster___c__getDataListByType_b__3_0__, 0LL);
    static_fields = GuideMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GuideEntity__o *)v28;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55649412(
    v15,
    v28,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v15,
                                (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  GuideEntity_array *DataListByType; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  GuideEntity_array *v9; // x19
  GuideEntity_o *v10; // x20
  __int64 v11; // x24
  int64_t UserId; // x0
  __int64 v13; // x1
  int64_t v14; // x21
  int32_t condQuestPhase; // w22
  int32_t condQuestId; // w23

  if ( (byte_4A70154 & 1) == 0 )
  {
    sub_1B90010(&CondType_TypeInfo, *(_QWORD *)&type);
    sub_1B90010(&NetworkManager_TypeInfo, v5);
    byte_4A70154 = 1;
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
        sub_1B90274(DataListByType, v7);
      v10 = v9->m_Items[v11];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v10 )
        sub_1B9026C(UserId, v13);
      v14 = UserId;
      condQuestId = v10->fields.condQuestId;
      condQuestPhase = v10->fields.condQuestPhase;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(v14, condQuestId, condQuestPhase, -1, 0, 0LL);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A70155 & 1) == 0 )
  {
    sub_1B90010(&GuideMaster___c_TypeInfo, v1);
    byte_4A70155 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(GuideMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GuideMaster___c_TypeInfo->static_fields->__9 = (struct GuideMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)GuideMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, a);
  return b->fields.priority - a->fields.priority;
}