void __fastcall WarBoardOnboardSkillMaster___ctor(WarBoardOnboardSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B03167 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__, method);
    byte_4B03167 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    364,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardOnboardSkillEntity_o *__fastcall WarBoardOnboardSkillMaster__GetEntity(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B03165 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_4B03165 = 1;
  }
  PK = (Il2CppObject *)WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardOnboardSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_32B3B28 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarBoardOnboardSkillEntity__o *__fastcall WarBoardOnboardSkillMaster__GetEntityList(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t timing,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  Il2CppClass *v18; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v21; // w24
  int32_t v22; // w25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x20
  Il2CppObject *v30; // x21
  struct WarBoardOnboardSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4B03169 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Count__,
      *(_QWORD *)&stageId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Item__, v9);
    sub_1BC3008(&System_Comparison_WarBoardOnboardSkillEntity__TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo, v14);
    sub_1BC3008(&Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, v15);
    sub_1BC3008(&WarBoardOnboardSkillMaster___c_TypeInfo, v16);
    byte_4B03169 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v22,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Item__);
      if ( list )
      {
        v18 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == stageId && *((_DWORD *)list + 9) == timing && *((_DWORD *)list + 10) == turn )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v26 = Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)list,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v28[4] = v18;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v18, v23, v24);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BC3264(list, v18);
  }
LABEL_17:
  list = WarBoardOnboardSkillMaster___c_TypeInfo;
  if ( !WarBoardOnboardSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOnboardSkillMaster___c_TypeInfo);
    list = WarBoardOnboardSkillMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarBoardOnboardSkillMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_WarBoardOnboardSkillEntity__TypeInfo);
    System_Comparison_object____ctor(v29, v30, Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, 0LL);
    static_fields = WarBoardOnboardSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_WarBoardOnboardSkillEntity__o *)v29;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v29, v32, v33);
  }
  if ( !v17 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_57288964(
    v17,
    v29,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__);
  return (System_Collections_Generic_List_WarBoardOnboardSkillEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardOnboardSkillMaster__IsOnBoardSkillExist(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t timing,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w23
  int32_t v13; // w24
  bool v14; // w26
  Il2CppObject *Item; // x0

  if ( (byte_4B03168 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Count__,
      *(_QWORD *)&stageId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Item__, v9);
    byte_4B03168 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    v14 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v13,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Item__);
      if ( !Item
        || LODWORD(Item[1].klass) != stageId
        || HIDWORD(Item[2].klass) != timing
        || LODWORD(Item[2].monitor) != turn )
      {
        v14 = ++v13 < v12;
        if ( v12 != v13 )
          continue;
      }
      return v14;
    }
LABEL_15:
    sub_1BC3264(list, *(_QWORD *)&stageId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardOnboardSkillMaster__TryGetEntity(
        WarBoardOnboardSkillMaster_o *this,
        WarBoardOnboardSkillEntity_o **entity,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B03166 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__,
      entity);
    byte_4B03166 = 1;
  }
  PK = (Il2CppObject *)WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__);
}


void __fastcall WarBoardOnboardSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B0316A & 1) == 0 )
  {
    sub_1BC3008(&WarBoardOnboardSkillMaster___c_TypeInfo, v1);
    byte_4B0316A = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(WarBoardOnboardSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardOnboardSkillMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardOnboardSkillMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)WarBoardOnboardSkillMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall WarBoardOnboardSkillMaster___c___ctor(WarBoardOnboardSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardOnboardSkillMaster___c___GetEntityList_b__4_0(
        WarBoardOnboardSkillMaster___c_o *this,
        WarBoardOnboardSkillEntity_o *a,
        WarBoardOnboardSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BC3264(this, a);
  return a->fields.idx - b->fields.idx;
}