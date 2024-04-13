void __fastcall SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE3E2 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE3E2 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectImageLimitDialog__Close(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


System_Collections_Generic_Dictionary_string__int__o *__fastcall SelectImageLimitDialog__ConvertJsonToSelectImageLimitData(
        SelectImageLimitDialog_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v32; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v34; // x1
  Il2CppObject *key; // x20
  System_String_o *v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  int32_t result; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-48h] BYREF

  v4 = json;
  if ( (byte_42EE3E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, (_DWORD)json, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v20, v21, v22);
    sub_B5D5C4(&JsonManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v29, v30, v31);
    byte_42EE3E0 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  result = 0;
  v32 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v32,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( System_String__IsNullOrEmpty(v4, 0LL) )
  {
    if ( (WORD1(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !JsonManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    }
    v4 = 0LL;
  }
  else if ( (WORD1(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !JsonManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  }
  Dictionary = JsonManager__getDictionary(v4, 0LL);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      &v41,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v41,
              (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v41.fields.current.fields.value )
        sub_B5D69C(0LL, v34);
      key = v41.fields.current.fields.key;
      v36 = (System_String_o *)((__int64 (*)(void))v41.fields.current.fields.value->klass->vtable[3].method)();
      v37 = System_Int32__TryParse(v36, &result, 0LL);
      if ( v37 )
      {
        if ( !v32 )
          sub_B5D69C(v37, v38);
        System_Collections_Generic_Dictionary_UIPanel__int___Add(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)v32,
          (UIPanel_o *)key,
          result,
          (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v41,
      (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v32;
}


void __fastcall SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE3D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42EE3D8 = 1;
  }
  this->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    0,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0

  if ( (byte_42EE3DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6, v7, v8);
    byte_42EE3DF = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
    if ( dicSelectedImageLimit )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedImageLimit,
               svtId,
               (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_B5D69C(dicSelectedImageLimit, *(_QWORD *)&svtId);
  }
  return -1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitDialog__Init(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UILabel_o *titleLabel; // x0
  UIWidget_o *v18; // x20
  int v19; // s0
  System_Collections_Generic_List_int__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_Dictionary_int__int__o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_42EE3D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EE3D5 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)this->fields.selectImageLimitListViewManager) == 0LL)
    || (SelectImageLimitListViewManager__DestroyList((SelectImageLimitListViewManager_o *)titleLabel, method),
        v18 = (UIWidget_o *)this->fields.titleLabel,
        *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL),
        !v18)
    || (UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v19, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  v23 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.imageIdList = v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.imageIdList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.selectedIndex = 0;
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicSelectedImageLimit,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectImageLimitDialog__LoadImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int32_t eventType; // w8
  System_String_o *String; // x20
  __int64 *v34; // x8
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v36; // x1
  Il2CppObject *value; // x20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  System_String_o *v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v43; // [xsp+0h] [xbp-80h] BYREF
  int32_t result[2]; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v45; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42EE3DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14, v15, v16);
    sub_B5D5C4(&JsonManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_9327/*"MultipleViewSelectImageLimit"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_10768/*"PhotoCampaignSelectImageLimit2024"*/, v29, v30, v31);
    byte_42EE3DD = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v45, 0, sizeof(v45));
  eventType = this->fields.eventType;
  if ( eventType == 24 )
  {
    v34 = &StringLiteral_9327/*"MultipleViewSelectImageLimit"*/;
  }
  else
  {
    String = 0LL;
    if ( eventType != 26 )
      goto LABEL_8;
    v34 = &StringLiteral_10768/*"PhotoCampaignSelectImageLimit2024"*/;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v34, 0LL, 0LL);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0LL);
    if ( !Dictionary )
      sub_B5D69C(0LL, v36);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v43,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v45 = v43;
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              &v45,
              (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      value = v45.fields.current.fields.value;
      v38 = System_Int32__TryParse((System_String_o *)v45.fields.current.fields.key, &result[1], 0LL);
      if ( v38 )
      {
        if ( !value )
          sub_B5D69C(v38, v39);
        v40 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                   value,
                                   value->klass->vtable[4].methodPtr);
        if ( System_Int32__TryParse(v40, result, 0LL) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_B5D69C(0LL, v41);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      &v45,
      (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42EE3DA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EE3DA = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.state = 3;
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall SelectImageLimitDialog__OnClickDecide(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *usrSvtEnt; // x8
  __int64 v20; // x20
  __int64 v21; // x21
  const MethodInfo *v22; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x21
  __int64 selectedIndex; // x22
  System_Action_o *v25; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42EE3D9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42EE3D9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    usrSvtEnt = this->fields.usrSvtEnt;
    if ( !usrSvtEnt )
      goto LABEL_16;
    v21 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v26.fields.currentCryptoKey = v21;
    *(_QWORD *)&v26.fields.fakeValue = v20;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
LABEL_16:
      sub_B5D69C(v17, v18);
    selectedIndex = this->fields.selectedIndex;
    if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    SelectImageLimitDialog__SetImageLimitCount(this, v17, imageIdList->fields._items->m_Items[selectedIndex + 1], v22);
    this->fields.state = 3;
    v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v25, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitDialog__OnClickImageLimit(
        SelectImageLimitDialog_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  SelectImageLimitDialog_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  struct SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2

  v6 = this;
  if ( (byte_42EE3E1 & 1) == 0 )
  {
    sub_B5D5C4(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, kind, index, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_SelectImageLimitDialog_OnClickImageLimit__, v10, v11, v12);
    this = (SelectImageLimitDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v13, v14, v15);
    byte_42EE3E1 = 1;
  }
  if ( kind == 1 && v6->fields.state == 2 )
  {
    if ( v6->fields.selectedIndex != index )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
    }
    imageIdList = v6->fields.imageIdList;
    v6->fields.selectedIndex = index;
    if ( !imageIdList )
      goto LABEL_17;
    if ( imageIdList->fields._size <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !v6->fields.selectImageLimitListViewManager
      || (SelectImageLimitListViewManager__ModifyItem(
            v6->fields.selectImageLimitListViewManager,
            imageIdList->fields._items->m_Items[index + 1],
            *(const MethodInfo **)&index),
          selectImageLimitListViewManager = v6->fields.selectImageLimitListViewManager,
          v18 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_B5D694(SelectImageLimitListViewManager_CallbackFunc_TypeInfo),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v18,
            (Il2CppObject *)v6,
            Method_SelectImageLimitDialog_OnClickImageLimit__,
            0LL),
          !selectImageLimitListViewManager) )
    {
LABEL_17:
      sub_B5D69C(this, *(_QWORD *)&kind);
    }
    selectImageLimitListViewManager->fields.callbackFunc = v18;
    sub_B5D560(
      (BattleServantConfConponent_o *)&selectImageLimitListViewManager->fields.callbackFunc,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    SelectImageLimitListViewManager__SetMode_34885444(selectImageLimitListViewManager, 2, v25);
  }
}


void __fastcall SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42EE3DB & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15675/*"Window/Objects/Buttons/CancelButton"*/, v5, v6, v7);
    byte_42EE3DB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_15675/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitDialog__OpenImageLimit(
        SelectImageLimitDialog_o *this,
        int32_t eventType,
        int64_t usrSvtId,
        System_Action_bool__o *setMaskMethod,
        System_Action_bool__int__o *closeCallback,
        int32_t index,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x2
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t v67; // w21
  const MethodInfo *v68; // x4
  struct System_Collections_Generic_List_int__o *imageIdList; // x23
  __int64 selectedIndex; // x24
  struct SelectImageLimitListViewManager_o *v71; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  const MethodInfo *v79; // x2
  int32_t v80; // w8
  UILabel_o *v81; // x20
  System_String_o *v82; // x0
  System_String_o *v83; // x21
  UILabel_o *warningLabel; // x20
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v90; // x20
  int32_t v91; // [xsp+Ch] [xbp-34h] BYREF

  v91 = index;
  if ( (byte_42EE3D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, eventType, usrSvtId, setMaskMethod);
    sub_B5D5C4(&System_Action_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SelectImageLimitDialog_EndOpen__, v27, v28, v29);
    sub_B5D5C4(&Method_SelectImageLimitDialog_OnClickImageLimit__, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_8945/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_10546/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_10547/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_8946/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v48, v49, v50);
    byte_42EE3D6 = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.eventType = eventType;
  this->fields.SetMaskCollider = setMaskMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SetMaskCollider,
    (System_Int32_array **)setMaskMethod,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    1,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v65);
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrSvtEnt;
  if ( !gameObject )
    goto LABEL_31;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_31;
  v67 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___ToArray(
                                             this->fields.imageIdList,
                                             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_31;
  selectedIndex = this->fields.selectedIndex;
  if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !selectImageLimitListViewManager )
    goto LABEL_31;
  SelectImageLimitListViewManager__CreateList(
    selectImageLimitListViewManager,
    v67,
    (System_Int32_array *)gameObject,
    imageIdList->fields._items->m_Items[selectedIndex + 1],
    v68);
  v71 = this->fields.selectImageLimitListViewManager;
  v72 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_B5D694(SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v72,
    (Il2CppObject *)this,
    Method_SelectImageLimitDialog_OnClickImageLimit__,
    0LL);
  if ( !v71 )
    goto LABEL_31;
  v71->fields.callbackFunc = v72;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v71->fields.callbackFunc,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  SelectImageLimitListViewManager__SetMode_34885444(v71, 2, v79);
  v80 = this->fields.eventType;
  if ( v80 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10546/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      warningLabel = this->fields.warningLabel;
      v86 = (System_String_o *)StringLiteral_10547/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/;
      goto LABEL_23;
    }
LABEL_31:
    sub_B5D69C(gameObject, v64);
  }
  if ( v80 != 24 )
    goto LABEL_25;
  v81 = this->fields.titleLabel;
  v82 = System_Int32__ToString((int32_t)&v91, 0LL);
  v83 = System_String__Concat_44577788((System_String_o *)StringLiteral_8945/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v82, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v83, 0LL);
  if ( !v81 )
    goto LABEL_31;
  UILabel__set_text(v81, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  v85 = System_Int32__ToString((int32_t)&v91, 0LL);
  v86 = System_String__Concat_44577788((System_String_o *)StringLiteral_8946/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v85, 0LL);
LABEL_23:
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v86, 0LL);
  if ( !warningLabel )
    goto LABEL_31;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
LABEL_25:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_31;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_31;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v90 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v90, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v90, 0, 0LL);
}


void __fastcall SelectImageLimitDialog__SaveImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v41; // x20
  __int64 v42; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  int key_high; // x25^4
  System_String_o *v45; // x21
  System_Xml_Schema_XmlSchemaObject_o *v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x20
  int32_t eventType; // w8
  __int64 *v50; // x8
  __int128 v51[2]; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+20h] [xbp-60h] BYREF
  int key; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_42EE3DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v20, v21, v22);
    sub_B5D5C4(&int_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&JsonManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_9327/*"MultipleViewSelectImageLimit"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_10768/*"PhotoCampaignSelectImageLimit2024"*/, v38, v39, v40);
    byte_42EE3DC = 1;
  }
  memset(&v52, 0, 32);
  key = 0;
  v41 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v41,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_B5D69C(0LL, v42);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v51,
    dicSelectedImageLimit,
    (const MethodInfo_2F0B3CC *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v52.fields.dictionary = v51[0];
  v52.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v51[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v52,
            (const MethodInfo_289F694 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v52.fields.current.fields.key);
    key = (int)v52.fields.current.fields.key;
    v45 = System_Int32__ToString((int32_t)&key, 0LL);
    LODWORD(v51[0]) = key_high;
    v46 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, v51);
    if ( !v41 )
      sub_B5D69C(v46, v47);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v41,
      (System_Xml_XmlQualifiedName_o *)v45,
      v46,
      (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v52,
    (const MethodInfo_289F7DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v48 = JsonManager__toJson((Il2CppObject *)v41, 0, 0, 0LL);
  if ( !System_String__IsNullOrEmpty(v48, 0LL) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 26 )
    {
      v50 = &StringLiteral_10768/*"PhotoCampaignSelectImageLimit2024"*/;
    }
    else
    {
      if ( eventType != 24 )
      {
LABEL_17:
        UnityEngine_PlayerPrefs__Save(0LL);
        return;
      }
      v50 = &StringLiteral_9327/*"MultipleViewSelectImageLimit"*/;
    }
    UnityEngine_PlayerPrefs__SetString((System_String_o *)*v50, v48, 0LL);
    goto LABEL_17;
  }
}


void __fastcall SelectImageLimitDialog__SetImageIdList(
        SelectImageLimitDialog_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v40; // x1
  struct UserServantEntity_o *Entity; // x0
  struct UserServantEntity_o **p_usrSvtEnt; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UserServantEntity_o *v49; // x8
  int32_t v50; // w20
  int32_t v51; // w22
  __int64 v52; // x23
  __int64 v53; // x24
  int32_t ImageLimitCount; // w23
  int32_t v55; // w23
  const MethodInfo *v56; // x2
  int v57; // w8
  void *v58; // x21
  unsigned int v59; // w22
  __int64 v60; // x8
  int32_t v61; // w0
  int32_t v62; // w21
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  __int64 v64; // x21
  int size; // w8
  __int64 v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_42EE3D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, usrSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    byte_42EE3D7 = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_50;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
             usrSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.usrSvtEnt = Entity;
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrSvtEnt,
    (System_Int32_array **)Entity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Master_WarQuestSelectionMaster = this->fields.usrSvtEnt;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_50;
  Master_WarQuestSelectionMaster = (void *)UserServantEntity__getSvtId(
                                             (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                             0LL);
  v49 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_50;
  v50 = (int)Master_WarQuestSelectionMaster;
  v51 = 0;
  while ( 1 )
  {
    v53 = *(_QWORD *)&v49->fields.limitCount.fields.currentCryptoKey;
    v52 = *(_QWORD *)&v49->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v67.fields.currentCryptoKey = v53;
    *(_QWORD *)&v67.fields.fakeValue = v52;
    if ( v51 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v67, 0LL) )
      break;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v50, v51, 0LL);
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Master_WarQuestSelectionMaster,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                   (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                                                   v50,
                                                   ImageLimitCount,
                                                   0LL);
        if ( this->fields.imageIdList )
        {
          v55 = (int)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster = (void *)System_Collections_Generic_List_int___Contains(
                                                     this->fields.imageIdList,
                                                     (int32_t)Master_WarQuestSelectionMaster,
                                                     (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          {
            Master_WarQuestSelectionMaster = this->fields.imageIdList;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_50;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
              v55,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
          v49 = *p_usrSvtEnt;
          ++v51;
          if ( *p_usrSvtEnt )
            continue;
        }
      }
    }
    goto LABEL_50;
  }
  Master_WarQuestSelectionMaster = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
LABEL_50:
    sub_B5D69C(Master_WarQuestSelectionMaster, v40);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
    goto LABEL_56;
  Master_WarQuestSelectionMaster = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_50;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
  {
LABEL_56:
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = ServantCostumeMaster__releasedCostumeEntityList(
                                       (ServantCostumeMaster_o *)Master_WarQuestSelectionMaster,
                                       v50,
                                       1,
                                       0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    v57 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
    v58 = Master_WarQuestSelectionMaster;
    if ( v57 >= 1 )
    {
      v59 = 0;
      do
      {
        if ( v59 >= v57 )
        {
          v66 = sub_B5D6C8(Master_WarQuestSelectionMaster);
          sub_B5D668(v66, 0LL);
        }
        v60 = *((_QWORD *)v58 + (int)v59 + 4);
        if ( !v60 )
          goto LABEL_50;
        v40 = *(unsigned int *)(v60 + 20);
        if ( (int)v40 >= 1 )
        {
          Master_WarQuestSelectionMaster = this->fields.imageIdList;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_50;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
            v40,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
        v57 = *((_DWORD *)v58 + 6);
      }
      while ( (int)++v59 < v57 );
    }
  }
  v61 = SelectImageLimitDialog__GetImageLimitCount(this, v50, v56);
  if ( (v61 & 0x80000000) == 0 )
  {
    v62 = v61;
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                               (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                                               v50,
                                               v62,
                                               0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_50;
    v64 = 0LL;
    while ( 1 )
    {
      size = imageIdList->fields._size;
      if ( (int)v64 >= size )
        break;
      if ( size <= (unsigned int)v64 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( imageIdList->fields._items->m_Items[v64 + 1] == (_DWORD)Master_WarQuestSelectionMaster )
      {
        this->fields.selectedIndex = v64;
        return;
      }
      imageIdList = this->fields.imageIdList;
      ++v64;
      if ( !imageIdList )
        goto LABEL_50;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitDialog__SetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  const MethodInfo *v8; // x1

  if ( (byte_42EE3DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, svtId, imageLimitCount, method);
    byte_42EE3DE = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void __fastcall SelectImageLimitDialog___OnClickCancel_b__23_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_bool__int__o *closeFunc; // x0

  if ( (byte_42EE3E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__int__Invoke__, (_DWORD)method, v2, v3);
    byte_42EE3E4 = 1;
  }
  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B5D69C(0LL, method);
  System_Action_bool__int___Invoke(
    closeFunc,
    0,
    -1,
    (const MethodInfo_259709C *)Method_System_Action_bool__int__Invoke__);
}


void __fastcall SelectImageLimitDialog___OnClickDecide_b__22_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SelectImageLimitDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x20
  __int64 selectedIndex; // x21
  System_Action_bool__int__o *closeFunc; // x19

  v4 = this;
  if ( (byte_42EE3E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__int__Invoke__, (_DWORD)method, v2, v3);
    this = (SelectImageLimitDialog_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v5, v6, v7);
    byte_42EE3E3 = 1;
  }
  imageIdList = v4->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_8;
  selectedIndex = v4->fields.selectedIndex;
  closeFunc = v4->fields.closeFunc;
  if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !closeFunc )
LABEL_8:
    sub_B5D69C(this, method);
  System_Action_bool__int___Invoke(
    closeFunc,
    1,
    imageIdList->fields._items->m_Items[selectedIndex + 1],
    (const MethodInfo_259709C *)Method_System_Action_bool__int__Invoke__);
}