void GiftDetailEntity___ctor(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938ADE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938ADE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t GiftDetailEntity__CreatePrimaryKey(GiftDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5938AD9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7867/*"IgnoreQuestBoardRewardIconItemIds"*/);
    byte_5938AD9 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7867/*"IgnoreQuestBoardRewardIconItemIds"*/, 0, 0);
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5938ADA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7868/*"IgnoreQuestClearRewardItemIds"*/);
    byte_5938ADA = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7868/*"IgnoreQuestClearRewardItemIds"*/, 0, 0);
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestPhaseClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5938ADB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7869/*"IgnoreQuestPhaseClearRewardItemIds"*/);
    byte_5938ADB = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7869/*"IgnoreQuestPhaseClearRewardItemIds"*/, 0, 0);
}


System_String_o *GiftDetailEntity__GetOverwritePhaseRewardImageId(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938AD8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23801/*"phaseRewardImageId"*/);
    byte_5938AD8 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23801/*"phaseRewardImageId"*/,
           **(System_String_o ***)(qword_594C0B8 + 184),
           0);
}


int32_t GiftDetailEntity__GetQuestBoardOverwriteGiftId(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938ADC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11381/*"QuestBoardOverwriteGiftId"*/);
    byte_5938ADC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_11381/*"QuestBoardOverwriteGiftId"*/, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *GiftDetailEntity__GetQuestBoardRewardLabelImageName(
        GiftDetailEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  GiftDetailEntity_QuestBoardRewardLabelData_array *QuestBoardRewardLabels; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  int max_length; // w8
  unsigned int v8; // w21
  Il2CppClass **v9; // x22
  Il2CppClass *v10; // x8
  _QWORD *v11; // x22
  Il2CppClass *v12; // t1
  System_String_o **v13; // x8

  QuestBoardRewardLabels = GiftDetailEntity__GetQuestBoardRewardLabels(this, *(const MethodInfo **)&index);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)QuestBoardRewardLabels, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !QuestBoardRewardLabels )
      goto LABEL_15;
    max_length = QuestBoardRewardLabels->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          goto LABEL_16;
        v9 = &QuestBoardRewardLabels->obj.klass + (int)v8;
        v12 = v9[4];
        v11 = v9 + 4;
        v10 = v12;
        if ( !v12 )
          goto LABEL_15;
        if ( LODWORD(v10->_1.name) == index )
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v10->_1.namespaze, 0);
          if ( !IsNullOrEmpty )
            break;
        }
        max_length = QuestBoardRewardLabels->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_10;
      }
      if ( v8 >= LODWORD(QuestBoardRewardLabels->max_length) )
LABEL_16:
        sub_21FFED4(IsNullOrEmpty);
      if ( *v11 )
      {
        v13 = (System_String_o **)(*v11 + 24LL);
        return *v13;
      }
LABEL_15:
      sub_21FFECC(IsNullOrEmpty, v6);
    }
  }
LABEL_10:
  v13 = *(System_String_o ***)(qword_594C0B8 + 184);
  return *v13;
}


GiftDetailEntity_QuestBoardRewardLabelData_array *GiftDetailEntity__GetQuestBoardRewardLabels(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  GiftDetailEntity___c_c *v3; // x0
  struct GiftDetailEntity___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__9_0; // x20
  Il2CppObject *v6; // x21
  struct GiftDetailEntity___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5938ADD & 1) == 0 )
  {
    sub_21FFC50(&Method_EntityScriptUtil_GetScriptValue_List_object___GiftDetailEntity_QuestBoardRewardLabelData_____);
    sub_21FFC50(&System_Func_List_object___GiftDetailEntity_QuestBoardRewardLabelData____TypeInfo);
    sub_21FFC50(&Method_GiftDetailEntity___c__GetQuestBoardRewardLabels_b__9_0__);
    sub_21FFC50(&GiftDetailEntity___c_TypeInfo);
    sub_21FFC50(&StringLiteral_11382/*"QuestBoardRewardLabels"*/);
    byte_5938ADD = 1;
  }
  v3 = GiftDetailEntity___c_TypeInfo;
  if ( !*(&GiftDetailEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GiftDetailEntity___c_TypeInfo, method);
    v3 = GiftDetailEntity___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__9_0 = (System_Func_object__object__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = GiftDetailEntity___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_List_object___GiftDetailEntity_QuestBoardRewardLabelData____TypeInfo);
    System_Func_object__object____ctor(_9__9_0, v6, Method_GiftDetailEntity___c__GetQuestBoardRewardLabels_b__9_0__, 0);
    v7 = GiftDetailEntity___c_TypeInfo->static_fields;
    v7->__9__9_0 = (struct System_Func_List_object___GiftDetailEntity_QuestBoardRewardLabelData____o *)_9__9_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v7->__9__9_0, (int32_t)_9__9_0, v8, v9, v10, v11, v12, v13);
  }
  return (GiftDetailEntity_QuestBoardRewardLabelData_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                                               this->fields.script,
                                                               (System_String_o *)StringLiteral_11382/*"QuestBoardRewardLabels"*/,
                                                               (System_Func_TSource__TDestination__o *)_9__9_0,
                                                               0,
                                                               (const MethodInfo_382DCA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___GiftDetailEntity_QuestBoardRewardLabelData_____);
}


void GiftDetailEntity_QuestBoardRewardLabelData___ctor(
        GiftDetailEntity_QuestBoardRewardLabelData_o *this,
        int32_t index,
        System_String_o *imageName,
        const MethodInfo *method)
{
  GiftDetailEntity_QuestBoardRewardLabelData_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._ImageName_k__BackingField = imageName;
  v6 = (GiftDetailEntity_QuestBoardRewardLabelData_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields._ImageName_k__BackingField) = index;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6, (int32_t)imageName, v7, v8, v9, v10, v11, v12);
}


System_String_o *GiftDetailEntity_QuestBoardRewardLabelData__get_ImageName(
        GiftDetailEntity_QuestBoardRewardLabelData_o *this,
        const MethodInfo *method)
{
  return this->fields._ImageName_k__BackingField;
}


int32_t GiftDetailEntity_QuestBoardRewardLabelData__get_Index(
        GiftDetailEntity_QuestBoardRewardLabelData_o *this,
        const MethodInfo *method)
{
  return this->fields._Index_k__BackingField;
}


void GiftDetailEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938ADF & 1) == 0 )
  {
    sub_21FFC50(&GiftDetailEntity___c_TypeInfo);
    byte_5938ADF = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(GiftDetailEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GiftDetailEntity___c_TypeInfo->static_fields->__9 = (struct GiftDetailEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)GiftDetailEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GiftDetailEntity___c___ctor(GiftDetailEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


GiftDetailEntity_QuestBoardRewardLabelData_array *GiftDetailEntity___c___GetQuestBoardRewardLabels_b__9_0(
        GiftDetailEntity___c_o *this,
        System_Collections_Generic_List_object__o *list,
        const MethodInfo *method)
{
  __int64 v4; // x1
  bool IsNullOrEmpty; // w8
  GiftDetailEntity_QuestBoardRewardLabelData_array *result; // x0
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v8; // x19
  __int128 v9; // q0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  int32_t ScriptValue_47969284; // w21
  Il2CppObject *ScriptValue_object; // x0
  Il2CppObject *v15; // x22
  __int64 v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5938AE0 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_JsonManager_GetScriptValue_string___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftDetailEntity_QuestBoardRewardLabelData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftDetailEntity_QuestBoardRewardLabelData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftDetailEntity_QuestBoardRewardLabelData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftDetailEntity_QuestBoardRewardLabelData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_GiftDetailEntity_QuestBoardRewardLabelData__TypeInfo);
    sub_21FFC50(&GiftDetailEntity_QuestBoardRewardLabelData_TypeInfo);
    sub_21FFC50(&StringLiteral_21230/*"imageName"*/);
    sub_21FFC50(&StringLiteral_21713/*"index"*/);
    byte_5938AE0 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)list, 0);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !list )
      goto LABEL_25;
    size = list->fields._size;
    v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GiftDetailEntity_QuestBoardRewardLabelData__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627580(
      v8,
      size,
      (const MethodInfo_444F33C *)Method_System_Collections_Generic_List_GiftDetailEntity_QuestBoardRewardLabelData___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      &v35,
      list,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v9 = *(_OWORD *)&v35.fields._list;
    v36.fields._current = v35.fields._current;
    v35.fields._list = 0;
    *(_QWORD *)&v35.fields._index = &v36;
    *(_OWORD *)&v36.fields._list = v9;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      current = v36.fields._current;
      if ( v36.fields._current )
      {
        naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
        if ( v36.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (System_Collections_Generic_Dictionary_string__object__c *)v36.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v10);
          ScriptValue_47969284 = JsonManager__GetScriptValue_47969284(
                                   (System_Collections_Generic_Dictionary_string__object__o *)current,
                                   (System_String_o *)StringLiteral_21713/*"index"*/,
                                   -1,
                                   0);
          ScriptValue_object = JsonManager__GetScriptValue_object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)current,
                                 (System_String_o *)StringLiteral_21230/*"imageName"*/,
                                 **(Il2CppObject ***)(qword_594C0B8 + 184),
                                 (const MethodInfo_38A0A30 *)Method_JsonManager_GetScriptValue_string___);
          if ( (ScriptValue_47969284 & 0x80000000) == 0 )
          {
            v15 = ScriptValue_object;
            if ( !System_String__IsNullOrEmpty((System_String_o *)ScriptValue_object, 0) )
            {
              v16 = sub_21FFEBC(GiftDetailEntity_QuestBoardRewardLabelData_TypeInfo);
              System_Object___ctor((Il2CppObject *)v16, 0);
              *(_QWORD *)(v16 + 24) = v15;
              *(_DWORD *)(v16 + 16) = ScriptValue_47969284;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 24), (int32_t)v15, v17, v18, v19, v20, v21, v22);
              if ( !v8
                || (items = v8->fields._items,
                    v32 = Method_System_Collections_Generic_List_GiftDetailEntity_QuestBoardRewardLabelData__Add__,
                    ++v8->fields._version,
                    !items) )
              {
                sub_21FFECC(v23, v24);
              }
              v33 = v8->fields._size;
              if ( (unsigned int)v33 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v16,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + v33;
                v8->fields._size = v33 + 1;
                v34[4] = (Il2CppClass *)v16;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), v16, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( !v8 )
LABEL_25:
      sub_21FFECC(result, v4);
    if ( v8->fields._size <= 0 )
      return 0;
    else
      return (GiftDetailEntity_QuestBoardRewardLabelData_array *)System_Collections_Generic_List_object___ToArray(
                                                                   v8,
                                                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_GiftDetailEntity_QuestBoardRewardLabelData__ToArray__);
  }
  return result;
}