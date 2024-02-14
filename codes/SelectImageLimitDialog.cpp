void __fastcall SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4219E58 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4219E58 = 1;
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
  System_String_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v13; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  Il2CppObject *key; // x20
  System_String_o *v16; // x0
  _BOOL8 v17; // x0
  int32_t result; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-48h] BYREF

  v3 = json;
  if ( (byte_4219E56 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, json);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_B0D8A4(&JsonManager_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v12);
    byte_4219E56 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  result = 0;
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            json,
                                                                            method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v13,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( System_String__IsNullOrEmpty(v3, 0LL) )
  {
    if ( (WORD1(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !JsonManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    }
    v3 = 0LL;
  }
  else if ( (WORD1(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !JsonManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  }
  Dictionary = JsonManager__getDictionary(v3, 0LL);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      &v20,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v20,
              (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v20.fields.current.fields.value )
        sub_B0D97C(0LL);
      key = v20.fields.current.fields.key;
      v16 = (System_String_o *)((__int64 (*)(void))v20.fields.current.fields.value->klass->vtable[3].method)();
      v17 = System_Int32__TryParse(v16, &result, 0LL);
      if ( v17 )
      {
        if ( !v13 )
          sub_B0D97C(v17);
        System_Collections_Generic_Dictionary_UIPanel__int___Add(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)v13,
          (UIPanel_o *)key,
          result,
          (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v20,
      (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v13;
}


void __fastcall SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4219E4E & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, method);
    byte_4219E4E = 1;
  }
  this->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    0,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0

  if ( (byte_4219E55 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    byte_4219E55 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_2E69AB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
    if ( dicSelectedImageLimit )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedImageLimit,
               svtId,
               (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_B0D97C(dicSelectedImageLimit);
  }
  return -1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitDialog__Init(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *titleLabel; // x0
  const MethodInfo *v8; // x1
  UIWidget_o *v9; // x20
  int v10; // s0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Dictionary_int__int__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4219E4B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4219E4B = 1;
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
    || (SelectImageLimitListViewManager__DestroyList((SelectImageLimitListViewManager_o *)titleLabel, v8),
        v9 = (UIWidget_o *)this->fields.titleLabel,
        *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL),
        !v9)
    || (UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v10, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  v16 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.imageIdList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.selectedIndex = 0;
  v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v23,
                                                               v24);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v25,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dicSelectedImageLimit,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectImageLimitDialog__LoadImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t eventType; // w8
  System_String_o *String; // x20
  __int64 *v14; // x8
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  Il2CppObject *value; // x20
  _BOOL8 v17; // x0
  System_String_o *v18; // x0
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v20; // [xsp+0h] [xbp-80h] BYREF
  int32_t result[2]; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v22; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4219E53 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_B0D8A4(&JsonManager_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_B0D8A4(&StringLiteral_10672/*"PhotoCampaignSelectImageLimit"*/, v10);
    sub_B0D8A4(&StringLiteral_9256/*"MultipleViewSelectImageLimit"*/, v11);
    byte_4219E53 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v22, 0, sizeof(v22));
  eventType = this->fields.eventType;
  if ( eventType == 24 )
  {
    v14 = &StringLiteral_9256/*"MultipleViewSelectImageLimit"*/;
  }
  else
  {
    String = 0LL;
    if ( eventType != 26 )
      goto LABEL_8;
    v14 = &StringLiteral_10672/*"PhotoCampaignSelectImageLimit"*/;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v14, 0LL, 0LL);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0LL);
    if ( !Dictionary )
      sub_B0D97C(0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v20,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v22 = v20;
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              &v22,
              (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      value = v22.fields.current.fields.value;
      v17 = System_Int32__TryParse((System_String_o *)v22.fields.current.fields.key, &result[1], 0LL);
      if ( v17 )
      {
        if ( !value )
          sub_B0D97C(v17);
        v18 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                   value,
                                   value->klass->vtable[4].methodPtr);
        if ( System_Int32__TryParse(v18, result, 0LL) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_B0D97C(0LL);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      &v22,
      (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4219E50 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4219E50 = 1;
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
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall SelectImageLimitDialog__OnClickDecide(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  struct UserServantEntity_o *usrSvtEnt; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x21
  __int64 selectedIndex; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4219E4F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4219E4F = 1;
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
    v10 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
LABEL_16:
      sub_B0D97C(v7);
    selectedIndex = this->fields.selectedIndex;
    if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    SelectImageLimitDialog__SetImageLimitCount(this, v7, imageIdList->fields._items->m_Items[selectedIndex + 1], v11);
    this->fields.state = 3;
    v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  struct SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  SelectImageLimitListViewManager_CallbackFunc_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2

  v6 = this;
  if ( (byte_4219E57 & 1) == 0 )
  {
    sub_B0D8A4(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B0D8A4(&Method_SelectImageLimitDialog_OnClickImageLimit__, v8);
    this = (SelectImageLimitDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v9);
    byte_4219E57 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !v6->fields.selectImageLimitListViewManager
      || (SelectImageLimitListViewManager__ModifyItem(
            v6->fields.selectImageLimitListViewManager,
            imageIdList->fields._items->m_Items[index + 1],
            *(const MethodInfo **)&index),
          selectImageLimitListViewManager = v6->fields.selectImageLimitListViewManager,
          v14 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                    SelectImageLimitListViewManager_CallbackFunc_TypeInfo,
                                                                    v12,
                                                                    v13),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)v6,
            Method_SelectImageLimitDialog_OnClickImageLimit__,
            0LL),
          !selectImageLimitListViewManager) )
    {
LABEL_17:
      sub_B0D97C(this);
    }
    selectImageLimitListViewManager->fields.callbackFunc = v14;
    sub_B0D840(
      (BattleServantConfConponent_o *)&selectImageLimitListViewManager->fields.callbackFunc,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    SelectImageLimitListViewManager__SetMode_33611472(selectImageLimitListViewManager, 2, v21);
  }
}


void __fastcall SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_4219E51 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_15532/*"Window/Objects/Buttons/CancelButton"*/, v3);
    byte_4219E51 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_20833784(transform, (System_String_o *)StringLiteral_15532/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v38; // x2
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t v40; // w21
  const MethodInfo *v41; // x4
  struct System_Collections_Generic_List_int__o *imageIdList; // x23
  __int64 selectedIndex; // x24
  struct SelectImageLimitListViewManager_o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  SelectImageLimitListViewManager_CallbackFunc_o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x2
  int32_t v55; // w8
  UILabel_o *v56; // x20
  System_String_o *v57; // x0
  System_String_o *v58; // x21
  UILabel_o *warningLabel; // x20
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  __int64 v65; // x1
  __int64 v66; // x2
  System_Action_o *v67; // x20
  int32_t v68; // [xsp+Ch] [xbp-34h] BYREF

  v68 = index;
  if ( (byte_4219E4C & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&eventType);
    sub_B0D8A4(&System_Action_TypeInfo, v12);
    sub_B0D8A4(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&Method_SelectImageLimitDialog_EndOpen__, v17);
    sub_B0D8A4(&Method_SelectImageLimitDialog_OnClickImageLimit__, v18);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v19);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v20);
    sub_B0D8A4(&StringLiteral_8877/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v21);
    sub_B0D8A4(&StringLiteral_10463/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, v22);
    sub_B0D8A4(&StringLiteral_10464/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/, v23);
    sub_B0D8A4(&StringLiteral_8878/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v24);
    byte_4219E4C = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.eventType = eventType;
  this->fields.SetMaskCollider = setMaskMethod;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.SetMaskCollider,
    (System_Int32_array **)setMaskMethod,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    1,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v38);
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrSvtEnt;
  if ( !gameObject )
    goto LABEL_31;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_31;
  v40 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___ToArray(
                                             this->fields.imageIdList,
                                             (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_31;
  selectedIndex = this->fields.selectedIndex;
  if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( !selectImageLimitListViewManager )
    goto LABEL_31;
  SelectImageLimitListViewManager__CreateList(
    selectImageLimitListViewManager,
    v40,
    (System_Int32_array *)gameObject,
    imageIdList->fields._items->m_Items[selectedIndex + 1],
    v41);
  v44 = this->fields.selectImageLimitListViewManager;
  v47 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_B0D974(
                                                            SelectImageLimitListViewManager_CallbackFunc_TypeInfo,
                                                            v45,
                                                            v46);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v47,
    (Il2CppObject *)this,
    Method_SelectImageLimitDialog_OnClickImageLimit__,
    0LL);
  if ( !v44 )
    goto LABEL_31;
  v44->fields.callbackFunc = v47;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v44->fields.callbackFunc,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  SelectImageLimitListViewManager__SetMode_33611472(v44, 2, v54);
  v55 = this->fields.eventType;
  if ( v55 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10463/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      warningLabel = this->fields.warningLabel;
      v61 = (System_String_o *)StringLiteral_10464/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/;
      goto LABEL_23;
    }
LABEL_31:
    sub_B0D97C(gameObject);
  }
  if ( v55 != 24 )
    goto LABEL_25;
  v56 = this->fields.titleLabel;
  v57 = System_Int32__ToString((int32_t)&v68, 0LL);
  v58 = System_String__Concat_43849904((System_String_o *)StringLiteral_8877/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v57, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v58, 0LL);
  if ( !v56 )
    goto LABEL_31;
  UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  v60 = System_Int32__ToString((int32_t)&v68, 0LL);
  v61 = System_String__Concat_43849904((System_String_o *)StringLiteral_8878/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v60, 0LL);
LABEL_23:
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v61, 0LL);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_31;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_31;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v67 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v65, v66);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0LL);
}


void __fastcall SelectImageLimitDialog__SaveImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v16; // x20
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  int key_high; // x25^4
  System_String_o *v19; // x21
  System_Xml_Schema_XmlSchemaObject_o *v20; // x0
  System_String_o *v21; // x20
  int32_t eventType; // w8
  __int64 *v23; // x8
  __int128 v24[2]; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+20h] [xbp-60h] BYREF
  int key; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4219E52 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&JsonManager_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v13);
    sub_B0D8A4(&StringLiteral_10672/*"PhotoCampaignSelectImageLimit"*/, v14);
    sub_B0D8A4(&StringLiteral_9256/*"MultipleViewSelectImageLimit"*/, v15);
    byte_4219E52 = 1;
  }
  memset(&v25, 0, 32);
  key = 0;
  v16 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        method,
                                                                                        v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v16,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v24,
    dicSelectedImageLimit,
    (const MethodInfo_2E69DC8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v25.fields.dictionary = v24[0];
  v25.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v24[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v25,
            (const MethodInfo_280E1C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v25.fields.current.fields.key);
    key = (int)v25.fields.current.fields.key;
    v19 = System_Int32__ToString((int32_t)&key, 0LL);
    LODWORD(v24[0]) = key_high;
    v20 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, v24);
    if ( !v16 )
      sub_B0D97C(v20);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v16,
      (System_Xml_XmlQualifiedName_o *)v19,
      v20,
      (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v25,
    (const MethodInfo_280E30C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v21 = JsonManager__toJson((Il2CppObject *)v16, 0, 0, 0LL);
  if ( !System_String__IsNullOrEmpty(v21, 0LL) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 26 )
    {
      v23 = &StringLiteral_10672/*"PhotoCampaignSelectImageLimit"*/;
    }
    else
    {
      if ( eventType != 24 )
      {
LABEL_17:
        UnityEngine_PlayerPrefs__Save(0LL);
        return;
      }
      v23 = &StringLiteral_9256/*"MultipleViewSelectImageLimit"*/;
    }
    UnityEngine_PlayerPrefs__SetString((System_String_o *)*v23, v21, 0LL);
    goto LABEL_17;
  }
}


void __fastcall SelectImageLimitDialog__SetImageIdList(
        SelectImageLimitDialog_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  void *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *Entity; // x0
  struct UserServantEntity_o **p_usrSvtEnt; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UserServantEntity_o *v25; // x8
  int32_t v26; // w20
  int32_t v27; // w22
  __int64 v28; // x23
  __int64 v29; // x24
  int32_t ImageLimitCount; // w23
  int32_t v31; // w23
  const MethodInfo *v32; // x2
  int v33; // w8
  void *v34; // x21
  unsigned int v35; // w22
  __int64 v36; // x8
  int32_t v37; // w1
  int32_t v38; // w0
  int32_t v39; // w21
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  __int64 v41; // x21
  int size; // w8
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4219E4D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, usrSvtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4219E4D = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_50;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
             usrSvtId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.usrSvtEnt = Entity;
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.usrSvtEnt,
    (System_Int32_array **)Entity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Master_WarQuestSelectionMaster = this->fields.usrSvtEnt;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_50;
  Master_WarQuestSelectionMaster = (void *)UserServantEntity__getSvtId(
                                             (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                             0LL);
  v25 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_50;
  v26 = (int)Master_WarQuestSelectionMaster;
  v27 = 0;
  while ( 1 )
  {
    v29 = *(_QWORD *)&v25->fields.limitCount.fields.currentCryptoKey;
    v28 = *(_QWORD *)&v25->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v44.fields.currentCryptoKey = v29;
    *(_QWORD *)&v44.fields.fakeValue = v28;
    if ( v27 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v44, 0LL) )
      break;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v26, v27, 0LL);
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Master_WarQuestSelectionMaster,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                   (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                                                   v26,
                                                   ImageLimitCount,
                                                   0LL);
        if ( this->fields.imageIdList )
        {
          v31 = (int)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster = (void *)System_Collections_Generic_List_int___Contains(
                                                     this->fields.imageIdList,
                                                     (int32_t)Master_WarQuestSelectionMaster,
                                                     (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          {
            Master_WarQuestSelectionMaster = this->fields.imageIdList;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_50;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
              v31,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
          v25 = *p_usrSvtEnt;
          ++v27;
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
    goto LABEL_56;
  Master_WarQuestSelectionMaster = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_50;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
  {
LABEL_56:
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = ServantCostumeMaster__releasedCostumeEntityList(
                                       (ServantCostumeMaster_o *)Master_WarQuestSelectionMaster,
                                       v26,
                                       1,
                                       0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    v33 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
    v34 = Master_WarQuestSelectionMaster;
    if ( v33 >= 1 )
    {
      v35 = 0;
      do
      {
        if ( v35 >= v33 )
        {
          v43 = sub_B0D9A8(Master_WarQuestSelectionMaster);
          sub_B0D948(v43, 0LL);
        }
        v36 = *((_QWORD *)v34 + (int)v35 + 4);
        if ( !v36 )
          goto LABEL_50;
        v37 = *(_DWORD *)(v36 + 20);
        if ( v37 >= 1 )
        {
          Master_WarQuestSelectionMaster = this->fields.imageIdList;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_50;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
            v37,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v33 = *((_DWORD *)v34 + 6);
      }
      while ( (int)++v35 < v33 );
    }
  }
  v38 = SelectImageLimitDialog__GetImageLimitCount(this, v26, v32);
  if ( (v38 & 0x80000000) == 0 )
  {
    v39 = v38;
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                               (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                                               v26,
                                               v39,
                                               0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_50;
    v41 = 0LL;
    while ( 1 )
    {
      size = imageIdList->fields._size;
      if ( (int)v41 >= size )
        break;
      if ( size <= (unsigned int)v41 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( imageIdList->fields._items->m_Items[v41 + 1] == (_DWORD)Master_WarQuestSelectionMaster )
      {
        this->fields.selectedIndex = v41;
        return;
      }
      imageIdList = this->fields.imageIdList;
      ++v41;
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

  if ( (byte_4219E54 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, *(_QWORD *)&svtId);
    byte_4219E54 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void __fastcall SelectImageLimitDialog___OnClickCancel_b__23_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  System_Action_bool__int__o *closeFunc; // x0

  if ( (byte_4219E5A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__int__Invoke__, method);
    byte_4219E5A = 1;
  }
  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B0D97C(0LL);
  System_Action_bool__int___Invoke(
    closeFunc,
    0,
    -1,
    (const MethodInfo_247A7B8 *)Method_System_Action_bool__int__Invoke__);
}


void __fastcall SelectImageLimitDialog___OnClickDecide_b__22_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  SelectImageLimitDialog_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x20
  __int64 selectedIndex; // x21
  System_Action_bool__int__o *closeFunc; // x19

  v2 = this;
  if ( (byte_4219E59 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__int__Invoke__, method);
    this = (SelectImageLimitDialog_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    byte_4219E59 = 1;
  }
  imageIdList = v2->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_8;
  selectedIndex = v2->fields.selectedIndex;
  closeFunc = v2->fields.closeFunc;
  if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( !closeFunc )
LABEL_8:
    sub_B0D97C(this);
  System_Action_bool__int___Invoke(
    closeFunc,
    1,
    imageIdList->fields._items->m_Items[selectedIndex + 1],
    (const MethodInfo_247A7B8 *)Method_System_Action_bool__int__Invoke__);
}