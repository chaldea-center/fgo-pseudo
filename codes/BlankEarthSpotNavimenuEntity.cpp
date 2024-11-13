void __fastcall BlankEarthSpotNavimenuEntity___ctor(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15ED4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B15ED4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BlankEarthSpotNavimenuEntity__CreatePrimaryKey(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.blankEarthSpotId;
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotNavimenuEntity_MessageData_o *__fastcall BlankEarthSpotNavimenuEntity__GetMessageInfoCondCheck(
        BlankEarthSpotNavimenuEntity_o *this,
        int64_t nowTime,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  BlankEarthSpotNavimenuEntity_MessageData_o *result; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  BlankEarthSpotNavimenuEntity_MessageData_o *v49; // x22
  int64_t messageClosedAt; // x8
  System_Collections_Generic_List_object__o *v51; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v54; // x1
  Il2CppObject *current; // x22
  Il2CppObject *Value_object; // x21
  Il2CppObject *v57; // x23
  int64_t Value_long; // x24
  int32_t v59; // w25
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  BlankEarthSpotNavimenuEntity_MessageData_o *v63; // x22
  const MethodInfo *v64; // x5
  __int64 v65; // x0
  __int64 v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  const MethodInfo_35A198C *v77; // x2
  int32_t v78; // w22
  int32_t v79; // w21
  __int64 v80; // x23
  __int64 v81; // x8
  _BOOL4 v82; // w10
  _BOOL4 v83; // w11
  int64_t v84; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B15ED3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_long___, nowTime, isInit);
    sub_1BCA7E0(&Method_BasicHelper_GetValue_string___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_Dictionary_string__object____, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo, v31, v32);
    sub_1BCA7E0(&BlankEarthSpotNavimenuEntity_MessageData_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_22655/*"overwriteTime"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_24143/*"text"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_18235/*"color"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_18836/*"dispType"*/, v43, v44);
    byte_4B15ED3 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  result = (BlankEarthSpotNavimenuEntity_MessageData_o *)BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
                                                           this,
                                                           (const MethodInfo *)nowTime);
  if ( !result )
    return result;
  v49 = result;
  if ( !LODWORD(result->fields._Color_k__BackingField) )
    return 0LL;
  if ( isInit )
  {
    messageClosedAt = this->fields.messageClosedAt;
    if ( (messageClosedAt & 0x8000000000000000LL) == 0 )
    {
      result = 0LL;
      if ( messageClosedAt < nowTime || this->fields.messageOpenedAt > nowTime )
        return result;
      goto LABEL_9;
    }
    return 0LL;
  }
LABEL_9:
  v84 = nowTime;
  v51 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__TypeInfo,
                                                       v46,
                                                       v47,
                                                       v48);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData___ctor__);
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)v49,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                        v52,
                                                        (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_Dictionary_string__object____);
  if ( !Item )
    goto LABEL_33;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    Item,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v86 = v85;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v86,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
  {
    current = v86.fields._current;
    Value_object = BasicHelper__GetValue_object_(
                     (System_Collections_Generic_Dictionary_string__object__o *)v86.fields._current,
                     (System_String_o *)StringLiteral_24143/*"text"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_string___);
    v57 = BasicHelper__GetValue_object_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_18235/*"color"*/,
            (Il2CppObject *)StringLiteral_1/*""*/,
            (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_string___);
    Value_long = BasicHelper__GetValue_long_(
                   (System_Collections_Generic_Dictionary_string__object__o *)current,
                   (System_String_o *)StringLiteral_22655/*"overwriteTime"*/,
                   0LL,
                   (const MethodInfo_2F00B40 *)Method_BasicHelper_GetValue_long___);
    v59 = BasicHelper__GetValue_long_(
            (System_Collections_Generic_Dictionary_string__object__o *)current,
            (System_String_o *)StringLiteral_18836/*"dispType"*/,
            0LL,
            (const MethodInfo_2F00B40 *)Method_BasicHelper_GetValue_long___);
    v63 = (BlankEarthSpotNavimenuEntity_MessageData_o *)sub_1BCAA2C(
                                                          BlankEarthSpotNavimenuEntity_MessageData_TypeInfo,
                                                          v60,
                                                          v61,
                                                          v62);
    BlankEarthSpotNavimenuEntity_MessageData___ctor(
      v63,
      (System_String_o *)Value_object,
      (System_String_o *)v57,
      Value_long,
      v59,
      v64);
    if ( !v51 )
      sub_1BCAA3C(v65, v66);
    items = v51->fields._items;
    v74 = Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__Add__;
    ++v51->fields._version;
    if ( !items )
      sub_1BCAA3C(v65, v66);
    size = v51->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v51,
        (Il2CppObject *)v63,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
    }
    else
    {
      v76 = &items->obj.klass + size;
      v51->fields._size = size + 1;
      v76[4] = (Il2CppClass *)v63;
      sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 4), (int64_t)v63, v67, v68, v69, v70, v71, v72);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v86,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  if ( !v51 )
    goto LABEL_33;
  v77 = (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
  if ( v51->fields._size >= 1 )
  {
    v78 = 0;
    v79 = 0;
    v80 = 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v51,
                                                            v78,
                                                            v77);
      if ( !Item )
        break;
      v77 = (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BlankEarthSpotNavimenuEntity_MessageData__get_Item__;
      v81 = v84 - (unsigned __int64)Item->fields._syncRoot;
      v82 = v81 >= 0;
      v83 = v81 < v80;
      if ( v82 && v83 )
        v79 = v78;
      ++v78;
      if ( v82 && v83 )
        v80 = v84 - (unsigned __int64)Item->fields._syncRoot;
      if ( v78 >= v51->fields._size )
        return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(
                                                               v51,
                                                               v79,
                                                               v77);
    }
LABEL_33:
    sub_1BCAA3C(Item, v54);
  }
  v79 = 0;
  return (BlankEarthSpotNavimenuEntity_MessageData_o *)System_Collections_Generic_List_object___get_Item(v51, v79, v77);
}


System_Collections_Generic_List_object__o *__fastcall BlankEarthSpotNavimenuEntity__GetShortCutMessageInfo(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B15ED2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_List_object____, method, v2);
    sub_1BCA7E0(&StringLiteral_12911/*"ShortCutMessageInfo"*/, v4, v5);
    byte_4B15ED2 = 1;
  }
  return (System_Collections_Generic_List_object__o *)BasicHelper__GetValue_object_(
                                                        this->fields.script,
                                                        (System_String_o *)StringLiteral_12911/*"ShortCutMessageInfo"*/,
                                                        0LL,
                                                        (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_List_object____);
}


bool __fastcall BlankEarthSpotNavimenuEntity__IsEnable(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4B15ED1 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B15ED1 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
}


void __fastcall BlankEarthSpotNavimenuEntity_MessageData___ctor(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        System_String_o *inputText,
        System_String_o *inputColor,
        int64_t inputOverrideTime,
        int32_t inputDispType,
        const MethodInfo *method)
{
  BlankEarthSpotNavimenuEntity_MessageData_o *v10; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._Text_k__BackingField = inputText;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields, (int64_t)inputText, v11, v12, v13, v14, v15, v16);
  v10->fields._Color_k__BackingField = inputColor;
  v10 = (BlankEarthSpotNavimenuEntity_MessageData_o *)((char *)v10 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)v10, (int64_t)inputColor, v17, v18, v19, v20, v21, v22);
  v10->monitor = (void *)inputOverrideTime;
  LODWORD(v10->fields._Text_k__BackingField) = inputDispType;
}


System_String_o *__fastcall BlankEarthSpotNavimenuEntity_MessageData__get_Color(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Color_k__BackingField;
}


int32_t __fastcall BlankEarthSpotNavimenuEntity_MessageData__get_DispType(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._DispType_k__BackingField;
}


int64_t __fastcall BlankEarthSpotNavimenuEntity_MessageData__get_OverrideTime(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._OverrideTime_k__BackingField;
}


System_String_o *__fastcall BlankEarthSpotNavimenuEntity_MessageData__get_Text(
        BlankEarthSpotNavimenuEntity_MessageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Text_k__BackingField;
}