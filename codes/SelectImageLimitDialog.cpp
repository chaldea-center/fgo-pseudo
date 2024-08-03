void __fastcall SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49F7CBE & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F7CBE = 1;
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
  Il2CppObject *key; // x20
  System_String_o *v18; // x0
  _BOOL8 v19; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+0h] [xbp-90h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_49F7CBC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, json);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_1B640C8(&JsonManager_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v12);
    byte_49F7CBC = 1;
  }
  memset(&v23, 0, sizeof(v23));
  result = 0;
  v13 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  json,
                                                                  method);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v13,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
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
      &v21,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v23 = v21;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v23,
              (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v23.fields._current.fields.value )
        sub_1B64324(0LL);
      key = v23.fields._current.fields.key;
      v18 = (System_String_o *)((__int64 (*)(void))v23.fields._current.fields.value->klass->vtable[3].method)();
      v19 = System_Int32__TryParse(v18, &result, 0LL);
      if ( v19 )
      {
        if ( !v13 )
          sub_1B64324(v19);
        System_Collections_Generic_Dictionary_object__int___Add(
          v13,
          key,
          result,
          (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v23,
      (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v13;
}


void __fastcall SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49F7CB4 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    byte_49F7CB4 = 1;
  }
  this->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    0,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0

  if ( (byte_49F7CBB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    byte_49F7CBB = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
    if ( dicSelectedImageLimit )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedImageLimit,
               svtId,
               (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_1B64324(dicSelectedImageLimit);
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
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_int__int__o *v14; // x20
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F7CB1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49F7CB1 = 1;
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
  SelectImageLimitListViewManager__DestroyList((SelectImageLimitListViewManager_o *)titleLabel, v8);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (v15.fields.r = 1.0,
        v15.fields.g = 1.0,
        v15.fields.b = 1.0,
        v15.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)titleLabel, v15, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1B64324(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v9, v10);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v11;
  sub_1B6406C(&this->fields.imageIdList);
  this->fields.selectedIndex = 0;
  v14 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v12,
                                                               v13);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v14,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v14;
  sub_1B6406C(&this->fields.dicSelectedImageLimit);
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
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+30h] [xbp-60h] BYREF
  int32_t result[2]; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_49F7CB9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_1B640C8(&StringLiteral_9131/*"MultipleViewSelectImageLimit"*/, v10);
    sub_1B640C8(&StringLiteral_10566/*"PhotoCampaignSelectImageLimit2024"*/, v11);
    byte_49F7CB9 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v21, 0, sizeof(v21));
  eventType = this->fields.eventType;
  if ( eventType == 24 )
  {
    v14 = &StringLiteral_9131/*"MultipleViewSelectImageLimit"*/;
  }
  else
  {
    String = 0LL;
    if ( eventType != 26 )
      goto LABEL_8;
    v14 = &StringLiteral_10566/*"PhotoCampaignSelectImageLimit2024"*/;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v14, 0LL, 0LL);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0LL);
    if ( !Dictionary )
      sub_1B64324(0LL);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v20,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v21,
              (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      value = v21.fields._current.fields.value;
      v17 = System_Int32__TryParse((System_String_o *)v21.fields._current.fields.key, &result[1], 0LL);
      if ( v17 )
      {
        if ( !value )
          sub_1B64324(v17);
        v18 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                   value,
                                   value->klass->vtable[4].methodPtr);
        if ( System_Int32__TryParse(v18, result, 0LL) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_1B64324(0LL);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v21,
      (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F7CB6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SelectImageLimitDialog_OnClickCancel__, v3);
    sub_1B640C8(&Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, v4);
    byte_49F7CB6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SelectImageLimitDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SelectImageLimitDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    this->fields.state = 3;
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
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
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x0
  struct UserServantEntity_o *usrSvtEnt; // x8
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w20
  int32_t Item; // w0
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_49F7CB5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SelectImageLimitDialog_OnClickDecide__, v5);
    sub_1B640C8(&Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, v6);
    byte_49F7CB5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_SelectImageLimitDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0(Method_SelectImageLimitDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
    usrSvtEnt = this->fields.usrSvtEnt;
    if ( !usrSvtEnt )
      goto LABEL_12;
    v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v12;
    *(_QWORD *)&v19.fields.fakeValue = v11;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v19, 0LL);
    if ( !this->fields.imageIdList )
LABEL_12:
      sub_1B64324(v9);
    v13 = v9;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.imageIdList,
             this->fields.selectedIndex,
             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
    SelectImageLimitDialog__SetImageLimitCount(this, v13, Item, v15);
    this->fields.state = 3;
    v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
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
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_Collections_Generic_List_int__o *imageIdList; // x0
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x21
  const MethodInfo *v13; // x2
  struct SelectImageLimitListViewManager_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  SelectImageLimitListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_49F7CBD & 1) == 0 )
  {
    sub_1B640C8(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1B640C8(&Method_SelectImageLimitDialog_OnClickImageLimit__, v8);
    byte_49F7CBD = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v9 = Method_SelectImageLimitDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B640E0(Method_SelectImageLimitDialog_OnClickImageLimit__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    }
    imageIdList = this->fields.imageIdList;
    this->fields.selectedIndex = index;
    if ( !imageIdList
      || (selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager,
          imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    imageIdList,
                                                                    index,
                                                                    (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__),
          !selectImageLimitListViewManager)
      || (SelectImageLimitListViewManager__ModifyItem(selectImageLimitListViewManager, (int32_t)imageIdList, v13),
          v14 = this->fields.selectImageLimitListViewManager,
          v17 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                    SelectImageLimitListViewManager_CallbackFunc_TypeInfo,
                                                                    v15,
                                                                    v16),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v17,
            (Il2CppObject *)this,
            (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
            v18),
          !v14) )
    {
      sub_1B64324(imageIdList);
    }
    v14->fields.callbackFunc = v17;
    sub_1B6406C(&v14->fields.callbackFunc);
    SelectImageLimitListViewManager__SetMode_31026948(v14, 2, v19);
  }
}


void __fastcall SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49F7CB7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15581/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_49F7CB7 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_15581/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x2
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t v28; // w21
  System_Int32_array *v29; // x22
  const MethodInfo *v30; // x4
  struct SelectImageLimitListViewManager_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  SelectImageLimitListViewManager_CallbackFunc_o *v34; // x21
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2
  int32_t v37; // w8
  UILabel_o *v38; // x20
  System_String_o *v39; // x0
  System_String_o *v40; // x21
  UILabel_o *warningLabel; // x20
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x20
  int32_t v50; // [xsp+Ch] [xbp-44h] BYREF

  v50 = index;
  if ( (byte_49F7CB2 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&eventType);
    sub_1B640C8(&System_Action_TypeInfo, v12);
    sub_1B640C8(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&Method_SelectImageLimitDialog_EndOpen__, v17);
    sub_1B640C8(&Method_SelectImageLimitDialog_OnClickImageLimit__, v18);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v19);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v20);
    sub_1B640C8(&StringLiteral_8736/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v21);
    sub_1B640C8(&StringLiteral_10321/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, v22);
    sub_1B640C8(&StringLiteral_10322/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/, v23);
    sub_1B640C8(&StringLiteral_8737/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v24);
    byte_49F7CB2 = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_1B6406C(&this->fields.closeFunc);
  this->fields.eventType = eventType;
  this->fields.SetMaskCollider = setMaskMethod;
  sub_1B6406C(&this->fields.SetMaskCollider);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    1,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v26);
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrSvtEnt;
  if ( !gameObject )
    goto LABEL_26;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v28 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___ToArray(
                                             this->fields.imageIdList,
                                             (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v29 = (System_Int32_array *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___get_Item(
                                             this->fields.imageIdList,
                                             this->fields.selectedIndex,
                                             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !selectImageLimitListViewManager )
    goto LABEL_26;
  SelectImageLimitListViewManager__CreateList(selectImageLimitListViewManager, v28, v29, (int32_t)gameObject, v30);
  v31 = this->fields.selectImageLimitListViewManager;
  v34 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_1B64314(
                                                            SelectImageLimitListViewManager_CallbackFunc_TypeInfo,
                                                            v32,
                                                            v33);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
    v35);
  if ( !v31 )
    goto LABEL_26;
  v31->fields.callbackFunc = v34;
  sub_1B6406C(&v31->fields.callbackFunc);
  SelectImageLimitListViewManager__SetMode_31026948(v31, 2, v36);
  v37 = this->fields.eventType;
  if ( v37 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10321/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      warningLabel = this->fields.warningLabel;
      v43 = (System_String_o *)StringLiteral_10322/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/;
      goto LABEL_19;
    }
LABEL_26:
    sub_1B64324(gameObject);
  }
  if ( v37 != 24 )
    goto LABEL_21;
  v38 = this->fields.titleLabel;
  v39 = System_Int32__ToString((int32_t)&v50, 0LL);
  v40 = System_String__Concat_61375396((System_String_o *)StringLiteral_8736/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v39, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v40, 0LL);
  if ( !v38 )
    goto LABEL_26;
  UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  v42 = System_Int32__ToString((int32_t)&v50, 0LL);
  v43 = System_String__Concat_61375396((System_String_o *)StringLiteral_8737/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v42, 0LL);
LABEL_19:
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v43, 0LL);
  if ( !warningLabel )
    goto LABEL_26;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
LABEL_21:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_26;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_26;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v49 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v47, v48);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
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
  System_Collections_Generic_Dictionary_object__object__o *v16; // x20
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  int key_high; // x27^4
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  int32_t eventType; // w8
  __int64 *v23; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_49F7CB8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&JsonManager_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v13);
    sub_1B640C8(&StringLiteral_9131/*"MultipleViewSelectImageLimit"*/, v14);
    sub_1B640C8(&StringLiteral_10566/*"PhotoCampaignSelectImageLimit2024"*/, v15);
    byte_49F7CB8 = 1;
  }
  memset(&v25, 0, 32);
  *(&v24.fields._getEnumeratorRetType + 1) = 0;
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     method,
                                                                     v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v24,
    dicSelectedImageLimit,
    (const MethodInfo_311B28C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v25.fields._dictionary = *(_OWORD *)&v24.fields._dictionary;
  v25.fields._current = v24.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v25,
            (const MethodInfo_32682F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v25.fields._current.fields.key);
    *(&v24.fields._getEnumeratorRetType + 1) = (int32_t)v25.fields._current.fields.key;
    v19 = (Il2CppObject *)System_Int32__ToString((int32_t)(&v24.fields._getEnumeratorRetType + 1), 0LL);
    LODWORD(v24.fields._dictionary) = key_high;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    if ( !v16 )
      sub_1B64324(v20);
    System_Collections_Generic_Dictionary_object__object___Add(
      v16,
      v19,
      v20,
      (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v25,
    (const MethodInfo_32683F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v21 = JsonManager__toJson((Il2CppObject *)v16, 0, 0, 0LL);
  if ( !System_String__IsNullOrEmpty(v21, 0LL) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 24 )
    {
      v23 = &StringLiteral_9131/*"MultipleViewSelectImageLimit"*/;
    }
    else
    {
      if ( eventType != 26 )
      {
LABEL_16:
        UnityEngine_PlayerPrefs__Save(0LL);
        return;
      }
      v23 = &StringLiteral_10566/*"PhotoCampaignSelectImageLimit2024"*/;
    }
    UnityEngine_PlayerPrefs__SetString((System_String_o *)*v23, v21, 0LL);
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
  struct UserServantEntity_o **p_usrSvtEnt; // x21
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w20
  int32_t v20; // w22
  __int64 v21; // x23
  __int64 v22; // x24
  int32_t ImageLimitCount; // w23
  int32_t v24; // w23
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  const MethodInfo *v28; // x2
  __int64 v29; // x1
  int v30; // w8
  void *v31; // x21
  unsigned int v32; // w22
  __int64 v33; // x8
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  int32_t v37; // w0
  int32_t v38; // w21
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int v40; // w20
  int32_t v41; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_49F7CB3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, usrSvtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49F7CB3 = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  this->fields.usrSvtEnt = (struct UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                           usrSvtId,
                                                           (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_1B6406C(&this->fields.usrSvtEnt);
  Master_object = this->fields.usrSvtEnt;
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (void *)UserServantEntity__getSvtId((UserServantEntity_o *)Master_object, 0LL);
  v18 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  v19 = (int)Master_object;
  v20 = 0;
  while ( 1 )
  {
    v22 = *(_QWORD *)&v18->fields.limitCount.fields.currentCryptoKey;
    v21 = *(_QWORD *)&v18->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v42.fields.currentCryptoKey = v22;
    *(_QWORD *)&v42.fields.fakeValue = v21;
    if ( v20 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v42, 0LL) )
      break;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v19, v20, 0LL);
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v19,
                              ImageLimitCount,
                              0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_51;
    v24 = (int)Master_object;
    Master_object = (void *)System_Collections_Generic_List_int___Contains(
                              this->fields.imageIdList,
                              (int32_t)Master_object,
                              (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      Master_object = this->fields.imageIdList;
      if ( !Master_object )
        goto LABEL_51;
      v25 = *((_QWORD *)Master_object + 2);
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++*((_DWORD *)Master_object + 7);
      if ( !v25 )
        goto LABEL_51;
      v27 = *((int *)Master_object + 6);
      if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)Master_object,
          v24,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        *((_DWORD *)Master_object + 6) = v27 + 1;
        *(_DWORD *)(v25 + 4 * v27 + 32) = v24;
      }
    }
    v18 = *p_usrSvtEnt;
    ++v20;
    if ( !*p_usrSvtEnt )
      goto LABEL_51;
  }
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
LABEL_51:
    sub_1B64324(Master_object);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_object, 0LL) )
    goto LABEL_57;
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Master_object, 0LL) )
  {
LABEL_57:
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = ServantCostumeMaster__releasedCostumeEntityList(
                      (ServantCostumeMaster_o *)Master_object,
                      v19,
                      1,
                      0LL);
    if ( !Master_object )
      goto LABEL_51;
    v30 = *((_DWORD *)Master_object + 6);
    v31 = Master_object;
    if ( v30 >= 1 )
    {
      v32 = 0;
      do
      {
        if ( v32 >= v30 )
          sub_1B6432C(Master_object, v29);
        v33 = *((_QWORD *)v31 + (int)v32 + 4);
        if ( !v33 )
          goto LABEL_51;
        v29 = *(unsigned int *)(v33 + 20);
        if ( (int)v29 >= 1 )
        {
          Master_object = this->fields.imageIdList;
          if ( !Master_object )
            goto LABEL_51;
          v34 = *((_QWORD *)Master_object + 2);
          v35 = Method_System_Collections_Generic_List_int__Add__;
          ++*((_DWORD *)Master_object + 7);
          if ( !v34 )
            goto LABEL_51;
          v36 = *((int *)Master_object + 6);
          if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Master_object,
              v29,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            *((_DWORD *)Master_object + 6) = v36 + 1;
            *(_DWORD *)(v34 + 4 * v36 + 32) = v29;
          }
        }
        v30 = *((_DWORD *)v31 + 6);
      }
      while ( (int)++v32 < v30 );
    }
  }
  v37 = SelectImageLimitDialog__GetImageLimitCount(this, v19, v28);
  if ( (v37 & 0x80000000) == 0 )
  {
    v38 = v37;
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v19,
                              v38,
                              0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_51;
    v40 = (int)Master_object;
    v41 = 0;
    while ( v41 < imageIdList->fields._size )
    {
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                imageIdList,
                                v41,
                                (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( (_DWORD)Master_object == v40 )
      {
        this->fields.selectedIndex = v41;
        return;
      }
      imageIdList = this->fields.imageIdList;
      ++v41;
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

  if ( (byte_49F7CBA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, *(_QWORD *)&svtId);
    byte_49F7CBA = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void __fastcall SelectImageLimitDialog___OnClickCancel_b__23_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_bool__int__o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1B64324(this);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, __int64, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    0LL,
    0xFFFFFFFFLL,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}


void __fastcall SelectImageLimitDialog___OnClickDecide_b__22_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *imageIdList; // x0
  struct System_Action_bool__int__o *closeFunc; // x20

  if ( (byte_49F7CBF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_49F7CBF = 1;
  }
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList
    || (closeFunc = this->fields.closeFunc,
        imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                  imageIdList,
                                                                  this->fields.selectedIndex,
                                                                  (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__),
        !closeFunc) )
  {
    sub_1B64324(imageIdList);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    1LL,
    (unsigned int)imageIdList,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}