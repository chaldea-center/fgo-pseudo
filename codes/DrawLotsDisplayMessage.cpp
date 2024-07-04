void __fastcall DrawLotsDisplayMessage___ctor(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_48E4BBA & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v3);
    byte_48E4BBA = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  this->fields.displayedList = (struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *)v4;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x22
  BattleMessageGroupMaster_o *Master_object; // x0
  __int64 v16; // x1
  System_Collections_ICollection_o *Entities; // x20
  System_Collections_Generic_List_object__o *displayedList; // x21
  System_Predicate_object__o *v20; // x23
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x2
  DrawLotsDisplayMessage_DisplayedInGroup_o *v23; // x21
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v30; // x8

  if ( (byte_48E4BB7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_BattleMessageGroupMaster___, *(_QWORD *)&groupId);
    sub_1B00CCC(&DataManager_TypeInfo, v7);
    sub_1B00CCC(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__, v10);
    sub_1B00CCC(&System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v11);
    sub_1B00CCC(&Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__, v12);
    sub_1B00CCC(&DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo, v13);
    byte_48E4BB7 = 1;
  }
  v14 = sub_1B00F18(DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  *(_DWORD *)(v14 + 16) = groupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BattleMessageGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BattleMessageGroupMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entities = (System_Collections_ICollection_o *)BattleMessageGroupMaster__GetEntities(
                                                   Master_object,
                                                   *(_DWORD *)(v14 + 16),
                                                   0LL);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0LL) )
    return defMessageId;
  displayedList = (System_Collections_Generic_List_object__o *)this->fields.displayedList;
  v20 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__,
    0LL);
  if ( !displayedList )
    goto LABEL_19;
  v21 = System_Collections_Generic_List_object___Find(
          displayedList,
          (System_Predicate_T__o *)v20,
          (const MethodInfo_33C2038 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
  if ( !v21 )
  {
    v23 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1B00F18(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    DrawLotsDisplayMessage_DisplayedInGroup___ctor(v23, v24);
    if ( v23 )
    {
      v23->fields.groupId = *(_DWORD *)(v14 + 16);
      Master_object = (BattleMessageGroupMaster_o *)this->fields.displayedList;
      if ( Master_object )
      {
        v27 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v28 = Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( v27 )
        {
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v27 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              (Il2CppObject *)v23,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = v27 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v30 + 32) = v23;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v23, v25, v26);
          }
          return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
                   v23,
                   (BattleMessageGroupEntity_array *)Entities,
                   v22);
        }
      }
    }
LABEL_19:
    sub_1B00F28(Master_object, v16);
  }
  v23 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v21;
  return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
           v23,
           (BattleMessageGroupEntity_array *)Entities,
           v22);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *__fastcall DrawLotsDisplayMessage__GetSaveData(
        DrawLotsDisplayMessage_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DrawLotsDisplayMessage___c_c *v7; // x0
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x19
  System_Func_object__object__o *_9__4_0; // x20
  Il2CppObject *v10; // x21
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_48E4BB8 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___,
      method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v3);
    sub_1B00CCC(
      &System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
      v4);
    sub_1B00CCC(&Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, v5);
    sub_1B00CCC(&DrawLotsDisplayMessage___c_TypeInfo, v6);
    byte_48E4BB8 = 1;
  }
  v7 = DrawLotsDisplayMessage___c_TypeInfo;
  displayedList = this->fields.displayedList;
  if ( !DrawLotsDisplayMessage___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage___c_TypeInfo);
    v7 = DrawLotsDisplayMessage___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v7->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = DrawLotsDisplayMessage___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1B00F18(System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    System_Func_object__object____ctor(_9__4_0, v10, Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, 0LL);
    static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__4_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)displayedList,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2D8FA10 *)Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                     v14,
                                                                     (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage__Init(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  DrawLotsDisplayMessage_o *v2; // x19
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_48E4BB6 & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_o *)sub_1B00CCC(
                                         &Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__,
                                         method);
    byte_48E4BB6 = 1;
  }
  displayedList = v2->fields.displayedList;
  if ( !displayedList )
    sub_1B00F28(this, method);
  size = displayedList->fields._size;
  v5 = displayedList->fields._version + 1;
  displayedList->fields._size = 0;
  displayedList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)displayedList->fields._items, 0, size, 0LL);
}


void __fastcall DrawLotsDisplayMessage__SetSaveData(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *saves,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_object__o *v7; // x21

  if ( (byte_48E4BB9 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo, saves);
    sub_1B00CCC(&Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v5);
    sub_1B00CCC(&Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, v6);
    byte_48E4BB9 = 1;
  }
  v7 = (System_Action_object__o *)sub_1B00F18(System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, 0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)saves,
    (System_Action_T__o *)v7,
    (const MethodInfo_2D50464 *)Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage___SetSaveData_b__5_0(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *displayedList; // x19
  DrawLotsDisplayMessage_DisplayedInGroup_o *v7; // x20
  const MethodInfo *v8; // x1
  DrawLotsDisplayMessage_DisplayedInGroup_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_48E4BBB & 1) == 0 )
  {
    sub_1B00CCC(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, sv);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v5);
    byte_48E4BBB = 1;
  }
  displayedList = (System_Collections_Generic_List_object__o *)this->fields.displayedList;
  v7 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1B00F18(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
  DrawLotsDisplayMessage_DisplayedInGroup___ctor(v7, v8);
  if ( !v7
    || (v9 = DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(v7, sv, v11), !displayedList)
    || (items = displayedList->fields._items,
        v15 = Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__,
        ++displayedList->fields._version,
        !items) )
  {
    sub_1B00F28(v9, v10);
  }
  size = displayedList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      displayedList,
      (Il2CppObject *)v7,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    displayedList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v7;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v7, v12, v13);
  }
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_HashSet_int__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_48E4BBF & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_48E4BBF = 1;
  }
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashMsgId = v4;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.hashMsgId, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_array *entities,
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
  System_Func_object__bool__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_ICollection_o *v17; // x21
  __int64 v18; // x1
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  DrawLotsDisplayMessage_DisplayedInGroup___c_c *v20; // x0
  System_Func_object__int__o *_9__2_1; // x20
  Il2CppObject *v22; // x22
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Int32_array *v27; // x0
  __int64 v28; // x8
  int32_t v29; // w19

  if ( (byte_48E4BBC & 1) == 0 )
  {
    sub_1B00CCC(&Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__, entities);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___, v5);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v6);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v8);
    sub_1B00CCC(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v9);
    sub_1B00CCC(&System_Func_BattleMessageGroupEntity__int__TypeInfo, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__Clear__, v12);
    sub_1B00CCC(&Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__, v13);
    sub_1B00CCC(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v14);
    byte_48E4BBC = 1;
  }
  v15 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  v17 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_object_(
                                              v16,
                                              (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
  if ( BasicHelper__IsNullOrEmpty(v17, 0LL) )
  {
    hashMsgId = this->fields.hashMsgId;
    if ( !hashMsgId )
      goto LABEL_17;
    System_Collections_Generic_HashSet_int___Clear(
      hashMsgId,
      (const MethodInfo_327A4D0 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    v17 = (System_Collections_ICollection_o *)entities;
  }
  v20 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  if ( !DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    v20 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__int__o *)v20->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleMessageGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_1,
      v22,
      Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__,
      0LL);
    static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    static_fields->__9__2_1 = (struct System_Func_BattleMessageGroupEntity__int__o *)_9__2_1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_1, (int32_t)_9__2_1, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
  v27 = System_Linq_Enumerable__ToArray_int_(
          v26,
          (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  hashMsgId = (System_Collections_Generic_HashSet_int__o *)RandomUtility__GetRandomRangeIndex(v27, 0, 0LL);
  if ( !v17 )
    goto LABEL_17;
  if ( (unsigned int)hashMsgId >= LODWORD(v17[1].monitor) )
    sub_1B00F30(hashMsgId, v18);
  v28 = *((_QWORD *)&v17[2].klass + (int)hashMsgId);
  if ( !v28 || (hashMsgId = this->fields.hashMsgId) == 0LL )
LABEL_17:
    sub_1B00F28(hashMsgId, v18);
  v29 = *(_DWORD *)(v28 + 20);
  System_Collections_Generic_HashSet_int___Add(
    hashMsgId,
    v29,
    (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
  return v29;
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Int32_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E4BBD & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_1B00CCC(&DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo, v3);
    byte_48E4BBD = 1;
  }
  v4 = sub_1B00F18(DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1B00F28(v5, v6);
  *(_DWORD *)(v4 + 16) = this->fields.groupId;
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashMsgId,
         (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v4 + 24) = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)v7, v8, v9);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)v4;
}


DrawLotsDisplayMessage_DisplayedInGroup_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *msgIds; // x20
  System_Collections_Generic_HashSet_int__o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E4BBE & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor___74510056, sv);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_48E4BBE = 1;
  }
  if ( sv )
  {
    this->fields.groupId = sv->fields.groupId;
    msgIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.msgIds;
    v7 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_52928300(
      v7,
      msgIds,
      (const MethodInfo_3279F2C *)Method_System_Collections_Generic_HashSet_int___ctor___74510056);
    this->fields.hashMsgId = v7;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.hashMsgId, (int32_t)v7, v8, v9);
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
  if ( (byte_48E4BC0 & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1B00CCC(
                                                          &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                          ent);
    byte_48E4BC0 = 1;
  }
  if ( !ent || (this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v4->fields.hashMsgId) == 0LL )
    sub_1B00F28(this, ent);
  return !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            ent->fields.messageId,
            (const MethodInfo_327A530 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E4BC1 & 1) == 0 )
  {
    sub_1B00CCC(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1);
    byte_48E4BC1 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields->__9 = (struct DrawLotsDisplayMessage_DisplayedInGroup___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, 0LL);
  return ent->fields.probability;
}


void __fastcall DrawLotsDisplayMessage___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E4BC2 & 1) == 0 )
  {
    sub_1B00CCC(&DrawLotsDisplayMessage___c_TypeInfo, v1);
    byte_48E4BC2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(DrawLotsDisplayMessage___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DrawLotsDisplayMessage___c_TypeInfo->static_fields->__9 = (struct DrawLotsDisplayMessage___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)DrawLotsDisplayMessage___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, 0LL);
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
    sub_1B00F28(this, 0LL);
  return data->fields.groupId == this->fields.groupId;
}