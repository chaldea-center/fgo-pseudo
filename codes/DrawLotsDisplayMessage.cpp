void __fastcall DrawLotsDisplayMessage___ctor(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B186F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v5, v6);
    byte_4B186F0 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  this->fields.displayedList = (struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DrawLotsDisplayMessage__DrawLots(
        DrawLotsDisplayMessage_o *this,
        int32_t groupId,
        int32_t defMessageId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v21; // x22
  BattleMessageGroupMaster_o *Master_object; // x0
  __int64 v23; // x1
  System_Collections_ICollection_o *Entities; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_object__o *displayedList; // x21
  System_Predicate_object__o *v30; // x23
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  __int64 v34; // x3
  DrawLotsDisplayMessage_DisplayedInGroup_o *v35; // x21
  const MethodInfo *v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v46; // x8

  if ( (byte_4B186ED & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_BattleMessageGroupMaster___,
      *(_QWORD *)&groupId,
      *(_QWORD *)&defMessageId);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__, v13, v14);
    sub_1BCA7E0(&System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__, v17, v18);
    sub_1BCA7E0(&DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo, v19, v20);
    byte_4B186ED = 1;
  }
  v21 = sub_1BCAA2C(
          DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo,
          *(_QWORD *)&groupId,
          *(_QWORD *)&defMessageId,
          method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_19;
  *(_DWORD *)(v21 + 16) = groupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
  Master_object = (BattleMessageGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleMessageGroupMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entities = (System_Collections_ICollection_o *)BattleMessageGroupMaster__GetEntities(
                                                   Master_object,
                                                   *(_DWORD *)(v21 + 16),
                                                   0LL);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0LL) )
    return defMessageId;
  displayedList = (System_Collections_Generic_List_object__o *)this->fields.displayedList;
  v30 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo,
                                        v25,
                                        v26,
                                        v27);
  System_Predicate_object____ctor(
    v30,
    (Il2CppObject *)v21,
    Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__,
    0LL);
  if ( !displayedList )
    goto LABEL_19;
  v31 = System_Collections_Generic_List_object___Find(
          displayedList,
          (System_Predicate_T__o *)v30,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
  if ( !v31 )
  {
    v35 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1BCAA2C(
                                                         DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo,
                                                         v32,
                                                         v33,
                                                         v34);
    DrawLotsDisplayMessage_DisplayedInGroup___ctor(v35, v36);
    if ( v35 )
    {
      v35->fields.groupId = *(_DWORD *)(v21 + 16);
      Master_object = (BattleMessageGroupMaster_o *)this->fields.displayedList;
      if ( Master_object )
      {
        v43 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v44 = Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( v43 )
        {
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v43 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              (Il2CppObject *)v35,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = v43 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v46 + 32) = v35;
            sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)v35, v37, v38, v39, v40, v41, v42);
          }
          return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
                   v35,
                   (BattleMessageGroupEntity_array *)Entities,
                   v33);
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(Master_object, v23);
  }
  v35 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v31;
  return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
           v35,
           (BattleMessageGroupEntity_array *)Entities,
           v33);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *__fastcall DrawLotsDisplayMessage__GetSaveData(
        DrawLotsDisplayMessage_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DrawLotsDisplayMessage___c_c *v13; // x0
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x19
  System_Func_object__object__o *_9__4_0; // x20
  Il2CppObject *v16; // x21
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B186EE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v5, v6);
    sub_1BCA7E0(
      &System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
      v7,
      v8);
    sub_1BCA7E0(&Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, v9, v10);
    sub_1BCA7E0(&DrawLotsDisplayMessage___c_TypeInfo, v11, v12);
    byte_4B186EE = 1;
  }
  v13 = DrawLotsDisplayMessage___c_TypeInfo;
  displayedList = this->fields.displayedList;
  if ( !DrawLotsDisplayMessage___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage___c_TypeInfo, method);
    v13 = DrawLotsDisplayMessage___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v13->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = DrawLotsDisplayMessage___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__object____ctor(_9__4_0, v16, Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, 0LL);
    static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)displayedList,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                     v24,
                                                                     (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage__Init(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DrawLotsDisplayMessage_o *v3; // x19
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B186EC & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_o *)sub_1BCA7E0(
                                         &Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__,
                                         method,
                                         v2);
    byte_4B186EC = 1;
  }
  displayedList = v3->fields.displayedList;
  if ( !displayedList )
    sub_1BCAA3C(this, method);
  size = displayedList->fields._size;
  v6 = displayedList->fields._version + 1;
  displayedList->fields._size = 0;
  displayedList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)displayedList->fields._items, 0, size, 0LL);
}


void __fastcall DrawLotsDisplayMessage__SetSaveData(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *saves,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_object__o *v10; // x21

  if ( (byte_4B186EF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo, saves, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v6, v7);
    sub_1BCA7E0(&Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, v8, v9);
    byte_4B186EF = 1;
  }
  v10 = (System_Action_object__o *)sub_1BCAA2C(
                                     System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
                                     saves,
                                     method,
                                     v3);
  System_Action_object____ctor(v10, (Il2CppObject *)this, Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, 0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)saves,
    (System_Action_T__o *)v10,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage___SetSaveData_b__5_0(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *displayedList; // x19
  DrawLotsDisplayMessage_DisplayedInGroup_o *v9; // x20
  const MethodInfo *v10; // x1
  DrawLotsDisplayMessage_DisplayedInGroup_o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B186F1 & 1) == 0 )
  {
    sub_1BCA7E0(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, sv, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v6, v7);
    byte_4B186F1 = 1;
  }
  displayedList = (System_Collections_Generic_List_object__o *)this->fields.displayedList;
  v9 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1BCAA2C(
                                                      DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo,
                                                      sv,
                                                      method,
                                                      v3);
  DrawLotsDisplayMessage_DisplayedInGroup___ctor(v9, v10);
  if ( !v9
    || (v11 = DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(v9, sv, v13), !displayedList)
    || (items = displayedList->fields._items,
        v21 = Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__,
        ++displayedList->fields._version,
        !items) )
  {
    sub_1BCAA3C(v11, v12);
  }
  size = displayedList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      displayedList,
      (Il2CppObject *)v9,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    displayedList->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v9;
    sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v9, v14, v15, v16, v17, v18, v19);
  }
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_HashSet_int__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B186F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v5, v6);
    byte_4B186F5 = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashMsgId = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.hashMsgId, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_array *entities,
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
  System_Func_object__bool__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_ICollection_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  DrawLotsDisplayMessage_DisplayedInGroup___c_c *v33; // x0
  System_Func_object__int__o *_9__2_1; // x20
  Il2CppObject *v35; // x22
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Int32_array *v44; // x0
  __int64 v45; // x8
  int32_t v46; // w19

  if ( (byte_4B186F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__, entities, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v12, v13);
    sub_1BCA7E0(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Func_BattleMessageGroupEntity__int__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Clear__, v20, v21);
    sub_1BCA7E0(&Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__, v22, v23);
    sub_1BCA7E0(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v24, v25);
    byte_4B186F2 = 1;
  }
  v26 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_BattleMessageGroupEntity__bool__TypeInfo,
                                         entities,
                                         method,
                                         v3);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
    0LL);
  v27 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  v28 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_object_(
                                              v27,
                                              (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
  if ( BasicHelper__IsNullOrEmpty(v28, 0LL) )
  {
    hashMsgId = this->fields.hashMsgId;
    if ( !hashMsgId )
      goto LABEL_17;
    System_Collections_Generic_HashSet_int___Clear(
      hashMsgId,
      (const MethodInfo_3455238 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    v28 = (System_Collections_ICollection_o *)entities;
  }
  v33 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  if ( !DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v29);
    v33 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__int__o *)v33->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v29);
      v33 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_BattleMessageGroupEntity__int__TypeInfo,
                                              v29,
                                              v30,
                                              v31);
    System_Func_object__int____ctor(
      _9__2_1,
      v35,
      Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__,
      0LL);
    static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    static_fields->__9__2_1 = (struct System_Func_BattleMessageGroupEntity__int__o *)_9__2_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_1, (int64_t)_9__2_1, v37, v38, v39, v40, v41, v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
  v44 = System_Linq_Enumerable__ToArray_int_(
          v43,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  hashMsgId = (System_Collections_Generic_HashSet_int__o *)RandomUtility__GetRandomRangeIndex(v44, 0, 0LL);
  if ( !v28 )
    goto LABEL_17;
  if ( (unsigned int)hashMsgId >= LODWORD(v28[1].monitor) )
    sub_1BCAA44(hashMsgId, v29);
  v45 = *((_QWORD *)&v28[2].klass + (int)hashMsgId);
  if ( !v45 || (hashMsgId = this->fields.hashMsgId) == 0LL )
LABEL_17:
    sub_1BCAA3C(hashMsgId, v29);
  v46 = *(_DWORD *)(v45 + 20);
  System_Collections_Generic_HashSet_int___Add(
    hashMsgId,
    v46,
    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  return v46;
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_Int32_array *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B186F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, method, v2);
    sub_1BCA7E0(&DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo, v5, v6);
    byte_4B186F3 = 1;
  }
  v7 = sub_1BCAA2C(DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_DWORD *)(v7 + 16) = this->fields.groupId;
  v10 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashMsgId,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v7 + 24) = v10;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)v10, v11, v12, v13, v14, v15, v16);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)v7;
}


DrawLotsDisplayMessage_DisplayedInGroup_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_IEnumerable_T__o *msgIds; // x20
  System_Collections_Generic_HashSet_int__o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B186F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, sv, method);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v6, v7);
    byte_4B186F4 = 1;
  }
  if ( sv )
  {
    this->fields.groupId = sv->fields.groupId;
    msgIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.msgIds;
    v9 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_HashSet_int__TypeInfo,
                                                        sv,
                                                        method,
                                                        v3);
    System_Collections_Generic_HashSet_int____ctor_54873236(
      v9,
      msgIds,
      (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
    this->fields.hashMsgId = v9;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.hashMsgId, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
  return this;
}


bool __fastcall DrawLotsDisplayMessage_DisplayedInGroup___DrawLotsMessageId_b__2_0(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_o *v4; // x20

  v4 = this;
  if ( (byte_4B186F6 & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1BCA7E0(
                                                          &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                          ent,
                                                          method);
    byte_4B186F6 = 1;
  }
  if ( !ent || (this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v4->fields.hashMsgId) == 0LL )
    sub_1BCAA3C(this, ent);
  return !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            ent->fields.messageId,
            (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B186F7 & 1) == 0 )
  {
    sub_1BCA7E0(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1, v2);
    byte_4B186F7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields->__9 = (struct DrawLotsDisplayMessage_DisplayedInGroup___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___c___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DrawLotsDisplayMessage_DisplayedInGroup___c___DrawLotsMessageId_b__2_1(
        DrawLotsDisplayMessage_DisplayedInGroup___c_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.probability;
}


void __fastcall DrawLotsDisplayMessage___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B186F8 & 1) == 0 )
  {
    sub_1BCA7E0(&DrawLotsDisplayMessage___c_TypeInfo, v1, v2);
    byte_4B186F8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(DrawLotsDisplayMessage___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  DrawLotsDisplayMessage___c_TypeInfo->static_fields->__9 = (struct DrawLotsDisplayMessage___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DrawLotsDisplayMessage___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall DrawLotsDisplayMessage___c___ctor(DrawLotsDisplayMessage___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *__fastcall DrawLotsDisplayMessage___c___GetSaveData_b__4_0(
        DrawLotsDisplayMessage___c_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  return DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(data, (const MethodInfo *)data);
}


void __fastcall DrawLotsDisplayMessage___c__DisplayClass3_0___ctor(
        DrawLotsDisplayMessage___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DrawLotsDisplayMessage___c__DisplayClass3_0___DrawLots_b__0(
        DrawLotsDisplayMessage___c__DisplayClass3_0_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  return data->fields.groupId == this->fields.groupId;
}