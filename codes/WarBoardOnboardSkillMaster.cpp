void __fastcall WarBoardOnboardSkillMaster___ctor(WarBoardOnboardSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5718 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__, method);
    byte_4BB5718 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    362,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardOnboardSkillEntity_o *__fastcall WarBoardOnboardSkillMaster__GetEntity(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB5716 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_4BB5716 = 1;
  }
  PK = (Il2CppObject *)WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardOnboardSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_323D0DC *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__);
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
  int64_t v18; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v21; // w24
  int32_t v22; // w25
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Comparison_T__o *v33; // x20
  Il2CppObject *v34; // x21
  struct WarBoardOnboardSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BB571A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Count__,
      *(_QWORD *)&stageId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Item__, v9);
    sub_1C13D24(&System_Comparison_WarBoardOnboardSkillEntity__TypeInfo, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo, v14);
    sub_1C13D24(&Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, v15);
    sub_1C13D24(&WarBoardOnboardSkillMaster___c_TypeInfo, v16);
    byte_4BB571A = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Count__);
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
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Item__);
      if ( list )
      {
        v18 = (int64_t)list;
        if ( *((_DWORD *)list + 4) == stageId && *((_DWORD *)list + 9) == timing && *((_DWORD *)list + 10) == turn )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v30 = Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)list,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v18;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v32 + 4), v18, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1C13F80(list, v18);
  }
LABEL_17:
  list = WarBoardOnboardSkillMaster___c_TypeInfo;
  if ( !WarBoardOnboardSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOnboardSkillMaster___c_TypeInfo);
    list = WarBoardOnboardSkillMaster___c_TypeInfo;
  }
  v33 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarBoardOnboardSkillMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)list + 23);
    v33 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_WarBoardOnboardSkillEntity__TypeInfo);
    System_Comparison_object____ctor(v33, v34, Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, 0LL);
    static_fields = WarBoardOnboardSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_WarBoardOnboardSkillEntity__o *)v33;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v33, v36, v37, v38, v39, v40, v41);
  }
  if ( !v17 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56814736(
    v17,
    v33,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__);
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

  if ( (byte_4BB5719 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Count__,
      *(_QWORD *)&stageId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Item__, v9);
    byte_4BB5719 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Count__);
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
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_WarBoardOnboardSkillEntity__get_Item__);
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
    sub_1C13F80(list, *(_QWORD *)&stageId);
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

  if ( (byte_4BB5717 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__,
      entity);
    byte_4BB5717 = 1;
  }
  PK = (Il2CppObject *)WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__);
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

  if ( (byte_4BB571B & 1) == 0 )
  {
    sub_1C13D24(&WarBoardOnboardSkillMaster___c_TypeInfo, v1);
    byte_4BB571B = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarBoardOnboardSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardOnboardSkillMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardOnboardSkillMaster___c_o *)v2;
  sub_1C13CC8(
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
    sub_1C13F80(this, a);
  return a->fields.idx - b->fields.idx;
}