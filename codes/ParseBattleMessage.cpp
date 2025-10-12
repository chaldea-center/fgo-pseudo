void ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_String_array *v8; // x21
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_object__object__o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4C3AD68 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_15973/*"[div]"*/);
    byte_4C3AD68 = 1;
  }
  v5 = sub_1C32CC8(string___TypeInfo, 1);
  if ( !v5 )
    sub_1C32E7C(0);
  v8 = (struct System_String_array *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C32E84(v5);
  v9 = StringLiteral_15973/*"[div]"*/;
  *(_QWORD *)(v5 + 32) = StringLiteral_15973/*"[div]"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), v9, v6, v7);
  this->fields.TAG_DIVIDE = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v8, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dicReplaceTag, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Logic_k__BackingField = logic;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Logic_k__BackingField, (int32_t)logic, v15, v16);
  ParseBattleMessage__Init(this, v17);
}


void ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x20
  System_Collections_Generic_Dictionary_object__object__o *dicReplaceTag; // x20

  v4 = this;
  if ( (byte_4C3AD6A & 1) == 0 )
  {
    this = (ParseBattleMessage_o *)sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
    byte_4C3AD6A = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.dicReplaceTag,
        this = (ParseBattleMessage_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, void *, const MethodInfo *))replaceTag->klass[1]._1.image)(
                                         replaceTag,
                                         replaceTag->klass[1]._1.gc_desc,
                                         method),
        !dicReplaceTag) )
  {
    sub_1C32E7C(this);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    dicReplaceTag,
    (Il2CppObject *)this,
    (Il2CppObject *)replaceTag,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
}


bool ParseBattleMessage__ExistReplaceTag(
        ParseBattleMessage_o *this,
        System_String_o *tag,
        ReplaceTagBase_o **replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v6; // x21
  System_Collections_Generic_Dictionary_object__object__o *dicReplaceTag; // x21
  System_String_array *v8; // x0

  v6 = this;
  if ( (byte_4C3AD6E & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_string___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
    this = (ParseBattleMessage_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3AD6E = 1;
  }
  if ( !tag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.dicReplaceTag,
        v8 = System_String__Split(tag, 0x20u, 0, 0),
        this = (ParseBattleMessage_o *)BasicHelper__IndexValue_object_(
                                         (System_Object_array *)v8,
                                         0,
                                         (Il2CppObject *)StringLiteral_1/*""*/,
                                         (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
    sub_1C32E7C(this);
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           dicReplaceTag,
           (Il2CppObject *)this,
           (Il2CppObject **)replaceTag,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C3AD69 & 1) == 0 )
  {
    sub_1C32C20(&ReplaceMasterName_TypeInfo);
    byte_4C3AD69 = 1;
  }
  v3 = (Il2CppObject *)sub_1C32E6C(ReplaceMasterName_TypeInfo);
  System_Object___ctor(v3, 0);
  ParseBattleMessage__AddReplaceTag(this, (ReplaceTagBase_o *)v3, v4);
}


bool ParseBattleMessage__NextTagSearch(
        ParseBattleMessage_o *this,
        System_String_o *text,
        int32_t analyzeIdx,
        int32_t *startIndex,
        int32_t *endIndex,
        const MethodInfo *method)
{
  int32_t v10; // w0
  int32_t v11; // w0

  if ( (byte_4C3AD6B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    this = (ParseBattleMessage_o *)sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C3AD6B = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_1C32E7C(this);
  v10 = System_String__IndexOf_63576952(text, (System_String_o *)StringLiteral_15802/*"["*/, analyzeIdx, 4, 0);
  *startIndex = v10;
  if ( v10 < 0 )
    return 0;
  v11 = System_String__IndexOf_63576952(text, (System_String_o *)StringLiteral_16056/*"]"*/, v10, 4, 0);
  *endIndex = v11;
  return v11 > 0;
}


System_String_array *ParseBattleMessage__Replace(
        ParseBattleMessage_o *this,
        System_String_o *texts,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  System_Func_object__object__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0

  v4 = this;
  if ( (byte_4C3AD6C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C32C20(&System_Func_string__string__TypeInfo);
    this = (ParseBattleMessage_o *)sub_1C32C20(&Method_ParseBattleMessage_ReplaceText__);
    byte_4C3AD6C = 1;
  }
  if ( !texts )
    sub_1C32E7C(this);
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_63571576(
                                                              texts,
                                                              v4->fields.TAG_DIVIDE,
                                                              0,
                                                              0);
  v6 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_string__string__TypeInfo);
  System_Func_object__object____ctor(v6, (Il2CppObject *)v4, Method_ParseBattleMessage_ReplaceText__, 0);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                              v5,
                                                              (System_Func_TSource__TResult__o *)v6,
                                                              (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v7,
                                  (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_string___);
}


System_String_o *ParseBattleMessage__ReplaceText(
        ParseBattleMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  int32_t stringLength; // w22
  System_Text_StringBuilder_o *v7; // x21
  ParseBattleMessage_o *v8; // x0
  const MethodInfo *v9; // x5
  int32_t v10; // w22
  int32_t v11; // w24
  int32_t v12; // w25
  System_String_o *v13; // x23
  const MethodInfo *v14; // x3
  ParseBattleMessage_o *appended; // x0
  const MethodInfo *v16; // x5
  int32_t v17; // w8
  System_String_o *v19; // [xsp+0h] [xbp-50h] BYREF
  int32_t endIndex[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3AD6D & 1) == 0 )
  {
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    byte_4C3AD6D = 1;
  }
  v19 = 0;
  *(_QWORD *)endIndex = 0;
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( text )
    {
      stringLength = text->fields._stringLength;
      v7 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_63596960(v7, stringLength + 32, 0);
      IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(v8, text, 0, &endIndex[1], endIndex, v9);
      v10 = 0;
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v10 = 0;
        do
        {
          v11 = endIndex[0];
          v12 = endIndex[1];
          v13 = System_String__Substring_63564468(text, endIndex[1] + 1, endIndex[0] + ~endIndex[1], 0);
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__ExistReplaceTag(
                                               this,
                                               v13,
                                               (ReplaceTagBase_o **)&v19,
                                               v14);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          {
            if ( v12 > v10 )
            {
              if ( !v7 )
                goto LABEL_23;
              System_Text_StringBuilder__Append_63603924(v7, text, v10, v12 - v10, 0);
            }
            IsNullOrEmpty = v19;
            if ( !v19 )
              goto LABEL_23;
            IsNullOrEmpty = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, ParseBattleMessage_o *, System_String_o *, const MethodInfo *))v19->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
                                                 v19,
                                                 this,
                                                 v13,
                                                 v19->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
            if ( !v7 )
              goto LABEL_23;
            appended = (ParseBattleMessage_o *)System_Text_StringBuilder__Append_63603608(v7, IsNullOrEmpty, 0);
          }
          else
          {
            if ( !v7 )
              goto LABEL_23;
            appended = (ParseBattleMessage_o *)System_Text_StringBuilder__Append_63603924(
                                                 v7,
                                                 text,
                                                 v10,
                                                 v11 - v10 + 1,
                                                 0);
          }
          v10 = v11 + 1;
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                               appended,
                                               text,
                                               v11 + 1,
                                               &endIndex[1],
                                               endIndex,
                                               v16);
        }
        while ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 );
      }
      v17 = text->fields._stringLength;
      if ( v17 <= v10 )
      {
        if ( v7 )
          return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                                      v7,
                                      v7->klass->vtable._3_ToString.method);
      }
      else if ( v7 )
      {
        System_Text_StringBuilder__Append_63603924(v7, text, v10, v17 - v10, 0);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                                    v7,
                                    v7->klass->vtable._3_ToString.method);
      }
    }
LABEL_23:
    sub_1C32E7C(IsNullOrEmpty);
  }
  return text;
}


BattleData_o *ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_1C32E7C(this);
  return Logic_k__BackingField->fields.data;
}


BattleLogic_o *ParseBattleMessage__get_Logic(ParseBattleMessage_o *this, const MethodInfo *method)
{
  return this->fields._Logic_k__BackingField;
}


void ParseBattleMessage__set_Logic(ParseBattleMessage_o *this, BattleLogic_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Logic_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Logic_k__BackingField, (int32_t)value, (int32_t)method, v3);
}