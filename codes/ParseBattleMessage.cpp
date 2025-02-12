void __fastcall ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_String_array *v16; // x21
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_Dictionary_object__object__o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x1

  if ( (byte_4BB750B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__, logic);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo, v5);
    sub_1C13D24(&string___TypeInfo, v6);
    sub_1C13D24(&StringLiteral_16234/*"[align right]"*/, v7);
    byte_4BB750B = 1;
  }
  v8 = sub_1C13DCC(string___TypeInfo, 1LL);
  if ( !v8 )
    sub_1C13F80(0LL, v9);
  v16 = (struct System_String_array *)v8;
  if ( !*(_DWORD *)(v8 + 24) )
    sub_1C13F88(v8, v9);
  v17 = StringLiteral_16234/*"[align right]"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_16234/*"[align right]"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 32), v17, v10, v11, v12, v13, v14, v15);
  this->fields.TAG_DIVIDE = v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v24,
    (const MethodInfo_32F2000 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v24;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dicReplaceTag, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Logic_k__BackingField = logic;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._Logic_k__BackingField,
    (int64_t)logic,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ParseBattleMessage__Init(this, v37);
}


void __fastcall ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x20
  System_Collections_Generic_Dictionary_object__object__o *dicReplaceTag; // x20

  v4 = this;
  if ( (byte_4BB750D & 1) == 0 )
  {
    this = (ParseBattleMessage_o *)sub_1C13D24(
                                     &Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__,
                                     replaceTag);
    byte_4BB750D = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.dicReplaceTag,
        this = (ParseBattleMessage_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, const char *, const MethodInfo *))replaceTag->klass[1]._1.gc_desc)(
                                         replaceTag,
                                         replaceTag->klass[1]._1.name,
                                         method),
        !dicReplaceTag) )
  {
    sub_1C13F80(this, replaceTag);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    dicReplaceTag,
    (Il2CppObject *)this,
    (Il2CppObject *)replaceTag,
    (const MethodInfo_32F29B0 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
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
  if ( (byte_4BB7511 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_string___, tag);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__, v7);
    this = (ParseBattleMessage_o *)sub_1C13D24(&StringLiteral_1/*""*/, v8);
    byte_4BB7511 = 1;
  }
  if ( !tag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.dicReplaceTag,
        v10 = System_String__Split(tag, 0x20u, 0, 0LL),
        this = (ParseBattleMessage_o *)BasicHelper__IndexValue_object_(
                                         (System_Object_array *)v10,
                                         0,
                                         (Il2CppObject *)StringLiteral_1/*""*/,
                                         (const MethodInfo_2F7E034 *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
    sub_1C13F80(this, tag);
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           dicReplaceTag,
           (Il2CppObject *)this,
           (Il2CppObject **)replaceTag,
           (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void __fastcall ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4BB750C & 1) == 0 )
  {
    sub_1C13D24(&ReplaceMasterName_TypeInfo, method);
    byte_4BB750C = 1;
  }
  v3 = (Il2CppObject *)sub_1C13F70(ReplaceMasterName_TypeInfo);
  System_Object___ctor(v3, 0LL);
  ParseBattleMessage__AddReplaceTag(this, (ReplaceTagBase_o *)v3, v4);
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

  if ( (byte_4BB750E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_16061/*"You must call the Bind method before performing this operation."*/, text);
    this = (ParseBattleMessage_o *)sub_1C13D24(&StringLiteral_16320/*"\\p{_xmlI}"*/, v10);
    byte_4BB750E = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_1C13F80(this, text);
  v11 = System_String__IndexOf_62999552(text, (System_String_o *)StringLiteral_16061/*"You must call the Bind method before performing this operation."*/, analyzeIdx, 4, 0LL);
  *startIndex = v11;
  if ( (v11 & 0x80000000) != 0 )
    return 0;
  v12 = System_String__IndexOf_62999552(text, (System_String_o *)StringLiteral_16320/*"\\p{_xmlI}"*/, v11, 4, 0LL);
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
  System_Func_object__object__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  v4 = this;
  if ( (byte_4BB750F & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_string__string___, texts);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_1C13D24(&System_Func_string__string__TypeInfo, v6);
    this = (ParseBattleMessage_o *)sub_1C13D24(&Method_ParseBattleMessage_ReplaceText__, v7);
    byte_4BB750F = 1;
  }
  if ( !texts )
    sub_1C13F80(this, texts);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_62994176(
                                                              texts,
                                                              v4->fields.TAG_DIVIDE,
                                                              0,
                                                              0LL);
  v9 = (System_Func_object__object__o *)sub_1C13F70(System_Func_string__string__TypeInfo);
  System_Func_object__object____ctor(v9, (Il2CppObject *)v4, Method_ParseBattleMessage_ReplaceText__, 0LL);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v8,
                                                               (System_Func_TSource__TResult__o *)v9,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v10,
                                  (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_string___);
}


System_String_o *__fastcall ParseBattleMessage__ReplaceText(
        ParseBattleMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  int32_t stringLength; // w22
  System_Text_StringBuilder_o *v8; // x21
  ParseBattleMessage_o *v9; // x0
  const MethodInfo *v10; // x5
  int32_t v11; // w22
  int v12; // w24
  int v13; // w25
  System_String_o *v14; // x23
  const MethodInfo *v15; // x3
  ParseBattleMessage_o *appended; // x0
  const MethodInfo *v17; // x5
  int32_t v18; // w8
  System_String_o *v20; // [xsp+0h] [xbp-50h] BYREF
  __int64 endIndex; // [xsp+8h] [xbp-48h] BYREF

  v3 = text;
  if ( (byte_4BB7510 & 1) == 0 )
  {
    sub_1C13D24(&System_Text_StringBuilder_TypeInfo, text);
    byte_4BB7510 = 1;
  }
  v20 = 0LL;
  endIndex = 0LL;
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v3, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( v3 )
    {
      stringLength = v3->fields._stringLength;
      v8 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_62122448(v8, stringLength + 32, 0LL);
      IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                           v9,
                                           v3,
                                           0,
                                           (int32_t *)&endIndex + 1,
                                           (int32_t *)&endIndex,
                                           v10);
      v11 = 0;
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v11 = 0;
        do
        {
          v12 = endIndex;
          v13 = HIDWORD(endIndex);
          v14 = System_String__Substring_62986948(v3, HIDWORD(endIndex) + 1, (int)endIndex + ~HIDWORD(endIndex), 0LL);
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
              System_Text_StringBuilder__Append_62129412(v8, v3, v11, v13 - v11, 0LL);
            }
            IsNullOrEmpty = v20;
            if ( !v20 )
              goto LABEL_23;
            IsNullOrEmpty = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, ParseBattleMessage_o *, System_String_o *, Il2CppMethodPointer))v20->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
                                                 v20,
                                                 this,
                                                 v14,
                                                 v20->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
            if ( !v8 )
              goto LABEL_23;
            appended = (ParseBattleMessage_o *)System_Text_StringBuilder__Append_62129096(v8, IsNullOrEmpty, 0LL);
          }
          else
          {
            if ( !v8 )
              goto LABEL_23;
            appended = (ParseBattleMessage_o *)System_Text_StringBuilder__Append_62129412(
                                                 v8,
                                                 v3,
                                                 v11,
                                                 v12 - v11 + 1,
                                                 0LL);
          }
          v11 = v12 + 1;
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                               appended,
                                               v3,
                                               v12 + 1,
                                               (int32_t *)&endIndex + 1,
                                               (int32_t *)&endIndex,
                                               v17);
        }
        while ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 );
      }
      v18 = v3->fields._stringLength;
      if ( v18 <= v11 )
      {
        if ( v8 )
          return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                      v8,
                                      v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
      else if ( v8 )
      {
        System_Text_StringBuilder__Append_62129412(v8, v3, v11, v18 - v11, 0LL);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                    v8,
                                    v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
    }
LABEL_23:
    sub_1C13F80(IsNullOrEmpty, v6);
  }
  return v3;
}


BattleData_o *__fastcall ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_1C13F80(this, method);
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._Logic_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}