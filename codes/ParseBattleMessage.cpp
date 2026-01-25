void ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_String_array *v13; // x21
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_Dictionary_object__object__o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x1

  if ( (byte_4CF1ABD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_16031/*"[div]"*/);
    byte_4CF1ABD = 1;
  }
  v5 = sub_1C7BB90(string___TypeInfo, 1);
  if ( !v5 )
    sub_1C7BD40(0, v6);
  v13 = (struct System_String_array *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C7BD48(v5);
  v14 = StringLiteral_16031/*"[div]"*/;
  *(_QWORD *)(v5 + 32) = StringLiteral_16031/*"[div]"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), v14, v7, v8, v9, v10, v11, v12);
  this->fields.TAG_DIVIDE = v13;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v13, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v21,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v21;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.dicReplaceTag, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Logic_k__BackingField = logic;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Logic_k__BackingField,
    (int32_t)logic,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  ParseBattleMessage__Init(this, v34);
}


void ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x20
  System_Collections_Generic_Dictionary_object__object__o *dicReplaceTag; // x20

  v4 = this;
  if ( (byte_4CF1ABF & 1) == 0 )
  {
    this = (ParseBattleMessage_o *)sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
    byte_4CF1ABF = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.dicReplaceTag,
        this = (ParseBattleMessage_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, void *, const MethodInfo *))replaceTag->klass[1]._1.image)(
                                         replaceTag,
                                         replaceTag->klass[1]._1.gc_desc,
                                         method),
        !dicReplaceTag) )
  {
    sub_1C7BD40(this, replaceTag);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    dicReplaceTag,
    (Il2CppObject *)this,
    (Il2CppObject *)replaceTag,
    (const MethodInfo_34F248C *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
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
  if ( (byte_4CF1AC3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_string___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
    this = (ParseBattleMessage_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF1AC3 = 1;
  }
  if ( !tag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.dicReplaceTag,
        v8 = System_String__Split(tag, 0x20u, 0, 0),
        this = (ParseBattleMessage_o *)BasicHelper__IndexValue_object_(
                                         (System_Object_array *)v8,
                                         0,
                                         (Il2CppObject *)StringLiteral_1/*""*/,
                                         (const MethodInfo_315E928 *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
    sub_1C7BD40(this, tag);
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           dicReplaceTag,
           (Il2CppObject *)this,
           (Il2CppObject **)replaceTag,
           (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CF1ABE & 1) == 0 )
  {
    sub_1C7BAE8(&ReplaceMasterName_TypeInfo);
    byte_4CF1ABE = 1;
  }
  v3 = (Il2CppObject *)sub_1C7BD34(ReplaceMasterName_TypeInfo);
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

  if ( (byte_4CF1AC0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    this = (ParseBattleMessage_o *)sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CF1AC0 = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_1C7BD40(this, text);
  v10 = System_String__IndexOf_64235336(text, (System_String_o *)StringLiteral_15862/*"["*/, analyzeIdx, 4, 0);
  *startIndex = v10;
  if ( v10 < 0 )
    return 0;
  v11 = System_String__IndexOf_64235336(text, (System_String_o *)StringLiteral_16114/*"]"*/, v10, 4, 0);
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
  if ( (byte_4CF1AC1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C7BAE8(&System_Func_string__string__TypeInfo);
    this = (ParseBattleMessage_o *)sub_1C7BAE8(&Method_ParseBattleMessage_ReplaceText__);
    byte_4CF1AC1 = 1;
  }
  if ( !texts )
    sub_1C7BD40(this, texts);
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_64229960(
                                                              texts,
                                                              v4->fields.TAG_DIVIDE,
                                                              0,
                                                              0);
  v6 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_string__string__TypeInfo);
  System_Func_object__object____ctor(v6, (Il2CppObject *)v4, Method_ParseBattleMessage_ReplaceText__, 0);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                              v5,
                                                              (System_Func_TSource__TResult__o *)v6,
                                                              (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v7,
                                  (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_string___);
}


System_String_o *ParseBattleMessage__ReplaceText(
        ParseBattleMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  int32_t stringLength; // w22
  System_Text_StringBuilder_o *v8; // x21
  ParseBattleMessage_o *v9; // x0
  const MethodInfo *v10; // x5
  int32_t v11; // w22
  int32_t v12; // w24
  int32_t v13; // w25
  System_String_o *v14; // x23
  const MethodInfo *v15; // x3
  ParseBattleMessage_o *appended; // x0
  const MethodInfo *v17; // x5
  int32_t v18; // w8
  System_String_o *v20; // [xsp+0h] [xbp-50h] BYREF
  int32_t endIndex[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CF1AC2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    byte_4CF1AC2 = 1;
  }
  v20 = 0;
  *(_QWORD *)endIndex = 0;
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( text )
    {
      stringLength = text->fields._stringLength;
      v8 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_64254224(v8, stringLength + 32, 0);
      IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(v9, text, 0, &endIndex[1], endIndex, v10);
      v11 = 0;
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v11 = 0;
        do
        {
          v12 = endIndex[0];
          v13 = endIndex[1];
          v14 = System_String__Substring_64222852(text, endIndex[1] + 1, endIndex[0] + ~endIndex[1], 0);
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__ExistReplaceTag(
                                               this,
                                               v14,
                                               (ReplaceTagBase_o **)&v20,
                                               v15);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          {
            if ( v13 > v11 )
            {
              if ( !v8 )
                goto LABEL_23;
              System_Text_StringBuilder__Append_64261188(v8, text, v11, v13 - v11, 0);
            }
            IsNullOrEmpty = v20;
            if ( !v20 )
              goto LABEL_23;
            IsNullOrEmpty = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, ParseBattleMessage_o *, System_String_o *, const MethodInfo *))v20->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
                                                 v20,
                                                 this,
                                                 v14,
                                                 v20->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
            if ( !v8 )
              goto LABEL_23;
            appended = (ParseBattleMessage_o *)System_Text_StringBuilder__Append_64260872(v8, IsNullOrEmpty, 0);
          }
          else
          {
            if ( !v8 )
              goto LABEL_23;
            appended = (ParseBattleMessage_o *)System_Text_StringBuilder__Append_64261188(
                                                 v8,
                                                 text,
                                                 v11,
                                                 v12 - v11 + 1,
                                                 0);
          }
          v11 = v12 + 1;
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                               appended,
                                               text,
                                               v12 + 1,
                                               &endIndex[1],
                                               endIndex,
                                               v17);
        }
        while ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 );
      }
      v18 = text->fields._stringLength;
      if ( v18 <= v11 )
      {
        if ( v8 )
          return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                                      v8,
                                      v8->klass->vtable._3_ToString.method);
      }
      else if ( v8 )
      {
        System_Text_StringBuilder__Append_64261188(v8, text, v11, v18 - v11, 0);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                                    v8,
                                    v8->klass->vtable._3_ToString.method);
      }
    }
LABEL_23:
    sub_1C7BD40(IsNullOrEmpty, v6);
  }
  return text;
}


BattleData_o *ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_1C7BD40(this, method);
  return Logic_k__BackingField->fields.data;
}


BattleLogic_o *ParseBattleMessage__get_Logic(ParseBattleMessage_o *this, const MethodInfo *method)
{
  return this->fields._Logic_k__BackingField;
}


void ParseBattleMessage__set_Logic(ParseBattleMessage_o *this, BattleLogic_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Logic_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Logic_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}