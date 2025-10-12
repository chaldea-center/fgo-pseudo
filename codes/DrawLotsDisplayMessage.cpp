void DrawLotsDisplayMessage___ctor(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3A232 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
    byte_4C3A232 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  this->fields.displayedList = (struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
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
  System_Collections_ICollection_o *Entities; // x20
  System_Collections_Generic_List_object__o *displayedList; // x21
  System_Predicate_object__o *v12; // x23
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x2
  DrawLotsDisplayMessage_DisplayedInGroup_o *v15; // x21
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v22; // x8

  if ( (byte_4C3A22F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_BattleMessageGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
    sub_1C32C20(&System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
    sub_1C32C20(&Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__);
    sub_1C32C20(&DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo);
    byte_4C3A22F = 1;
  }
  v7 = sub_1C32E6C(DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_DWORD *)(v7 + 16) = groupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BattleMessageGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BattleMessageGroupMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entities = (System_Collections_ICollection_o *)BattleMessageGroupMaster__GetEntities(
                                                   Master_object,
                                                   *(_DWORD *)(v7 + 16),
                                                   0);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0) )
    return defMessageId;
  displayedList = (System_Collections_Generic_List_object__o *)this->fields.displayedList;
  v12 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__,
    0);
  if ( !displayedList )
    goto LABEL_19;
  v13 = System_Collections_Generic_List_object___Find(
          displayedList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
  if ( !v13 )
  {
    v15 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1C32E6C(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    DrawLotsDisplayMessage_DisplayedInGroup___ctor(v15, v16);
    if ( v15 )
    {
      v15->fields.groupId = *(_DWORD *)(v7 + 16);
      Master_object = (BattleMessageGroupMaster_o *)this->fields.displayedList;
      if ( Master_object )
      {
        v19 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v20 = Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( v19 )
        {
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v19 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              (Il2CppObject *)v15,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = v19 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v22 + 32) = v15;
            sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v15, v17, v18);
          }
          return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
                   v15,
                   (BattleMessageGroupEntity_array *)Entities,
                   v14);
        }
      }
    }
LABEL_19:
    sub_1C32E7C(Master_object);
  }
  v15 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v13;
  return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
           v15,
           (BattleMessageGroupEntity_array *)Entities,
           v14);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *DrawLotsDisplayMessage__GetSaveData(
        DrawLotsDisplayMessage_o *this,
        const MethodInfo *method)
{
  DrawLotsDisplayMessage___c_c *v3; // x0
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x19
  System_Func_object__object__o *_9__4_0; // x20
  Il2CppObject *v6; // x21
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C3A230 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
    sub_1C32C20(&System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    sub_1C32C20(&Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__);
    sub_1C32C20(&DrawLotsDisplayMessage___c_TypeInfo);
    byte_4C3A230 = 1;
  }
  v3 = DrawLotsDisplayMessage___c_TypeInfo;
  displayedList = this->fields.displayedList;
  if ( !DrawLotsDisplayMessage___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage___c_TypeInfo);
    v3 = DrawLotsDisplayMessage___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v3->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = DrawLotsDisplayMessage___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    System_Func_object__object____ctor(_9__4_0, v6, Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, 0);
    static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__4_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)displayedList,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                     v10,
                                                                     (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void DrawLotsDisplayMessage__Init(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  DrawLotsDisplayMessage_o *v2; // x19
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4C3A22E & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_o *)sub_1C32C20(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__);
    byte_4C3A22E = 1;
  }
  displayedList = v2->fields.displayedList;
  if ( !displayedList )
    sub_1C32E7C(this);
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

  if ( (byte_4C3A231 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
    sub_1C32C20(&Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__);
    byte_4C3A231 = 1;
  }
  v5 = (System_Action_object__o *)sub_1C32E6C(System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo);
  System_Action_object____ctor(v5, (Il2CppObject *)this, Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, 0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)saves,
    (System_Action_T__o *)v5,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
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
  const MethodInfo *v9; // x2
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C3A233 & 1) == 0 )
  {
    sub_1C32C20(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__);
    byte_4C3A233 = 1;
  }
  displayedList = (System_Collections_Generic_List_object__o *)this->fields.displayedList;
  v6 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1C32E6C(DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo);
  DrawLotsDisplayMessage_DisplayedInGroup___ctor(v6, v7);
  if ( !v6
    || (v8 = DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(v6, sv, v9), !displayedList)
    || (items = displayedList->fields._items,
        v13 = Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__,
        ++displayedList->fields._version,
        !items) )
  {
    sub_1C32E7C(v8);
  }
  size = displayedList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      displayedList,
      (Il2CppObject *)v6,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    displayedList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v6;
    sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
  }
}


void DrawLotsDisplayMessage_DisplayedInGroup___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3A237 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C3A237 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashMsgId = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.hashMsgId, (int32_t)v3, v4, v5);
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
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  DrawLotsDisplayMessage_DisplayedInGroup___c_c *v9; // x0
  System_Func_object__int__o *_9__2_1; // x20
  Il2CppObject *v11; // x22
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Int32_array *v16; // x0
  __int64 v17; // x8
  int32_t v18; // w19

  if ( (byte_4C3A234 & 1) == 0 )
  {
    sub_1C32C20(&Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
    sub_1C32C20(&System_Func_BattleMessageGroupEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_BattleMessageGroupEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C32C20(&Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__);
    sub_1C32C20(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    byte_4C3A234 = 1;
  }
  v5 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleMessageGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
    0);
  v6 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)entities,
         (System_Func_TSource__bool__o *)v5,
         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  v7 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_object_(
                                             v6,
                                             (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
  if ( BasicHelper__IsNullOrEmpty(v7, 0) )
  {
    hashMsgId = this->fields.hashMsgId;
    if ( !hashMsgId )
      goto LABEL_17;
    System_Collections_Generic_HashSet_int___Clear(
      hashMsgId,
      (const MethodInfo_36498B4 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    v7 = (System_Collections_ICollection_o *)entities;
  }
  v9 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  if ( !DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    v9 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__int__o *)v9->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleMessageGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__2_1,
      v11,
      Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__,
      0);
    static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    static_fields->__9__2_1 = (struct System_Func_BattleMessageGroupEntity__int__o *)_9__2_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__2_1, (int32_t)_9__2_1, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  hashMsgId = (System_Collections_Generic_HashSet_int__o *)RandomUtility__GetRandomRangeIndex(v16, 0, 0);
  if ( !v7 )
    goto LABEL_17;
  if ( (unsigned int)hashMsgId >= LODWORD(v7[1].monitor) )
    sub_1C32E84(hashMsgId);
  v17 = *((_QWORD *)&v7[2].klass + (int)hashMsgId);
  if ( !v17 || (hashMsgId = this->fields.hashMsgId) == 0 )
LABEL_17:
    sub_1C32E7C(hashMsgId);
  v18 = *(_DWORD *)(v17 + 20);
  System_Collections_Generic_HashSet_int___Add(
    hashMsgId,
    v18,
    (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
  return v18;
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  System_Int32_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3A235 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo);
    byte_4C3A235 = 1;
  }
  v3 = sub_1C32E6C(DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_DWORD *)(v3 + 16) = this->fields.groupId;
  v5 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashMsgId,
         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v3 + 24) = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v5, v6, v7);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)v3;
}


DrawLotsDisplayMessage_DisplayedInGroup_o *DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *sv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *msgIds; // x20
  System_Collections_Generic_HashSet_int__o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3A236 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor___77989016);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C3A236 = 1;
  }
  if ( sv )
  {
    this->fields.groupId = sv->fields.groupId;
    msgIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.msgIds;
    v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_56922896(
      v6,
      msgIds,
      (const MethodInfo_3649310 *)Method_System_Collections_Generic_HashSet_int___ctor___77989016);
    this->fields.hashMsgId = v6;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.hashMsgId, (int32_t)v6, v7, v8);
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
  if ( (byte_4C3A238 & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C3A238 = 1;
  }
  if ( !ent || (this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v4->fields.hashMsgId) == 0 )
    sub_1C32E7C(this);
  return !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            ent->fields.messageId,
            (const MethodInfo_3649914 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3A239 & 1) == 0 )
  {
    sub_1C32C20(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    byte_4C3A239 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields->__9 = (struct DrawLotsDisplayMessage_DisplayedInGroup___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C32E7C(this);
  return ent->fields.probability;
}


void DrawLotsDisplayMessage___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3A23A & 1) == 0 )
  {
    sub_1C32C20(&DrawLotsDisplayMessage___c_TypeInfo);
    byte_4C3A23A = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(DrawLotsDisplayMessage___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DrawLotsDisplayMessage___c_TypeInfo->static_fields->__9 = (struct DrawLotsDisplayMessage___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)DrawLotsDisplayMessage___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return data->fields.groupId == this->fields.groupId;
}