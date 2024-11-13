void __fastcall SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1189E & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1189E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v5; // x1
  __int64 v6; // x2
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
  System_Collections_Generic_Dictionary_object__int__o *v23; // x19
  __int64 v24; // x1
  bool IsNullOrEmpty; // w21
  System_String_o *v26; // x0
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v28; // x1
  Il2CppObject *key; // x20
  System_String_o *v30; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+0h] [xbp-90h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B1189C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Add__, json, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v15, v16);
    sub_1BCA7E0(&JsonManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v21, v22);
    byte_4B1189C = 1;
  }
  memset(&v36, 0, sizeof(v36));
  result = 0;
  v23 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  json,
                                                                  method,
                                                                  v3);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v23,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  IsNullOrEmpty = System_String__IsNullOrEmpty(json, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v24);
  if ( IsNullOrEmpty )
    v26 = 0LL;
  else
    v26 = json;
  Dictionary = JsonManager__getDictionary(v26, 0LL);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v34,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v36 = v34;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v36,
              (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v36.fields._current.fields.value )
        sub_1BCAA3C(0LL, v28);
      key = v36.fields._current.fields.key;
      v30 = (System_String_o *)((__int64 (*)(void))v36.fields._current.fields.value->klass->vtable[3].method)();
      v31 = System_Int32__TryParse(v30, &result, 0LL);
      if ( v31 )
      {
        if ( !v23 )
          sub_1BCAA3C(v31, v32);
        System_Collections_Generic_Dictionary_object__int___Add(
          v23,
          key,
          result,
          (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v36,
      (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v23;
}


void __fastcall SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11894 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B11894 = 1;
  }
  this->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0

  if ( (byte_4B1189B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5, v6);
    byte_4B1189B = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
    if ( dicSelectedImageLimit )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedImageLimit,
               svtId,
               (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_1BCAA3C(dicSelectedImageLimit, *(_QWORD *)&svtId);
  }
  return -1;
}


void __fastcall SelectImageLimitDialog__Init(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *titleLabel; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_List_int__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_Dictionary_int__int__o *v20; // x20
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11891 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B11891 = 1;
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
    || (v21.fields.r = 1.0,
        v21.fields.g = 1.0,
        v21.fields.b = 1.0,
        v21.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)titleLabel, v21, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  v16 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v13,
                                                    v14,
                                                    v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v16;
  sub_1BCA784(&this->fields.imageIdList, v16);
  this->fields.selectedIndex = 0;
  v20 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v17,
                                                               v18,
                                                               v19);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v20,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v20;
  sub_1BCA784(&this->fields.dicSelectedImageLimit, v20);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectImageLimitDialog__LoadImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t eventType; // w8
  System_String_o *String; // x20
  __int64 *v24; // x8
  __int64 v25; // x1
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v27; // x1
  Il2CppObject *value; // x20
  _BOOL8 v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+30h] [xbp-60h] BYREF
  int32_t result[2]; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_4B11899 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v10, v11);
    sub_1BCA7E0(&JsonManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16, v17);
    sub_1BCA7E0(&StringLiteral_9303/*"MultipleViewSelectImageLimit"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_10749/*"PhotoCampaignSelectImageLimit2024"*/, v20, v21);
    byte_4B11899 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v35, 0, sizeof(v35));
  eventType = this->fields.eventType;
  if ( eventType == 24 )
  {
    v24 = &StringLiteral_9303/*"MultipleViewSelectImageLimit"*/;
  }
  else
  {
    String = 0LL;
    if ( eventType != 26 )
      goto LABEL_8;
    v24 = &StringLiteral_10749/*"PhotoCampaignSelectImageLimit2024"*/;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v24, 0LL, 0LL);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v25);
    Dictionary = JsonManager__getDictionary(String, 0LL);
    if ( !Dictionary )
      sub_1BCAA3C(0LL, v27);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v34,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v35 = v34;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v35,
              (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      value = v35.fields._current.fields.value;
      v29 = System_Int32__TryParse((System_String_o *)v35.fields._current.fields.key, &result[1], 0LL);
      if ( v29 )
      {
        if ( !value )
          sub_1BCAA3C(v29, v30);
        v31 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                   value,
                                   value->klass->vtable[4].methodPtr);
        if ( System_Int32__TryParse(v31, result, 0LL) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_1BCAA3C(0LL, v32);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v35,
      (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B11896 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SelectImageLimitDialog_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, v6, v7);
    byte_4B11896 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_SelectImageLimitDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickCancel__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SelectImageLimitDialog_OnClickCancel__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    this->fields.state = 3;
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickCancel_b__23_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall SelectImageLimitDialog__OnClickDecide(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  struct UserServantEntity_o *usrSvtEnt; // x8
  __int64 v17; // x20
  __int64 v18; // x21
  int32_t v19; // w20
  int32_t Item; // w0
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B11895 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SelectImageLimitDialog_OnClickDecide__, v8, v9);
    sub_1BCA7E0(&Method_SelectImageLimitDialog__OnClickDecide_b__22_0__, v10, v11);
    byte_4B11895 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v12 = Method_SelectImageLimitDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickDecide__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_SelectImageLimitDialog_OnClickDecide__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0LL);
    usrSvtEnt = this->fields.usrSvtEnt;
    if ( !usrSvtEnt )
      goto LABEL_12;
    v18 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    *(_QWORD *)&v26.fields.currentCryptoKey = v18;
    *(_QWORD *)&v26.fields.fakeValue = v17;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
    if ( !this->fields.imageIdList )
LABEL_12:
      sub_1BCAA3C(v14, v15);
    v19 = v14;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.imageIdList,
             this->fields.selectedIndex,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    SelectImageLimitDialog__SetImageLimitCount(this, v19, Item, v21);
    this->fields.state = 3;
    v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Collections_Generic_List_int__o *imageIdList; // x0
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x21
  const MethodInfo *v15; // x2
  struct SelectImageLimitListViewManager_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  SelectImageLimitListViewManager_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2

  if ( (byte_4B1189D & 1) == 0 )
  {
    sub_1BCA7E0(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_SelectImageLimitDialog_OnClickImageLimit__, v9, v10);
    byte_4B1189D = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v11 = Method_SelectImageLimitDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1BCA7F8(Method_SelectImageLimitDialog_OnClickImageLimit__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    }
    imageIdList = this->fields.imageIdList;
    this->fields.selectedIndex = index;
    if ( !imageIdList
      || (selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager,
          imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    imageIdList,
                                                                    index,
                                                                    (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__),
          !selectImageLimitListViewManager)
      || (SelectImageLimitListViewManager__ModifyItem(selectImageLimitListViewManager, (int32_t)imageIdList, v15),
          v16 = this->fields.selectImageLimitListViewManager,
          v20 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                    SelectImageLimitListViewManager_CallbackFunc_TypeInfo,
                                                                    v17,
                                                                    v18,
                                                                    v19),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v20,
            (Il2CppObject *)this,
            (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
            v21),
          !v16) )
    {
      sub_1BCAA3C(imageIdList, *(_QWORD *)&kind);
    }
    v16->fields.callbackFunc = v20;
    sub_1BCA784(&v16->fields.callbackFunc, v20);
    SelectImageLimitListViewManager__SetMode_31857548(v16, 2, v22);
  }
}


void __fastcall SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B11897 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, method, v2);
    byte_4B11897 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15816/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t v42; // w21
  System_Int32_array *v43; // x22
  const MethodInfo *v44; // x4
  struct SelectImageLimitListViewManager_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  SelectImageLimitListViewManager_CallbackFunc_o *v49; // x21
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2
  __int64 v52; // x1
  int32_t v53; // w8
  UILabel_o *v54; // x20
  System_String_o *v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x21
  UILabel_o *warningLabel; // x20
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Action_o *v67; // x20
  int32_t v68; // [xsp+Ch] [xbp-44h] BYREF

  v68 = index;
  if ( (byte_4B11892 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&eventType, usrSvtId);
    sub_1BCA7E0(&System_Action_TypeInfo, v12, v13);
    sub_1BCA7E0(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SelectImageLimitDialog_EndOpen__, v22, v23);
    sub_1BCA7E0(&Method_SelectImageLimitDialog_OnClickImageLimit__, v24, v25);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_8907/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_10503/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_10504/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_8908/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v36, v37);
    byte_4B11892 = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_1BCA784(&this->fields.closeFunc, closeCallback);
  this->fields.eventType = eventType;
  this->fields.SetMaskCollider = setMaskMethod;
  sub_1BCA784(&this->fields.SetMaskCollider, setMaskMethod);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    1,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v40);
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrSvtEnt;
  if ( !gameObject )
    goto LABEL_26;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v42 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___ToArray(
                                             this->fields.imageIdList,
                                             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v43 = (System_Int32_array *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___get_Item(
                                             this->fields.imageIdList,
                                             this->fields.selectedIndex,
                                             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !selectImageLimitListViewManager )
    goto LABEL_26;
  SelectImageLimitListViewManager__CreateList(selectImageLimitListViewManager, v42, v43, (int32_t)gameObject, v44);
  v45 = this->fields.selectImageLimitListViewManager;
  v49 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                            SelectImageLimitListViewManager_CallbackFunc_TypeInfo,
                                                            v46,
                                                            v47,
                                                            v48);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v49,
    (Il2CppObject *)this,
    (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
    v50);
  if ( !v45 )
    goto LABEL_26;
  v45->fields.callbackFunc = v49;
  sub_1BCA784(&v45->fields.callbackFunc, v49);
  SelectImageLimitListViewManager__SetMode_31857548(v45, 2, v51);
  v53 = this->fields.eventType;
  if ( v53 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10503/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      warningLabel = this->fields.warningLabel;
      v60 = (System_String_o *)StringLiteral_10504/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/;
      goto LABEL_19;
    }
LABEL_26:
    sub_1BCAA3C(gameObject, v39);
  }
  if ( v53 != 24 )
    goto LABEL_21;
  v54 = this->fields.titleLabel;
  v55 = System_Int32__ToString((int32_t)&v68, 0LL);
  v57 = System_String__Concat_62401220((System_String_o *)StringLiteral_8907/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v55, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v57, 0LL);
  if ( !v54 )
    goto LABEL_26;
  UILabel__set_text(v54, (System_String_o *)gameObject, 0LL);
  warningLabel = this->fields.warningLabel;
  v59 = System_Int32__ToString((int32_t)&v68, 0LL);
  v60 = System_String__Concat_62401220((System_String_o *)StringLiteral_8908/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v59, 0LL);
LABEL_19:
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v60, 0LL);
  if ( !warningLabel )
    goto LABEL_26;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
LABEL_21:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_26;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_26;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
  v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v64, v65, v66);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0LL);
}


void __fastcall SelectImageLimitDialog__SaveImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
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
  System_Collections_Generic_Dictionary_object__object__o *v29; // x20
  __int64 v30; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  int key_high; // x27^4
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  System_String_o *v37; // x20
  int32_t eventType; // w8
  __int64 *v39; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B11898 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&JsonManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v23, v24);
    sub_1BCA7E0(&StringLiteral_9303/*"MultipleViewSelectImageLimit"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10749/*"PhotoCampaignSelectImageLimit2024"*/, v27, v28);
    byte_4B11898 = 1;
  }
  memset(&v41, 0, 32);
  *(&v40.fields._getEnumeratorRetType + 1) = 0;
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     method,
                                                                     v2,
                                                                     v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_1BCAA3C(0LL, v30);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v40,
    dicSelectedImageLimit,
    (const MethodInfo_31FD64C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v41.fields._dictionary = *(_OWORD *)&v40.fields._dictionary;
  v41.fields._current = v40.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v41,
            (const MethodInfo_3354DA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v41.fields._current.fields.key);
    *(&v40.fields._getEnumeratorRetType + 1) = (int32_t)v41.fields._current.fields.key;
    v33 = (Il2CppObject *)System_Int32__ToString((int32_t)(&v40.fields._getEnumeratorRetType + 1), 0LL);
    LODWORD(v40.fields._dictionary) = key_high;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    if ( !v29 )
      sub_1BCAA3C(v34, v35);
    System_Collections_Generic_Dictionary_object__object___Add(
      v29,
      v33,
      v34,
      (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v41,
    (const MethodInfo_3354EA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v36);
  v37 = JsonManager__toJson((Il2CppObject *)v29, 0, 0, 0LL);
  if ( !System_String__IsNullOrEmpty(v37, 0LL) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 24 )
    {
      v39 = &StringLiteral_9303/*"MultipleViewSelectImageLimit"*/;
    }
    else
    {
      if ( eventType != 26 )
      {
LABEL_16:
        UnityEngine_PlayerPrefs__Save(0LL);
        return;
      }
      v39 = &StringLiteral_10749/*"PhotoCampaignSelectImageLimit2024"*/;
    }
    UnityEngine_PlayerPrefs__SetString((System_String_o *)*v39, v37, 0LL);
    goto LABEL_16;
  }
}


void __fastcall SelectImageLimitDialog__SetImageIdList(
        SelectImageLimitDialog_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
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
  void *Master_object; // x0
  __int64 v29; // x1
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_usrSvtEnt; // x21
  struct UserServantEntity_o *v32; // x8
  int32_t v33; // w20
  int32_t v34; // w22
  __int64 v35; // x23
  __int64 v36; // x24
  int32_t ImageLimitCount; // w23
  int32_t v38; // w23
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  const MethodInfo *v42; // x2
  int v43; // w8
  void *v44; // x21
  unsigned int v45; // w22
  __int64 v46; // x8
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  int32_t v50; // w0
  int32_t v51; // w21
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int v53; // w20
  int32_t v54; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4B11893 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, usrSvtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B11893 = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             usrSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.usrSvtEnt = (struct UserServantEntity_o *)Entity;
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_1BCA784(&this->fields.usrSvtEnt, Entity);
  Master_object = this->fields.usrSvtEnt;
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (void *)UserServantEntity__getSvtId((UserServantEntity_o *)Master_object, 0LL);
  v32 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  v33 = (int)Master_object;
  v34 = 0;
  while ( 1 )
  {
    v36 = *(_QWORD *)&v32->fields.limitCount.fields.currentCryptoKey;
    v35 = *(_QWORD *)&v32->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    *(_QWORD *)&v55.fields.currentCryptoKey = v36;
    *(_QWORD *)&v55.fields.fakeValue = v35;
    if ( v34 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v55, 0LL) )
      break;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v29);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v33, v34, 0LL);
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v33,
                              ImageLimitCount,
                              0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_51;
    v38 = (int)Master_object;
    Master_object = (void *)System_Collections_Generic_List_int___Contains(
                              this->fields.imageIdList,
                              (int32_t)Master_object,
                              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      Master_object = this->fields.imageIdList;
      if ( !Master_object )
        goto LABEL_51;
      v39 = *((_QWORD *)Master_object + 2);
      v40 = Method_System_Collections_Generic_List_int__Add__;
      ++*((_DWORD *)Master_object + 7);
      if ( !v39 )
        goto LABEL_51;
      v41 = *((int *)Master_object + 6);
      if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)Master_object,
          v38,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        *((_DWORD *)Master_object + 6) = v41 + 1;
        *(_DWORD *)(v39 + 4 * v41 + 32) = v38;
      }
    }
    v32 = *p_usrSvtEnt;
    ++v34;
    if ( !*p_usrSvtEnt )
      goto LABEL_51;
  }
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
LABEL_51:
    sub_1BCAA3C(Master_object, v29);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_object, 0LL) )
    goto LABEL_57;
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Master_object, 0LL) )
  {
LABEL_57:
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = ServantCostumeMaster__releasedCostumeEntityList(
                      (ServantCostumeMaster_o *)Master_object,
                      v33,
                      1,
                      0LL);
    if ( !Master_object )
      goto LABEL_51;
    v43 = *((_DWORD *)Master_object + 6);
    v44 = Master_object;
    if ( v43 >= 1 )
    {
      v45 = 0;
      do
      {
        if ( v45 >= v43 )
          sub_1BCAA44(Master_object, v29);
        v46 = *((_QWORD *)v44 + (int)v45 + 4);
        if ( !v46 )
          goto LABEL_51;
        v29 = *(unsigned int *)(v46 + 20);
        if ( (int)v29 >= 1 )
        {
          Master_object = this->fields.imageIdList;
          if ( !Master_object )
            goto LABEL_51;
          v47 = *((_QWORD *)Master_object + 2);
          v48 = Method_System_Collections_Generic_List_int__Add__;
          ++*((_DWORD *)Master_object + 7);
          if ( !v47 )
            goto LABEL_51;
          v49 = *((int *)Master_object + 6);
          if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Master_object,
              v29,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            *((_DWORD *)Master_object + 6) = v49 + 1;
            *(_DWORD *)(v47 + 4 * v49 + 32) = v29;
          }
        }
        v43 = *((_DWORD *)v44 + 6);
      }
      while ( (int)++v45 < v43 );
    }
  }
  v50 = SelectImageLimitDialog__GetImageLimitCount(this, v33, v42);
  if ( (v50 & 0x80000000) == 0 )
  {
    v51 = v50;
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v33,
                              v51,
                              0LL);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_51;
    v53 = (int)Master_object;
    v54 = 0;
    while ( v54 < imageIdList->fields._size )
    {
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                imageIdList,
                                v54,
                                (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( (_DWORD)Master_object == v53 )
      {
        this->fields.selectedIndex = v54;
        return;
      }
      imageIdList = this->fields.imageIdList;
      ++v54;
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

  if ( (byte_4B1189A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&imageLimitCount);
    byte_4B1189A = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_1BCAA3C(0LL, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void __fastcall SelectImageLimitDialog___OnClickCancel_b__23_0(
        SelectImageLimitDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_bool__int__o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  System_Collections_Generic_List_int__o *imageIdList; // x0
  struct System_Action_bool__int__o *closeFunc; // x20

  if ( (byte_4B1189F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, method, v2);
    byte_4B1189F = 1;
  }
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList
    || (closeFunc = this->fields.closeFunc,
        imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                  imageIdList,
                                                                  this->fields.selectedIndex,
                                                                  (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__),
        !closeFunc) )
  {
    sub_1BCAA3C(imageIdList, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))closeFunc->fields.m_target)(
    closeFunc->fields.original_method_info,
    1LL,
    (unsigned int)imageIdList,
    *(_QWORD *)&closeFunc->fields.extra_arg);
}