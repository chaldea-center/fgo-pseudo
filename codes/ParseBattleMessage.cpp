void __fastcall ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_String_array *v19; // x21
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_Dictionary_object__object__o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x1

  if ( (byte_4B18F74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__, logic, method);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo, v5, v6);
    sub_1BCA7E0(&string___TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_16151/*"[div]"*/, v9, v10);
    byte_4B18F74 = 1;
  }
  v11 = sub_1BCA888(string___TypeInfo, 1LL);
  if ( !v11 )
    sub_1BCAA3C(0LL, v12);
  v19 = (struct System_String_array *)v11;
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1BCAA44(v11, v12);
  v20 = StringLiteral_16151/*"[div]"*/;
  *(_QWORD *)(v11 + 32) = StringLiteral_16151/*"[div]"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), v20, v13, v14, v15, v16, v17, v18);
  this->fields.TAG_DIVIDE = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v19, v21, v22, v23, v24, v25, v26);
  v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo,
                                                                     v27,
                                                                     v28,
                                                                     v29);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v30,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dicReplaceTag, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Logic_k__BackingField = logic;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Logic_k__BackingField,
    (int64_t)logic,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  ParseBattleMessage__Init(this, v43);
}


void __fastcall ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x20
  System_Collections_Generic_Dictionary_object__object__o *dicReplaceTag; // x20

  v4 = this;
  if ( (byte_4B18F76 & 1) == 0 )
  {
    this = (ParseBattleMessage_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__,
                                     replaceTag,
                                     method);
    byte_4B18F76 = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.dicReplaceTag,
        this = (ParseBattleMessage_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, const char *, const MethodInfo *))replaceTag->klass[1]._1.gc_desc)(
                                         replaceTag,
                                         replaceTag->klass[1]._1.name,
                                         method),
        !dicReplaceTag) )
  {
    sub_1BCAA3C(this, replaceTag);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    dicReplaceTag,
    (Il2CppObject *)this,
    (Il2CppObject *)replaceTag,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
}


bool __fastcall ParseBattleMessage__ExistReplaceTag(
        ParseBattleMessage_o *this,
        System_String_o *tag,
        ReplaceTagBase_o **replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_object__object__o *dicReplaceTag; // x21
  System_String_array *v12; // x0

  v6 = this;
  if ( (byte_4B18F7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_string___, tag, replaceTag);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__, v7, v8);
    this = (ParseBattleMessage_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B18F7A = 1;
  }
  if ( !tag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.dicReplaceTag,
        v12 = System_String__Split(tag, 0x20u, 0, 0LL),
        this = (ParseBattleMessage_o *)BasicHelper__IndexValue_object_(
                                         (System_Object_array *)v12,
                                         0,
                                         (Il2CppObject *)StringLiteral_1/*""*/,
                                         (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
    sub_1BCAA3C(this, tag);
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           dicReplaceTag,
           (Il2CppObject *)this,
           (Il2CppObject **)replaceTag,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void __fastcall ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B18F75 & 1) == 0 )
  {
    sub_1BCA7E0(&ReplaceMasterName_TypeInfo, method, v2);
    byte_4B18F75 = 1;
  }
  v5 = (Il2CppObject *)sub_1BCAA2C(ReplaceMasterName_TypeInfo, method, v2, v3);
  System_Object___ctor(v5, 0LL);
  ParseBattleMessage__AddReplaceTag(this, (ReplaceTagBase_o *)v5, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ParseBattleMessage__NextTagSearch(
        ParseBattleMessage_o *this,
        System_String_o *text,
        int32_t analyzeIdx,
        int32_t *startIndex,
        int32_t *endIndex,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t v12; // w0
  int32_t v13; // w0

  if ( (byte_4B18F77 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, text, *(_QWORD *)&analyzeIdx);
    this = (ParseBattleMessage_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v10, v11);
    byte_4B18F77 = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_1BCAA3C(this, text);
  v12 = System_String__IndexOf_62432828(text, (System_String_o *)StringLiteral_15978/*"["*/, analyzeIdx, 4, 0LL);
  *startIndex = v12;
  if ( (v12 & 0x80000000) != 0 )
    return 0;
  v13 = System_String__IndexOf_62432828(text, (System_String_o *)StringLiteral_16236/*"]"*/, v12, 4, 0LL);
  *endIndex = v13;
  return v13 > 0;
}


System_String_array *__fastcall ParseBattleMessage__Replace(
        ParseBattleMessage_o *this,
        System_String_o *texts,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Func_object__object__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  v4 = this;
  if ( (byte_4B18F78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__string___, texts, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, v5, v6);
    sub_1BCA7E0(&System_Func_string__string__TypeInfo, v7, v8);
    this = (ParseBattleMessage_o *)sub_1BCA7E0(&Method_ParseBattleMessage_ReplaceText__, v9, v10);
    byte_4B18F78 = 1;
  }
  if ( !texts )
    sub_1BCAA3C(this, texts);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_62427452(
                                                               texts,
                                                               v4->fields.TAG_DIVIDE,
                                                               0,
                                                               0LL);
  v15 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_string__string__TypeInfo, v12, v13, v14);
  System_Func_object__object____ctor(v15, (Il2CppObject *)v4, Method_ParseBattleMessage_ReplaceText__, 0LL);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)v15,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v16,
                                  (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
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
  __int64 v8; // x3
  int32_t stringLength; // w22
  System_Text_StringBuilder_o *v10; // x21
  ParseBattleMessage_o *v11; // x0
  const MethodInfo *v12; // x5
  int32_t v13; // w22
  int v14; // w24
  int v15; // w25
  System_String_o *v16; // x23
  const MethodInfo *v17; // x3
  ParseBattleMessage_o *appended; // x0
  const MethodInfo *v19; // x5
  int32_t v20; // w8
  System_String_o *v22; // [xsp+0h] [xbp-50h] BYREF
  __int64 endIndex; // [xsp+8h] [xbp-48h] BYREF

  v3 = text;
  if ( (byte_4B18F79 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, text, method);
    byte_4B18F79 = 1;
  }
  v22 = 0LL;
  endIndex = 0LL;
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v3, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( v3 )
    {
      stringLength = v3->fields._stringLength;
      v10 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v6, v7, v8);
      System_Text_StringBuilder___ctor_61556468(v10, stringLength + 32, 0LL);
      IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                           v11,
                                           v3,
                                           0,
                                           (int32_t *)&endIndex + 1,
                                           (int32_t *)&endIndex,
                                           v12);
      v13 = 0;
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v13 = 0;
        do
        {
          v14 = endIndex;
          v15 = HIDWORD(endIndex);
          v16 = System_String__Substring_62420224(v3, HIDWORD(endIndex) + 1, (int)endIndex + ~HIDWORD(endIndex), 0LL);
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__ExistReplaceTag(
                                               this,
                                               v16,
                                               (ReplaceTagBase_o **)&v22,
                                               v17);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          {
            if ( v15 > v13 )
            {
              if ( !v10 )
                goto LABEL_23;
              System_Text_StringBuilder__Append_61563432(v10, v3, v13, v15 - v13, 0LL);
            }
            IsNullOrEmpty = v22;
            if ( !v22 )
              goto LABEL_23;
            IsNullOrEmpty = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, ParseBattleMessage_o *, System_String_o *, Il2CppMethodPointer))v22->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
                                                 v22,
                                                 this,
                                                 v16,
                                                 v22->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
            if ( !v10 )
              goto LABEL_23;
            appended = (ParseBattleMessage_o *)System_Text_StringBuilder__Append_61563116(v10, IsNullOrEmpty, 0LL);
          }
          else
          {
            if ( !v10 )
              goto LABEL_23;
            appended = (ParseBattleMessage_o *)System_Text_StringBuilder__Append_61563432(
                                                 v10,
                                                 v3,
                                                 v13,
                                                 v14 - v13 + 1,
                                                 0LL);
          }
          v13 = v14 + 1;
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                               appended,
                                               v3,
                                               v14 + 1,
                                               (int32_t *)&endIndex + 1,
                                               (int32_t *)&endIndex,
                                               v19);
        }
        while ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 );
      }
      v20 = v3->fields._stringLength;
      if ( v20 <= v13 )
      {
        if ( v10 )
          return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                      v10,
                                      v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
      else if ( v10 )
      {
        System_Text_StringBuilder__Append_61563432(v10, v3, v13, v20 - v13, 0LL);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                    v10,
                                    v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
    }
LABEL_23:
    sub_1BCAA3C(IsNullOrEmpty, v6);
  }
  return v3;
}


BattleData_o *__fastcall ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_1BCAA3C(this, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Logic_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Logic_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}