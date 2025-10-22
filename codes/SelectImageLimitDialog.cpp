void SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C520CA & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C520CA = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectImageLimitDialog__Close(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
  BaseDialog__Close((BaseDialog_o *)this, 0, 0);
}


System_Collections_Generic_Dictionary_string__int__o *SelectImageLimitDialog__ConvertJsonToSelectImageLimitData(
        SelectImageLimitDialog_o *this,
        System_String_o *json,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v4; // x19
  bool IsNullOrEmpty; // w21
  System_String_o *v6; // x0
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v8; // x1
  Il2CppObject *key; // x20
  System_String_o *v10; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+0h] [xbp-90h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4C520C8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4C520C8 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  result = 0;
  v4 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v4,
    (const MethodInfo_346C0FC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  IsNullOrEmpty = System_String__IsNullOrEmpty(json, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  if ( IsNullOrEmpty )
    v6 = 0;
  else
    v6 = json;
  Dictionary = JsonManager__getDictionary(v6, 0);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v14,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3475C10 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v16 = v14;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v16,
              (const MethodInfo_3572518 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v16.fields._current.fields.value )
        sub_1C3E7C0(0, v8);
      key = v16.fields._current.fields.key;
      v10 = (System_String_o *)((__int64 (*)(void))v16.fields._current.fields.value->klass->vtable[3].methodPtr)();
      v11 = System_Int32__TryParse(v10, &result, 0);
      if ( v11 )
      {
        if ( !v4 )
          sub_1C3E7C0(v11, v12);
        System_Collections_Generic_Dictionary_object__int___Add(
          v4,
          key,
          result,
          (const MethodInfo_346CAB0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v16,
      (const MethodInfo_3572638 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v4;
}


void SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C520C0 & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_bool___);
    byte_4C520C0 = 1;
  }
  this->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    0,
    (const MethodInfo_3046270 *)Method_ActionExtensions_Call_bool___);
}


// local variable allocation has failed, the output may be wrong!
int32_t SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0

  if ( (byte_4C520C7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4C520C7 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_3403B70 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
    if ( dicSelectedImageLimit )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedImageLimit,
               svtId,
               (const MethodInfo_34038E8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_1C3E7C0(dicSelectedImageLimit, *(_QWORD *)&svtId);
  }
  return -1;
}


void SelectImageLimitDialog__Init(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_Dictionary_int__int__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C520BD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C520BD = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
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
        UIWidget__set_color((UIWidget_o *)titleLabel, v10, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_1C3E7C0(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.imageIdList, (int32_t)v4, v5, v6);
  this->fields.selectedIndex = 0;
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dicSelectedImageLimit, (int32_t)v7, v8, v9);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SelectImageLimitDialog__LoadImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int32_t eventType; // w8
  System_String_o *String; // x20
  __int64 *v5; // x8
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+30h] [xbp-60h] BYREF
  int32_t result[2]; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_4C520C5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C3E564(&StringLiteral_10618/*"PhotoCampaignSelectImageLimit2025"*/);
    sub_1C3E564(&StringLiteral_9198/*"MultipleViewSelectImageLimit"*/);
    byte_4C520C5 = 1;
  }
  *(_QWORD *)result = 0;
  memset(&v15, 0, sizeof(v15));
  eventType = this->fields.eventType;
  if ( eventType == 24 )
  {
    v5 = &StringLiteral_9198/*"MultipleViewSelectImageLimit"*/;
  }
  else
  {
    String = 0;
    if ( eventType != 26 )
      goto LABEL_8;
    v5 = &StringLiteral_10618/*"PhotoCampaignSelectImageLimit2025"*/;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v5, 0, 0);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0);
    if ( !Dictionary )
      sub_1C3E7C0(0, v7);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v14,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3475C10 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v15 = v14;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v15,
              (const MethodInfo_3572518 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      current = v15.fields._current;
      v9 = System_Int32__TryParse((System_String_o *)v15.fields._current.fields.key, &result[1], 0);
      if ( v9 )
      {
        if ( !current.fields.value )
          sub_1C3E7C0(v9, v10);
        v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
                                   current.fields.value,
                                   current.fields.value->klass->vtable[3].method);
        if ( System_Int32__TryParse(v11, result, 0) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_1C3E7C0(0, v12);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_3403984 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v15,
      (const MethodInfo_3572638 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C520C2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SelectImageLimitDialog_OnClickCancel__);
    sub_1C3E564(&Method_SelectImageLimitDialog__OnClickCancel_b__22_0__);
    byte_4C520C2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectImageLimitDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_SelectImageLimitDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.state = 3;
    v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickCancel_b__22_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void SelectImageLimitDialog__OnClickDecide(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *usrSvtEnt; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w20
  int32_t Item; // w0
  const MethodInfo *v12; // x3
  System_Action_o *v13; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C520C1 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SelectImageLimitDialog_OnClickDecide__);
    sub_1C3E564(&Method_SelectImageLimitDialog__OnClickDecide_b__21_0__);
    byte_4C520C1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectImageLimitDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_SelectImageLimitDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    usrSvtEnt = this->fields.usrSvtEnt;
    if ( !usrSvtEnt )
      goto LABEL_12;
    v9 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v14, 0);
    if ( !this->fields.imageIdList )
LABEL_12:
      sub_1C3E7C0(v5, v6);
    v10 = v5;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.imageIdList,
             this->fields.selectedIndex,
             (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__);
    SelectImageLimitDialog__SetImageLimitCount(this, v10, Item, v12);
    this->fields.state = 3;
    v13 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickDecide_b__21_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SelectImageLimitDialog__OnClickImageLimit(
        SelectImageLimitDialog_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Collections_Generic_List_int__o *imageIdList; // x0
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x21
  const MethodInfo *v11; // x2
  struct SelectImageLimitListViewManager_o *v12; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4C520C9 & 1) == 0 )
  {
    sub_1C3E564(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C3E564(&Method_SelectImageLimitDialog_OnClickImageLimit__);
    byte_4C520C9 = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v7 = Method_SelectImageLimitDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C3E57C(Method_SelectImageLimitDialog_OnClickImageLimit__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C3E548(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    }
    imageIdList = this->fields.imageIdList;
    this->fields.selectedIndex = index;
    if ( !imageIdList
      || (selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager,
          imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    imageIdList,
                                                                    index,
                                                                    (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__),
          !selectImageLimitListViewManager)
      || (SelectImageLimitListViewManager__ModifyItem(selectImageLimitListViewManager, (int32_t)imageIdList, v11),
          v12 = this->fields.selectImageLimitListViewManager,
          v13 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_1C3E7B0(SelectImageLimitListViewManager_CallbackFunc_TypeInfo),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
            v14),
          !v12) )
    {
      sub_1C3E7C0(imageIdList, *(_QWORD *)&kind);
    }
    v12->fields.callbackFunc = v13;
    sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.callbackFunc, (int32_t)v13, v15, v16);
    SelectImageLimitListViewManager__SetMode_33520172(v12, 2, v17);
  }
}


void SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C520C3 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15659/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4C520C3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(transform, (System_String_o *)StringLiteral_15659/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SelectImageLimitDialog__OpenImageLimit(
        SelectImageLimitDialog_o *this,
        int32_t eventType,
        int64_t usrSvtId,
        System_Action_bool__o *setMaskMethod,
        System_Action_bool__int__o *closeCallback,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t v20; // w21
  System_Int32_array *v21; // x22
  const MethodInfo *v22; // x4
  struct SelectImageLimitListViewManager_o *v23; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  int32_t v29; // w8
  UILabel_o *v30; // x20
  System_String_o *v31; // x0
  System_String_o *v32; // x21
  UILabel_o *warningLabel; // x20
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v39; // x20
  int32_t v40; // [xsp+Ch] [xbp-44h] BYREF

  v40 = index;
  if ( (byte_4C520BE & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_bool___);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SelectImageLimitDialog_EndOpen__);
    sub_1C3E564(&Method_SelectImageLimitDialog_OnClickImageLimit__);
    sub_1C3E564(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C3E564(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C3E564(&StringLiteral_8820/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/);
    sub_1C3E564(&StringLiteral_10360/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/);
    sub_1C3E564(&StringLiteral_10361/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/);
    sub_1C3E564(&StringLiteral_8821/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/);
    byte_4C520BE = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v12, v13);
  this->fields.eventType = eventType;
  this->fields.SetMaskCollider = setMaskMethod;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.SetMaskCollider, (int32_t)setMaskMethod, v14, v15);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    1,
    (const MethodInfo_3046270 *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v18);
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrSvtEnt;
  if ( !gameObject )
    goto LABEL_26;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v20 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___ToArray(
                                             this->fields.imageIdList,
                                             (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v21 = (System_Int32_array *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___get_Item(
                                             this->fields.imageIdList,
                                             this->fields.selectedIndex,
                                             (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !selectImageLimitListViewManager )
    goto LABEL_26;
  SelectImageLimitListViewManager__CreateList(selectImageLimitListViewManager, v20, v21, (int32_t)gameObject, v22);
  v23 = this->fields.selectImageLimitListViewManager;
  v24 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_1C3E7B0(SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
    v25);
  if ( !v23 )
    goto LABEL_26;
  v23->fields.callbackFunc = v24;
  sub_1C3E508((CGThumbnailListItem_o *)&v23->fields.callbackFunc, (int32_t)v24, v26, v27);
  SelectImageLimitListViewManager__SetMode_33520172(v23, 2, v28);
  v29 = this->fields.eventType;
  if ( v29 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10360/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, 0);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      warningLabel = this->fields.warningLabel;
      v35 = (System_String_o *)StringLiteral_10361/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/;
      goto LABEL_19;
    }
LABEL_26:
    sub_1C3E7C0(gameObject, v17);
  }
  if ( v29 != 24 )
    goto LABEL_21;
  v30 = this->fields.titleLabel;
  v31 = System_Int32__ToString((int32_t)&v40, 0);
  v32 = System_String__Concat_63636468((System_String_o *)StringLiteral_8820/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v31, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v32, 0);
  if ( !v30 )
    goto LABEL_26;
  UILabel__set_text(v30, (System_String_o *)gameObject, 0);
  warningLabel = this->fields.warningLabel;
  v34 = System_Int32__ToString((int32_t)&v40, 0);
  v35 = System_String__Concat_63636468((System_String_o *)StringLiteral_8821/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v34, 0);
LABEL_19:
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v35, 0);
  if ( !warningLabel )
    goto LABEL_26;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
LABEL_21:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_26;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_26;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
  v39 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0, 0);
}


void SelectImageLimitDialog__SaveImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  int key_high; // x27^4
  Il2CppObject *v7; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  int32_t eventType; // w8
  __int64 *v18; // x8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C520C4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C3E564(&StringLiteral_10618/*"PhotoCampaignSelectImageLimit2025"*/);
    sub_1C3E564(&StringLiteral_9198/*"MultipleViewSelectImageLimit"*/);
    byte_4C520C4 = 1;
  }
  memset(&v20, 0, 32);
  *(&v19.fields._getEnumeratorRetType + 1) = 0;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v19,
    dicSelectedImageLimit,
    (const MethodInfo_3403D5C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v20.fields._dictionary = *(_OWORD *)&v19.fields._dictionary;
  v20.fields._current = v19.fields._current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v20,
            (const MethodInfo_3561EB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v20.fields._current.fields.key);
    *(&v19.fields._getEnumeratorRetType + 1) = (int32_t)v20.fields._current.fields.key;
    v7 = (Il2CppObject *)System_Int32__ToString((int32_t)(&v19.fields._getEnumeratorRetType + 1), 0);
    LODWORD(v19.fields._dictionary) = key_high;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v8, v9, v10, v11, v12, v13);
    if ( !v3 )
      sub_1C3E7C0(v14, v15);
    System_Collections_Generic_Dictionary_object__object___Add(
      v3,
      v7,
      v14,
      (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v20,
    (const MethodInfo_3561FB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v16 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(v16, 0) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 24 )
    {
      v18 = &StringLiteral_9198/*"MultipleViewSelectImageLimit"*/;
    }
    else
    {
      if ( eventType != 26 )
      {
LABEL_16:
        UnityEngine_PlayerPrefs__Save(0);
        return;
      }
      v18 = &StringLiteral_10618/*"PhotoCampaignSelectImageLimit2025"*/;
    }
    UnityEngine_PlayerPrefs__SetString((System_String_o *)*v18, v16, 0);
    goto LABEL_16;
  }
}


void SelectImageLimitDialog__SetImageIdList(SelectImageLimitDialog_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_usrSvtEnt; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UserServantEntity_o *v11; // x8
  int32_t v12; // w20
  int32_t v13; // w22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t ImageLimitCount; // w23
  int32_t v17; // w23
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  const MethodInfo *v21; // x2
  int v22; // w8
  void *v23; // x21
  unsigned int v24; // w22
  __int64 v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  int32_t v29; // w0
  int32_t v30; // w21
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int v32; // w20
  int32_t v33; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4C520BF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&ImageLimitCount_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C520BF = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             usrSvtId,
             (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.usrSvtEnt = (struct UserServantEntity_o *)Entity;
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.usrSvtEnt, (int32_t)Entity, v9, v10);
  Master_object = this->fields.usrSvtEnt;
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (void *)UserServantEntity__getSvtId((UserServantEntity_o *)Master_object, 0);
  v11 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  v12 = (int)Master_object;
  v13 = 0;
  while ( 1 )
  {
    v15 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
    v14 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v34.fields.currentCryptoKey = v15;
    *(_QWORD *)&v34.fields.fakeValue = v14;
    if ( v13 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v34, 0) )
      break;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v12, v13, 0);
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v12,
                              ImageLimitCount,
                              0);
    if ( !this->fields.imageIdList )
      goto LABEL_51;
    v17 = (int)Master_object;
    Master_object = (void *)System_Collections_Generic_List_int___Contains(
                              this->fields.imageIdList,
                              (int32_t)Master_object,
                              (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      Master_object = this->fields.imageIdList;
      if ( !Master_object )
        goto LABEL_51;
      v18 = *((_QWORD *)Master_object + 2);
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++*((_DWORD *)Master_object + 7);
      if ( !v18 )
        goto LABEL_51;
      v20 = *((int *)Master_object + 6);
      if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)Master_object,
          v17,
          *(const MethodInfo_379843C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        *((_DWORD *)Master_object + 6) = v20 + 1;
        *(_DWORD *)(v18 + 4 * v20 + 32) = v17;
      }
    }
    v11 = *p_usrSvtEnt;
    ++v13;
    if ( !*p_usrSvtEnt )
      goto LABEL_51;
  }
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
LABEL_51:
    sub_1C3E7C0(Master_object, v6);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_object, 0) )
    goto LABEL_57;
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Master_object, 0) )
  {
LABEL_57:
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = ServantCostumeMaster__releasedCostumeEntityList((ServantCostumeMaster_o *)Master_object, v12, 1, 0);
    if ( !Master_object )
      goto LABEL_51;
    v22 = *((_DWORD *)Master_object + 6);
    v23 = Master_object;
    if ( v22 >= 1 )
    {
      v24 = 0;
      do
      {
        if ( v24 >= v22 )
          sub_1C3E7C8(Master_object, v6);
        v25 = *((_QWORD *)v23 + (int)v24 + 4);
        if ( !v25 )
          goto LABEL_51;
        v6 = *(unsigned int *)(v25 + 20);
        if ( (int)v6 >= 1 )
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
              v6,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            *((_DWORD *)Master_object + 6) = v28 + 1;
            *(_DWORD *)(v26 + 4 * v28 + 32) = v6;
          }
        }
        v22 = *((_DWORD *)v23 + 6);
      }
      while ( (int)++v24 < v22 );
    }
  }
  v29 = SelectImageLimitDialog__GetImageLimitCount(this, v12, v21);
  if ( (v29 & 0x80000000) == 0 )
  {
    v30 = v29;
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v12,
                              v30,
                              0);
    imageIdList = this->fields.imageIdList;
    if ( !imageIdList )
      goto LABEL_51;
    v32 = (int)Master_object;
    v33 = 0;
    while ( v33 < imageIdList->fields._size )
    {
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                imageIdList,
                                v33,
                                (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( (_DWORD)Master_object == v32 )
      {
        this->fields.selectedIndex = v33;
        return;
      }
      imageIdList = this->fields.imageIdList;
      ++v33;
      if ( !imageIdList )
        goto LABEL_51;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SelectImageLimitDialog__SetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C520C6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_4C520C6 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_1C3E7C0(0, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_3403970 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void SelectImageLimitDialog___OnClickCancel_b__22_0(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  struct System_Action_bool__int__o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_1C3E7C0(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))closeFunc->fields.invoke_impl)(
    closeFunc->fields.method_code,
    0,
    0xFFFFFFFFLL,
    closeFunc->fields.method);
}


void SelectImageLimitDialog___OnClickDecide_b__21_0(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *imageIdList; // x0
  struct System_Action_bool__int__o *closeFunc; // x20

  if ( (byte_4C520CB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C520CB = 1;
  }
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList
    || (closeFunc = this->fields.closeFunc,
        imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                  imageIdList,
                                                                  this->fields.selectedIndex,
                                                                  (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__),
        !closeFunc) )
  {
    sub_1C3E7C0(imageIdList, method);
  }
  ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))closeFunc->fields.invoke_impl)(
    closeFunc->fields.method_code,
    1,
    (unsigned int)imageIdList,
    closeFunc->fields.method);
}