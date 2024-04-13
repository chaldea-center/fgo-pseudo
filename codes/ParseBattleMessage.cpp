void __fastcall ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  struct System_String_array *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v20; // x21
  const MethodInfo *v21; // x1
  __int64 v22; // x0
  __int64 v23; // x0

  if ( (byte_42E6390 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__,
      (_DWORD)logic,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&string___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_15978/*"[div]"*/, v12, v13, v14);
    byte_42E6390 = 1;
  }
  v15 = sub_B5D5DC(string___TypeInfo, 1LL);
  if ( !v15 )
    sub_B5D69C(0LL, v16);
  v17 = (struct System_String_array *)v15;
  v18 = StringLiteral_15978/*"[div]"*/;
  if ( StringLiteral_15978/*"[div]"*/ )
  {
    v18 = sub_B5D684(StringLiteral_15978/*"[div]"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
      v23 = sub_B5D6BC();
      sub_B5D668(v23, 0LL);
    }
    v19 = StringLiteral_15978/*"[div]"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v17->max_length )
  {
    v22 = sub_B5D6C8(v18);
    sub_B5D668(v22, 0LL);
  }
  v17->m_Items[0] = (System_String_o *)v19;
  sub_B5D560(v17->m_Items);
  this->fields.TAG_DIVIDE = v17;
  sub_B5D560(&this->fields);
  v20 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v20,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v20;
  sub_B5D560(&this->fields.dicReplaceTag);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Logic_k__BackingField = logic;
  sub_B5D560(&this->fields._Logic_k__BackingField);
  ParseBattleMessage__Init(this, v21);
}


void __fastcall ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ParseBattleMessage_o *v5; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *dicReplaceTag; // x20

  v5 = this;
  if ( (byte_42E6392 & 1) == 0 )
  {
    this = (ParseBattleMessage_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__,
                                     (_DWORD)replaceTag,
                                     (_DWORD)method,
                                     v3);
    byte_42E6392 = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields.dicReplaceTag,
        this = (ParseBattleMessage_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, const char *, const MethodInfo *))replaceTag->klass[1]._1.gc_desc)(
                                         replaceTag,
                                         replaceTag->klass[1]._1.name,
                                         method),
        !dicReplaceTag) )
  {
    sub_B5D69C(this, replaceTag);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    dicReplaceTag,
    (System_Xml_XmlQualifiedName_o *)this,
    (System_Xml_Schema_XmlSchemaObject_o *)replaceTag,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
}


bool __fastcall ParseBattleMessage__ExistReplaceTag(
        ParseBattleMessage_o *this,
        System_String_o *tag,
        ReplaceTagBase_o **replaceTag,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *dicReplaceTag; // x21
  System_Char_array *v17; // x0
  System_Char_array *v18; // x1
  System_String_array *v19; // x0
  __int64 v21; // x0

  if ( (byte_42E6396 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_string___, (_DWORD)tag, (_DWORD)replaceTag, method);
    sub_B5D5C4(&char___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42E6396 = 1;
  }
  dicReplaceTag = this->fields.dicReplaceTag;
  v17 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v17 )
    goto LABEL_8;
  v18 = v17;
  if ( !v17->max_length )
  {
    v21 = sub_B5D6C8(v17);
    sub_B5D668(v21, 0LL);
  }
  v17->m_Items[2] = 32;
  if ( !tag
    || (v19 = System_String__Split(tag, v17, 0LL),
        v17 = (System_Char_array *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                     (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v19,
                                     0,
                                     (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
                                     (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
LABEL_8:
    sub_B5D69C(v17, v18);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicReplaceTag,
           (System_Xml_XmlQualifiedName_o *)v17,
           (System_Xml_Schema_XmlSchemaObject_o **)replaceTag,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void __fastcall ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ReplaceMasterName_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_42E6391 & 1) == 0 )
  {
    sub_B5D5C4(&ReplaceMasterName_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6391 = 1;
  }
  v5 = (ReplaceMasterName_o *)sub_B5D694(ReplaceMasterName_TypeInfo);
  ReplaceMasterName___ctor(v5, 0LL);
  ParseBattleMessage__AddReplaceTag(this, (ReplaceTagBase_o *)v5, v6);
}


bool __fastcall ParseBattleMessage__NextTagSearch(
        ParseBattleMessage_o *this,
        System_String_o *text,
        int32_t analyzeIdx,
        int32_t *startIndex,
        int32_t *endIndex,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int32_t v13; // w0
  int32_t v14; // w0

  if ( (byte_42E6393 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15824/*"["*/, (_DWORD)text, analyzeIdx, startIndex);
    this = (ParseBattleMessage_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v10, v11, v12);
    byte_42E6393 = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_B5D69C(this, text);
  v13 = System_String__IndexOf_44650168(text, (System_String_o *)StringLiteral_15824/*"["*/, analyzeIdx, 4, 0LL);
  *startIndex = v13;
  if ( (v13 & 0x80000000) != 0 )
    return 0;
  v14 = System_String__IndexOf_44650168(text, (System_String_o *)StringLiteral_16061/*"]"*/, v13, 4, 0LL);
  *endIndex = v14;
  return v14 > 0;
}


System_String_array *__fastcall ParseBattleMessage__Replace(
        ParseBattleMessage_o *this,
        System_String_o *texts,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ParseBattleMessage_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  v5 = this;
  if ( (byte_42E6394 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__string___, (_DWORD)texts, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_string__string___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_string__string__TypeInfo, v12, v13, v14);
    this = (ParseBattleMessage_o *)sub_B5D5C4(&Method_ParseBattleMessage_ReplaceText__, v15, v16, v17);
    byte_42E6394 = 1;
  }
  if ( !texts )
    sub_B5D69C(this, texts);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_44640408(
                                                               texts,
                                                               v5->fields.TAG_DIVIDE,
                                                               0,
                                                               0LL);
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_string__string__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_ParseBattleMessage_ReplaceText__,
    (const MethodInfo_2C3041C *)Method_System_Func_string__string___ctor__);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)v19,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v20,
                                  (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
}


System_String_o *__fastcall ParseBattleMessage__ReplaceText(
        ParseBattleMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x19
  System_String_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  int32_t m_stringLength; // w22
  System_Text_StringBuilder_o *v9; // x21
  ParseBattleMessage_o *v10; // x0
  const MethodInfo *v11; // x5
  int32_t v12; // w22
  int v13; // w25
  int v14; // w26
  System_String_o *v15; // x23
  const MethodInfo *v16; // x3
  System_Text_StringBuilder_o *appended; // x0
  const MethodInfo *v18; // x5
  int32_t v19; // w8
  System_String_o *v21; // [xsp+0h] [xbp-50h] BYREF
  __int64 endIndex; // [xsp+8h] [xbp-48h] BYREF

  v4 = text;
  if ( (byte_42E6395 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, (_DWORD)text, (_DWORD)method, v3);
    byte_42E6395 = 1;
  }
  v21 = 0LL;
  endIndex = 0LL;
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v4, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( v4 )
    {
      m_stringLength = v4->fields.m_stringLength;
      v9 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_42947772(v9, m_stringLength + 32, 0LL);
      IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                           v10,
                                           v4,
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
          v15 = System_String__Substring_44641524(v4, HIDWORD(endIndex) + 1, (int)endIndex + ~HIDWORD(endIndex), 0LL);
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
              System_Text_StringBuilder__Append_42954076(v9, v4, v12, v14 - v12, 0LL);
            }
            IsNullOrEmpty = v21;
            if ( !v21 )
              goto LABEL_23;
            IsNullOrEmpty = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, ParseBattleMessage_o *, System_String_o *, Il2CppMethodPointer))v21->klass->vtable._5_Clone.method)(
                                                 v21,
                                                 this,
                                                 v15,
                                                 v21->klass->vtable._6_GetTypeCode.methodPtr);
            if ( !v9 )
              goto LABEL_23;
            appended = System_Text_StringBuilder__Append_42953744(v9, IsNullOrEmpty, 0LL);
          }
          else
          {
            if ( !v9 )
              goto LABEL_23;
            appended = System_Text_StringBuilder__Append_42954076(v9, v4, v12, 1 - v12 + v13, 0LL);
          }
          v12 = v13 + 1;
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                               (ParseBattleMessage_o *)appended,
                                               v4,
                                               v13 + 1,
                                               (int32_t *)&endIndex + 1,
                                               (int32_t *)&endIndex,
                                               v18);
        }
        while ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 );
      }
      v19 = v4->fields.m_stringLength;
      if ( v19 <= v12 )
      {
        if ( v9 )
          return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                      v9,
                                      v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
      else if ( v9 )
      {
        System_Text_StringBuilder__Append_42954076(v9, v4, v12, v19 - v12, 0LL);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                    v9,
                                    v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
    }
LABEL_23:
    sub_B5D69C(IsNullOrEmpty, v7);
  }
  return v4;
}


BattleData_o *__fastcall ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_B5D69C(this, method);
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
  this->fields._Logic_k__BackingField = value;
  sub_B5D560(&this->fields._Logic_k__BackingField);
}