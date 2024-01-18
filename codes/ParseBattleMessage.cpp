void __fastcall ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_String_array *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x21
  const MethodInfo *v14; // x1
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_4185209 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__, logic);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo, v5);
    sub_B2C35C(&string___TypeInfo, v6);
    sub_B2C35C(&StringLiteral_15787/*"[div]"*/, v7);
    byte_4185209 = 1;
  }
  v8 = sub_B2C374(string___TypeInfo, 1LL);
  if ( !v8 )
    sub_B2C434(0LL, v9);
  v10 = (struct System_String_array *)v8;
  v11 = StringLiteral_15787/*"[div]"*/;
  if ( StringLiteral_15787/*"[div]"*/ )
  {
    v11 = sub_B2C41C(StringLiteral_15787/*"[div]"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
    {
      v16 = sub_B2C454();
      sub_B2C400(v16, 0LL);
    }
    v12 = StringLiteral_15787/*"[div]"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v10->max_length )
  {
    v15 = sub_B2C460(v11);
    sub_B2C400(v15, 0LL);
  }
  v10->m_Items[0] = (System_String_o *)v12;
  sub_B2C2F8(v10->m_Items, v12);
  this->fields.TAG_DIVIDE = v10;
  sub_B2C2F8(&this->fields, v10);
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v13,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v13;
  sub_B2C2F8(&this->fields.dicReplaceTag, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Logic_k__BackingField = logic;
  sub_B2C2F8(&this->fields._Logic_k__BackingField, logic);
  ParseBattleMessage__Init(this, v14);
}


void __fastcall ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *dicReplaceTag; // x20

  v4 = this;
  if ( (byte_418520B & 1) == 0 )
  {
    this = (ParseBattleMessage_o *)sub_B2C35C(
                                     &Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__,
                                     replaceTag);
    byte_418520B = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4->fields.dicReplaceTag,
        this = (ParseBattleMessage_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, const char *, const MethodInfo *))replaceTag->klass[1]._1.gc_desc)(
                                         replaceTag,
                                         replaceTag->klass[1]._1.name,
                                         method),
        !dicReplaceTag) )
  {
    sub_B2C434(this, replaceTag);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    dicReplaceTag,
    (System_Xml_XmlQualifiedName_o *)this,
    (System_Xml_Schema_XmlSchemaObject_o *)replaceTag,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
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
  System_Char_array *v12; // x1
  System_String_array *v13; // x0
  __int64 v15; // x0

  if ( (byte_418520F & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_string___, tag);
    sub_B2C35C(&char___TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418520F = 1;
  }
  dicReplaceTag = this->fields.dicReplaceTag;
  v11 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_8;
  v12 = v11;
  if ( !v11->max_length )
  {
    v15 = sub_B2C460(v11);
    sub_B2C400(v15, 0LL);
  }
  v11->m_Items[2] = 32;
  if ( !tag
    || (v13 = System_String__Split(tag, v11, 0LL),
        v11 = (System_Char_array *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                     (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v13,
                                     0,
                                     (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
                                     (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
LABEL_8:
    sub_B2C434(v11, v12);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicReplaceTag,
           (System_Xml_XmlQualifiedName_o *)v11,
           (System_Xml_Schema_XmlSchemaObject_o **)replaceTag,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void __fastcall ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  ReplaceMasterName_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_418520A & 1) == 0 )
  {
    sub_B2C35C(&ReplaceMasterName_TypeInfo, method);
    byte_418520A = 1;
  }
  v3 = (ReplaceMasterName_o *)sub_B2C42C(ReplaceMasterName_TypeInfo);
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
  __int64 v10; // x1
  int32_t v11; // w0
  int32_t v12; // w0

  if ( (byte_418520C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15634/*"["*/, text);
    this = (ParseBattleMessage_o *)sub_B2C35C(&StringLiteral_15870/*"]"*/, v10);
    byte_418520C = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_B2C434(this, text);
  v11 = System_String__IndexOf_44377912(text, (System_String_o *)StringLiteral_15634/*"["*/, analyzeIdx, 4, 0LL);
  *startIndex = v11;
  if ( (v11 & 0x80000000) != 0 )
    return 0;
  v12 = System_String__IndexOf_44377912(text, (System_String_o *)StringLiteral_15870/*"]"*/, v11, 4, 0LL);
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  v4 = this;
  if ( (byte_418520D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__string___, texts);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_B2C35C(&Method_System_Func_string__string___ctor__, v6);
    sub_B2C35C(&System_Func_string__string__TypeInfo, v7);
    this = (ParseBattleMessage_o *)sub_B2C35C(&Method_ParseBattleMessage_ReplaceText__, v8);
    byte_418520D = 1;
  }
  if ( !texts )
    sub_B2C434(this, texts);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_44368152(
                                                              texts,
                                                              v4->fields.TAG_DIVIDE,
                                                              0,
                                                              0LL);
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_string__string__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v10,
    (Il2CppObject *)v4,
    Method_ParseBattleMessage_ReplaceText__,
    (const MethodInfo_2713350 *)Method_System_Func_string__string___ctor__);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v11,
                                  (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
}


System_String_o *__fastcall ParseBattleMessage__ReplaceText(
        ParseBattleMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
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

  v3 = text;
  if ( (byte_418520E & 1) == 0 )
  {
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, text);
    byte_418520E = 1;
  }
  v20 = 0LL;
  endIndex = 0LL;
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v3, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( v3 )
    {
      m_stringLength = v3->fields.m_stringLength;
      v8 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_42402728(v8, m_stringLength + 32, 0LL);
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
          v14 = System_String__Substring_44369268(v3, HIDWORD(endIndex) + 1, (int)endIndex + ~HIDWORD(endIndex), 0LL);
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
              System_Text_StringBuilder__Append_42409032(v8, v3, v11, v13 - v11, 0LL);
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
            appended = System_Text_StringBuilder__Append_42408700(v8, IsNullOrEmpty, 0LL);
          }
          else
          {
            if ( !v8 )
              goto LABEL_23;
            appended = System_Text_StringBuilder__Append_42409032(v8, v3, v11, 1 - v11 + v12, 0LL);
          }
          v11 = v12 + 1;
          IsNullOrEmpty = (System_String_o *)ParseBattleMessage__NextTagSearch(
                                               (ParseBattleMessage_o *)appended,
                                               v3,
                                               v12 + 1,
                                               (int32_t *)&endIndex + 1,
                                               (int32_t *)&endIndex,
                                               v17);
        }
        while ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 );
      }
      v18 = v3->fields.m_stringLength;
      if ( v18 <= v11 )
      {
        if ( v8 )
          return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                      v8,
                                      v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
      else if ( v8 )
      {
        System_Text_StringBuilder__Append_42409032(v8, v3, v11, v18 - v11, 0LL);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                    v8,
                                    v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
    }
LABEL_23:
    sub_B2C434(IsNullOrEmpty, v6);
  }
  return v3;
}


BattleData_o *__fastcall ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_B2C434(this, method);
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
  sub_B2C2F8(&this->fields._Logic_k__BackingField, value);
}