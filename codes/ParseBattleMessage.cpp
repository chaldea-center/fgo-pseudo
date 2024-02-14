void __fastcall ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  struct System_String_array *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v14; // x21
  const MethodInfo *v15; // x1
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_42120F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__, logic);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo, v5);
    sub_B0D8A4(&string___TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_15834/*"[div]"*/, v7);
    byte_42120F3 = 1;
  }
  v8 = sub_B0D8BC(string___TypeInfo, 1LL);
  if ( !v8 )
    sub_B0D97C(0LL);
  v9 = (struct System_String_array *)v8;
  v10 = StringLiteral_15834/*"[div]"*/;
  if ( StringLiteral_15834/*"[div]"*/ )
  {
    v10 = sub_B0D964(StringLiteral_15834/*"[div]"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
      v17 = sub_B0D99C();
      sub_B0D948(v17, 0LL);
    }
    v11 = StringLiteral_15834/*"[div]"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v9->max_length )
  {
    v16 = sub_B0D9A8(v10);
    sub_B0D948(v16, 0LL);
  }
  v9->m_Items[0] = (System_String_o *)v11;
  sub_B0D840(v9->m_Items, v11);
  this->fields.TAG_DIVIDE = v9;
  sub_B0D840(&this->fields, v9);
  v14 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo,
                                                                                        v12,
                                                                                        v13);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v14,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v14;
  sub_B0D840(&this->fields.dicReplaceTag, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Logic_k__BackingField = logic;
  sub_B0D840(&this->fields._Logic_k__BackingField, logic);
  ParseBattleMessage__Init(this, v15);
}


void __fastcall ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *dicReplaceTag; // x20

  v4 = this;
  if ( (byte_42120F5 & 1) == 0 )
  {
    this = (ParseBattleMessage_o *)sub_B0D8A4(
                                     &Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__,
                                     replaceTag);
    byte_42120F5 = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4->fields.dicReplaceTag,
        this = (ParseBattleMessage_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, const char *, const MethodInfo *))replaceTag->klass[1]._1.gc_desc)(
                                         replaceTag,
                                         replaceTag->klass[1]._1.name,
                                         method),
        !dicReplaceTag) )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    dicReplaceTag,
    (System_Xml_XmlQualifiedName_o *)this,
    (System_Xml_Schema_XmlSchemaObject_o *)replaceTag,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
}


bool __fastcall ParseBattleMessage__ExistReplaceTag(
        ParseBattleMessage_o *this,
        System_String_o *tag,
        ReplaceTagBase_o **replaceTag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *dicReplaceTag; // x21
  System_Char_array *v11; // x0
  System_String_array *v12; // x0
  __int64 v14; // x0

  if ( (byte_42120F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_string___, tag);
    sub_B0D8A4(&char___TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_42120F9 = 1;
  }
  dicReplaceTag = this->fields.dicReplaceTag;
  v11 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_8;
  if ( !v11->max_length )
  {
    v14 = sub_B0D9A8(v11);
    sub_B0D948(v14, 0LL);
  }
  v11->m_Items[2] = 32;
  if ( !tag
    || (v12 = System_String__Split(tag, v11, 0LL),
        v11 = (System_Char_array *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                     (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v12,
                                     0,
                                     (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
                                     (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
LABEL_8:
    sub_B0D97C(v11);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicReplaceTag,
           (System_Xml_XmlQualifiedName_o *)v11,
           (System_Xml_Schema_XmlSchemaObject_o **)replaceTag,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void __fastcall ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ReplaceMasterName_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_42120F4 & 1) == 0 )
  {
    sub_B0D8A4(&ReplaceMasterName_TypeInfo, method);
    byte_42120F4 = 1;
  }
  v4 = (ReplaceMasterName_o *)sub_B0D974(ReplaceMasterName_TypeInfo, method, v2);
  ReplaceMasterName___ctor(v4, 0LL);
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

  if ( (byte_42120F6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15681/*"["*/, text);
    this = (ParseBattleMessage_o *)sub_B0D8A4(&StringLiteral_15917/*"]"*/, v10);
    byte_42120F6 = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_B0D97C(this);
  v11 = System_String__IndexOf_43922284(text, (System_String_o *)StringLiteral_15681/*"["*/, analyzeIdx, 4, 0LL);
  *startIndex = v11;
  if ( (v11 & 0x80000000) != 0 )
    return 0;
  v12 = System_String__IndexOf_43922284(text, (System_String_o *)StringLiteral_15917/*"]"*/, v11, 4, 0LL);
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
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  v4 = this;
  if ( (byte_42120F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__string___, texts);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_B0D8A4(&Method_System_Func_string__string___ctor__, v6);
    sub_B0D8A4(&System_Func_string__string__TypeInfo, v7);
    this = (ParseBattleMessage_o *)sub_B0D8A4(&Method_ParseBattleMessage_ReplaceText__, v8);
    byte_42120F7 = 1;
  }
  if ( !texts )
    sub_B0D97C(this);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_43912524(
                                                              texts,
                                                              v4->fields.TAG_DIVIDE,
                                                              0,
                                                              0LL);
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_string__string__TypeInfo,
                                                                                          v10,
                                                                                          v11);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v12,
    (Il2CppObject *)v4,
    Method_ParseBattleMessage_ReplaceText__,
    (const MethodInfo_261A104 *)Method_System_Func_string__string___ctor__);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v13,
                                  (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
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

  v3 = text;
  if ( (byte_42120F8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, text);
    byte_42120F8 = 1;
  }
  v21 = 0LL;
  endIndex = 0LL;
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v3, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( v3 )
    {
      m_stringLength = v3->fields.m_stringLength;
      v9 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v6, v7);
      System_Text_StringBuilder___ctor_42149428(v9, m_stringLength + 32, 0LL);
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
          v15 = System_String__Substring_43913640(v3, HIDWORD(endIndex) + 1, (int)endIndex + ~HIDWORD(endIndex), 0LL);
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
              System_Text_StringBuilder__Append_42155732(v9, v3, v12, v14 - v12, 0LL);
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
            appended = System_Text_StringBuilder__Append_42155400(v9, IsNullOrEmpty, 0LL);
          }
          else
          {
            if ( !v9 )
              goto LABEL_23;
            appended = System_Text_StringBuilder__Append_42155732(v9, v3, v12, 1 - v12 + v13, 0LL);
          }
          v12 = v13 + 1;
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                               (ParseBattleMessage_o *)appended,
                                               v3,
                                               v13 + 1,
                                               (int32_t *)&endIndex + 1,
                                               (int32_t *)&endIndex,
                                               v18);
        }
        while ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 );
      }
      v19 = v3->fields.m_stringLength;
      if ( v19 <= v12 )
      {
        if ( v9 )
          return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                      v9,
                                      v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
      else if ( v9 )
      {
        System_Text_StringBuilder__Append_42155732(v9, v3, v12, v19 - v12, 0LL);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                    v9,
                                    v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
    }
LABEL_23:
    sub_B0D97C(IsNullOrEmpty);
  }
  return v3;
}


BattleData_o *__fastcall ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_B0D97C(this);
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
  sub_B0D840(&this->fields._Logic_k__BackingField, value);
}