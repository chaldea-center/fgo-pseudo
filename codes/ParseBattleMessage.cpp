void __fastcall ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_String_array *v12; // x21
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_object__object__o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1

  if ( (byte_49FF090 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__, logic);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo, v5);
    sub_1B640C8(&string___TypeInfo, v6);
    sub_1B640C8(&StringLiteral_15916/*"[div]"*/, v7);
    byte_49FF090 = 1;
  }
  v8 = sub_1B64170(string___TypeInfo, 1LL);
  if ( !v8 )
    sub_1B64324(0LL);
  v12 = (struct System_String_array *)v8;
  if ( !*(_DWORD *)(v8 + 24) )
    sub_1B6432C(v8, v9);
  v13 = StringLiteral_15916/*"[div]"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_15916/*"[div]"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 32), v13, v10, v11);
  this->fields.TAG_DIVIDE = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v12, v14, v15);
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo,
                                                                     v16,
                                                                     v17);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v18,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicReplaceTag, (int32_t)v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Logic_k__BackingField = logic;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Logic_k__BackingField, (int32_t)logic, v21, v22);
  ParseBattleMessage__Init(this, v23);
}


void __fastcall ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x20
  System_Collections_Generic_Dictionary_object__object__o *dicReplaceTag; // x20

  v4 = this;
  if ( (byte_49FF092 & 1) == 0 )
  {
    this = (ParseBattleMessage_o *)sub_1B640C8(
                                     &Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__,
                                     replaceTag);
    byte_49FF092 = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.dicReplaceTag,
        this = (ParseBattleMessage_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, const char *, const MethodInfo *))replaceTag->klass[1]._1.gc_desc)(
                                         replaceTag,
                                         replaceTag->klass[1]._1.name,
                                         method),
        !dicReplaceTag) )
  {
    sub_1B64324(this);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    dicReplaceTag,
    (Il2CppObject *)this,
    (Il2CppObject *)replaceTag,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
}


bool __fastcall ParseBattleMessage__ExistReplaceTag(
        ParseBattleMessage_o *this,
        System_String_o *tag,
        ReplaceTagBase_o **replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *dicReplaceTag; // x21
  System_String_array *v10; // x0

  v6 = this;
  if ( (byte_49FF096 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_string___, tag);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__, v7);
    this = (ParseBattleMessage_o *)sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FF096 = 1;
  }
  if ( !tag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.dicReplaceTag,
        v10 = System_String__Split(tag, 0x20u, 0, 0LL),
        this = (ParseBattleMessage_o *)BasicHelper__IndexValue_object_(
                                         (System_Object_array *)v10,
                                         0,
                                         (Il2CppObject *)StringLiteral_1/*""*/,
                                         (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
    sub_1B64324(this);
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           dicReplaceTag,
           (Il2CppObject *)this,
           (Il2CppObject **)replaceTag,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void __fastcall ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49FF091 & 1) == 0 )
  {
    sub_1B640C8(&ReplaceMasterName_TypeInfo, method);
    byte_49FF091 = 1;
  }
  v4 = (Il2CppObject *)sub_1B64314(ReplaceMasterName_TypeInfo, method, v2);
  System_Object___ctor(v4, 0LL);
  ParseBattleMessage__AddReplaceTag(this, (ReplaceTagBase_o *)v4, v5);
}


bool __fastcall ParseBattleMessage__NextTagSearch(
        ParseBattleMessage_o *this,
        System_String_o *text,
        int32_t analyzeIdx,
        int32_t *startIndex,
        int32_t *endIndex,
        const MethodInfo *method)
{
  __int64 v10; // x1
  int32_t v11; // w0
  int32_t v12; // w0

  if ( (byte_49FF093 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15744/*"["*/, text);
    this = (ParseBattleMessage_o *)sub_1B640C8(&StringLiteral_16000/*"]"*/, v10);
    byte_49FF093 = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_1B64324(this);
  v11 = System_String__IndexOf_61406996(text, (System_String_o *)StringLiteral_15744/*"["*/, analyzeIdx, 4, 0LL);
  *startIndex = v11;
  if ( (v11 & 0x80000000) != 0 )
    return 0;
  v12 = System_String__IndexOf_61406996(text, (System_String_o *)StringLiteral_16000/*"]"*/, v11, 4, 0LL);
  *endIndex = v12;
  return v12 > 0;
}


System_String_array *__fastcall ParseBattleMessage__Replace(
        ParseBattleMessage_o *this,
        System_String_o *texts,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Func_object__object__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  v4 = this;
  if ( (byte_49FF094 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__string___, texts);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_1B640C8(&System_Func_string__string__TypeInfo, v6);
    this = (ParseBattleMessage_o *)sub_1B640C8(&Method_ParseBattleMessage_ReplaceText__, v7);
    byte_49FF094 = 1;
  }
  if ( !texts )
    sub_1B64324(this);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_61401620(
                                                              texts,
                                                              v4->fields.TAG_DIVIDE,
                                                              0,
                                                              0LL);
  v11 = (System_Func_object__object__o *)sub_1B64314(System_Func_string__string__TypeInfo, v9, v10);
  System_Func_object__object____ctor(v11, (Il2CppObject *)v4, Method_ParseBattleMessage_ReplaceText__, 0LL);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v8,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v12,
                                  (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
}


System_String_o *__fastcall ParseBattleMessage__ReplaceText(
        ParseBattleMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t stringLength; // w22
  System_Text_StringBuilder_o *v9; // x21
  ParseBattleMessage_o *v10; // x0
  const MethodInfo *v11; // x5
  int32_t v12; // w22
  int v13; // w24
  int v14; // w25
  System_String_o *v15; // x23
  const MethodInfo *v16; // x3
  ParseBattleMessage_o *appended; // x0
  const MethodInfo *v18; // x5
  int32_t v19; // w8
  System_String_o *v21; // [xsp+0h] [xbp-50h] BYREF
  __int64 endIndex; // [xsp+8h] [xbp-48h] BYREF

  v3 = text;
  if ( (byte_49FF095 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, text);
    byte_49FF095 = 1;
  }
  v21 = 0LL;
  endIndex = 0LL;
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v3, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( v3 )
    {
      stringLength = v3->fields._stringLength;
      v9 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v6, v7);
      System_Text_StringBuilder___ctor_60529900(v9, stringLength + 32, 0LL);
      IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                           v10,
                                           v3,
                                           0,
                                           (int32_t *)&endIndex + 1,
                                           (int32_t *)&endIndex,
                                           v11);
      v12 = 0;
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v12 = 0;
        do
        {
          v13 = endIndex;
          v14 = HIDWORD(endIndex);
          v15 = System_String__Substring_61394392(v3, HIDWORD(endIndex) + 1, (int)endIndex + ~HIDWORD(endIndex), 0LL);
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__ExistReplaceTag(
                                               this,
                                               v15,
                                               (ReplaceTagBase_o **)&v21,
                                               v16);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          {
            if ( v14 > v12 )
            {
              if ( !v9 )
                goto LABEL_23;
              System_Text_StringBuilder__Append_60536864(v9, v3, v12, v14 - v12, 0LL);
            }
            IsNullOrEmpty = v21;
            if ( !v21 )
              goto LABEL_23;
            IsNullOrEmpty = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, ParseBattleMessage_o *, System_String_o *, Il2CppMethodPointer))v21->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
                                                 v21,
                                                 this,
                                                 v15,
                                                 v21->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
            if ( !v9 )
              goto LABEL_23;
            appended = (ParseBattleMessage_o *)System_Text_StringBuilder__Append_60536548(v9, IsNullOrEmpty, 0LL);
          }
          else
          {
            if ( !v9 )
              goto LABEL_23;
            appended = (ParseBattleMessage_o *)System_Text_StringBuilder__Append_60536864(
                                                 v9,
                                                 v3,
                                                 v12,
                                                 v13 - v12 + 1,
                                                 0LL);
          }
          v12 = v13 + 1;
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                               appended,
                                               v3,
                                               v13 + 1,
                                               (int32_t *)&endIndex + 1,
                                               (int32_t *)&endIndex,
                                               v18);
        }
        while ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 );
      }
      v19 = v3->fields._stringLength;
      if ( v19 <= v12 )
      {
        if ( v9 )
          return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                      v9,
                                      v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
      else if ( v9 )
      {
        System_Text_StringBuilder__Append_60536864(v9, v3, v12, v19 - v12, 0LL);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                    v9,
                                    v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
    }
LABEL_23:
    sub_1B64324(IsNullOrEmpty);
  }
  return v3;
}


BattleData_o *__fastcall ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_1B64324(this);
  return Logic_k__BackingField->fields.data;
}


BattleLogic_o *__fastcall ParseBattleMessage__get_Logic(ParseBattleMessage_o *this, const MethodInfo *method)
{
  return this->fields._Logic_k__BackingField;
}


void __fastcall ParseBattleMessage__set_Logic(
        ParseBattleMessage_o *this,
        BattleLogic_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Logic_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._Logic_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}