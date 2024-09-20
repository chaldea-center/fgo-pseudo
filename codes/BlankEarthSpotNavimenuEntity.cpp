void __fastcall BlankEarthSpotNavimenuEntity___ctor(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE48 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5AE48 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BlankEarthSpotNavimenuEntity__CreatePrimaryKey(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.blankEarthSpotId;
}


BlankEarthSpotNavimenuEntity_MessageData_o *__fastcall BlankEarthSpotNavimenuEntity__GetMessageInfoCondCheck(
        BlankEarthSpotNavimenuEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  BlankEarthSpotNavimenuEntity_MessageData_o *result; // x0
  BlankEarthSpotNavimenuEntity_MessageData_o *v6; // x21
  int64_t messageClosedAt; // x8
  System_Collections_Generic_List_object__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Value_object; // x21
  Il2CppObject *v14; // x23
  int64_t Value_long; // x24
  int32_t v16; // w25
  BlankEarthSpotNavimenuEntity_MessageData_o *v17; // x22
  const MethodInfo *v18; // x5
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  const MethodInfo_34FD564 *v27; // x2
  int32_t v28; // w22
  int32_t v29; // w21
  __int64 v30; // x23
  __int64 v31; // x8
  _BOOL4 v32; // w10
  _BOOL4 v33; // w11
  int64_t v34; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5AE47 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_long___);
    sub_1B885B0(&Method_BasicHelper_GetValue_string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
    sub_1B885B0(&BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
    sub_1B885B0(&StringLiteral_22414/*"overwriteTime"*/);
    sub_1B885B0(&StringLiteral_23894/*"text"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_18053/*"color"*/);
    sub_1B885B0(&StringLiteral_18642/*"dispType"*/);
    byte_4A5AE47 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  result = (BlankEarthSpotNavimenuEntity_MessageData_o *)BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
                                                           this,
                                                           (const MethodInfo *)nowTime);
  if ( result )
  {
    v6 = result;
    if ( !LODWORD(result->fields._Color_k__BackingField) )
      return 0LL;
    messageClosedAt = this->fields.messageClosedAt;
    if ( (messageClosedAt & 0x8000000000000000LL) != 0 )
    {
      return 0LL;
    }
    else
    {
      result = 0LL;
      if ( messageClosedAt >= nowTime && this->fields.messageOpenedAt <= nowTime )
      {
        v34 = nowTime;
        v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
        v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                    (System_Collections_IEnumerable_o *)v6,
                                                                    (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
        Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v9,
                                                              (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
        if ( !Item )
          goto LABEL_32;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v35,
          Item,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
        v36 = v35;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v36,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
        {
          current = v36.fields._current;
          Value_object = BasicHelper__GetValue_object_(
                           (System_Collections_Generic_Dictionary_string__object__o *)v36.fields._current,
                           (System_String_o *)StringLiteral_23894/*"text"*/,
                           (Il2CppObject *)StringLiteral_1/*""*/,
                           (const MethodInfo_2E6DC68 *)Method_BasicHelper_GetValue_string___);
          v14 = BasicHelper__GetValue_object_(
                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                  (System_String_o *)StringLiteral_18053/*"color"*/,
                  (Il2CppObject *)StringLiteral_1/*""*/,
                  (const MethodInfo_2E6DC68 *)Method_BasicHelper_GetValue_string___);
          Value_long = BasicHelper__GetValue_long_(
                         (System_Collections_Generic_Dictionary_string__object__o *)current,
                         (System_String_o *)StringLiteral_22414/*"overwriteTime"*/,
                         0LL,
                         (const MethodInfo_2E6DB7C *)Method_BasicHelper_GetValue_long___);
          v16 = BasicHelper__GetValue_long_(
                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                  (System_String_o *)StringLiteral_18642/*"dispType"*/,
                  0LL,
                  (const MethodInfo_2E6DB7C *)Method_BasicHelper_GetValue_long___);
          v17 = (BlankEarthSpotNavimenuEntity_MessageData_o *)sub_1B887FC(BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
          BlankEarthSpotNavimenuEntity_MessageData___ctor(
            v17,
            (System_String_o *)Value_object,
            (System_String_o *)v14,
            Value_long,
            v16,
            v18);
          if ( !v8 )
            sub_1B8880C(v19, v20);
          items = v8->fields._items;
          v24 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__;
          ++v8->fields._version;
          if ( !items )
            sub_1B8880C(v19, v20);
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v17,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v17;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v17, v21, v22);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v36,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
        if ( !v8 )
          goto LABEL_32;
        v27 = (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
        if ( v8->fields._size >= 1 )
        {
          v28 = 0;
          v29 = 0;
          v30 = 0x7FFFFFFFFFFFFFFFLL;
          while ( 1 )
          {
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v8,
                                                                  v28,
                                                                  v27);
            if ( !Item )
              break;
            v27 = (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
            v31 = v34 - (unsigned __int64)Item->fields._syncRoot;
            v32 = v31 >= 0;
            v33 = v31 < v30;
            if ( v32 && v33 )
              v29 = v28;
            ++v28;
            if ( v32 && v33 )
              v30 = v34 - (unsigned __int64)Item->fields._syncRoot;
            if ( v28 >= v8->fields._size )
              return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                                     v8,
                                                                     v29,
                                                                     v27);
          }
LABEL_32:
          sub_1B8880C(Item, v11);
        }
        v29 = 0;
        return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                               v8,
                                                               v29,
                                                               v27);
      }
    }
  }
  return result;
}


System_Collections_Generic_List_object__o *__fastcall BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5AE46 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_List_object____);
    sub_1B885B0(&StringLiteral_12753/*"ShortCutMessageInfo"*/);
    byte_4A5AE46 = 1;
  }
  return (System_Collections_Generic_List_object__o *)BasicHelper__GetValue_object_(
                                                        this->fields.script,
                                                        (System_String_o *)StringLiteral_12753/*"ShortCutMessageInfo"*/,
                                                        0LL,
                                                        (const MethodInfo_2E6DC68 *)Method_BasicHelper_GetValue_List_object____);
}


bool __fastcall BlankEarthSpotNavimenuEntity__IsEnable(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4A5AE45 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5AE45 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
}


void __fastcall BlankEarthSpotNavimenuEntity_MessageData___ctor(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        System_String_o *inputText,
        System_String_o *inputColor,
        int64_t inputOverrideTime,
        int32_t inputDispType,
        const MethodInfo *method)
{
  BlankEarthSpotNavimenuEntity_MessageData_o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._Text_k__BackingField = inputText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields, (int32_t)inputText, v11, v12);
  v10->fields._Color_k__BackingField = inputColor;
  v10 = (BlankEarthSpotNavimenuEntity_MessageData_o *)((char *)v10 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v10, (int32_t)inputColor, v13, v14);
  v10->monitor = (void *)inputOverrideTime;
  LODWORD(v10->fields._Text_k__BackingField) = inputDispType;
}


System_String_o *__fastcall BlankEarthSpotNavimenuEntity_MessageData__get_Color(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Color_k__BackingField;
}


int32_t __fastcall BlankEarthSpotNavimenuEntity_MessageData__get_DispType(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._DispType_k__BackingField;
}


int64_t __fastcall BlankEarthSpotNavimenuEntity_MessageData__get_OverrideTime(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._OverrideTime_k__BackingField;
}


System_String_o *__fastcall BlankEarthSpotNavimenuEntity_MessageData__get_Text(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Text_k__BackingField;
}