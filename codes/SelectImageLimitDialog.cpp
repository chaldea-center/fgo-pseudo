void __fastcall SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BF8CF4 & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4BF8CF4 = 1;
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

  if ( (byte_4BF8CF2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, json);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_1C2E12C(&JsonManager_TypeInfo, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v12);
    byte_4BF8CF2 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  result = 0;
  v13 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v13,
    (const MethodInfo_332C2D8 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
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
      (const MethodInfo_3335FA4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v25 = v23;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v25,
              (const MethodInfo_34313CC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v25.fields._current.fields.value )
        sub_1C2E388(0LL, v17);
      key = v25.fields._current.fields.key;
      v19 = (System_String_o *)((__int64 (*)(void))v25.fields._current.fields.value->klass->vtable[3].method)();
      v20 = System_Int32__TryParse(v19, &result, 0LL);
      if ( v20 )
      {
        if ( !v13 )
          sub_1C2E388(v20, v21);
        System_Collections_Generic_Dictionary_object__int___Add(
          v13,
          key,
          result,
          (const MethodInfo_332CC8C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v25,
      (const MethodInfo_34314EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v13;
}


void __fastcall SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BF8CEA & 1) == 0 )
  {
    sub_1C2E12C(&Method_ActionExtensions_Call_bool___, method);
    byte_4BF8CEA = 1;
  }
  this->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    0,
    (const MethodInfo_2F23EB0 *)Method_ActionExtensions_Call_bool___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0

  if ( (byte_4BF8CF1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    byte_4BF8CF1 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_32CC5F0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
    if ( dicSelectedImageLimit )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedImageLimit,
               svtId,
               (const MethodInfo_32CC368 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_1C2E388(dicSelectedImageLimit, *(_QWORD *)&svtId);
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
  System_Collections_Generic_Dictionary_int__int__o *v9; // x20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BF8CE7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_1/*""*/, v6);
    byte_4BF8CE7 = 1;
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
    || (v10.fields.r = 1.0,
        v10.fields.g = 1.0,
        v10.fields.b = 1.0,
        v10.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)titleLabel, v10, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1C2E388(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v8;
  sub_1C2E0D0(&this->fields.imageIdList);
  this->fields.selectedIndex = 0;
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_32CBA40 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v9;
  sub_1C2E0D0(&this->fields.dicSelectedImageLimit);
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

  if ( (byte_4BF8CEF & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_1C2E12C(&JsonManager_TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_1C2E12C(&StringLiteral_9358/*"MultipleViewSelectImageLimit"*/, v10);
    sub_1C2E12C(&StringLiteral_10815/*"PhotoCampaignSelectImageLimit2024"*/, v11);
    byte_4BF8CEF = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v24, 0, sizeof(v24));
  eventType = this->fields.eventType;
  if ( eventType == 24 )
  {
    v14 = &StringLiteral_9358/*"MultipleViewSelectImageLimit"*/;
  }
  else
  {
    String = 0LL;
    if ( eventType != 26 )
      goto LABEL_8;
    v14 = &StringLiteral_10815/*"PhotoCampaignSelectImageLimit2024"*/;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v14, 0LL, 0LL);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0LL);
    if ( !Dictionary )
      sub_1C2E388(0LL, v16);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v23,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3335FA4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v24 = v23;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v24,
              (const MethodInfo_34313CC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      value = v24.fields._current.fields.value;
      v18 = System_Int32__TryParse((System_String_o *)v24.fields._current.fields.key, &result[1], 0LL);
      if ( v18 )
      {
        if ( !value )
          sub_1C2E388(v18, v19);
        v20 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                   value,
                                   value->klass->vtable[4].methodPtr);
        if ( System_Int32__TryParse(v20, result, 0LL) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_1C2E388(0LL, v21);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_32CC404 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v24,
      (const MethodInfo_34314EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4BF8CEC & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_SelectImageLimitDialog_OnClickCancel__, v3);
    sub_1C2E12C(&Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, v4);
    byte_4BF8CEC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SelectImageLimitDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2E144(Method_SelectImageLimitDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    this->fields.state = 3;
    v7 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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

  if ( (byte_4BF8CEB & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C2E12C(&Method_SelectImageLimitDialog_OnClickDecide__, v5);
    sub_1C2E12C(&Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, v6);
    byte_4BF8CEB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_SelectImageLimitDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2E144(Method_SelectImageLimitDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2E110(v7, v7[4]);
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
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v18, 0LL);
    if ( !this->fields.imageIdList )
LABEL_12:
      sub_1C2E388(v9, v10);
    v14 = v9;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.imageIdList,
             this->fields.selectedIndex,
             (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
    SelectImageLimitDialog__SetImageLimitCount(this, v14, Item, v16);
    this->fields.state = 3;
    v17 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, 0LL);
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
  const MethodInfo *v17; // x2

  if ( (byte_4BF8CF3 & 1) == 0 )
  {
    sub_1C2E12C(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1C2E12C(&Method_SelectImageLimitDialog_OnClickImageLimit__, v8);
    byte_4BF8CF3 = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v9 = Method_SelectImageLimitDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C2E144(Method_SelectImageLimitDialog_OnClickImageLimit__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C2E110(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    }
    imageIdList = this->fields.imageIdList;
    this->fields.selectedIndex = index;
    if ( !imageIdList
      || (selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager,
          imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    imageIdList,
                                                                    index,
                                                                    (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__),
          !selectImageLimitListViewManager)
      || (SelectImageLimitListViewManager__ModifyItem(selectImageLimitListViewManager, (int32_t)imageIdList, v13),
          v14 = this->fields.selectImageLimitListViewManager,
          v15 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_1C2E378(SelectImageLimitListViewManager_CallbackFunc_TypeInfo),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)this,
            (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
            v16),
          !v14) )
    {
      sub_1C2E388(imageIdList, *(_QWORD *)&kind);
    }
    v14->fields.callbackFunc = v15;
    sub_1C2E0D0(&v14->fields.callbackFunc);
    SelectImageLimitListViewManager__SetMode_32286308(v14, 2, v17);
  }
}


void __fastcall SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4BF8CED & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_15930/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4BF8CED = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43187880(transform, (System_String_o *)StringLiteral_15930/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t v29; // w21
  System_Int32_array *v30; // x22
  const MethodInfo *v31; // x4
  struct SelectImageLimitListViewManager_o *v32; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v33; // x21
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  int32_t v36; // w8
  UILabel_o *v37; // x20
  System_String_o *v38; // x0
  System_String_o *v39; // x21
  UILabel_o *warningLabel; // x20
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v46; // x20
  int32_t v47; // [xsp+Ch] [xbp-44h] BYREF

  v47 = index;
  if ( (byte_4BF8CE8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&eventType);
    sub_1C2E12C(&System_Action_TypeInfo, v12);
    sub_1C2E12C(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v15);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v16);
    sub_1C2E12C(&Method_SelectImageLimitDialog_EndOpen__, v17);
    sub_1C2E12C(&Method_SelectImageLimitDialog_OnClickImageLimit__, v18);
    sub_1C2E12C(&StringLiteral_3800/*"COMMON_CONFIRM_DECIDE"*/, v19);
    sub_1C2E12C(&StringLiteral_3798/*"COMMON_CONFIRM_CANCEL"*/, v20);
    sub_1C2E12C(&StringLiteral_8961/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v21);
    sub_1C2E12C(&StringLiteral_10568/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, v22);
    sub_1C2E12C(&StringLiteral_10569/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/, v23);
    sub_1C2E12C(&StringLiteral_8962/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v24);
    byte_4BF8CE8 = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_1C2E0D0(&this->fields.closeFunc);
  this->fields.eventType = eventType;
  this->fields.SetMaskCollider = setMaskMethod;
  sub_1C2E0D0(&this->fields.SetMaskCollider);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    1,
    (const MethodInfo_2F23EB0 *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v27);
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrSvtEnt;
  if ( !gameObject )
    goto LABEL_26;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v29 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___ToArray(
                                             this->fields.imageIdList,
                                             (const MethodInfo_3650340 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v30 = (System_Int32_array *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___get_Item(
                                             this->fields.imageIdList,
                                             this->fields.selectedIndex,
                                             (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !selectImageLimitListViewManager )
    goto LABEL_26;
  SelectImageLimitListViewManager__CreateList(selectImageLimitListViewManager, v29, v30, (int32_t)gameObject, v31);
  v32 = this->fields.selectImageLimitListViewManager;
  v33 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_1C2E378(SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
    v34);
  if ( !v32 )
    goto LABEL_26;
  v32->fields.callbackFunc = v33;
  sub_1C2E0D0(&v32->fields.callbackFunc);
  SelectImageLimitListViewManager__SetMode_32286308(v32, 2, v35);
  v36 = this->fields.eventType;
  if ( v36 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10568/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      warningLabel = this->fields.warningLabel;
      v42 = (System_String_o *)StringLiteral_10569/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/;
      goto LABEL_19;
    }
LABEL_26:
    sub_1C2E388(gameObject, v26);
  }
  if ( v36 != 24 )
    goto LABEL_21;
  v37 = this->fields.titleLabel;
  v38 = System_Int32__ToString((int32_t)&v47, 0LL);
  v39 = System_String__Concat_63235584((System_String_o *)StringLiteral_8961/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v38, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v39, 0LL);
  if ( !v37 )
    goto LABEL_26;
  UILabel__set_text(v37, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  v41 = System_Int32__ToString((int32_t)&v47, 0LL);
  v42 = System_String__Concat_63235584((System_String_o *)StringLiteral_8962/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v41, 0LL);
LABEL_19:
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v42, 0LL);
  if ( !warningLabel )
    goto LABEL_26;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
LABEL_21:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_26;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_26;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v46 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
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

  if ( (byte_4BF8CEE & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v8);
    sub_1C2E12C(&int_TypeInfo, v9);
    sub_1C2E12C(&JsonManager_TypeInfo, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v12);
    sub_1C2E12C(&StringLiteral_9358/*"MultipleViewSelectImageLimit"*/, v13);
    sub_1C2E12C(&StringLiteral_10815/*"PhotoCampaignSelectImageLimit2024"*/, v14);
    byte_4BF8CEE = 1;
  }
  memset(&v29, 0, 32);
  *(&v28.fields._getEnumeratorRetType + 1) = 0;
  v15 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v15,
    (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_1C2E388(0LL, v16);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v28,
    dicSelectedImageLimit,
    (const MethodInfo_32CC7DC *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v29.fields._dictionary = *(_OWORD *)&v28.fields._dictionary;
  v29.fields._current = v28.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v29,
            (const MethodInfo_3421DEC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v29.fields._current.fields.key);
    *(&v28.fields._getEnumeratorRetType + 1) = (int32_t)v29.fields._current.fields.key;
    v19 = (Il2CppObject *)System_Int32__ToString((int32_t)(&v28.fields._getEnumeratorRetType + 1), 0LL);
    LODWORD(v28.fields._dictionary) = key_high;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v20, v21, v22);
    if ( !v15 )
      sub_1C2E388(v23, v24);
    System_Collections_Generic_Dictionary_object__object___Add(
      v15,
      v19,
      v23,
      (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v29,
    (const MethodInfo_3421EEC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson((Il2CppObject *)v15, 0, 0, 0LL);
  if ( !System_String__IsNullOrEmpty(v25, 0LL) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 24 )
    {
      v27 = &StringLiteral_9358/*"MultipleViewSelectImageLimit"*/;
    }
    else
    {
      if ( eventType != 26 )
      {
LABEL_16:
        UnityEngine_PlayerPrefs__Save(0LL);
        return;
      }
      v27 = &StringLiteral_10815/*"PhotoCampaignSelectImageLimit2024"*/;
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
  struct UserServantEntity_o **p_usrSvtEnt; // x21
  struct UserServantEntity_o *v19; // x8
  int32_t v20; // w20
  int32_t v21; // w22
  __int64 v22; // x23
  __int64 v23; // x24
  int32_t ImageLimitCount; // w23
  int32_t v25; // w23
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  const MethodInfo *v29; // x2
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

  if ( (byte_4BF8CE9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, usrSvtId);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    sub_1C2E12C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1C2E12C(&ImageLimitCount_TypeInfo, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BF8CE9 = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  this->fields.usrSvtEnt = (struct UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                           usrSvtId,
                                                           (const MethodInfo_327D6DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_1C2E0D0(&this->fields.usrSvtEnt);
  Master_object = this->fields.usrSvtEnt;
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (void *)UserServantEntity__getSvtId((UserServantEntity_o *)Master_object, 0LL);
  v19 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  v20 = (int)Master_object;
  v21 = 0;
  while ( 1 )
  {
    v23 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
    v22 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v42.fields.currentCryptoKey = v23;
    *(_QWORD *)&v42.fields.fakeValue = v22;
    if ( v21 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v42, 0LL) )
      break;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v20, v21, 0LL);
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v20,
                              ImageLimitCount,
                              0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_51;
    v25 = (int)Master_object;
    Master_object = (void *)System_Collections_Generic_List_int___Contains(
                              this->fields.imageIdList,
                              (int32_t)Master_object,
                              (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      Master_object = this->fields.imageIdList;
      if ( !Master_object )
        goto LABEL_51;
      v26 = *((_QWORD *)Master_object + 2);
      v27 = Method_System_Collections_Generic_List_int__Add__;
      ++*((_DWORD *)Master_object + 7);
      if ( !v26 )
        goto LABEL_51;
      v28 = *((int *)Master_object + 6);
      if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)Master_object,
          v25,
          *(const MethodInfo_364E888 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        *((_DWORD *)Master_object + 6) = v28 + 1;
        *(_DWORD *)(v26 + 4 * v28 + 32) = v25;
      }
    }
    v19 = *p_usrSvtEnt;
    ++v21;
    if ( !*p_usrSvtEnt )
      goto LABEL_51;
  }
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
LABEL_51:
    sub_1C2E388(Master_object, v17);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_object, 0LL) )
    goto LABEL_57;
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Master_object, 0LL) )
  {
LABEL_57:
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = ServantCostumeMaster__releasedCostumeEntityList(
                      (ServantCostumeMaster_o *)Master_object,
                      v20,
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
          sub_1C2E390(Master_object, v17);
        v33 = *((_QWORD *)v31 + (int)v32 + 4);
        if ( !v33 )
          goto LABEL_51;
        v17 = *(unsigned int *)(v33 + 20);
        if ( (int)v17 >= 1 )
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
              v17,
              *(const MethodInfo_364E888 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            *((_DWORD *)Master_object + 6) = v36 + 1;
            *(_DWORD *)(v34 + 4 * v36 + 32) = v17;
          }
        }
        v30 = *((_DWORD *)v31 + 6);
      }
      while ( (int)++v32 < v30 );
    }
  }
  v37 = SelectImageLimitDialog__GetImageLimitCount(this, v20, v29);
  if ( (v37 & 0x80000000) == 0 )
  {
    v38 = v37;
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v20,
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
                                (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_4BF8CF0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, *(_QWORD *)&svtId);
    byte_4BF8CF0 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_1C2E388(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_32CC3F0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void __fastcall SelectImageLimitDialog___OnClickCancel_b__23_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_bool__int__o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1C2E388(this, method);
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

  if ( (byte_4BF8CF5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_4BF8CF5 = 1;
  }
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList
    || (closeFunc = this->fields.closeFunc,
        imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                  imageIdList,
                                                                  this->fields.selectedIndex,
                                                                  (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__),
        !closeFunc) )
  {
    sub_1C2E388(imageIdList, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    1LL,
    (unsigned int)imageIdList,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}