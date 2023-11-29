void __fastcall SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FE1CD & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FE1CD = 1;
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
  __int64 v4; // x4
  System_String_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v15; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  Il2CppObject *key; // x20
  System_String_o *v18; // x0
  int32_t result; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-48h] BYREF

  v5 = json;
  if ( (byte_40FE1CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, json);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v11);
    sub_B16FFC(&JsonManager_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v14);
    byte_40FE1CB = 1;
  }
  memset(&v21, 0, sizeof(v21));
  result = 0;
  v15 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            json,
                                                                            method,
                                                                            v3,
                                                                            v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v15,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( System_String__IsNullOrEmpty(v5, 0LL) )
  {
    if ( (WORD1(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !JsonManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    }
    v5 = 0LL;
  }
  else if ( (WORD1(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !JsonManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  }
  Dictionary = JsonManager__getDictionary(v5, 0LL);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      &v21,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v21,
              (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v21.fields.current.fields.value )
        sub_B170D4();
      key = v21.fields.current.fields.key;
      v18 = (System_String_o *)((__int64 (*)(void))v21.fields.current.fields.value->klass->vtable[3].method)();
      if ( System_Int32__TryParse(v18, &result, 0LL) )
      {
        if ( !v15 )
          sub_B170D4();
        System_Collections_Generic_Dictionary_UIPanel__int___Add(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)v15,
          (UIPanel_o *)key,
          result,
          (const MethodInfo_2D9C1BC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v21,
      (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v15;
}


void __fastcall SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FE1C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40FE1C3 = 1;
  }
  this->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  System_Collections_Generic_Dictionary_int__int__o *v7; // x0

  if ( (byte_40FE1CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    byte_40FE1CA = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    v7 = this->fields.dicSelectedImageLimit;
    if ( v7 )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               v7,
               svtId,
               (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_B170D4();
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
  UILabel_o *warningLabel; // x0
  UILabel_o *decideButtonLabel; // x0
  UILabel_o *cancelButtonLabel; // x0
  const MethodInfo *v11; // x1
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x0
  UIWidget_o *v13; // x20
  int v14; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_int__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_Dictionary_int__int__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FE1C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FE1C0 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_11;
  UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !decideButtonLabel )
    goto LABEL_11;
  UILabel__set_text(decideButtonLabel, (System_String_o *)StringLiteral_1, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, (System_String_o *)StringLiteral_1, 0LL),
        (selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager) == 0LL)
    || (SelectImageLimitListViewManager__DestroyList(selectImageLimitListViewManager, v11),
        v13 = (UIWidget_o *)this->fields.titleLabel,
        *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL),
        !v13)
    || (UIWidget__set_color(v13, *(UnityEngine_Color_o *)&v14, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.imageIdList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.selectedIndex = 0;
  v34 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v30,
                                                               v31,
                                                               v32,
                                                               v33);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v34,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicSelectedImageLimit,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  System_String_o *v17; // x0
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v19; // [xsp+0h] [xbp-80h] BYREF
  int32_t result[2]; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v21; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40FE1C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_B16FFC(&JsonManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_B16FFC(&StringLiteral_10613, v10);
    sub_B16FFC(&StringLiteral_9203, v11);
    byte_40FE1C8 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v21, 0, sizeof(v21));
  eventType = this->fields.eventType;
  if ( eventType == 24 )
  {
    v14 = &StringLiteral_9203;
  }
  else
  {
    String = 0LL;
    if ( eventType != 26 )
      goto LABEL_8;
    v14 = &StringLiteral_10613;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v14, 0LL, 0LL);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0LL);
    if ( !Dictionary )
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v19,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v21 = v19;
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              &v21,
              (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      value = v21.fields.current.fields.value;
      if ( System_Int32__TryParse((System_String_o *)v21.fields.current.fields.key, &result[1], 0LL) )
      {
        if ( !value )
          sub_B170D4();
        v17 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                   value,
                                   value->klass->vtable[4].methodPtr);
        if ( System_Int32__TryParse(v17, result, 0LL) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_B170D4();
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      &v21,
      (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40FE1C5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FE1C5 = 1;
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
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  }
}


void __fastcall SelectImageLimitDialog__OnClickDecide(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UserServantEntity_o *usrSvtEnt; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x21
  __int64 selectedIndex; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40FE1C4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FE1C4 = 1;
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
    v9 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v19.fields.currentCryptoKey = v9;
    *(_QWORD *)&v19.fields.fakeValue = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
LABEL_16:
      sub_B170D4();
    selectedIndex = this->fields.selectedIndex;
    if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    SelectImageLimitDialog__SetImageLimitCount(this, v10, imageIdList->fields._items->m_Items[selectedIndex + 1], v11);
    this->fields.state = 3;
    v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitDialog__OnClickImageLimit(
        SelectImageLimitDialog_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  struct SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  SelectImageLimitListViewManager_CallbackFunc_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2

  if ( (byte_40FE1CC & 1) == 0 )
  {
    sub_B16FFC(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B16FFC(&Method_SelectImageLimitDialog_OnClickImageLimit__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    byte_40FE1CC = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
    }
    imageIdList = this->fields.imageIdList;
    this->fields.selectedIndex = index;
    if ( !imageIdList )
      goto LABEL_17;
    if ( imageIdList->fields._size <= (unsigned int)index )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !this->fields.selectImageLimitListViewManager
      || (SelectImageLimitListViewManager__ModifyItem(
            this->fields.selectImageLimitListViewManager,
            imageIdList->fields._items->m_Items[index + 1],
            *(const MethodInfo **)&index),
          selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager,
          v16 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                    SelectImageLimitListViewManager_CallbackFunc_TypeInfo,
                                                                    v12,
                                                                    v13,
                                                                    v14,
                                                                    v15),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v16,
            (Il2CppObject *)this,
            Method_SelectImageLimitDialog_OnClickImageLimit__,
            0LL),
          !selectImageLimitListViewManager) )
    {
LABEL_17:
      sub_B170D4();
    }
    selectImageLimitListViewManager->fields.callbackFunc = v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&selectImageLimitListViewManager->fields.callbackFunc,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    SelectImageLimitListViewManager__SetMode_33035376(selectImageLimitListViewManager, 2, v23);
  }
}


void __fastcall SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40FE1C6 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15422, v3);
    byte_40FE1C6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_15422, 0LL);
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
  UserServantEntity_o *usrSvtEnt; // x0
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t SvtId; // w0
  int32_t v42; // w21
  System_Int32_array *v43; // x0
  const MethodInfo *v44; // x4
  struct System_Collections_Generic_List_int__o *imageIdList; // x23
  __int64 selectedIndex; // x24
  struct SelectImageLimitListViewManager_o *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  SelectImageLimitListViewManager_CallbackFunc_o *v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  const MethodInfo *v59; // x2
  int32_t v60; // w8
  UILabel_o *v61; // x20
  System_String_o *v62; // x0
  System_String_o *v63; // x21
  System_String_o *v64; // x0
  UILabel_o *warningLabel; // x20
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  UILabel_o *decideButtonLabel; // x20
  System_String_o *v72; // x0
  UILabel_o *cancelButtonLabel; // x20
  System_String_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Action_o *v79; // x20
  int32_t v80; // [xsp+Ch] [xbp-34h] BYREF

  v80 = index;
  if ( (byte_40FE1C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&eventType);
    sub_B16FFC(&System_Action_TypeInfo, v12);
    sub_B16FFC(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_SelectImageLimitDialog_EndOpen__, v17);
    sub_B16FFC(&Method_SelectImageLimitDialog_OnClickImageLimit__, v18);
    sub_B16FFC(&StringLiteral_3253, v19);
    sub_B16FFC(&StringLiteral_3251, v20);
    sub_B16FFC(&StringLiteral_8825, v21);
    sub_B16FFC(&StringLiteral_10405, v22);
    sub_B16FFC(&StringLiteral_10406, v23);
    sub_B16FFC(&StringLiteral_8826, v24);
    byte_40FE1C1 = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_B16F98(
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
  sub_B16F98(
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
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v38);
  usrSvtEnt = this->fields.usrSvtEnt;
  if ( !usrSvtEnt )
    goto LABEL_31;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  SvtId = UserServantEntity__getSvtId(usrSvtEnt, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_31;
  v42 = SvtId;
  v43 = System_Collections_Generic_List_int___ToArray(
          this->fields.imageIdList,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_31;
  selectedIndex = this->fields.selectedIndex;
  if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( !selectImageLimitListViewManager )
    goto LABEL_31;
  SelectImageLimitListViewManager__CreateList(
    selectImageLimitListViewManager,
    v42,
    v43,
    imageIdList->fields._items->m_Items[selectedIndex + 1],
    v44);
  v47 = this->fields.selectImageLimitListViewManager;
  v52 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_B170CC(
                                                            SelectImageLimitListViewManager_CallbackFunc_TypeInfo,
                                                            v48,
                                                            v49,
                                                            v50,
                                                            v51);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v52,
    (Il2CppObject *)this,
    Method_SelectImageLimitDialog_OnClickImageLimit__,
    0LL);
  if ( !v47 )
    goto LABEL_31;
  v47->fields.callbackFunc = v52;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v47->fields.callbackFunc,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  SelectImageLimitListViewManager__SetMode_33035376(v47, 2, v59);
  v60 = this->fields.eventType;
  if ( v60 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_10405, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, v69, 0LL);
      warningLabel = this->fields.warningLabel;
      v67 = (System_String_o *)StringLiteral_10406;
      goto LABEL_23;
    }
LABEL_31:
    sub_B170D4();
  }
  if ( v60 != 24 )
    goto LABEL_25;
  v61 = this->fields.titleLabel;
  v62 = System_Int32__ToString((int32_t)&v80, 0LL);
  v63 = System_String__Concat_43743732((System_String_o *)StringLiteral_8825, v62, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v64 = LocalizationManager__Get(v63, 0LL);
  if ( !v61 )
    goto LABEL_31;
  UILabel__set_text(v61, v64, 0LL);
  warningLabel = this->fields.warningLabel;
  v66 = System_Int32__ToString((int32_t)&v80, 0LL);
  v67 = System_String__Concat_43743732((System_String_o *)StringLiteral_8826, v66, 0LL);
LABEL_23:
  v70 = LocalizationManager__Get(v67, 0LL);
  if ( !warningLabel )
    goto LABEL_31;
  UILabel__set_text(warningLabel, v70, 0LL);
LABEL_25:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_31;
  UILabel__set_text(decideButtonLabel, v72, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_31;
  UILabel__set_text(cancelButtonLabel, v74, 0LL);
  v79 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v75, v76, v77, v78);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v79, 0, 0LL);
}


void __fastcall SelectImageLimitDialog__SaveImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v18; // x20
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  int key_high; // x25^4
  System_String_o *v21; // x21
  System_Xml_Schema_XmlSchemaObject_o *v22; // x0
  System_String_o *v23; // x20
  int32_t eventType; // w8
  __int64 *v25; // x8
  __int128 v26[2]; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+20h] [xbp-60h] BYREF
  int key; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_40FE1C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&JsonManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v15);
    sub_B16FFC(&StringLiteral_10613, v16);
    sub_B16FFC(&StringLiteral_9203, v17);
    byte_40FE1C7 = 1;
  }
  memset(&v27, 0, 32);
  key = 0;
  v18 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        method,
                                                                                        v2,
                                                                                        v3,
                                                                                        v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v18,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v26,
    dicSelectedImageLimit,
    (const MethodInfo_2DDD528 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v27.fields.dictionary = v26[0];
  v27.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v26[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v27,
            (const MethodInfo_272605C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v27.fields.current.fields.key);
    key = (int)v27.fields.current.fields.key;
    v21 = System_Int32__ToString((int32_t)&key, 0LL);
    LODWORD(v26[0]) = key_high;
    v22 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, v26);
    if ( !v18 )
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v18,
      (System_Xml_XmlQualifiedName_o *)v21,
      v22,
      (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v27,
    (const MethodInfo_27261A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v23 = JsonManager__toJson((Il2CppObject *)v18, 0, 0, 0LL);
  if ( !System_String__IsNullOrEmpty(v23, 0LL) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 26 )
    {
      v25 = &StringLiteral_10613;
    }
    else
    {
      if ( eventType != 24 )
      {
LABEL_17:
        UnityEngine_PlayerPrefs__Save(0LL);
        return;
      }
      v25 = &StringLiteral_9203;
    }
    UnityEngine_PlayerPrefs__SetString((System_String_o *)*v25, v23, 0LL);
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *Entity; // x0
  UserServantEntity_o **p_usrSvtEnt; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UserServantEntity_o *usrSvtEnt; // x0
  int32_t SvtId; // w0
  UserServantEntity_o *v27; // x8
  int32_t v28; // w20
  int32_t v29; // w22
  __int64 v30; // x23
  __int64 v31; // x24
  int32_t ImageLimitCount; // w23
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ServantImageLimitSealAfter; // w0
  int32_t v36; // w23
  System_Collections_Generic_List_int__o *imageIdList; // x0
  const MethodInfo *v38; // x2
  WebViewManager_o *v39; // x0
  ServantCostumeMaster_o *v40; // x0
  ServantCostumeEntity_array *v41; // x0
  __int64 id; // x1
  int max_length; // w8
  ServantCostumeEntity_array *v44; // x21
  unsigned int v45; // w22
  ServantCostumeEntity_o *v46; // x8
  System_Collections_Generic_List_int__o *v47; // x0
  int32_t v48; // w0
  int32_t v49; // w21
  WebViewManager_o *v50; // x0
  ServantLimitImageMaster_o *v51; // x0
  int32_t v52; // w0
  struct System_Collections_Generic_List_int__o *v53; // x22
  __int64 v54; // x21
  int size; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_40FE1C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, usrSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FE1C2 = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_50;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             Master_WarQuestSelectionMaster,
             usrSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.usrSvtEnt = Entity;
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrSvtEnt,
    (System_Int32_array **)Entity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  usrSvtEnt = this->fields.usrSvtEnt;
  if ( !usrSvtEnt )
    goto LABEL_50;
  SvtId = UserServantEntity__getSvtId(usrSvtEnt, 0LL);
  v27 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_50;
  v28 = SvtId;
  v29 = 0;
  while ( 1 )
  {
    v31 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
    v30 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v56.fields.currentCryptoKey = v31;
    *(_QWORD *)&v56.fields.fakeValue = v30;
    if ( v29 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL) )
      break;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v28, v29, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       MasterData_WarQuestSelectionMaster,
                                       v28,
                                       ImageLimitCount,
                                       0LL);
        if ( this->fields.imageIdList )
        {
          v36 = ServantImageLimitSealAfter;
          if ( !System_Collections_Generic_List_int___Contains(
                  this->fields.imageIdList,
                  ServantImageLimitSealAfter,
                  (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            imageIdList = this->fields.imageIdList;
            if ( !imageIdList )
              goto LABEL_50;
            System_Collections_Generic_List_int___Add(
              imageIdList,
              v36,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          v27 = *p_usrSvtEnt;
          ++v29;
          if ( *p_usrSvtEnt )
            continue;
        }
      }
    }
    goto LABEL_50;
  }
  if ( !*p_usrSvtEnt )
LABEL_50:
    sub_B170D4();
  if ( UserServantEntity__IsHeroine(*p_usrSvtEnt, 0LL) )
    goto LABEL_56;
  if ( !*p_usrSvtEnt )
    goto LABEL_50;
  if ( UserServantEntity__isLimitCountMax(*p_usrSvtEnt, 0LL) )
  {
LABEL_56:
    v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v39 )
      goto LABEL_50;
    v40 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v39,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !v40 )
      goto LABEL_50;
    v41 = ServantCostumeMaster__releasedCostumeEntityList(v40, v28, 1, 0LL);
    if ( !v41 )
      goto LABEL_50;
    max_length = v41->max_length;
    v44 = v41;
    if ( max_length >= 1 )
    {
      v45 = 0;
      do
      {
        if ( v45 >= max_length )
        {
          sub_B17100(v41, id, v38);
          sub_B170A0();
        }
        v46 = v44->m_Items[v45];
        if ( !v46 )
          goto LABEL_50;
        id = (unsigned int)v46->fields.id;
        if ( (int)id >= 1 )
        {
          v47 = this->fields.imageIdList;
          if ( !v47 )
            goto LABEL_50;
          System_Collections_Generic_List_int___Add(
            v47,
            id,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        max_length = v44->max_length;
      }
      while ( (int)++v45 < max_length );
    }
  }
  v48 = SelectImageLimitDialog__GetImageLimitCount(this, v28, v38);
  if ( (v48 & 0x80000000) == 0 )
  {
    v49 = v48;
    v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v50 )
      goto LABEL_50;
    v51 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v50,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !v51 )
      goto LABEL_50;
    v52 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v51, v28, v49, 0LL);
    v53 = this->fields.imageIdList;
    if ( !v53 )
      goto LABEL_50;
    v54 = 0LL;
    while ( 1 )
    {
      size = v53->fields._size;
      if ( (int)v54 >= size )
        break;
      if ( size <= (unsigned int)v54 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( v53->fields._items->m_Items[v54 + 1] == v52 )
      {
        this->fields.selectedIndex = v54;
        return;
      }
      v53 = this->fields.imageIdList;
      ++v54;
      if ( !v53 )
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

  if ( (byte_40FE1C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, *(_QWORD *)&svtId);
    byte_40FE1C9 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_2DDCF8C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void __fastcall SelectImageLimitDialog___OnClickCancel_b__23_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  System_Action_bool__int__o *closeFunc; // x0

  if ( (byte_40FE1CF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__int__Invoke__, method);
    byte_40FE1CF = 1;
  }
  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B170D4();
  System_Action_bool__int___Invoke(
    closeFunc,
    0,
    -1,
    (const MethodInfo_24C2A28 *)Method_System_Action_bool__int__Invoke__);
}


void __fastcall SelectImageLimitDialog___OnClickDecide_b__22_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x20
  __int64 selectedIndex; // x21
  System_Action_bool__int__o *closeFunc; // x19

  if ( (byte_40FE1CE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__int__Invoke__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    byte_40FE1CE = 1;
  }
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_8;
  selectedIndex = this->fields.selectedIndex;
  closeFunc = this->fields.closeFunc;
  if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( !closeFunc )
LABEL_8:
    sub_B170D4();
  System_Action_bool__int___Invoke(
    closeFunc,
    1,
    imageIdList->fields._items->m_Items[selectedIndex + 1],
    (const MethodInfo_24C2A28 *)Method_System_Action_bool__int__Invoke__);
}