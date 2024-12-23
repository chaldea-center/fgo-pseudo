void __fastcall WarBoardOnboardSkillMaster___ctor(WarBoardOnboardSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67BEF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__, method);
    byte_4B67BEF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    362,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardOnboardSkillEntity_o *__fastcall WarBoardOnboardSkillMaster__GetEntity(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67BED & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_4B67BED = 1;
  }
  PK = (Il2CppObject *)WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardOnboardSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31FDB1C *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__);
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
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  int64_t v19; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v22; // w24
  int32_t v23; // w25
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x20
  Il2CppObject *v36; // x21
  struct WarBoardOnboardSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B67BF1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&System_Comparison_WarBoardOnboardSkillEntity__TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo, v14);
    sub_1BE4ACC(&Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, v15);
    sub_1BE4ACC(&WarBoardOnboardSkillMaster___c_TypeInfo, v16);
    sub_1BE4ACC(&WarBoardOnboardSkillEntity_TypeInfo, v17);
    byte_4B67BF1 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v23,
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = (int64_t)list;
        methodPtr_low = LOBYTE(WarBoardOnboardSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(WarBoardOnboardSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == WarBoardOnboardSkillEntity_TypeInfo
          && *((_DWORD *)list + 4) == stageId
          && *((_DWORD *)list + 9) == timing
          && *((_DWORD *)list + 10) == turn )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v32 = Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)list,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v19;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), v19, v24, v25, v26, v27, v28, v29);
          }
        }
      }
      if ( v22 == ++v23 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1BE4D28(list, v19);
  }
LABEL_19:
  list = WarBoardOnboardSkillMaster___c_TypeInfo;
  if ( !WarBoardOnboardSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOnboardSkillMaster___c_TypeInfo);
    list = WarBoardOnboardSkillMaster___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarBoardOnboardSkillMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)list + 23);
    v35 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_WarBoardOnboardSkillEntity__TypeInfo);
    System_Comparison_object____ctor(v35, v36, Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, 0LL);
    static_fields = WarBoardOnboardSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_WarBoardOnboardSkillEntity__o *)v35;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v35, v38, v39, v40, v41, v42, v43);
  }
  if ( !v18 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_56548584(
    v18,
    v35,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__);
  return (System_Collections_Generic_List_WarBoardOnboardSkillEntity__o *)v18;
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
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  bool v15; // w27
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B67BF0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&WarBoardOnboardSkillEntity_TypeInfo, v10);
    byte_4B67BF0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    v15 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v14,
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(WarBoardOnboardSkillEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (WarBoardOnboardSkillEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardOnboardSkillEntity_TypeInfo
        || LODWORD(Item[1].klass) != stageId
        || HIDWORD(Item[2].klass) != timing
        || LODWORD(Item[2].monitor) != turn )
      {
        v15 = ++v14 < v13;
        if ( v13 != v14 )
          continue;
      }
      return v15;
    }
LABEL_17:
    sub_1BE4D28(list, *(_QWORD *)&stageId);
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

  if ( (byte_4B67BEE & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__,
      entity);
    byte_4B67BEE = 1;
  }
  PK = (Il2CppObject *)WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__);
}


void __fastcall WarBoardOnboardSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B67BF2 & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardOnboardSkillMaster___c_TypeInfo, v1);
    byte_4B67BF2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(WarBoardOnboardSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardOnboardSkillMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardOnboardSkillMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)WarBoardOnboardSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return a->fields.idx - b->fields.idx;
}