void __fastcall DrawLotsDisplayMessage___ctor(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FE869 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v4);
    byte_49FE869 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup___ctor__);
  this->fields.displayedList = (struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
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
  System_Collections_ICollection_o *Entities; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *displayedList; // x21
  System_Predicate_object__o *v21; // x23
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  DrawLotsDisplayMessage_DisplayedInGroup_o *v25; // x21
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v32; // x8

  if ( (byte_49FE866 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BattleMessageGroupMaster___, *(_QWORD *)&groupId);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__, v10);
    sub_1B640C8(&System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo, v11);
    sub_1B640C8(&Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__, v12);
    sub_1B640C8(&DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo, v13);
    byte_49FE866 = 1;
  }
  v14 = sub_1B64314(DrawLotsDisplayMessage___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&groupId, *(_QWORD *)&defMessageId);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  *(_DWORD *)(v14 + 16) = groupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BattleMessageGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BattleMessageGroupMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entities = (System_Collections_ICollection_o *)BattleMessageGroupMaster__GetEntities(
                                                   Master_object,
                                                   *(_DWORD *)(v14 + 16),
                                                   0LL);
  if ( BasicHelper__IsNullOrEmpty(Entities, 0LL) )
    return defMessageId;
  displayedList = (System_Collections_Generic_List_object__o *)this->fields.displayedList;
  v21 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_DrawLotsDisplayMessage_DisplayedInGroup__TypeInfo,
                                        v17,
                                        v18);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_DrawLotsDisplayMessage___c__DisplayClass3_0__DrawLots_b__0__,
    0LL);
  if ( !displayedList )
    goto LABEL_19;
  v22 = System_Collections_Generic_List_object___Find(
          displayedList,
          (System_Predicate_T__o *)v21,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Find__);
  if ( !v22 )
  {
    v25 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1B64314(
                                                         DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo,
                                                         v23,
                                                         v24);
    DrawLotsDisplayMessage_DisplayedInGroup___ctor(v25, v26);
    if ( v25 )
    {
      v25->fields.groupId = *(_DWORD *)(v14 + 16);
      Master_object = (BattleMessageGroupMaster_o *)this->fields.displayedList;
      if ( Master_object )
      {
        v29 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v30 = Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( v29 )
        {
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v29 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              (Il2CppObject *)v25,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = v29 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v32 + 32) = v25;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v25, v27, v28);
          }
          return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
                   v25,
                   (BattleMessageGroupEntity_array *)Entities,
                   v24);
        }
      }
    }
LABEL_19:
    sub_1B64324(Master_object);
  }
  v25 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v22;
  return DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId(
           v25,
           (BattleMessageGroupEntity_array *)Entities,
           v24);
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *__fastcall DrawLotsDisplayMessage__GetSaveData(
        DrawLotsDisplayMessage_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DrawLotsDisplayMessage___c_c *v8; // x0
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x19
  System_Func_object__object__o *_9__4_0; // x20
  Il2CppObject *v11; // x21
  struct DrawLotsDisplayMessage___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FE867 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___,
      method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v4);
    sub_1B640C8(
      &System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
      v5);
    sub_1B640C8(&Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, v6);
    sub_1B640C8(&DrawLotsDisplayMessage___c_TypeInfo, v7);
    byte_49FE867 = 1;
  }
  v8 = DrawLotsDisplayMessage___c_TypeInfo;
  displayedList = this->fields.displayedList;
  if ( !DrawLotsDisplayMessage___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage___c_TypeInfo);
    v8 = DrawLotsDisplayMessage___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v8->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = DrawLotsDisplayMessage___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
                                                 method,
                                                 v2);
    System_Func_object__object____ctor(_9__4_0, v11, Method_DrawLotsDisplayMessage___c__GetSaveData_b__4_0__, 0LL);
    static_fields = DrawLotsDisplayMessage___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)displayedList,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                     v15,
                                                                     (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
}


void __fastcall DrawLotsDisplayMessage__Init(DrawLotsDisplayMessage_o *this, const MethodInfo *method)
{
  DrawLotsDisplayMessage_o *v2; // x19
  struct System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__o *displayedList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_49FE865 & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_o *)sub_1B640C8(
                                         &Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Clear__,
                                         method);
    byte_49FE865 = 1;
  }
  displayedList = v2->fields.displayedList;
  if ( !displayedList )
    sub_1B64324(this);
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

  if ( (byte_49FE868 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo, saves);
    sub_1B640C8(&Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___, v5);
    sub_1B640C8(&Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, v6);
    byte_49FE868 = 1;
  }
  v7 = (System_Action_object__o *)sub_1B64314(
                                    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__TypeInfo,
                                    saves,
                                    method);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_DrawLotsDisplayMessage__SetSaveData_b__5_0__, 0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)saves,
    (System_Action_T__o *)v7,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData___);
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
  const MethodInfo *v10; // x2
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_49FE86A & 1) == 0 )
  {
    sub_1B640C8(&DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo, sv);
    sub_1B640C8(&Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__, v5);
    byte_49FE86A = 1;
  }
  displayedList = (System_Collections_Generic_List_object__o *)this->fields.displayedList;
  v7 = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1B64314(
                                                      DrawLotsDisplayMessage_DisplayedInGroup_TypeInfo,
                                                      sv,
                                                      method);
  DrawLotsDisplayMessage_DisplayedInGroup___ctor(v7, v8);
  if ( !v7
    || (v9 = DrawLotsDisplayMessage_DisplayedInGroup__SetSaveData(v7, sv, v10), !displayedList)
    || (items = displayedList->fields._items,
        v14 = Method_System_Collections_Generic_List_DrawLotsDisplayMessage_DisplayedInGroup__Add__,
        ++displayedList->fields._version,
        !items) )
  {
    sub_1B64324(v9);
  }
  size = displayedList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      displayedList,
      (Il2CppObject *)v7,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    displayedList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v7, v11, v12);
  }
}


void __fastcall DrawLotsDisplayMessage_DisplayedInGroup___ctor(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FE86E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_49FE86E = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashMsgId = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.hashMsgId, (int32_t)v5, v6, v7);
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
  __int64 v19; // x2
  System_Collections_Generic_HashSet_int__o *hashMsgId; // x0
  DrawLotsDisplayMessage_DisplayedInGroup___c_c *v21; // x0
  System_Func_object__int__o *_9__2_1; // x20
  Il2CppObject *v23; // x22
  struct DrawLotsDisplayMessage_DisplayedInGroup___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Int32_array *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x8
  int32_t v31; // w19

  if ( (byte_49FE86B & 1) == 0 )
  {
    sub_1B640C8(&Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__, entities);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___, v8);
    sub_1B640C8(&System_Func_BattleMessageGroupEntity__bool__TypeInfo, v9);
    sub_1B640C8(&System_Func_BattleMessageGroupEntity__int__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Clear__, v12);
    sub_1B640C8(&Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__, v13);
    sub_1B640C8(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v14);
    byte_49FE86B = 1;
  }
  v15 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_BattleMessageGroupEntity__bool__TypeInfo,
                                         entities,
                                         method);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)this,
    Method_DrawLotsDisplayMessage_DisplayedInGroup__DrawLotsMessageId_b__2_0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleMessageGroupEntity___);
  v17 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_object_(
                                              v16,
                                              (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleMessageGroupEntity___);
  if ( BasicHelper__IsNullOrEmpty(v17, 0LL) )
  {
    hashMsgId = this->fields.hashMsgId;
    if ( !hashMsgId )
      goto LABEL_17;
    System_Collections_Generic_HashSet_int___Clear(
      hashMsgId,
      (const MethodInfo_3364040 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    v17 = (System_Collections_ICollection_o *)entities;
  }
  v21 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  if ( !DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo);
    v21 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__int__o *)v21->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleMessageGroupEntity__int__TypeInfo, v18, v19);
    System_Func_object__int____ctor(
      _9__2_1,
      v23,
      Method_DrawLotsDisplayMessage_DisplayedInGroup___c__DrawLotsMessageId_b__2_1__,
      0LL);
    static_fields = DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields;
    static_fields->__9__2_1 = (struct System_Func_BattleMessageGroupEntity__int__o *)_9__2_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_1, (int32_t)_9__2_1, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                               (System_Func_TSource__TResult__o *)_9__2_1,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_BattleMessageGroupEntity__int___);
  v28 = System_Linq_Enumerable__ToArray_int_(
          v27,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  hashMsgId = (System_Collections_Generic_HashSet_int__o *)RandomUtility__GetRandomRangeIndex(v28, 0, 0LL);
  if ( !v17 )
    goto LABEL_17;
  if ( (unsigned int)hashMsgId >= LODWORD(v17[1].monitor) )
    sub_1B6432C(hashMsgId, v29);
  v30 = *((_QWORD *)&v17[2].klass + (int)hashMsgId);
  if ( !v30 || (hashMsgId = this->fields.hashMsgId) == 0LL )
LABEL_17:
    sub_1B64324(hashMsgId);
  v31 = *(_DWORD *)(v30 + 20);
  System_Collections_Generic_HashSet_int___Add(
    hashMsgId,
    v31,
    (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
  return v31;
}


DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *__fastcall DrawLotsDisplayMessage_DisplayedInGroup__GetSaveData(
        DrawLotsDisplayMessage_DisplayedInGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x0
  System_Int32_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FE86C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_1B640C8(&DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo, v4);
    byte_49FE86C = 1;
  }
  v5 = sub_1B64314(DrawLotsDisplayMessage_DisplayedInGroup_SaveData_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_DWORD *)(v5 + 16) = this->fields.groupId;
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashMsgId,
         (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  *(_QWORD *)(v5 + 24) = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v7, v8, v9);
  return (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *)v5;
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

  if ( (byte_49FE86D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, sv);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_49FE86D = 1;
  }
  if ( sv )
  {
    this->fields.groupId = sv->fields.groupId;
    msgIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.msgIds;
    v7 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                        System_Collections_Generic_HashSet_int__TypeInfo,
                                                        sv,
                                                        method);
    System_Collections_Generic_HashSet_int____ctor_53885596(
      v7,
      msgIds,
      (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
    this->fields.hashMsgId = v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.hashMsgId, (int32_t)v7, v8, v9);
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
  if ( (byte_49FE86F & 1) == 0 )
  {
    this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)sub_1B640C8(
                                                          &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                          ent);
    byte_49FE86F = 1;
  }
  if ( !ent || (this = (DrawLotsDisplayMessage_DisplayedInGroup_o *)v4->fields.hashMsgId) == 0LL )
    sub_1B64324(this);
  return !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            ent->fields.messageId,
            (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE870 & 1) == 0 )
  {
    sub_1B640C8(&DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1);
    byte_49FE870 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields->__9 = (struct DrawLotsDisplayMessage_DisplayedInGroup___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)DrawLotsDisplayMessage_DisplayedInGroup___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return ent->fields.probability;
}


void __fastcall DrawLotsDisplayMessage___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE871 & 1) == 0 )
  {
    sub_1B640C8(&DrawLotsDisplayMessage___c_TypeInfo, v1);
    byte_49FE871 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(DrawLotsDisplayMessage___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  DrawLotsDisplayMessage___c_TypeInfo->static_fields->__9 = (struct DrawLotsDisplayMessage___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)DrawLotsDisplayMessage___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return data->fields.groupId == this->fields.groupId;
}