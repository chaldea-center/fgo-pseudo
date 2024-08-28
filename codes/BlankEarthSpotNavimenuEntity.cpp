void __fastcall BlankEarthSpotNavimenuEntity___ctor(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A1F7BE & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_int___ctor__, method);
    byte_4A1F7BE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30F8560 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  BlankEarthSpotNavimenuEntity_MessageData_o *result; // x0
  BlankEarthSpotNavimenuEntity_MessageData_o *v25; // x21
  int64_t messageClosedAt; // x8
  System_Collections_Generic_List_object__o *v27; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Value_object; // x21
  Il2CppObject *v33; // x23
  int64_t Value_long; // x24
  int32_t v35; // w25
  BlankEarthSpotNavimenuEntity_MessageData_o *v36; // x22
  const MethodInfo *v37; // x5
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  const MethodInfo_34CFF90 *v46; // x2
  int32_t v47; // w22
  int32_t v48; // w21
  __int64 v49; // x23
  __int64 v50; // x8
  _BOOL4 v51; // w10
  _BOOL4 v52; // w11
  int64_t v53; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A1F7BD & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_GetValue_long___, nowTime);
    sub_1B715CC(&Method_BasicHelper_GetValue_string___, v5);
    sub_1B715CC(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____, v6);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToList_Dictionary_string__object____, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_object__get_Count__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Count__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__, v16);
    sub_1B715CC(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo, v17);
    sub_1B715CC(&BlankEarthSpotNavimenuEntity_MessageData_TypeInfo, v18);
    sub_1B715CC(&StringLiteral_22358/*"overwriteTime"*/, v19);
    sub_1B715CC(&StringLiteral_23835/*"text"*/, v20);
    sub_1B715CC(&StringLiteral_1/*""*/, v21);
    sub_1B715CC(&StringLiteral_18003/*"color"*/, v22);
    sub_1B715CC(&StringLiteral_18591/*"dispType"*/, v23);
    byte_4A1F7BD = 1;
  }
  memset(&v55, 0, sizeof(v55));
  result = (BlankEarthSpotNavimenuEntity_MessageData_o *)BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
                                                           this,
                                                           (const MethodInfo *)nowTime);
  if ( result )
  {
    v25 = result;
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
        v53 = nowTime;
        v27 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v27,
          (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
        v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                     (System_Collections_IEnumerable_o *)v25,
                                                                     (const MethodInfo_2E8546C *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
        Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v28,
                                                              (const MethodInfo_2E97ADC *)Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
        if ( !Item )
          goto LABEL_32;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v54,
          Item,
          (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
        v55 = v54;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
        {
          current = v55.fields._current;
          Value_object = BasicHelper__GetValue_object_(
                           (System_Collections_Generic_Dictionary_string__object__o *)v55.fields._current,
                           (System_String_o *)StringLiteral_23835/*"text"*/,
                           (Il2CppObject *)StringLiteral_1/*""*/,
                           (const MethodInfo_2E49748 *)Method_BasicHelper_GetValue_string___);
          v33 = BasicHelper__GetValue_object_(
                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                  (System_String_o *)StringLiteral_18003/*"color"*/,
                  (Il2CppObject *)StringLiteral_1/*""*/,
                  (const MethodInfo_2E49748 *)Method_BasicHelper_GetValue_string___);
          Value_long = BasicHelper__GetValue_long_(
                         (System_Collections_Generic_Dictionary_string__object__o *)current,
                         (System_String_o *)StringLiteral_22358/*"overwriteTime"*/,
                         0LL,
                         (const MethodInfo_2E4965C *)Method_BasicHelper_GetValue_long___);
          v35 = BasicHelper__GetValue_long_(
                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                  (System_String_o *)StringLiteral_18591/*"dispType"*/,
                  0LL,
                  (const MethodInfo_2E4965C *)Method_BasicHelper_GetValue_long___);
          v36 = (BlankEarthSpotNavimenuEntity_MessageData_o *)sub_1B71818(BlankEarthSpotNavimenuEntity_MessageData_TypeInfo);
          BlankEarthSpotNavimenuEntity_MessageData___ctor(
            v36,
            (System_String_o *)Value_object,
            (System_String_o *)v33,
            Value_long,
            v35,
            v37);
          if ( !v27 )
            sub_1B71828(v38, v39);
          items = v27->fields._items;
          v43 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__;
          ++v27->fields._version;
          if ( !items )
            sub_1B71828(v38, v39);
          size = v27->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)v36,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &items->obj.klass + size;
            v27->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v36;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v36, v40, v41);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
        if ( !v27 )
          goto LABEL_32;
        v46 = (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
        if ( v27->fields._size >= 1 )
        {
          v47 = 0;
          v48 = 0;
          v49 = 0x7FFFFFFFFFFFFFFFLL;
          while ( 1 )
          {
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v27,
                                                                  v47,
                                                                  v46);
            if ( !Item )
              break;
            v46 = (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
            v50 = v53 - (unsigned __int64)Item->fields._syncRoot;
            v51 = v50 >= 0;
            v52 = v50 < v49;
            if ( v51 && v52 )
              v48 = v47;
            ++v47;
            if ( v51 && v52 )
              v49 = v53 - (unsigned __int64)Item->fields._syncRoot;
            if ( v47 >= v27->fields._size )
              return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                                     v27,
                                                                     v48,
                                                                     v46);
          }
LABEL_32:
          sub_1B71828(Item, v30);
        }
        v48 = 0;
        return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                               v27,
                                                               v48,
                                                               v46);
      }
    }
  }
  return result;
}


System_Collections_Generic_List_object__o *__fastcall BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4A1F7BC & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_GetValue_List_object____, method);
    sub_1B715CC(&StringLiteral_12706/*"ShortCutMessageInfo"*/, v3);
    byte_4A1F7BC = 1;
  }
  return (System_Collections_Generic_List_object__o *)BasicHelper__GetValue_object_(
                                                        this->fields.script,
                                                        (System_String_o *)StringLiteral_12706/*"ShortCutMessageInfo"*/,
                                                        0LL,
                                                        (const MethodInfo_2E49748 *)Method_BasicHelper_GetValue_List_object____);
}


bool __fastcall BlankEarthSpotNavimenuEntity__IsEnable(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4A1F7BB & 1) == 0 )
  {
    sub_1B715CC(&CondType_TypeInfo, method);
    byte_4A1F7BB = 1;
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v10->fields, (int32_t)inputText, v11, v12);
  v10->fields._Color_k__BackingField = inputColor;
  v10 = (BlankEarthSpotNavimenuEntity_MessageData_o *)((char *)v10 + 24);
  sub_1B71570((ServantStatusBattleListViewItem_o *)v10, (int32_t)inputColor, v13, v14);
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