void __fastcall WarBoardOnboardSkillMaster___ctor(WarBoardOnboardSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B171EF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__,
      method,
      v2);
    byte_4B171EF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    358,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardOnboardSkillEntity_o *__fastcall WarBoardOnboardSkillMaster__GetEntity(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B171ED & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__,
      *(_QWORD *)&stageId,
      *(_QWORD *)&idx);
    byte_4B171ED = 1;
  }
  PK = (Il2CppObject *)WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardOnboardSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31B3198 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x19
  int64_t v28; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v31; // x2
  __int64 v32; // x3
  int32_t v33; // w24
  int32_t v34; // w25
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Comparison_T__o *v44; // x20
  Il2CppObject *v45; // x21
  struct WarBoardOnboardSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B171F1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&stageId,
      *(_QWORD *)&timing);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Comparison_WarBoardOnboardSkillEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, v21, v22);
    sub_1BCA7E0(&WarBoardOnboardSkillMaster___c_TypeInfo, v23, v24);
    sub_1BCA7E0(&WarBoardOnboardSkillEntity_TypeInfo, v25, v26);
    byte_4B171F1 = 1;
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo,
                                                       *(_QWORD *)&stageId,
                                                       *(_QWORD *)&timing,
                                                       *(_QWORD *)&turn);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v33 = Count;
    v34 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v34,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v28 = (int64_t)list;
        methodPtr_low = LOBYTE(WarBoardOnboardSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(WarBoardOnboardSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == WarBoardOnboardSkillEntity_TypeInfo
          && *((_DWORD *)list + 4) == stageId
          && *((_DWORD *)list + 9) == timing
          && *((_DWORD *)list + 10) == turn )
        {
          if ( !v27 )
            break;
          items = v27->fields._items;
          v41 = Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__;
          ++v27->fields._version;
          if ( !items )
            break;
          size = v27->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v27->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v28;
            sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), v28, v31, v32, v35, v36, v37, v38);
          }
        }
      }
      if ( v33 == ++v34 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1BCAA3C(list, v28);
  }
LABEL_19:
  list = WarBoardOnboardSkillMaster___c_TypeInfo;
  if ( !WarBoardOnboardSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOnboardSkillMaster___c_TypeInfo, v28);
    list = WarBoardOnboardSkillMaster___c_TypeInfo;
  }
  v44 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v44 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v28);
      list = WarBoardOnboardSkillMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)**((_QWORD **)list + 23);
    v44 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_WarBoardOnboardSkillEntity__TypeInfo, v28, v31, v32);
    System_Comparison_object____ctor(v44, v45, Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, 0LL);
    static_fields = WarBoardOnboardSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_WarBoardOnboardSkillEntity__o *)v44;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v44, v47, v48, v49, v50, v51, v52);
  }
  if ( !v27 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_56244000(
    v27,
    v44,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__);
  return (System_Collections_Generic_List_WarBoardOnboardSkillEntity__o *)v27;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  bool v17; // w27
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B171F0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&stageId,
      *(_QWORD *)&timing);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&WarBoardOnboardSkillEntity_TypeInfo, v11, v12);
    byte_4B171F0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    v17 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v16,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(WarBoardOnboardSkillEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (WarBoardOnboardSkillEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardOnboardSkillEntity_TypeInfo
        || LODWORD(Item[1].klass) != stageId
        || HIDWORD(Item[2].klass) != timing
        || LODWORD(Item[2].monitor) != turn )
      {
        v17 = ++v16 < v15;
        if ( v15 != v16 )
          continue;
      }
      return v17;
    }
LABEL_17:
    sub_1BCAA3C(list, *(_QWORD *)&stageId);
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

  if ( (byte_4B171EE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&stageId);
    byte_4B171EE = 1;
  }
  PK = (Il2CppObject *)WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__);
}


void __fastcall WarBoardOnboardSkillMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B171F2 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardOnboardSkillMaster___c_TypeInfo, v1, v2);
    byte_4B171F2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardOnboardSkillMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardOnboardSkillMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardOnboardSkillMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardOnboardSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.idx - b->fields.idx;
}