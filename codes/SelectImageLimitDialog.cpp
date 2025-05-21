void __fastcall SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B3FE3A & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B3FE3A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__int__o *v13; // x19
  bool IsNullOrEmpty; // w21
  System_String_o *v15; // x0
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v17; // x1
  Il2CppObject *key; // x20
  System_String_o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+0h] [xbp-90h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B3FE38 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__Add__, json);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_1BDB878(&JsonManager_TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v12);
    byte_4B3FE38 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  result = 0;
  v13 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v13,
    (const MethodInfo_33968DC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  IsNullOrEmpty = System_String__IsNullOrEmpty(json, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  if ( IsNullOrEmpty )
    v15 = 0LL;
  else
    v15 = json;
  Dictionary = JsonManager__getDictionary(v15, 0LL);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v23,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_33A0660 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v25 = v23;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v25,
              (const MethodInfo_349BF94 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v25.fields._current.fields.value )
        sub_1BDBAD4(0LL, v17);
      key = v25.fields._current.fields.key;
      v19 = (System_String_o *)((__int64 (*)(void))v25.fields._current.fields.value->klass->vtable[3].method)();
      v20 = System_Int32__TryParse(v19, &result, 0LL);
      if ( v20 )
      {
        if ( !v13 )
          sub_1BDBAD4(v20, v21);
        System_Collections_Generic_Dictionary_object__int___Add(
          v13,
          key,
          result,
          (const MethodInfo_3397290 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v25,
      (const MethodInfo_349C0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v13;
}


void __fastcall SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B3FE30 & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_bool___, method);
    byte_4B3FE30 = 1;
  }
  this->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    0,
    (const MethodInfo_2F82EDC *)Method_ActionExtensions_Call_bool___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0

  if ( (byte_4B3FE37 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    byte_4B3FE37 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_3332A54 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
    if ( dicSelectedImageLimit )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedImageLimit,
               svtId,
               (const MethodInfo_33327CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_1BDBAD4(dicSelectedImageLimit, *(_QWORD *)&svtId);
  }
  return -1;
}


void __fastcall SelectImageLimitDialog__Init(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *titleLabel; // x0
  System_Collections_Generic_List_int__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_int__int__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3FE2D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B3FE2D = 1;
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
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)this->fields.selectImageLimitListViewManager;
  if ( !titleLabel )
    goto LABEL_11;
  SelectImageLimitListViewManager__DestroyList((SelectImageLimitListViewManager_o *)titleLabel, method);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (v14.fields.r = 1.0,
        v14.fields.g = 1.0,
        v14.fields.b = 1.0,
        v14.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)titleLabel, v14, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1BDBAD4(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  v8 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.imageIdList, (int32_t)v8, v9, v10);
  this->fields.selectedIndex = 0;
  v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v11,
    (const MethodInfo_3331EA4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v11;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dicSelectedImageLimit, (int32_t)v11, v12, v13);
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
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+30h] [xbp-60h] BYREF
  int32_t result[2]; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_4B3FE35 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_1BDB878(&JsonManager_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_1BDB878(&StringLiteral_10611/*"PhotoCampaignSelectImageLimit2025"*/, v10);
    sub_1BDB878(&StringLiteral_9195/*"MultipleViewSelectImageLimit"*/, v11);
    byte_4B3FE35 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v24, 0, sizeof(v24));
  eventType = this->fields.eventType;
  if ( eventType == 24 )
  {
    v14 = &StringLiteral_9195/*"MultipleViewSelectImageLimit"*/;
  }
  else
  {
    String = 0LL;
    if ( eventType != 26 )
      goto LABEL_8;
    v14 = &StringLiteral_10611/*"PhotoCampaignSelectImageLimit2025"*/;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v14, 0LL, 0LL);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0LL);
    if ( !Dictionary )
      sub_1BDBAD4(0LL, v16);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v23,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_33A0660 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v24 = v23;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v24,
              (const MethodInfo_349BF94 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      value = v24.fields._current.fields.value;
      v18 = System_Int32__TryParse((System_String_o *)v24.fields._current.fields.key, &result[1], 0LL);
      if ( v18 )
      {
        if ( !value )
          sub_1BDBAD4(v18, v19);
        v20 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                   value,
                                   value->klass->vtable[4].methodPtr);
        if ( System_Int32__TryParse(v20, result, 0LL) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_1BDBAD4(0LL, v21);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_3332868 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v24,
      (const MethodInfo_349C0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B3FE32 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SelectImageLimitDialog_OnClickCancel__, v3);
    sub_1BDB878(&Method_SelectImageLimitDialog__OnClickCancel_b__22_0__, v4);
    byte_4B3FE32 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SelectImageLimitDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_SelectImageLimitDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    this->fields.state = 3;
    v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickCancel_b__22_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall SelectImageLimitDialog__OnClickDecide(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *usrSvtEnt; // x8
  __int64 v12; // x20
  __int64 v13; // x21
  int32_t v14; // w20
  int32_t Item; // w0
  const MethodInfo *v16; // x3
  System_Action_o *v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B3FE31 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&Method_SelectImageLimitDialog_OnClickDecide__, v5);
    sub_1BDB878(&Method_SelectImageLimitDialog__OnClickDecide_b__21_0__, v6);
    byte_4B3FE31 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_SelectImageLimitDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BDB890(Method_SelectImageLimitDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
    usrSvtEnt = this->fields.usrSvtEnt;
    if ( !usrSvtEnt )
      goto LABEL_12;
    v13 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v13;
    *(_QWORD *)&v18.fields.fakeValue = v12;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v18, 0LL);
    if ( !this->fields.imageIdList )
LABEL_12:
      sub_1BDBAD4(v9, v10);
    v14 = v9;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.imageIdList,
             this->fields.selectedIndex,
             (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
    SelectImageLimitDialog__SetImageLimitCount(this, v14, Item, v16);
    this->fields.state = 3;
    v17 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickDecide_b__21_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
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
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_Collections_Generic_List_int__o *imageIdList; // x0
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x21
  const MethodInfo *v13; // x2
  struct SelectImageLimitListViewManager_o *v14; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B3FE39 & 1) == 0 )
  {
    sub_1BDB878(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1BDB878(&Method_SelectImageLimitDialog_OnClickImageLimit__, v8);
    byte_4B3FE39 = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v9 = Method_SelectImageLimitDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1BDB890(Method_SelectImageLimitDialog_OnClickImageLimit__);
      v10 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    }
    imageIdList = this->fields.imageIdList;
    this->fields.selectedIndex = index;
    if ( !imageIdList
      || (selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager,
          imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    imageIdList,
                                                                    index,
                                                                    (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__),
          !selectImageLimitListViewManager)
      || (SelectImageLimitListViewManager__ModifyItem(selectImageLimitListViewManager, (int32_t)imageIdList, v13),
          v14 = this->fields.selectImageLimitListViewManager,
          v15 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_1BDBAC4(SelectImageLimitListViewManager_CallbackFunc_TypeInfo),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)this,
            (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
            v16),
          !v14) )
    {
      sub_1BDBAD4(imageIdList, *(_QWORD *)&kind);
    }
    v14->fields.callbackFunc = v15;
    sub_1BDB81C((CGThumbnailListItem_o *)&v14->fields.callbackFunc, (int32_t)v15, v17, v18);
    SelectImageLimitListViewManager__SetMode_32539564(v14, 2, v19);
  }
}


void __fastcall SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B3FE33 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15624/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4B3FE33 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43873512(transform, (System_String_o *)StringLiteral_15624/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t v33; // w21
  System_Int32_array *v34; // x22
  const MethodInfo *v35; // x4
  struct SelectImageLimitListViewManager_o *v36; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v37; // x21
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  int32_t v42; // w8
  UILabel_o *v43; // x20
  System_String_o *v44; // x0
  System_String_o *v45; // x21
  UILabel_o *warningLabel; // x20
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v52; // x20
  int32_t v53; // [xsp+Ch] [xbp-44h] BYREF

  v53 = index;
  if ( (byte_4B3FE2E & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&eventType);
    sub_1BDB878(&System_Action_TypeInfo, v12);
    sub_1BDB878(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_1BDB878(&LocalizationManager_TypeInfo, v16);
    sub_1BDB878(&Method_SelectImageLimitDialog_EndOpen__, v17);
    sub_1BDB878(&Method_SelectImageLimitDialog_OnClickImageLimit__, v18);
    sub_1BDB878(&StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/, v19);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v20);
    sub_1BDB878(&StringLiteral_8811/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v21);
    sub_1BDB878(&StringLiteral_10354/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, v22);
    sub_1BDB878(&StringLiteral_10355/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/, v23);
    sub_1BDB878(&StringLiteral_8812/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v24);
    byte_4B3FE2E = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v25, v26);
  this->fields.eventType = eventType;
  this->fields.SetMaskCollider = setMaskMethod;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.SetMaskCollider, (int32_t)setMaskMethod, v27, v28);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    1,
    (const MethodInfo_2F82EDC *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v31);
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrSvtEnt;
  if ( !gameObject )
    goto LABEL_26;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v33 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___ToArray(
                                             this->fields.imageIdList,
                                             (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v34 = (System_Int32_array *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___get_Item(
                                             this->fields.imageIdList,
                                             this->fields.selectedIndex,
                                             (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !selectImageLimitListViewManager )
    goto LABEL_26;
  SelectImageLimitListViewManager__CreateList(selectImageLimitListViewManager, v33, v34, (int32_t)gameObject, v35);
  v36 = this->fields.selectImageLimitListViewManager;
  v37 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_1BDBAC4(SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v37,
    (Il2CppObject *)this,
    (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
    v38);
  if ( !v36 )
    goto LABEL_26;
  v36->fields.callbackFunc = v37;
  sub_1BDB81C((CGThumbnailListItem_o *)&v36->fields.callbackFunc, (int32_t)v37, v39, v40);
  SelectImageLimitListViewManager__SetMode_32539564(v36, 2, v41);
  v42 = this->fields.eventType;
  if ( v42 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10354/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      warningLabel = this->fields.warningLabel;
      v48 = (System_String_o *)StringLiteral_10355/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/;
      goto LABEL_19;
    }
LABEL_26:
    sub_1BDBAD4(gameObject, v30);
  }
  if ( v42 != 24 )
    goto LABEL_21;
  v43 = this->fields.titleLabel;
  v44 = System_Int32__ToString((int32_t)&v53, 0LL);
  v45 = System_String__Concat_62572260((System_String_o *)StringLiteral_8811/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v44, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v45, 0LL);
  if ( !v43 )
    goto LABEL_26;
  UILabel__set_text(v43, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  v47 = System_Int32__ToString((int32_t)&v53, 0LL);
  v48 = System_String__Concat_62572260((System_String_o *)StringLiteral_8812/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v47, 0LL);
LABEL_19:
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v48, 0LL);
  if ( !warningLabel )
    goto LABEL_26;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
LABEL_21:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_26;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_26;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v52 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
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
  System_Collections_Generic_Dictionary_object__object__o *v15; // x20
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  int key_high; // x27^4
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  int32_t eventType; // w8
  __int64 *v27; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B3FE34 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v8);
    sub_1BDB878(&int_TypeInfo, v9);
    sub_1BDB878(&JsonManager_TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v12);
    sub_1BDB878(&StringLiteral_10611/*"PhotoCampaignSelectImageLimit2025"*/, v13);
    sub_1BDB878(&StringLiteral_9195/*"MultipleViewSelectImageLimit"*/, v14);
    byte_4B3FE34 = 1;
  }
  memset(&v29, 0, 32);
  *(&v28.fields._getEnumeratorRetType + 1) = 0;
  v15 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v15,
    (const MethodInfo_339F880 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_1BDBAD4(0LL, v16);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v28,
    dicSelectedImageLimit,
    (const MethodInfo_3332C40 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v29.fields._dictionary = *(_OWORD *)&v28.fields._dictionary;
  v29.fields._current = v28.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v29,
            (const MethodInfo_348C11C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v29.fields._current.fields.key);
    *(&v28.fields._getEnumeratorRetType + 1) = (int32_t)v29.fields._current.fields.key;
    v19 = (Il2CppObject *)System_Int32__ToString((int32_t)(&v28.fields._getEnumeratorRetType + 1), 0LL);
    LODWORD(v28.fields._dictionary) = key_high;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v20, v21, v22);
    if ( !v15 )
      sub_1BDBAD4(v23, v24);
    System_Collections_Generic_Dictionary_object__object___Add(
      v15,
      v19,
      v23,
      (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v29,
    (const MethodInfo_348C21C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson((Il2CppObject *)v15, 0, 0, 0LL);
  if ( !System_String__IsNullOrEmpty(v25, 0LL) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 24 )
    {
      v27 = &StringLiteral_9195/*"MultipleViewSelectImageLimit"*/;
    }
    else
    {
      if ( eventType != 26 )
      {
LABEL_16:
        UnityEngine_PlayerPrefs__Save(0LL);
        return;
      }
      v27 = &StringLiteral_10611/*"PhotoCampaignSelectImageLimit2025"*/;
    }
    UnityEngine_PlayerPrefs__SetString((System_String_o *)*v27, v25, 0LL);
    goto LABEL_16;
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
  void *Master_object; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_usrSvtEnt; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UserServantEntity_o *v22; // x8
  int32_t v23; // w20
  int32_t v24; // w22
  __int64 v25; // x23
  __int64 v26; // x24
  int32_t ImageLimitCount; // w23
  int32_t v28; // w23
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  const MethodInfo *v32; // x2
  int v33; // w8
  void *v34; // x21
  unsigned int v35; // w22
  __int64 v36; // x8
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  int32_t v40; // w0
  int32_t v41; // w21
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int v43; // w20
  int32_t v44; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B3FE2F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCostumeMaster___, usrSvtId);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B3FE2F = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             usrSvtId,
             (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.usrSvtEnt = (struct UserServantEntity_o *)Entity;
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.usrSvtEnt, (int32_t)Entity, v20, v21);
  Master_object = this->fields.usrSvtEnt;
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (void *)UserServantEntity__getSvtId((UserServantEntity_o *)Master_object, 0LL);
  v22 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  v23 = (int)Master_object;
  v24 = 0;
  while ( 1 )
  {
    v26 = *(_QWORD *)&v22->fields.limitCount.fields.currentCryptoKey;
    v25 = *(_QWORD *)&v22->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v45.fields.currentCryptoKey = v26;
    *(_QWORD *)&v45.fields.fakeValue = v25;
    if ( v24 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v45, 0LL) )
      break;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v23, v24, 0LL);
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v23,
                              ImageLimitCount,
                              0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_51;
    v28 = (int)Master_object;
    Master_object = (void *)System_Collections_Generic_List_int___Contains(
                              this->fields.imageIdList,
                              (int32_t)Master_object,
                              (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      Master_object = this->fields.imageIdList;
      if ( !Master_object )
        goto LABEL_51;
      v29 = *((_QWORD *)Master_object + 2);
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++*((_DWORD *)Master_object + 7);
      if ( !v29 )
        goto LABEL_51;
      v31 = *((int *)Master_object + 6);
      if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)Master_object,
          v28,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        *((_DWORD *)Master_object + 6) = v31 + 1;
        *(_DWORD *)(v29 + 4 * v31 + 32) = v28;
      }
    }
    v22 = *p_usrSvtEnt;
    ++v24;
    if ( !*p_usrSvtEnt )
      goto LABEL_51;
  }
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
LABEL_51:
    sub_1BDBAD4(Master_object, v17);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_object, 0LL) )
    goto LABEL_57;
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Master_object, 0LL) )
  {
LABEL_57:
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = ServantCostumeMaster__releasedCostumeEntityList(
                      (ServantCostumeMaster_o *)Master_object,
                      v23,
                      1,
                      0LL);
    if ( !Master_object )
      goto LABEL_51;
    v33 = *((_DWORD *)Master_object + 6);
    v34 = Master_object;
    if ( v33 >= 1 )
    {
      v35 = 0;
      do
      {
        if ( v35 >= v33 )
          sub_1BDBADC(Master_object, v17, v32);
        v36 = *((_QWORD *)v34 + (int)v35 + 4);
        if ( !v36 )
          goto LABEL_51;
        v17 = *(unsigned int *)(v36 + 20);
        if ( (int)v17 >= 1 )
        {
          Master_object = this->fields.imageIdList;
          if ( !Master_object )
            goto LABEL_51;
          v37 = *((_QWORD *)Master_object + 2);
          v38 = Method_System_Collections_Generic_List_int__Add__;
          ++*((_DWORD *)Master_object + 7);
          if ( !v37 )
            goto LABEL_51;
          v39 = *((int *)Master_object + 6);
          if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Master_object,
              v17,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            *((_DWORD *)Master_object + 6) = v39 + 1;
            *(_DWORD *)(v37 + 4 * v39 + 32) = v17;
          }
        }
        v33 = *((_DWORD *)v34 + 6);
      }
      while ( (int)++v35 < v33 );
    }
  }
  v40 = SelectImageLimitDialog__GetImageLimitCount(this, v23, v32);
  if ( (v40 & 0x80000000) == 0 )
  {
    v41 = v40;
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v23,
                              v41,
                              0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_51;
    v43 = (int)Master_object;
    v44 = 0;
    while ( v44 < imageIdList->fields._size )
    {
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                imageIdList,
                                v44,
                                (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( (_DWORD)Master_object == v43 )
      {
        this->fields.selectedIndex = v44;
        return;
      }
      imageIdList = this->fields.imageIdList;
      ++v44;
      if ( !imageIdList )
        goto LABEL_51;
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

  if ( (byte_4B3FE36 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, *(_QWORD *)&svtId);
    byte_4B3FE36 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_1BDBAD4(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_3332854 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void __fastcall SelectImageLimitDialog___OnClickCancel_b__22_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_bool__int__o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1BDBAD4(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, __int64, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    0LL,
    0xFFFFFFFFLL,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}


void __fastcall SelectImageLimitDialog___OnClickDecide_b__21_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *imageIdList; // x0
  struct System_Action_bool__int__o *closeFunc; // x20

  if ( (byte_4B3FE3B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_4B3FE3B = 1;
  }
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList
    || (closeFunc = this->fields.closeFunc,
        imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                  imageIdList,
                                                                  this->fields.selectedIndex,
                                                                  (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__),
        !closeFunc) )
  {
    sub_1BDBAD4(imageIdList, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    1LL,
    (unsigned int)imageIdList,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}