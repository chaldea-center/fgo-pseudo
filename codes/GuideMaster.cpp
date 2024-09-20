void __fastcall GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B447 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
    byte_4A5B447 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    159,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B445 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
    byte_4A5B445 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_object__object__object___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            PK,
                            (const MethodInfo_311DC8C *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
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

  if ( (byte_4A5B446 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
    byte_4A5B446 = 1;
  }
  PK = (Il2CppObject *)GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
}


GuideEntity_array *__fastcall GuideMaster__getDataListByType(
        GuideMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct GuideMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5B448 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_GuideEntity__TypeInfo);
    sub_1B885B0(&GuideEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GuideEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GuideEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GuideEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GuideEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GuideEntity__TypeInfo);
    sub_1B885B0(&Method_GuideMaster___c__getDataListByType_b__3_0__);
    sub_1B885B0(&GuideMaster___c_TypeInfo);
    byte_4A5B448 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GuideEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(GuideEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(GuideEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == GuideEntity_TypeInfo
          && *((_DWORD *)list + 4) == type )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_GuideEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v6, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  list = GuideMaster___c_TypeInfo;
  if ( !GuideMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GuideMaster___c_TypeInfo);
    list = GuideMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = GuideMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)list + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_GuideEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_GuideMaster___c__getDataListByType_b__3_0__, 0LL);
    static_fields = GuideMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_GuideEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v18, v21, v22);
  }
  if ( !v5 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v5,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


GuideEntity_o *__fastcall GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  GuideEntity_array *DataListByType; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  GuideEntity_array *v8; // x19
  GuideEntity_o *v9; // x20
  __int64 v10; // x24
  int64_t UserId; // x0
  __int64 v12; // x1
  int64_t v13; // x21
  int32_t condQuestPhase; // w22
  int32_t condQuestId; // w23

  if ( (byte_4A5B449 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B449 = 1;
  }
  DataListByType = GuideMaster__getDataListByType(this, type, method);
  if ( !DataListByType )
    return 0LL;
  v7 = *(_QWORD *)&DataListByType->max_length;
  v8 = DataListByType;
  v9 = 0LL;
  if ( v7 && (int)v7 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v10 >= (unsigned int)v7 )
        sub_1B88814(DataListByType, v6);
      v9 = v8->m_Items[v10];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v9 )
        sub_1B8880C(UserId, v12);
      v13 = UserId;
      condQuestId = v9->fields.condQuestId;
      condQuestPhase = v9->fields.condQuestPhase;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(v13, condQuestId, condQuestPhase, -1, 0, 0LL);
      if ( ((unsigned __int8)DataListByType & 1) != 0 || !v9->fields.condQuestId )
        break;
      LODWORD(v7) = v8->max_length;
      if ( (int)++v10 >= (int)v7 )
        return 0LL;
    }
  }
  return v9;
}


void __fastcall GuideMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B44A & 1) == 0 )
  {
    sub_1B885B0(&GuideMaster___c_TypeInfo);
    byte_4A5B44A = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(GuideMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  GuideMaster___c_TypeInfo->static_fields->__9 = (struct GuideMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)GuideMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}