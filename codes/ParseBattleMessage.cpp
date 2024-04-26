void __fastcall ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_array *v13; // x21
  __int64 v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
  __int64 v36; // x0
  __int64 v37; // x0

  if ( (byte_4350CA7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_16009/*"[div]"*/);
    byte_4350CA7 = 1;
  }
  v5 = sub_B706AC(string___TypeInfo, 1LL);
  if ( !v5 )
    sub_B7076C(0LL, v6);
  v13 = (struct System_String_array *)v5;
  v14 = StringLiteral_16009/*"[div]"*/;
  if ( StringLiteral_16009/*"[div]"*/ )
  {
    v14 = sub_B70754(StringLiteral_16009/*"[div]"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
      v37 = sub_B7078C(0LL);
      sub_B70738(v37, 0LL);
    }
    v15 = (System_Int32_array **)StringLiteral_16009/*"[div]"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v13->max_length )
  {
    v36 = sub_B70798(v14);
    sub_B70738(v36, 0LL);
  }
  v13->m_Items[0] = (System_String_o *)v15;
  sub_B70630((BattleServantConfConponent_o *)v13->m_Items, v15, v7, v8, v9, v10, v11, v12);
  this->fields.TAG_DIVIDE = v13;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v13, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v22,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v22;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.dicReplaceTag,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Logic_k__BackingField = logic;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._Logic_k__BackingField,
    (System_Int32_array **)logic,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ParseBattleMessage__Init(this, v35);
}


void __fastcall ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  ParseBattleMessage_o *v4; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *dicReplaceTag; // x20

  v4 = this;
  if ( (byte_4350CA9 & 1) == 0 )
  {
    this = (ParseBattleMessage_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
    byte_4350CA9 = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4->fields.dicReplaceTag,
        this = (ParseBattleMessage_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, const char *, const MethodInfo *))replaceTag->klass[1]._1.gc_desc)(
                                         replaceTag,
                                         replaceTag->klass[1]._1.name,
                                         method),
        !dicReplaceTag) )
  {
    sub_B7076C(this, replaceTag);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    dicReplaceTag,
    (System_Xml_XmlQualifiedName_o *)this,
    (System_Xml_Schema_XmlSchemaObject_o *)replaceTag,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
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

  if ( (byte_4350CAD & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_string___);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350CAD = 1;
  }
  dicReplaceTag = this->fields.dicReplaceTag;
  v8 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_8;
  v9 = v8;
  if ( !v8->max_length )
  {
    v12 = sub_B70798(v8);
    sub_B70738(v12, 0LL);
  }
  v8->m_Items[2] = 32;
  if ( !tag
    || (v10 = System_String__Split(tag, v8, 0LL),
        v8 = (System_Char_array *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v10,
                                    0,
                                    (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
                                    (const MethodInfo_1BDEDE8 *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
LABEL_8:
    sub_B7076C(v8, v9);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicReplaceTag,
           (System_Xml_XmlQualifiedName_o *)v8,
           (System_Xml_Schema_XmlSchemaObject_o **)replaceTag,
           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void __fastcall ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  ReplaceMasterName_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4350CA8 & 1) == 0 )
  {
    sub_B70694(&ReplaceMasterName_TypeInfo);
    byte_4350CA8 = 1;
  }
  v3 = (ReplaceMasterName_o *)sub_B70764(ReplaceMasterName_TypeInfo);
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

  if ( (byte_4350CAA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15855/*"["*/);
    this = (ParseBattleMessage_o *)sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_4350CAA = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_B7076C(this, text);
  v10 = System_String__IndexOf_44830548(text, (System_String_o *)StringLiteral_15855/*"["*/, analyzeIdx, 4, 0LL);
  *startIndex = v10;
  if ( (v10 & 0x80000000) != 0 )
    return 0;
  v11 = System_String__IndexOf_44830548(text, (System_String_o *)StringLiteral_16092/*"]"*/, v10, 4, 0LL);
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
  if ( (byte_4350CAB & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B70694(&Method_System_Func_string__string___ctor__);
    sub_B70694(&System_Func_string__string__TypeInfo);
    this = (ParseBattleMessage_o *)sub_B70694(&Method_ParseBattleMessage_ReplaceText__);
    byte_4350CAB = 1;
  }
  if ( !texts )
    sub_B7076C(this, texts);
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_44820788(
                                                              texts,
                                                              v4->fields.TAG_DIVIDE,
                                                              0,
                                                              0LL);
  v6 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_string__string__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v6,
    (Il2CppObject *)v4,
    Method_ParseBattleMessage_ReplaceText__,
    (const MethodInfo_29ADCC4 *)Method_System_Func_string__string___ctor__);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                              v5,
                                                              (System_Func_TSource__TResult__o *)v6,
                                                              (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v7,
                                  (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
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

  if ( (byte_4350CAC & 1) == 0 )
  {
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    byte_4350CAC = 1;
  }
  v20 = 0LL;
  endIndex = 0LL;
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(text, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( text )
    {
      m_stringLength = text->fields.m_stringLength;
      v8 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor_42596008(v8, m_stringLength + 32, 0LL);
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
          v14 = System_String__Substring_44821904(text, HIDWORD(endIndex) + 1, (int)endIndex + ~HIDWORD(endIndex), 0LL);
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
              System_Text_StringBuilder__Append_42602312(v8, text, v11, v13 - v11, 0LL);
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
            appended = System_Text_StringBuilder__Append_42601980(v8, IsNullOrEmpty, 0LL);
          }
          else
          {
            if ( !v8 )
              goto LABEL_23;
            appended = System_Text_StringBuilder__Append_42602312(v8, text, v11, 1 - v11 + v12, 0LL);
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
        System_Text_StringBuilder__Append_42602312(v8, text, v11, v18 - v11, 0LL);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                    v8,
                                    v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
    }
LABEL_23:
    sub_B7076C(IsNullOrEmpty, v6);
  }
  return text;
}


BattleData_o *__fastcall ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_B7076C(this, method);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Logic_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._Logic_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}