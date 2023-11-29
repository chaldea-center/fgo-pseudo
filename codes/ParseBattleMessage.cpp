void __fastcall ParseBattleMessage___ctor(ParseBattleMessage_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_String_array *v15; // x21
  __int64 v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1

  if ( (byte_40F8024 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__, logic);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo, v5);
    sub_B16FFC(&string___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_15724, v7);
    byte_40F8024 = 1;
  }
  v8 = sub_B17014(string___TypeInfo, 1LL, method);
  if ( !v8 )
    sub_B170D4();
  v15 = (struct System_String_array *)v8;
  v16 = StringLiteral_15724;
  if ( StringLiteral_15724 )
  {
    v16 = sub_B170BC(StringLiteral_15724, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    v17 = (System_Int32_array **)StringLiteral_15724;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
  {
    sub_B17100(v16, v17, v9);
    sub_B170A0();
  }
  v15->m_Items[0] = (System_String_o *)v17;
  sub_B16F98((BattleServantConfConponent_o *)v15->m_Items, v17, v9, v10, v11, v12, v13, v14);
  this->fields.TAG_DIVIDE = v15;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v18, v19, v20, v21, v22, v23);
  v28 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__ReplaceTagBase__TypeInfo,
                                                                                        v24,
                                                                                        v25,
                                                                                        v26,
                                                                                        v27);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v28,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase___ctor__);
  this->fields.dicReplaceTag = (struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *)v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicReplaceTag,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Logic_k__BackingField = logic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Logic_k__BackingField,
    (System_Int32_array **)logic,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  ParseBattleMessage__Init(this, v41);
}


void __fastcall ParseBattleMessage__AddReplaceTag(
        ParseBattleMessage_o *this,
        ReplaceTagBase_o *replaceTag,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ReplaceTagBase__o *dicReplaceTag; // x20
  System_Xml_XmlQualifiedName_o *v6; // x0

  if ( (byte_40F8026 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__, replaceTag);
    byte_40F8026 = 1;
  }
  if ( !replaceTag
    || (dicReplaceTag = this->fields.dicReplaceTag,
        v6 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, const char *, const MethodInfo *))replaceTag->klass[1]._1.gc_desc)(
                                                replaceTag,
                                                replaceTag->klass[1]._1.name,
                                                method),
        !dicReplaceTag) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicReplaceTag,
    v6,
    (System_Xml_Schema_XmlSchemaObject_o *)replaceTag,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__Add__);
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
  __int64 v12; // x2
  System_String_array *v13; // x0
  System_Xml_XmlQualifiedName_o *v14; // x0

  if ( (byte_40F802A & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_string___, tag);
    sub_B16FFC(&char___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40F802A = 1;
  }
  dicReplaceTag = this->fields.dicReplaceTag;
  v11 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, replaceTag);
  if ( !v11 )
    goto LABEL_8;
  if ( !v11->max_length )
  {
    sub_B17100(v11, v11, v12);
    sub_B170A0();
  }
  v11->m_Items[2] = 32;
  if ( !tag
    || (v13 = System_String__Split(tag, v11, 0LL),
        v14 = (System_Xml_XmlQualifiedName_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                                 (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v13,
                                                 0,
                                                 (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1,
                                                 (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_string___),
        !dicReplaceTag) )
  {
LABEL_8:
    sub_B170D4();
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicReplaceTag,
           v14,
           (System_Xml_Schema_XmlSchemaObject_o **)replaceTag,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__ReplaceTagBase__TryGetValue__);
}


void __fastcall ParseBattleMessage__Init(ParseBattleMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  ReplaceMasterName_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_40F8025 & 1) == 0 )
  {
    sub_B16FFC(&ReplaceMasterName_TypeInfo, method);
    byte_40F8025 = 1;
  }
  v6 = (ReplaceMasterName_o *)sub_B170CC(ReplaceMasterName_TypeInfo, method, v2, v3, v4);
  ReplaceMasterName___ctor(v6, 0LL);
  ParseBattleMessage__AddReplaceTag(this, (ReplaceTagBase_o *)v6, v7);
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

  if ( (byte_40F8027 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15571, text);
    sub_B16FFC(&StringLiteral_15807, v10);
    byte_40F8027 = 1;
  }
  *endIndex = 0;
  if ( !text )
    sub_B170D4();
  v11 = System_String__IndexOf_43816112(text, (System_String_o *)StringLiteral_15571, analyzeIdx, 4, 0LL);
  *startIndex = v11;
  if ( (v11 & 0x80000000) != 0 )
    return 0;
  v12 = System_String__IndexOf_43816112(text, (System_String_o *)StringLiteral_15807, v11, 4, 0LL);
  *endIndex = v12;
  return v12 > 0;
}


System_String_array *__fastcall ParseBattleMessage__Replace(
        ParseBattleMessage_o *this,
        System_String_o *texts,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_40F8028 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__string___, texts);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_B16FFC(&Method_System_Func_string__string___ctor__, v6);
    sub_B16FFC(&System_Func_string__string__TypeInfo, v7);
    sub_B16FFC(&Method_ParseBattleMessage_ReplaceText__, v8);
    byte_40F8028 = 1;
  }
  if ( !texts )
    sub_B170D4();
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split_43806352(
                                                              texts,
                                                              this->fields.TAG_DIVIDE,
                                                              0,
                                                              0LL);
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_string__string__TypeInfo,
                                                                                          v10,
                                                                                          v11,
                                                                                          v12,
                                                                                          v13);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v14,
    (Il2CppObject *)this,
    Method_ParseBattleMessage_ReplaceText__,
    (const MethodInfo_2B6C28C *)Method_System_Func_string__string___ctor__);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)v14,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_string__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v15,
                                  (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
}


System_String_o *__fastcall ParseBattleMessage__ReplaceText(
        ParseBattleMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  int32_t m_stringLength; // w22
  System_Text_StringBuilder_o *v10; // x21
  ParseBattleMessage_o *v11; // x0
  const MethodInfo *v12; // x5
  int32_t v13; // w22
  int v14; // w25
  int v15; // w26
  System_String_o *v16; // x23
  const MethodInfo *v17; // x3
  System_String_o *v18; // x0
  System_Text_StringBuilder_o *appended; // x0
  const MethodInfo *v20; // x5
  int32_t v21; // w8
  ReplaceTagBase_o *v23; // [xsp+0h] [xbp-50h] BYREF
  __int64 endIndex; // [xsp+8h] [xbp-48h] BYREF

  v3 = text;
  if ( (byte_40F8029 & 1) == 0 )
  {
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, text);
    byte_40F8029 = 1;
  }
  v23 = 0LL;
  endIndex = 0LL;
  if ( !System_String__IsNullOrEmpty(v3, 0LL) )
  {
    if ( v3 )
    {
      m_stringLength = v3->fields.m_stringLength;
      v10 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v5, v6, v7, v8);
      System_Text_StringBuilder___ctor_41908268(v10, m_stringLength + 32, 0LL);
      v13 = 0;
      if ( ParseBattleMessage__NextTagSearch(v11, v3, 0, (int32_t *)&endIndex + 1, (int32_t *)&endIndex, v12) )
      {
        v13 = 0;
        do
        {
          v14 = endIndex;
          v15 = HIDWORD(endIndex);
          v16 = System_String__Substring_43807468(v3, HIDWORD(endIndex) + 1, (int)endIndex + ~HIDWORD(endIndex), 0LL);
          if ( ParseBattleMessage__ExistReplaceTag(this, v16, &v23, v17) )
          {
            if ( v15 > v13 )
            {
              if ( !v10 )
                goto LABEL_23;
              System_Text_StringBuilder__Append_41914572(v10, v3, v13, v15 - v13, 0LL);
            }
            if ( !v23 )
              goto LABEL_23;
            v18 = (System_String_o *)((__int64 (__fastcall *)(ReplaceTagBase_o *, ParseBattleMessage_o *, System_String_o *, void *))v23->klass[1]._1.namespaze)(
                                       v23,
                                       this,
                                       v16,
                                       v23->klass[1]._1.byval_arg.data);
            if ( !v10 )
              goto LABEL_23;
            appended = System_Text_StringBuilder__Append_41914240(v10, v18, 0LL);
          }
          else
          {
            if ( !v10 )
              goto LABEL_23;
            appended = System_Text_StringBuilder__Append_41914572(v10, v3, v13, 1 - v13 + v14, 0LL);
          }
          v13 = v14 + 1;
        }
        while ( ParseBattleMessage__NextTagSearch(
                  (ParseBattleMessage_o *)appended,
                  v3,
                  v14 + 1,
                  (int32_t *)&endIndex + 1,
                  (int32_t *)&endIndex,
                  v20) );
      }
      v21 = v3->fields.m_stringLength;
      if ( v21 <= v13 )
      {
        if ( v10 )
          return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                      v10,
                                      v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
      else if ( v10 )
      {
        System_Text_StringBuilder__Append_41914572(v10, v3, v13, v21 - v13, 0LL);
        return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                    v10,
                                    v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      }
    }
LABEL_23:
    sub_B170D4();
  }
  return v3;
}


BattleData_o *__fastcall ParseBattleMessage__get_Data(ParseBattleMessage_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *Logic_k__BackingField; // x8

  Logic_k__BackingField = this->fields._Logic_k__BackingField;
  if ( !Logic_k__BackingField )
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Logic_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}