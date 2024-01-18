void __fastcall SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418D101 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418D101 = 1;
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
  __int64 v15; // x1
  Il2CppObject *key; // x20
  System_String_o *v17; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int32_t result; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-48h] BYREF

  v3 = json;
  if ( (byte_418D0FF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, json);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_B2C35C(&JsonManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v12);
    byte_418D0FF = 1;
  }
  memset(&v22, 0, sizeof(v22));
  result = 0;
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v13,
    (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
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
      &v22,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v22,
              (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v22.fields.current.fields.value )
        sub_B2C434(0LL, v15);
      key = v22.fields.current.fields.key;
      v17 = (System_String_o *)((__int64 (*)(void))v22.fields.current.fields.value->klass->vtable[3].method)();
      v18 = System_Int32__TryParse(v17, &result, 0LL);
      if ( v18 )
      {
        if ( !v13 )
          sub_B2C434(v18, v19);
        System_Collections_Generic_Dictionary_UIPanel__int___Add(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)v13,
          (UIPanel_o *)key,
          result,
          (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v22,
      (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v13;
}


void __fastcall SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418D0F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_418D0F7 = 1;
  }
  this->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0

  if ( (byte_418D0FE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    byte_418D0FE = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
    if ( dicSelectedImageLimit )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedImageLimit,
               svtId,
               (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_B2C434(dicSelectedImageLimit, *(_QWORD *)&svtId);
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
  UIWidget_o *v8; // x20
  int v9; // s0
  System_Collections_Generic_List_int__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_Dictionary_int__int__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_418D0F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418D0F4 = 1;
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
        v8 = (UIWidget_o *)this->fields.titleLabel,
        *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL),
        !v8)
    || (UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v9, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B2C434(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.imageIdList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.selectedIndex = 0;
  v20 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v20,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicSelectedImageLimit,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  __int64 v16; // x1
  Il2CppObject *value; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v23; // [xsp+0h] [xbp-80h] BYREF
  int32_t result[2]; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v25; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_418D0FC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_B2C35C(&StringLiteral_10647/*"PhotoCampaignSelectImageLimit"*/, v10);
    sub_B2C35C(&StringLiteral_9233/*"MultipleViewSelectImageLimit"*/, v11);
    byte_418D0FC = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v25, 0, sizeof(v25));
  eventType = this->fields.eventType;
  if ( eventType == 24 )
  {
    v14 = &StringLiteral_9233/*"MultipleViewSelectImageLimit"*/;
  }
  else
  {
    String = 0LL;
    if ( eventType != 26 )
      goto LABEL_8;
    v14 = &StringLiteral_10647/*"PhotoCampaignSelectImageLimit"*/;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v14, 0LL, 0LL);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0LL);
    if ( !Dictionary )
      sub_B2C434(0LL, v16);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v23,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v25 = v23;
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              &v25,
              (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      value = v25.fields.current.fields.value;
      v18 = System_Int32__TryParse((System_String_o *)v25.fields.current.fields.key, &result[1], 0LL);
      if ( v18 )
      {
        if ( !value )
          sub_B2C434(v18, v19);
        v20 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                   value,
                                   value->klass->vtable[4].methodPtr);
        if ( System_Int32__TryParse(v20, result, 0LL) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_B2C434(0LL, v21);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      &v25,
      (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_418D0F9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418D0F9 = 1;
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
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall SelectImageLimitDialog__OnClickDecide(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *usrSvtEnt; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x21
  __int64 selectedIndex; // x22
  System_Action_o *v15; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_418D0F8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418D0F8 = 1;
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
    v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = v11;
    *(_QWORD *)&v16.fields.fakeValue = v10;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
LABEL_16:
      sub_B2C434(v7, v8);
    selectedIndex = this->fields.selectedIndex;
    if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    SelectImageLimitDialog__SetImageLimitCount(this, v7, imageIdList->fields._items->m_Items[selectedIndex + 1], v12);
    this->fields.state = 3;
    v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
  SelectImageLimitListViewManager_CallbackFunc_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2

  v6 = this;
  if ( (byte_418D100 & 1) == 0 )
  {
    sub_B2C35C(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B2C35C(&Method_SelectImageLimitDialog_OnClickImageLimit__, v8);
    this = (SelectImageLimitDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v9);
    byte_418D100 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !v6->fields.selectImageLimitListViewManager
      || (SelectImageLimitListViewManager__ModifyItem(
            v6->fields.selectImageLimitListViewManager,
            imageIdList->fields._items->m_Items[index + 1],
            *(const MethodInfo **)&index),
          selectImageLimitListViewManager = v6->fields.selectImageLimitListViewManager,
          v12 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_B2C42C(SelectImageLimitListViewManager_CallbackFunc_TypeInfo),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)v6,
            Method_SelectImageLimitDialog_OnClickImageLimit__,
            0LL),
          !selectImageLimitListViewManager) )
    {
LABEL_17:
      sub_B2C434(this, *(_QWORD *)&kind);
    }
    selectImageLimitListViewManager->fields.callbackFunc = v12;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&selectImageLimitListViewManager->fields.callbackFunc,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SelectImageLimitListViewManager__SetMode_34084436(selectImageLimitListViewManager, 2, v19);
  }
}


void __fastcall SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_418D0FA & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_15485/*"Window/Objects/Buttons/CancelButton"*/, v3);
    byte_418D0FA = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_15485/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t v41; // w21
  const MethodInfo *v42; // x4
  struct System_Collections_Generic_List_int__o *imageIdList; // x23
  __int64 selectedIndex; // x24
  struct SelectImageLimitListViewManager_o *v45; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x2
  int32_t v54; // w8
  UILabel_o *v55; // x20
  System_String_o *v56; // x0
  System_String_o *v57; // x21
  UILabel_o *warningLabel; // x20
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v64; // x20
  int32_t v65; // [xsp+Ch] [xbp-34h] BYREF

  v65 = index;
  if ( (byte_418D0F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&eventType);
    sub_B2C35C(&System_Action_TypeInfo, v12);
    sub_B2C35C(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&Method_SelectImageLimitDialog_EndOpen__, v17);
    sub_B2C35C(&Method_SelectImageLimitDialog_OnClickImageLimit__, v18);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v19);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v20);
    sub_B2C35C(&StringLiteral_8854/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v21);
    sub_B2C35C(&StringLiteral_10438/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, v22);
    sub_B2C35C(&StringLiteral_10439/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/, v23);
    sub_B2C35C(&StringLiteral_8855/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v24);
    byte_418D0F5 = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v39);
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrSvtEnt;
  if ( !gameObject )
    goto LABEL_31;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_31;
  v41 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___ToArray(
                                             this->fields.imageIdList,
                                             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_31;
  selectedIndex = this->fields.selectedIndex;
  if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  if ( !selectImageLimitListViewManager )
    goto LABEL_31;
  SelectImageLimitListViewManager__CreateList(
    selectImageLimitListViewManager,
    v41,
    (System_Int32_array *)gameObject,
    imageIdList->fields._items->m_Items[selectedIndex + 1],
    v42);
  v45 = this->fields.selectImageLimitListViewManager;
  v46 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_B2C42C(SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v46,
    (Il2CppObject *)this,
    Method_SelectImageLimitDialog_OnClickImageLimit__,
    0LL);
  if ( !v45 )
    goto LABEL_31;
  v45->fields.callbackFunc = v46;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v45->fields.callbackFunc,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  SelectImageLimitListViewManager__SetMode_34084436(v45, 2, v53);
  v54 = this->fields.eventType;
  if ( v54 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10438/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      warningLabel = this->fields.warningLabel;
      v60 = (System_String_o *)StringLiteral_10439/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/;
      goto LABEL_23;
    }
LABEL_31:
    sub_B2C434(gameObject, v38);
  }
  if ( v54 != 24 )
    goto LABEL_25;
  v55 = this->fields.titleLabel;
  v56 = System_Int32__ToString((int32_t)&v65, 0LL);
  v57 = System_String__Concat_44305532((System_String_o *)StringLiteral_8854/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v56, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v57, 0LL);
  if ( !v55 )
    goto LABEL_31;
  UILabel__set_text(v55, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  v59 = System_Int32__ToString((int32_t)&v65, 0LL);
  v60 = System_String__Concat_44305532((System_String_o *)StringLiteral_8855/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v59, 0LL);
LABEL_23:
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v60, 0LL);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_31;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_31;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v64 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
}


void __fastcall SelectImageLimitDialog__SaveImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v15; // x20
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  int key_high; // x25^4
  System_String_o *v19; // x21
  System_Xml_Schema_XmlSchemaObject_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x20
  int32_t eventType; // w8
  __int64 *v24; // x8
  __int128 v25[2]; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+20h] [xbp-60h] BYREF
  int key; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_418D0FB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&JsonManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v12);
    sub_B2C35C(&StringLiteral_10647/*"PhotoCampaignSelectImageLimit"*/, v13);
    sub_B2C35C(&StringLiteral_9233/*"MultipleViewSelectImageLimit"*/, v14);
    byte_418D0FB = 1;
  }
  memset(&v26, 0, 32);
  key = 0;
  v15 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v15,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_B2C434(0LL, v16);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v25,
    dicSelectedImageLimit,
    (const MethodInfo_2E24AB4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v26.fields.dictionary = v25[0];
  v26.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v25[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v26,
            (const MethodInfo_256852C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v26.fields.current.fields.key);
    key = (int)v26.fields.current.fields.key;
    v19 = System_Int32__ToString((int32_t)&key, 0LL);
    LODWORD(v25[0]) = key_high;
    v20 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, v25);
    if ( !v15 )
      sub_B2C434(v20, v21);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v15,
      (System_Xml_XmlQualifiedName_o *)v19,
      v20,
      (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v26,
    (const MethodInfo_2568674 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v22 = JsonManager__toJson((Il2CppObject *)v15, 0, 0, 0LL);
  if ( !System_String__IsNullOrEmpty(v22, 0LL) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 26 )
    {
      v24 = &StringLiteral_10647/*"PhotoCampaignSelectImageLimit"*/;
    }
    else
    {
      if ( eventType != 24 )
      {
LABEL_17:
        UnityEngine_PlayerPrefs__Save(0LL);
        return;
      }
      v24 = &StringLiteral_9233/*"MultipleViewSelectImageLimit"*/;
    }
    UnityEngine_PlayerPrefs__SetString((System_String_o *)*v24, v22, 0LL);
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
  __int64 v17; // x1
  struct UserServantEntity_o *Entity; // x0
  struct UserServantEntity_o **p_usrSvtEnt; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UserServantEntity_o *v26; // x8
  int32_t v27; // w20
  int32_t v28; // w22
  __int64 v29; // x23
  __int64 v30; // x24
  int32_t ImageLimitCount; // w23
  int32_t v32; // w23
  const MethodInfo *v33; // x2
  int v34; // w8
  void *v35; // x21
  unsigned int v36; // w22
  __int64 v37; // x8
  int32_t v38; // w0
  int32_t v39; // w21
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  __int64 v41; // x21
  int size; // w8
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_418D0F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, usrSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_418D0F6 = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_50;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
             usrSvtId,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.usrSvtEnt = Entity;
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.usrSvtEnt,
    (System_Int32_array **)Entity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Master_WarQuestSelectionMaster = this->fields.usrSvtEnt;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_50;
  Master_WarQuestSelectionMaster = (void *)UserServantEntity__getSvtId(
                                             (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                             0LL);
  v26 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_50;
  v27 = (int)Master_WarQuestSelectionMaster;
  v28 = 0;
  while ( 1 )
  {
    v30 = *(_QWORD *)&v26->fields.limitCount.fields.currentCryptoKey;
    v29 = *(_QWORD *)&v26->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v44.fields.currentCryptoKey = v30;
    *(_QWORD *)&v44.fields.fakeValue = v29;
    if ( v28 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v44, 0LL) )
      break;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v27, v28, 0LL);
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Master_WarQuestSelectionMaster,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                   (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                                                   v27,
                                                   ImageLimitCount,
                                                   0LL);
        if ( this->fields.imageIdList )
        {
          v32 = (int)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster = (void *)System_Collections_Generic_List_int___Contains(
                                                     this->fields.imageIdList,
                                                     (int32_t)Master_WarQuestSelectionMaster,
                                                     (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          {
            Master_WarQuestSelectionMaster = this->fields.imageIdList;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_50;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
              v32,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
          v26 = *p_usrSvtEnt;
          ++v28;
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
    sub_B2C434(Master_WarQuestSelectionMaster, v17);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
    goto LABEL_56;
  Master_WarQuestSelectionMaster = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_50;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
  {
LABEL_56:
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = ServantCostumeMaster__releasedCostumeEntityList(
                                       (ServantCostumeMaster_o *)Master_WarQuestSelectionMaster,
                                       v27,
                                       1,
                                       0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    v34 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
    v35 = Master_WarQuestSelectionMaster;
    if ( v34 >= 1 )
    {
      v36 = 0;
      do
      {
        if ( v36 >= v34 )
        {
          v43 = sub_B2C460(Master_WarQuestSelectionMaster);
          sub_B2C400(v43, 0LL);
        }
        v37 = *((_QWORD *)v35 + (int)v36 + 4);
        if ( !v37 )
          goto LABEL_50;
        v17 = *(unsigned int *)(v37 + 20);
        if ( (int)v17 >= 1 )
        {
          Master_WarQuestSelectionMaster = this->fields.imageIdList;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_50;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
            v17,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v34 = *((_DWORD *)v35 + 6);
      }
      while ( (int)++v36 < v34 );
    }
  }
  v38 = SelectImageLimitDialog__GetImageLimitCount(this, v27, v33);
  if ( (v38 & 0x80000000) == 0 )
  {
    v39 = v38;
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                               (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                                               v27,
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_418D0FD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, *(_QWORD *)&svtId);
    byte_418D0FD = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void __fastcall SelectImageLimitDialog___OnClickCancel_b__23_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  System_Action_bool__int__o *closeFunc; // x0

  if ( (byte_418D103 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__int__Invoke__, method);
    byte_418D103 = 1;
  }
  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B2C434(0LL, method);
  System_Action_bool__int___Invoke(
    closeFunc,
    0,
    -1,
    (const MethodInfo_24C7854 *)Method_System_Action_bool__int__Invoke__);
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
  if ( (byte_418D102 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__int__Invoke__, method);
    this = (SelectImageLimitDialog_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    byte_418D102 = 1;
  }
  imageIdList = v2->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_8;
  selectedIndex = v2->fields.selectedIndex;
  closeFunc = v2->fields.closeFunc;
  if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  if ( !closeFunc )
LABEL_8:
    sub_B2C434(this, method);
  System_Action_bool__int___Invoke(
    closeFunc,
    1,
    imageIdList->fields._items->m_Items[selectedIndex + 1],
    (const MethodInfo_24C7854 *)Method_System_Action_bool__int__Invoke__);
}