void __fastcall ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_String_array *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x21
  const MethodInfo *v11; // x1
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_42ADBF9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_15893/*"[div]"*/);
    byte_42ADBF9 = 1;
  }
  v5 = sub_B5299C(string___TypeInfo, 1LL);
  if ( !v5 )
    sub_B52A5C(0LL, v6);
  v7 = (struct System_String_array *)v5;
  v8 = StringLiteral_15893/*"[div]"*/;
  if ( StringLiteral_15893/*"[div]"*/ )
  {
    v8 = sub_B52A44(StringLiteral_15893/*"[div]"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
      v13 = sub_B52A7C();
      sub_B52A28(v13, 0LL);
    }
    v9 = StringLiteral_15893/*"[div]"*/;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v7->max_length )
  {
    v12 = sub_B52A88(v8);
    sub_B52A28(v12, 0LL);
  }
  v7->m_Items[0] = (System_String_o *)v9;
  sub_B52920(v7->m_Items);
  this->fields.TAG_DIVIDE = v7;
  sub_B52920(&this->fields);
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v10,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v10;
  sub_B52920(&this->fields.dicReplaceTag);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Logic_k__BackingField = logic;
  sub_B52920(&this->fields._Logic_k__BackingField);
  ParseBattleMessage__Init(this, v11);
}


void __fastcall ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *dicReplaceTag; // x20

  v4 = this;
  if ( (byte_42ADBFB & 1) == 0 )
  {
    this = (ParseBattleMessage_o *)sub_B52984(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
    byte_42ADBFB = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4->fields.dicReplaceTag,
        this = (ParseBattleMessage_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, const char *, const MethodInfo *))replaceTag->klass[1]._1.gc_desc)(
                                         replaceTag,
                                         replaceTag->klass[1]._1.name,
                                         method),
        !dicReplaceTag) )
  {
    sub_B52A5C(this, replaceTag);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    dicReplaceTag,
    (System_Xml_XmlQualifiedName_o *)this,
    (System_Xml_Schema_XmlSchemaObject_o *)replaceTag,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
}


bool __fastcall ParseBattleMessage__ExistReplaceTag(
        ParseBattleMessage_o *this,
        System_String_o *tag,
        ReplaceTagBase_o **replaceTag,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *dicReplaceTag; // x21
  System_Char_array *v8; // x0
  System_Char_array *v9; // x1
  System_String_array *v10; // x0
  __int64 v12; // x0

  if ( (byte_42ADBFF & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_string___);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ADBFF = 1;
  }
  dicReplaceTag = this->fields.dicReplaceTag;
  v8 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_8;
  v9 = v8;
  if ( !v8->max_length )
  {
    v12 = sub_B52A88(v8);
    sub_B52A28(v12, 0LL);
  }
  v8->m_Items[2] = 32;
  if ( !tag
    || (v10 = System_String__Split(tag, v8, 0LL),
        v8 = (System_Char_array *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v10,
                                    0,
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
                                    (const MethodInfo_1A43FCC *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
LABEL_8:
    sub_B52A5C(v8, v9);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicReplaceTag,
           (System_Xml_XmlQualifiedName_o *)v8,
           (System_Xml_Schema_XmlSchemaObject_o **)replaceTag,
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void __fastcall ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  ReplaceMasterName_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_42ADBFA & 1) == 0 )
  {
    sub_B52984(&ReplaceMasterName_TypeInfo);
    byte_42ADBFA = 1;
  }
  v3 = (ReplaceMasterName_o *)sub_B52A54(ReplaceMasterName_TypeInfo);
  ReplaceMasterName___ctor(v3, 0LL);
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
  int32_t v10; // w0
  int32_t v11; // w0

  if ( (byte_42ADBFC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15739/*"["*/);
    this = (ParseBattleMessage_o *)sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42ADBFC = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_B52A5C(this, text);
  v10 = System_String__IndexOf_44640696(text, (System_String_o *)StringLiteral_15739/*"["*/, analyzeIdx, 4, 0LL);
  *startIndex = v10;
  if ( (v10 & 0x80000000) != 0 )
    return 0;
  v11 = System_String__IndexOf_44640696(text, (System_String_o *)StringLiteral_15976/*"]"*/, v10, 4, 0LL);
  *endIndex = v11;
  return v11 > 0;
}


System_String_array *__fastcall ParseBattleMessage__Replace(
        ParseBattleMessage_o *this,
        System_String_o *texts,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0

  v4 = this;
  if ( (byte_42ADBFD & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B52984(&Method_System_Func_string__string___ctor__);
    sub_B52984(&System_Func_string__string__TypeInfo);
    this = (ParseBattleMessage_o *)sub_B52984(&Method_ParseBattleMessage_ReplaceText__);
    byte_42ADBFD = 1;
  }
  if ( !texts )
    sub_B52A5C(this, texts);
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_44630936(
                                                              texts,
                                                              v4->fields.TAG_DIVIDE,
                                                              0,
                                                              0LL);
  v6 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_string__string__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v6,
    (Il2CppObject *)v4,
    Method_ParseBattleMessage_ReplaceText__,
    (const MethodInfo_2BCA808 *)Method_System_Func_string__string___ctor__);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                              v5,
                                                              (System_Func_TSource__TResult__o *)v6,
                                                              (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v7,
                                  (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_string___);
}


System_String_o *__fastcall ParseBattleMessage__ReplaceText(
        ParseBattleMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  int32_t m_stringLength; // w22
  System_Text_StringBuilder_o *v8; // x21
  ParseBattleMessage_o *v9; // x0
  const MethodInfo *v10; // x5
  int32_t v11; // w22
  int v12; // w25
  int v13; // w26
  System_String_o *v14; // x23
  const MethodInfo *v15; // x3
  System_Text_StringBuilder_o *appended; // x0
  const MethodInfo *v17; // x5
  int32_t v18; // w8
  System_String_o *v20; // [xsp+0h] [xbp-50h] BYREF
  __int64 endIndex; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42ADBFE & 1) == 0 )
  {
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    byte_42ADBFE = 1;
  }
  v20 = 0LL;
  endIndex = 0LL;
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( text )
    {
      m_stringLength = text->fields.m_stringLength;
      v8 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_42988076(v8, m_stringLength + 32, 0LL);
      IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                           v9,
                                           text,
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
          v14 = System_String__Substring_44632052(text, HIDWORD(endIndex) + 1, (int)endIndex + ~HIDWORD(endIndex), 0LL);
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
              System_Text_StringBuilder__Append_42994380(v8, text, v11, v13 - v11, 0LL);
            }
            IsNullOrEmpty = v20;
            if ( !v20 )
              goto LABEL_23;
            IsNullOrEmpty = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, ParseBattleMessage_o *, System_String_o *, Il2CppMethodPointer))v20->klass->vtable._5_Clone.method)(
                                                 v20,
                                                 this,
                                                 v14,
                                                 v20->klass->vtable._6_GetTypeCode.methodPtr);
            if ( !v8 )
              goto LABEL_23;
            appended = System_Text_StringBuilder__Append_42994048(v8, IsNullOrEmpty, 0LL);
          }
          else
          {
            if ( !v8 )
              goto LABEL_23;
            appended = System_Text_StringBuilder__Append_42994380(v8, text, v11, 1 - v11 + v12, 0LL);
          }
          v11 = v12 + 1;
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                               (ParseBattleMessage_o *)appended,
                                               text,
                                               v12 + 1,
                                               (int32_t *)&endIndex + 1,
                                               (int32_t *)&endIndex,
                                               v17);
        }
        while ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 );
      }
      v18 = text->fields.m_stringLength;
      if ( v18 <= v11 )
      {
        if ( v8 )
          return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                      v8,
                                      v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
      else if ( v8 )
      {
        System_Text_StringBuilder__Append_42994380(v8, text, v11, v18 - v11, 0LL);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                    v8,
                                    v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
    }
LABEL_23:
    sub_B52A5C(IsNullOrEmpty, v6);
  }
  return text;
}


BattleData_o *__fastcall ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_B52A5C(this, method);
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
  sub_B52920(&this->fields._Logic_k__BackingField);
}