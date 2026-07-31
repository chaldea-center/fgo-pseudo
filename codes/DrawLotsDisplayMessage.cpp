void DrawLotsDisplayMessage___ctor(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B160 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
    byte_593B160 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  this->fields.displayedList = (struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t DrawLotsDisplayMessage__DrawLots(
        DrawLotsDisplayMessage_o *this,
        int32_t groupId,
        int32_t defMessageId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  BattleMessageGroupMaster_o *Master_object; // x0
  __int64 v9; // x1
  DataManager_c *v10; // x0
  int v11; // w8
  System_Collections_ICollection_o *Entities; // x20
  System_Collections_Generic_List_object__o *displayedList; // x21
  System_Predicate_object__o *v15; // x23
  const MethodInfo *v16; // x2
  DrawLotsDisplayMessage_DisplayedInGroup_o *v17; // x21
  const MethodInfo *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v28; // x8

  if ( (byte_593B15D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BattleMessageGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
    sub_21FFC50(&System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
    sub_21FFC50(&Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__);
    sub_21FFC50(&DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo);
    byte_593B15D = 1;
  }
  v7 = sub_21FFEBC(DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  v10 = DataManager_TypeInfo;
  v11 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v7 + 16) = groupId;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(v10, v9);
  Master_object = (BattleMessageGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattleMessageGroupMaster___);
  if ( !Master_object )
    goto LABEL_18;
  Entities = (System_Collections_ICollection_o *)BattleMessageGroupMaster__GetEntities(
                                                   Master_object,
                                                   *(_DWORD *)(v7 + 16),
                                                   0);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0) )
    return defMessageId;
  displayedList = (System_Collections_Generic_List_object__o *)this->fields.displayedList;
  v15 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v7,
    Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__,
    0);
  if ( !displayedList )
    goto LABEL_18;
  v17 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)System_Collections_Generic_List_object___Find(
                                                       displayedList,
                                                       (System_Predicate_T__o *)v15,
                                                       (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
  if ( !v17 )
  {
    v17 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_21FFEBC(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    DrawLotsDisplayMessage_DisplayedInGroup___ctor(v17, v18);
    if ( v17 )
    {
      Master_object = (BattleMessageGroupMaster_o *)this->fields.displayedList;
      v17->fields.groupId = *(_DWORD *)(v7 + 16);
      if ( Master_object )
      {
        v25 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v26 = Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( v25 )
        {
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v25 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              (Il2CppObject *)v17,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = v25 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v28 + 32) = v17;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v17, v19, v20, v21, v22, v23, v24);
          }
          return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
                   v17,
                   (BattleMessageGroupEntity_array *)Entities,
                   v16);
        }
      }
    }
LABEL_18:
    sub_21FFECC(Master_object, v9);
  }
  return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
           v17,
           (BattleMessageGroupEntity_array *)Entities,
           v16);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *DrawLotsDisplayMessage__GetSaveData(
        DrawLotsDisplayMessage_o *this,
        const MethodInfo *method)
{
  DrawLotsDisplayMessage___c_c *v3; // x0
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x19
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__4_0; // x20
  Il2CppObject *v7; // x21
  struct DrawLotsDisplayMessage___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_593B15E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
    sub_21FFC50(&System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    sub_21FFC50(&Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__);
    sub_21FFC50(&DrawLotsDisplayMessage___c_TypeInfo);
    byte_593B15E = 1;
  }
  v3 = DrawLotsDisplayMessage___c_TypeInfo;
  displayedList = this->fields.displayedList;
  if ( !*(&DrawLotsDisplayMessage___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage___c_TypeInfo, method);
    v3 = DrawLotsDisplayMessage___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__4_0 = (System_Func_object__object__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    System_Func_object__object____ctor(_9__4_0, v7, Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, 0);
    v8 = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    v8->__9__4_0 = (struct System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__4_0, (int32_t)_9__4_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)displayedList,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                     v15,
                                                                     (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void DrawLotsDisplayMessage__Init(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  DrawLotsDisplayMessage_o *v2; // x19
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_593B15C & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_o *)sub_21FFC50(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__);
    byte_593B15C = 1;
  }
  displayedList = v2->fields.displayedList;
  if ( !displayedList )
    sub_21FFECC(this, method);
  size = displayedList->fields._size;
  v5 = displayedList->fields._version + 1;
  displayedList->fields._size = 0;
  displayedList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)displayedList->fields._items, 0, size, 0);
}


void DrawLotsDisplayMessage__SetSaveData(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *saves,
        const MethodInfo *method)
{
  System_Action_object__o *v5; // x21

  if ( (byte_593B15F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
    sub_21FFC50(&Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__);
    byte_593B15F = 1;
  }
  v5 = (System_Action_object__o *)sub_21FFEBC(System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
  System_Action_object____ctor(v5, (Il2CppObject *)this, Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, 0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)saves,
    (System_Action_T__o *)v5,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void DrawLotsDisplayMessage___SetSaveData_b__5_0(
        DrawLotsDisplayMessage_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *displayedList; // x19
  DrawLotsDisplayMessage_DisplayedInGroup_o *v6; // x20
  const MethodInfo *v7; // x1
  DrawLotsDisplayMessage_DisplayedInGroup_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_593B161 & 1) == 0 )
  {
    sub_21FFC50(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
    byte_593B161 = 1;
  }
  displayedList = (System_Collections_Generic_List_object__o *)this->fields.displayedList;
  v6 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_21FFEBC(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
  DrawLotsDisplayMessage_DisplayedInGroup___ctor(v6, v7);
  if ( !v6
    || (v8 = DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(v6, sv, v10), !displayedList)
    || (items = displayedList->fields._items,
        v18 = Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__,
        ++displayedList->fields._version,
        !items) )
  {
    sub_21FFECC(v8, v9);
  }
  size = displayedList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      displayedList,
      (Il2CppObject *)v6,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    displayedList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
  }
}


void DrawLotsDisplayMessage_DisplayedInGroup___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B165 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_593B165 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashMsgId = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.hashMsgId, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_array *entities,
        const MethodInfo *method)
{
  System_Func_object__bool__o *v5; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  System_Collections_ICollection_o *v7; // x21
  __int64 v8; // x1
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  DrawLotsDisplayMessage_DisplayedInGroup___c_c *v10; // x0
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__2_1; // x20
  Il2CppObject *v13; // x22
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Int32_array *v22; // x0
  __int64 v23; // x8
  int32_t v24; // w19

  if ( (byte_593B162 & 1) == 0 )
  {
    sub_21FFC50(&Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
    sub_21FFC50(&System_Func_BattleMessageGroupEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_BattleMessageGroupEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_21FFC50(&Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__);
    sub_21FFC50(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    byte_593B162 = 1;
  }
  v5 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
    0);
  v6 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)entities,
         (System_Func_TSource__bool__o *)v5,
         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  v7 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_object_(
                                             v6,
                                             (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
  if ( BasicHelper__IsNullOrEmpty(v7, 0) )
  {
    hashMsgId = this->fields.hashMsgId;
    if ( !hashMsgId )
      goto LABEL_17;
    System_Collections_Generic_HashSet_int___Clear(
      hashMsgId,
      (const MethodInfo_4280908 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    v7 = (System_Collections_ICollection_o *)entities;
  }
  v10 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  if ( !*(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v8);
    v10 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__2_1 = (System_Func_object__int__o *)static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8);
      static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleMessageGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_1,
      v13,
      Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__,
      0);
    v14 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    v14->__9__2_1 = (struct System_Func_BattleMessageGroupEntity__int__o *)_9__2_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__2_1, (int32_t)_9__2_1, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
  v22 = System_Linq_Enumerable__ToArray_int_(
          v21,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  hashMsgId = (System_Collections_Generic_HashSet_int__o *)RandomUtility__GetRandomRangeIndex(v22, 0, 0);
  if ( !v7 )
    goto LABEL_17;
  if ( (unsigned int)hashMsgId >= LODWORD(v7[1].monitor) )
    sub_21FFED4(hashMsgId);
  v23 = *((_QWORD *)&v7[2].klass + (int)hashMsgId);
  if ( !v23 || (hashMsgId = this->fields.hashMsgId) == 0 )
LABEL_17:
    sub_21FFECC(hashMsgId, v8);
  v24 = *(_DWORD *)(v23 + 20);
  System_Collections_Generic_HashSet_int___Add(
    hashMsgId,
    v24,
    (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
  return v24;
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  const MethodInfo_38684CC *v7; // x1
  System_Int32_array *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B163 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo);
    byte_593B163 = 1;
  }
  v3 = sub_21FFEBC(DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  hashMsgId = this->fields.hashMsgId;
  v7 = (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___;
  *(_DWORD *)(v3 + 16) = this->fields.groupId;
  v8 = System_Linq_Enumerable__ToArray_int_((System_Collections_Generic_IEnumerable_TSource__o *)hashMsgId, v7);
  *(_QWORD *)(v3 + 24) = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)v3;
}


DrawLotsDisplayMessage_DisplayedInGroup_o *DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  int32_t groupId; // w9
  System_Collections_Generic_IEnumerable_T__o *msgIds; // x20
  System_Collections_Generic_HashSet_int__c *v7; // x0
  System_Collections_Generic_HashSet_int__o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B164 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_593B164 = 1;
  }
  if ( sv )
  {
    groupId = sv->fields.groupId;
    msgIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.msgIds;
    v7 = System_Collections_Generic_HashSet_int__TypeInfo;
    this->fields.groupId = groupId;
    v8 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(v7);
    System_Collections_Generic_HashSet_int____ctor_69731156(
      v8,
      msgIds,
      (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    this->fields.hashMsgId = v8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.hashMsgId, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return this;
}


bool DrawLotsDisplayMessage_DisplayedInGroup___DrawLotsMessageId_b__2_0(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_o *v4; // x20

  v4 = this;
  if ( (byte_593B166 & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_593B166 = 1;
  }
  if ( !ent || (this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v4->fields.hashMsgId) == 0 )
    sub_21FFECC(this, ent);
  return !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            ent->fields.messageId,
            (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void DrawLotsDisplayMessage_DisplayedInGroup_SaveData___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DrawLotsDisplayMessage_DisplayedInGroup___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B167 & 1) == 0 )
  {
    sub_21FFC50(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    byte_593B167 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields->__9 = (struct DrawLotsDisplayMessage_DisplayedInGroup___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DrawLotsDisplayMessage_DisplayedInGroup___c___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t DrawLotsDisplayMessage_DisplayedInGroup___c___DrawLotsMessageId_b__2_1(
        DrawLotsDisplayMessage_DisplayedInGroup___c_o *this,
        BattleMessageGroupEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.probability;
}


void DrawLotsDisplayMessage___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B168 & 1) == 0 )
  {
    sub_21FFC50(&DrawLotsDisplayMessage___c_TypeInfo);
    byte_593B168 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(DrawLotsDisplayMessage___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DrawLotsDisplayMessage___c_TypeInfo->static_fields->__9 = (struct DrawLotsDisplayMessage___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)DrawLotsDisplayMessage___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DrawLotsDisplayMessage___c___ctor(DrawLotsDisplayMessage___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *DrawLotsDisplayMessage___c___GetSaveData_b__4_0(
        DrawLotsDisplayMessage___c_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_21FFECC(this, 0);
  return DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(data, (const MethodInfo *)data);
}


void DrawLotsDisplayMessage___c__DisplayClass3_0___ctor(
        DrawLotsDisplayMessage___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DrawLotsDisplayMessage___c__DisplayClass3_0___DrawLots_b__0(
        DrawLotsDisplayMessage___c__DisplayClass3_0_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_21FFECC(this, 0);
  return data->fields.groupId == this->fields.groupId;
}