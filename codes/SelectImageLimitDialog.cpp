void __fastcall SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B5A52 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B5A52 = 1;
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v4; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v6; // x1
  Il2CppObject *key; // x20
  System_String_o *v8; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t result; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B5A50 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_42B5A50 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  result = 0;
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v4,
    (const MethodInfo_2F0F4D4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( System_String__IsNullOrEmpty(json, 0LL) )
  {
    if ( (WORD1(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !JsonManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    }
    json = 0LL;
  }
  else if ( (WORD1(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !JsonManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  }
  Dictionary = JsonManager__getDictionary(json, 0LL);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      &v13,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2F1BDDC *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v13,
              (const MethodInfo_274E62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v13.fields.current.fields.value )
        sub_B52A5C(0LL, v6);
      key = v13.fields.current.fields.key;
      v8 = (System_String_o *)((__int64 (*)(void))v13.fields.current.fields.value->klass->vtable[3].method)();
      v9 = System_Int32__TryParse(v8, &result, 0LL);
      if ( v9 )
      {
        if ( !v4 )
          sub_B52A5C(v9, v10);
        System_Collections_Generic_Dictionary_UIPanel__int___Add(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)v4,
          (UIPanel_o *)key,
          result,
          (const MethodInfo_2F10088 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v13,
      (const MethodInfo_274E794 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v4;
}


void __fastcall SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B5A48 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42B5A48 = 1;
  }
  this->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    0,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0

  if ( (byte_42B5A4F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_42B5A4F = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
    if ( dicSelectedImageLimit )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedImageLimit,
               svtId,
               (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_B52A5C(dicSelectedImageLimit, *(_QWORD *)&svtId);
  }
  return -1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectImageLimitDialog__Init(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UIWidget_o *v4; // x20
  int v5; // s0
  System_Collections_Generic_List_int__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_Dictionary_int__int__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42B5A45 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5A45 = 1;
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
        v4 = (UIWidget_o *)this->fields.titleLabel,
        *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_white(0LL),
        !v4)
    || (UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v5, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.imageIdList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.selectedIndex = 0;
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v16;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dicSelectedImageLimit,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectImageLimitDialog__LoadImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int32_t eventType; // w8
  System_String_o *String; // x20
  __int64 *v5; // x8
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v7; // x1
  Il2CppObject *value; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v14; // [xsp+0h] [xbp-80h] BYREF
  int32_t result[2]; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v16; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42B5A4D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B52984(&StringLiteral_9289/*"MultipleViewSelectImageLimit"*/);
    sub_B52984(&StringLiteral_10722/*"PhotoCampaignSelectImageLimit2024"*/);
    byte_42B5A4D = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v16, 0, sizeof(v16));
  eventType = this->fields.eventType;
  if ( eventType == 24 )
  {
    v5 = &StringLiteral_9289/*"MultipleViewSelectImageLimit"*/;
  }
  else
  {
    String = 0LL;
    if ( eventType != 26 )
      goto LABEL_8;
    v5 = &StringLiteral_10722/*"PhotoCampaignSelectImageLimit2024"*/;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v5, 0LL, 0LL);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0LL);
    if ( !Dictionary )
      sub_B52A5C(0LL, v7);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v14,
      (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
      (const MethodInfo_2F1BDDC *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v16 = v14;
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              &v16,
              (const MethodInfo_274E62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      value = v16.fields.current.fields.value;
      v9 = System_Int32__TryParse((System_String_o *)v16.fields.current.fields.key, &result[1], 0LL);
      if ( v9 )
      {
        if ( !value )
          sub_B52A5C(v9, v10);
        v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                   value,
                                   value->klass->vtable[4].methodPtr);
        if ( System_Int32__TryParse(v11, result, 0LL) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_B52A5C(0LL, v12);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      &v16,
      (const MethodInfo_274E794 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42B5A4A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SelectImageLimitDialog__OnClickCancel_b__23_0__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B5A4A = 1;
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
    v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v3, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
  }
}


void __fastcall SelectImageLimitDialog__OnClickDecide(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *usrSvtEnt; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  const MethodInfo *v8; // x3
  struct System_Collections_Generic_List_int__o *imageIdList; // x21
  __int64 selectedIndex; // x22
  System_Action_o *v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42B5A49 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SelectImageLimitDialog__OnClickDecide_b__22_0__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B5A49 = 1;
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
    v7 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v12.fields.currentCryptoKey = v7;
    *(_QWORD *)&v12.fields.fakeValue = v6;
    v3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
LABEL_16:
      sub_B52A5C(v3, v4);
    selectedIndex = this->fields.selectedIndex;
    if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    SelectImageLimitDialog__SetImageLimitCount(this, v3, imageIdList->fields._items->m_Items[selectedIndex + 1], v8);
    this->fields.state = 3;
    v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  struct SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  v6 = this;
  if ( (byte_42B5A51 & 1) == 0 )
  {
    sub_B52984(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&Method_SelectImageLimitDialog_OnClickImageLimit__);
    this = (SelectImageLimitDialog_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B5A51 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    if ( !v6->fields.selectImageLimitListViewManager
      || (SelectImageLimitListViewManager__ModifyItem(
            v6->fields.selectImageLimitListViewManager,
            imageIdList->fields._items->m_Items[index + 1],
            *(const MethodInfo **)&index),
          selectImageLimitListViewManager = v6->fields.selectImageLimitListViewManager,
          v9 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_B52A54(SelectImageLimitListViewManager_CallbackFunc_TypeInfo),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)v6,
            Method_SelectImageLimitDialog_OnClickImageLimit__,
            0LL),
          !selectImageLimitListViewManager) )
    {
LABEL_17:
      sub_B52A5C(this, *(_QWORD *)&kind);
    }
    selectImageLimitListViewManager->fields.callbackFunc = v9;
    sub_B52920(
      (BattleServantConfConponent_o *)&selectImageLimitListViewManager->fields.callbackFunc,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    SelectImageLimitListViewManager__SetMode_34765088(selectImageLimitListViewManager, 2, v16);
  }
}


void __fastcall SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42B5A4B & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&StringLiteral_15590/*"Window/Objects/Buttons/CancelButton"*/);
    byte_42B5A4B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21195324(transform, (System_String_o *)StringLiteral_15590/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t v28; // w21
  const MethodInfo *v29; // x4
  struct System_Collections_Generic_List_int__o *imageIdList; // x23
  __int64 selectedIndex; // x24
  struct SelectImageLimitListViewManager_o *v32; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x2
  int32_t v41; // w8
  UILabel_o *v42; // x20
  System_String_o *v43; // x0
  System_String_o *v44; // x21
  UILabel_o *warningLabel; // x20
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v51; // x20
  int32_t v52; // [xsp+Ch] [xbp-34h] BYREF

  v52 = index;
  if ( (byte_42B5A46 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SelectImageLimitDialog_EndOpen__);
    sub_B52984(&Method_SelectImageLimitDialog_OnClickImageLimit__);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_8908/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/);
    sub_B52984(&StringLiteral_10502/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_10503/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/);
    sub_B52984(&StringLiteral_8909/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/);
    byte_42B5A46 = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.eventType = eventType;
  this->fields.SetMaskCollider = setMaskMethod;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.SetMaskCollider,
    (System_Int32_array **)setMaskMethod,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    1,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v26);
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrSvtEnt;
  if ( !gameObject )
    goto LABEL_31;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_31;
  v28 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___ToArray(
                                             this->fields.imageIdList,
                                             (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_31;
  selectedIndex = this->fields.selectedIndex;
  if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  if ( !selectImageLimitListViewManager )
    goto LABEL_31;
  SelectImageLimitListViewManager__CreateList(
    selectImageLimitListViewManager,
    v28,
    (System_Int32_array *)gameObject,
    imageIdList->fields._items->m_Items[selectedIndex + 1],
    v29);
  v32 = this->fields.selectImageLimitListViewManager;
  v33 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_B52A54(SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    Method_SelectImageLimitDialog_OnClickImageLimit__,
    0LL);
  if ( !v32 )
    goto LABEL_31;
  v32->fields.callbackFunc = v33;
  sub_B52920(
    (BattleServantConfConponent_o *)&v32->fields.callbackFunc,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  SelectImageLimitListViewManager__SetMode_34765088(v32, 2, v40);
  v41 = this->fields.eventType;
  if ( v41 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10502/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      warningLabel = this->fields.warningLabel;
      v47 = (System_String_o *)StringLiteral_10503/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/;
      goto LABEL_23;
    }
LABEL_31:
    sub_B52A5C(gameObject, v25);
  }
  if ( v41 != 24 )
    goto LABEL_25;
  v42 = this->fields.titleLabel;
  v43 = System_Int32__ToString((int32_t)&v52, 0LL);
  v44 = System_String__Concat_44568316((System_String_o *)StringLiteral_8908/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v43, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v44, 0LL);
  if ( !v42 )
    goto LABEL_31;
  UILabel__set_text(v42, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  v46 = System_Int32__ToString((int32_t)&v52, 0LL);
  v47 = System_String__Concat_44568316((System_String_o *)StringLiteral_8909/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v46, 0LL);
LABEL_23:
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v47, 0LL);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_31;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_31;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v51 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
}


void __fastcall SelectImageLimitDialog__SaveImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  int key_high; // x25^4
  System_String_o *v7; // x21
  System_Xml_Schema_XmlSchemaObject_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  int32_t eventType; // w8
  __int64 *v12; // x8
  __int128 v13[2]; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+20h] [xbp-60h] BYREF
  int key; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_42B5A4C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_B52984(&StringLiteral_9289/*"MultipleViewSelectImageLimit"*/);
    sub_B52984(&StringLiteral_10722/*"PhotoCampaignSelectImageLimit2024"*/);
    byte_42B5A4C = 1;
  }
  memset(&v14, 0, 32);
  key = 0;
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v13,
    dicSelectedImageLimit,
    (const MethodInfo_2F00010 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v14.fields.dictionary = v13[0];
  v14.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v13[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v14,
            (const MethodInfo_2886FC0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v14.fields.current.fields.key);
    key = (int)v14.fields.current.fields.key;
    v7 = System_Int32__ToString((int32_t)&key, 0LL);
    LODWORD(v13[0]) = key_high;
    v8 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, v13);
    if ( !v3 )
      sub_B52A5C(v8, v9);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v3,
      (System_Xml_XmlQualifiedName_o *)v7,
      v8,
      (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v14,
    (const MethodInfo_2887108 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0LL);
  if ( !System_String__IsNullOrEmpty(v10, 0LL) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 26 )
    {
      v12 = &StringLiteral_10722/*"PhotoCampaignSelectImageLimit2024"*/;
    }
    else
    {
      if ( eventType != 24 )
      {
LABEL_17:
        UnityEngine_PlayerPrefs__Save(0LL);
        return;
      }
      v12 = &StringLiteral_9289/*"MultipleViewSelectImageLimit"*/;
    }
    UnityEngine_PlayerPrefs__SetString((System_String_o *)*v12, v10, 0LL);
    goto LABEL_17;
  }
}


void __fastcall SelectImageLimitDialog__SetImageIdList(
        SelectImageLimitDialog_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *Entity; // x0
  struct UserServantEntity_o **p_usrSvtEnt; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UserServantEntity_o *v15; // x8
  int32_t v16; // w20
  int32_t v17; // w22
  __int64 v18; // x23
  __int64 v19; // x24
  int32_t ImageLimitCount; // w23
  int32_t v21; // w23
  const MethodInfo *v22; // x2
  int v23; // w8
  void *v24; // x21
  unsigned int v25; // w22
  __int64 v26; // x8
  int32_t v27; // w0
  int32_t v28; // w21
  struct System_Collections_Generic_List_int__o *imageIdList; // x22
  __int64 v30; // x21
  int size; // w8
  __int64 v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_42B5A47 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B5A47 = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_50;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
             usrSvtId,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.usrSvtEnt = Entity;
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.usrSvtEnt,
    (System_Int32_array **)Entity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  Master_WarQuestSelectionMaster = this->fields.usrSvtEnt;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_50;
  Master_WarQuestSelectionMaster = (void *)UserServantEntity__getSvtId(
                                             (UserServantEntity_o *)Master_WarQuestSelectionMaster,
                                             0LL);
  v15 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_50;
  v16 = (int)Master_WarQuestSelectionMaster;
  v17 = 0;
  while ( 1 )
  {
    v19 = *(_QWORD *)&v15->fields.limitCount.fields.currentCryptoKey;
    v18 = *(_QWORD *)&v15->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v33.fields.currentCryptoKey = v19;
    *(_QWORD *)&v33.fields.fakeValue = v18;
    if ( v17 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v33, 0LL) )
      break;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v16, v17, 0LL);
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Master_WarQuestSelectionMaster,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                   (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                                                   v16,
                                                   ImageLimitCount,
                                                   0LL);
        if ( this->fields.imageIdList )
        {
          v21 = (int)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster = (void *)System_Collections_Generic_List_int___Contains(
                                                     this->fields.imageIdList,
                                                     (int32_t)Master_WarQuestSelectionMaster,
                                                     (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
          {
            Master_WarQuestSelectionMaster = this->fields.imageIdList;
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_50;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
              v21,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          v15 = *p_usrSvtEnt;
          ++v17;
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
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
    goto LABEL_56;
  Master_WarQuestSelectionMaster = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_50;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Master_WarQuestSelectionMaster, 0LL) )
  {
LABEL_56:
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = ServantCostumeMaster__releasedCostumeEntityList(
                                       (ServantCostumeMaster_o *)Master_WarQuestSelectionMaster,
                                       v16,
                                       1,
                                       0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    v23 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
    v24 = Master_WarQuestSelectionMaster;
    if ( v23 >= 1 )
    {
      v25 = 0;
      do
      {
        if ( v25 >= v23 )
        {
          v32 = sub_B52A88(Master_WarQuestSelectionMaster);
          sub_B52A28(v32, 0LL);
        }
        v26 = *((_QWORD *)v24 + (int)v25 + 4);
        if ( !v26 )
          goto LABEL_50;
        v6 = *(unsigned int *)(v26 + 20);
        if ( (int)v6 >= 1 )
        {
          Master_WarQuestSelectionMaster = this->fields.imageIdList;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_50;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
            v6,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v23 = *((_DWORD *)v24 + 6);
      }
      while ( (int)++v25 < v23 );
    }
  }
  v27 = SelectImageLimitDialog__GetImageLimitCount(this, v16, v22);
  if ( (v27 & 0x80000000) == 0 )
  {
    v28 = v27;
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_50;
    Master_WarQuestSelectionMaster = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                               (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                                               v16,
                                               v28,
                                               0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_50;
    v30 = 0LL;
    while ( 1 )
    {
      size = imageIdList->fields._size;
      if ( (int)v30 >= size )
        break;
      if ( size <= (unsigned int)v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( imageIdList->fields._items->m_Items[v30 + 1] == (_DWORD)Master_WarQuestSelectionMaster )
      {
        this->fields.selectedIndex = v30;
        return;
      }
      imageIdList = this->fields.imageIdList;
      ++v30;
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

  if ( (byte_42B5A4E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_42B5A4E = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void __fastcall SelectImageLimitDialog___OnClickCancel_b__23_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  System_Action_bool__int__o *closeFunc; // x0

  if ( (byte_42B5A54 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool__int__Invoke__);
    byte_42B5A54 = 1;
  }
  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_B52A5C(0LL, method);
  System_Action_bool__int___Invoke(
    closeFunc,
    0,
    -1,
    (const MethodInfo_26334FC *)Method_System_Action_bool__int__Invoke__);
}


void __fastcall SelectImageLimitDialog___OnClickDecide_b__22_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  SelectImageLimitDialog_o *v2; // x19
  struct System_Collections_Generic_List_int__o *imageIdList; // x20
  __int64 selectedIndex; // x21
  System_Action_bool__int__o *closeFunc; // x19

  v2 = this;
  if ( (byte_42B5A53 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool__int__Invoke__);
    this = (SelectImageLimitDialog_o *)sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_42B5A53 = 1;
  }
  imageIdList = v2->fields.imageIdList;
  if ( !imageIdList )
    goto LABEL_8;
  selectedIndex = v2->fields.selectedIndex;
  closeFunc = v2->fields.closeFunc;
  if ( imageIdList->fields._size <= (unsigned int)selectedIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  if ( !closeFunc )
LABEL_8:
    sub_B52A5C(this, method);
  System_Action_bool__int___Invoke(
    closeFunc,
    1,
    imageIdList->fields._items->m_Items[selectedIndex + 1],
    (const MethodInfo_26334FC *)Method_System_Action_bool__int__Invoke__);
}