void __fastcall WarBoardOnboardSkillMaster___ctor(WarBoardOnboardSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C136 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__);
    byte_4A5C136 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    358,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardOnboardSkillEntity_o *__fastcall WarBoardOnboardSkillMaster__GetEntity(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C134 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__);
    byte_4A5C134 = 1;
  }
  PK = (Il2CppObject *)WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardOnboardSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_311DC8C *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardOnboardSkillEntity__o *__fastcall WarBoardOnboardSkillMaster__GetEntityList(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t timing,
        int32_t turn,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  Il2CppClass *v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct WarBoardOnboardSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A5C138 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_WarBoardOnboardSkillEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo);
    sub_1B885B0(&Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__);
    sub_1B885B0(&WarBoardOnboardSkillMaster___c_TypeInfo);
    sub_1B885B0(&WarBoardOnboardSkillEntity_TypeInfo);
    byte_4A5C138 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v14,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(WarBoardOnboardSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(WarBoardOnboardSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == WarBoardOnboardSkillEntity_TypeInfo
          && *((_DWORD *)list + 4) == stageId
          && *((_DWORD *)list + 9) == timing
          && *((_DWORD *)list + 10) == turn )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v19 = Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v21[4] = v10;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v10, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1B8880C(list, v10);
  }
LABEL_19:
  list = WarBoardOnboardSkillMaster___c_TypeInfo;
  if ( !WarBoardOnboardSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOnboardSkillMaster___c_TypeInfo);
    list = WarBoardOnboardSkillMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarBoardOnboardSkillMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)list + 23);
    v22 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_WarBoardOnboardSkillEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, 0LL);
    static_fields = WarBoardOnboardSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_WarBoardOnboardSkillEntity__o *)v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v22, v25, v26);
  }
  if ( !v9 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    v22,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__);
  return (System_Collections_Generic_List_WarBoardOnboardSkillEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardOnboardSkillMaster__IsOnBoardSkillExist(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t timing,
        int32_t turn,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  bool v13; // w27
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5C137 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&WarBoardOnboardSkillEntity_TypeInfo);
    byte_4A5C137 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(WarBoardOnboardSkillEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (WarBoardOnboardSkillEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardOnboardSkillEntity_TypeInfo
        || LODWORD(Item[1].klass) != stageId
        || HIDWORD(Item[2].klass) != timing
        || LODWORD(Item[2].monitor) != turn )
      {
        v13 = ++v12 < v11;
        if ( v11 != v12 )
          continue;
      }
      return v13;
    }
LABEL_17:
    sub_1B8880C(list, *(_QWORD *)&stageId);
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

  if ( (byte_4A5C135 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__);
    byte_4A5C135 = 1;
  }
  PK = (Il2CppObject *)WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__);
}


void __fastcall WarBoardOnboardSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C139 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardOnboardSkillMaster___c_TypeInfo);
    byte_4A5C139 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardOnboardSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardOnboardSkillMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardOnboardSkillMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardOnboardSkillMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return a->fields.idx - b->fields.idx;
}