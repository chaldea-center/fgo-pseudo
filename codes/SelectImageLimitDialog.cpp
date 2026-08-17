void SelectImageLimitDialog___ctor(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B8D7 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B8D7 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v8; // x1
  Il2CppObject *key; // x20
  System_String_o *v10; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596B8D5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_596B8D5 = 1;
  }
  result = 0;
  memset(&v15, 0, sizeof(v15));
  v4 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v4,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( System_String__IsNullOrEmpty(json, 0) )
    json = 0;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5, v6);
  Dictionary = JsonManager__getDictionary(json, 0);
  if ( Dictionary )
  {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v15,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v15,
              (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v15.fields._current.fields.value )
        sub_2213CDC(0, v8);
      key = v15.fields._current.fields.key;
      v10 = (System_String_o *)((__int64 (*)(void))v15.fields._current.fields.value->klass->vtable[3].methodPtr)();
      v11 = System_Int32__TryParse(v10, &result, 0);
      if ( v11 )
      {
        if ( !v4 )
          sub_2213CDC(v11, v12);
        System_Collections_Generic_Dictionary_object__int___Add(
          v4,
          key,
          result,
          (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v15,
      (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)v4;
}


void SelectImageLimitDialog__EndOpen(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  System_Action_T__o *SetMaskCollider; // x0
  const MethodInfo_36FFD8C *v4; // x2

  if ( (byte_596B8CD & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596B8CD = 1;
  }
  SetMaskCollider = (System_Action_T__o *)this->fields.SetMaskCollider;
  v4 = (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___;
  this->fields.state = 2;
  ActionExtensions__Call_bool_(SetMaskCollider, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
int32_t SelectImageLimitDialog__GetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0

  if ( (byte_596B8D4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_596B8D4 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedImageLimit,
         svtId,
         (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
    if ( dicSelectedImageLimit )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedImageLimit,
               svtId,
               (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_2213CDC(dicSelectedImageLimit, *(_QWORD *)&svtId);
  }
  return -1;
}


void SelectImageLimitDialog__Init(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_Dictionary_int__int__c *v11; // x0
  System_Collections_Generic_Dictionary_int__int__o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596B8CA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B8CA = 1;
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
    || (v19.fields.r = 1.0,
        v19.fields.g = 1.0,
        v19.fields.b = 1.0,
        v19.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)titleLabel, v19, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.imageIdList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = System_Collections_Generic_Dictionary_int__int__TypeInfo;
  this->fields.selectedIndex = 0;
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(v11);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedImageLimit = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicSelectedImageLimit,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SelectImageLimitDialog__LoadImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  int32_t eventType; // w8
  System_String_o *String; // x20
  __int64 *v5; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-60h] BYREF
  int32_t result[2]; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_596B8D2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_2213A60(&StringLiteral_11058/*"PhotoCampaignSelectImageLimit2026"*/);
    sub_2213A60(&StringLiteral_9580/*"MultipleViewSelectImageLimit"*/);
    byte_596B8D2 = 1;
  }
  eventType = this->fields.eventType;
  *(_QWORD *)result = 0;
  memset(&v17, 0, sizeof(v17));
  if ( eventType == 24 )
  {
    v5 = &StringLiteral_9580/*"MultipleViewSelectImageLimit"*/;
  }
  else
  {
    String = 0;
    if ( eventType != 26 )
      goto LABEL_8;
    v5 = &StringLiteral_11058/*"PhotoCampaignSelectImageLimit2026"*/;
  }
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)*v5, 0, 0);
LABEL_8:
  if ( !System_String__IsNullOrEmpty(String, 0) )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6, v7);
    Dictionary = JsonManager__getDictionary(String, 0);
    if ( !Dictionary )
      sub_2213CDC(0, v9);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v16,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v17 = v16;
    v16.fields._dictionary = 0;
    *(_QWORD *)&v16.fields._version = &v17;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v17,
              (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      current = v17.fields._current;
      v11 = System_Int32__TryParse((System_String_o *)v17.fields._current.fields.key, &result[1], 0);
      if ( v11 )
      {
        if ( !current.fields.value )
          sub_2213CDC(v11, v12);
        v13 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
                                   current.fields.value,
                                   current.fields.value->klass->vtable[3].method);
        if ( System_Int32__TryParse(v13, result, 0) )
        {
          dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
          if ( !dicSelectedImageLimit )
            sub_2213CDC(0, v14);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedImageLimit,
            result[1],
            result[0],
            (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v17,
      (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void SelectImageLimitDialog__OnClickCancel(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596B8CF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SelectImageLimitDialog_OnClickCancel__);
    sub_2213A60(&Method_SelectImageLimitDialog__OnClickCancel_b__22_0__);
    byte_596B8CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectImageLimitDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SelectImageLimitDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = System_Action_TypeInfo;
    this->fields.state = 3;
    v6 = (System_Action_o *)sub_2213CCC(v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickCancel_b__22_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void SelectImageLimitDialog__OnClickDecide(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *usrSvtEnt; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t v11; // w20
  int32_t Item; // w0
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_596B8CE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SelectImageLimitDialog_OnClickDecide__);
    sub_2213A60(&Method_SelectImageLimitDialog__OnClickDecide_b__21_0__);
    byte_596B8CE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SelectImageLimitDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SelectImageLimitDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    usrSvtEnt = this->fields.usrSvtEnt;
    if ( !usrSvtEnt )
      goto LABEL_12;
    v9 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    *(_QWORD *)&v15.fields.currentCryptoKey = v9;
    *(_QWORD *)&v15.fields.fakeValue = v10;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
    if ( !this->fields.imageIdList )
LABEL_12:
      sub_2213CDC(v5, v6);
    v11 = v5;
    Item = System_Collections_Generic_List_int___get_Item(
             this->fields.imageIdList,
             this->fields.selectedIndex,
             (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
    SelectImageLimitDialog__SetImageLimitCount(this, v11, Item, v13);
    this->fields.state = 3;
    v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_SelectImageLimitDialog__OnClickDecide_b__21_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x2

  if ( (byte_596B8D6 & 1) == 0 )
  {
    sub_2213A60(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&Method_SelectImageLimitDialog_OnClickImageLimit__);
    byte_596B8D6 = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    if ( this->fields.selectedIndex != index )
    {
      v7 = Method_SelectImageLimitDialog_OnClickImageLimit__;
      if ( (*((_BYTE *)Method_SelectImageLimitDialog_OnClickImageLimit__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_SelectImageLimitDialog_OnClickImageLimit__);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    }
    imageIdList = this->fields.imageIdList;
    this->fields.selectedIndex = index;
    if ( !imageIdList
      || (selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager,
          imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                    imageIdList,
                                                                    index,
                                                                    (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__),
          !selectImageLimitListViewManager)
      || (SelectImageLimitListViewManager__ModifyItem(selectImageLimitListViewManager, (int32_t)imageIdList, v11),
          v12 = this->fields.selectImageLimitListViewManager,
          v13 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_2213CCC(SelectImageLimitListViewManager_CallbackFunc_TypeInfo),
          SelectImageLimitListViewManager_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
            v14),
          !v12) )
    {
      sub_2213CDC(imageIdList, *(_QWORD *)&kind);
    }
    v12->fields.callbackFunc = v13;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.callbackFunc,
      (int32_t)v13,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    SelectImageLimitListViewManager__SetMode_40186532(v12, 2, v21);
  }
}


void SelectImageLimitDialog__OnEnable(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596B8D0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/);
    byte_596B8D0 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  SelectImageLimitListViewManager_o *selectImageLimitListViewManager; // x20
  int32_t v28; // w21
  System_Int32_array *v29; // x22
  const MethodInfo *v30; // x4
  struct SelectImageLimitListViewManager_o *v31; // x20
  SelectImageLimitListViewManager_CallbackFunc_o *v32; // x21
  const MethodInfo *v33; // x3
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  const MethodInfo *v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  int32_t v43; // w8
  UILabel_o *v44; // x20
  System_String_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  System_String_o *v48; // x21
  UILabel_o *warningLabel; // x20
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v55; // x20
  int32_t v56; // [xsp+Ch] [xbp-44h] BYREF

  v56 = index;
  if ( (byte_596B8CB & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SelectImageLimitDialog_EndOpen__);
    sub_2213A60(&Method_SelectImageLimitDialog_OnClickImageLimit__);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_9185/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/);
    sub_2213A60(&StringLiteral_10774/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_10775/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/);
    sub_2213A60(&StringLiteral_9186/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/);
    byte_596B8CB = 1;
  }
  SelectImageLimitDialog__Init(this, *(const MethodInfo **)&eventType);
  this->fields.closeFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.eventType = eventType;
  this->fields.SetMaskCollider = setMaskMethod;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SetMaskCollider,
    (int32_t)setMaskMethod,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.SetMaskCollider,
    1,
    (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SelectImageLimitDialog__SetImageIdList(this, usrSvtId, v26);
  gameObject = (UnityEngine_GameObject_o *)this->fields.usrSvtEnt;
  if ( !gameObject )
    goto LABEL_26;
  selectImageLimitListViewManager = this->fields.selectImageLimitListViewManager;
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v28 = (int)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___ToArray(
                                             this->fields.imageIdList,
                                             (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this->fields.imageIdList )
    goto LABEL_26;
  v29 = (System_Int32_array *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_int___get_Item(
                                             this->fields.imageIdList,
                                             this->fields.selectedIndex,
                                             (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !selectImageLimitListViewManager )
    goto LABEL_26;
  SelectImageLimitListViewManager__CreateList(selectImageLimitListViewManager, v28, v29, (int32_t)gameObject, v30);
  v31 = this->fields.selectImageLimitListViewManager;
  v32 = (SelectImageLimitListViewManager_CallbackFunc_o *)sub_2213CCC(SelectImageLimitListViewManager_CallbackFunc_TypeInfo);
  SelectImageLimitListViewManager_CallbackFunc___ctor(
    v32,
    (Il2CppObject *)this,
    (intptr_t)Method_SelectImageLimitDialog_OnClickImageLimit__,
    v33);
  if ( !v31 )
    goto LABEL_26;
  v31->fields.callbackFunc = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->fields.callbackFunc, (int32_t)v32, v34, v35, v36, v37, v38, v39);
  SelectImageLimitListViewManager__SetMode_40186532(v31, 2, v40);
  v43 = this->fields.eventType;
  if ( v43 == 26 )
  {
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10774/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_TITLE"*/, 0);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      warningLabel = this->fields.warningLabel;
      v51 = (System_String_o *)StringLiteral_10775/*"PHOTO_SERVANT_SELECT_IMAGE_DIALOG_WARNING"*/;
      goto LABEL_19;
    }
LABEL_26:
    sub_2213CDC(gameObject, v25);
  }
  if ( v43 != 24 )
    goto LABEL_21;
  v44 = this->fields.titleLabel;
  v45 = System_Int32__ToString((int32_t)&v56, 0);
  v48 = System_String__Concat_75651716((System_String_o *)StringLiteral_9185/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_TITLE_"*/, v45, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v48, 0);
  if ( !v44 )
    goto LABEL_26;
  UILabel__set_text(v44, (System_String_o *)gameObject, 0);
  warningLabel = this->fields.warningLabel;
  v50 = System_Int32__ToString((int32_t)&v56, 0);
  v51 = System_String__Concat_75651716((System_String_o *)StringLiteral_9186/*"MULTIPLE_SERVANT_SELECT_IMAGE_DIALOG_WARNING_"*/, v50, 0);
LABEL_19:
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v51, 0);
  if ( !warningLabel )
    goto LABEL_26;
  UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
LABEL_21:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_26;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_26;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
  v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_SelectImageLimitDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0, 0);
}


void SelectImageLimitDialog__SaveImageLimitData(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  int key_high; // x27^4
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x20
  int32_t eventType; // w8
  __int64 *v14; // x8
  int v15; // [xsp+4h] [xbp-8Ch] BYREF
  __int64 v16; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v17; // [xsp+10h] [xbp-80h]
  int key; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596B8D1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_2213A60(&StringLiteral_11058/*"PhotoCampaignSelectImageLimit2026"*/);
    sub_2213A60(&StringLiteral_9580/*"MultipleViewSelectImageLimit"*/);
    byte_596B8D1 = 1;
  }
  key = 0;
  memset(&v19, 0, 32);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_2213CDC(0, v4);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v19,
    dicSelectedImageLimit,
    (const MethodInfo_3F92FF8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  v16 = 0;
  v17 = &v19;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v19,
            (const MethodInfo_4156B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v19.fields._current.fields.key);
    key = (int)v19.fields._current.fields.key;
    v7 = (Il2CppObject *)System_Int32__ToString((int32_t)&key, 0);
    v15 = key_high;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v15);
    if ( !v3 )
      sub_2213CDC(v8, v9);
    System_Collections_Generic_Dictionary_object__object___Add(
      v3,
      v7,
      v8,
      (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v19,
    (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v10, v11);
  v12 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(v12, 0) )
  {
    eventType = this->fields.eventType;
    if ( eventType == 24 )
    {
      v14 = &StringLiteral_9580/*"MultipleViewSelectImageLimit"*/;
    }
    else
    {
      if ( eventType != 26 )
      {
LABEL_16:
        UnityEngine_PlayerPrefs__Save(0);
        return;
      }
      v14 = &StringLiteral_11058/*"PhotoCampaignSelectImageLimit2026"*/;
    }
    UnityEngine_PlayerPrefs__SetString((System_String_o *)*v14, v12, 0);
    goto LABEL_16;
  }
}


void SelectImageLimitDialog__SetImageIdList(SelectImageLimitDialog_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  void *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_usrSvtEnt; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w20
  int32_t v20; // w22
  __int64 v21; // x23
  __int64 v22; // x24
  __int64 v23; // x2
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

  if ( (byte_596B8CC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B8CC = 1;
  }
  SelectImageLimitDialog__LoadImageLimitData(this, (const MethodInfo *)usrSvtId);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             usrSvtId,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  this->fields.usrSvtEnt = (struct UserServantEntity_o *)Entity;
  p_usrSvtEnt = &this->fields.usrSvtEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrSvtEnt,
    (int32_t)Entity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Master_object = this->fields.usrSvtEnt;
  if ( !Master_object )
    goto LABEL_51;
  Master_object = (void *)UserServantEntity__getSvtId((UserServantEntity_o *)Master_object, 0);
  v18 = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  v19 = (int)Master_object;
  v20 = 0;
  while ( 1 )
  {
    v21 = *(_QWORD *)&v18->fields.limitCount.fields.currentCryptoKey;
    v22 = *(_QWORD *)&v18->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v17);
    *(_QWORD *)&v42.fields.currentCryptoKey = v21;
    *(_QWORD *)&v42.fields.fakeValue = v22;
    if ( v20 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v42, 0) )
      break;
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v8, v23);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v19, v20, 0);
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v19,
                              ImageLimitCount,
                              0);
    if ( !this->fields.imageIdList )
      goto LABEL_51;
    v25 = (int)Master_object;
    Master_object = (void *)System_Collections_Generic_List_int___Contains(
                              this->fields.imageIdList,
                              (int32_t)Master_object,
                              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
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
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        *((_DWORD *)Master_object + 6) = v28 + 1;
        *(_DWORD *)(v26 + 4 * v28 + 32) = v25;
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
    sub_2213CDC(Master_object, v8);
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Master_object, 0) )
    goto LABEL_57;
  Master_object = *p_usrSvtEnt;
  if ( !*p_usrSvtEnt )
    goto LABEL_51;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Master_object, 0) )
  {
LABEL_57:
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = ServantCostumeMaster__releasedCostumeEntityList(
                      (ServantCostumeMaster_o *)Master_object,
                      v19,
                      1,
                      0,
                      0);
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
          sub_2213CE4(Master_object);
        v33 = *((_QWORD *)v31 + (int)v32 + 4);
        if ( !v33 )
          goto LABEL_51;
        v8 = *(unsigned int *)(v33 + 20);
        if ( (int)v8 >= 1 )
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
              v8,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            *((_DWORD *)Master_object + 6) = v36 + 1;
            *(_DWORD *)(v34 + 4 * v36 + 32) = v8;
          }
        }
        v30 = *((_DWORD *)v31 + 6);
      }
      while ( (int)++v32 < v30 );
    }
  }
  v37 = SelectImageLimitDialog__GetImageLimitCount(this, v19, v29);
  if ( (v37 & 0x80000000) == 0 )
  {
    v38 = v37;
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = DataManager__GetMasterData_object_(
                      (DataManager_o *)Master_object,
                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Master_object )
      goto LABEL_51;
    Master_object = (void *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v19,
                              v38,
                              0);
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
                                (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
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
void SelectImageLimitDialog__SetImageLimitCount(
        SelectImageLimitDialog_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedImageLimit; // x0
  const MethodInfo *v8; // x1

  if ( (byte_596B8D3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_596B8D3 = 1;
  }
  dicSelectedImageLimit = this->fields.dicSelectedImageLimit;
  if ( !dicSelectedImageLimit )
    sub_2213CDC(0, *(_QWORD *)&svtId);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedImageLimit,
    svtId,
    imageLimitCount,
    (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  SelectImageLimitDialog__SaveImageLimitData(this, v8);
}


void SelectImageLimitDialog___OnClickCancel_b__22_0(SelectImageLimitDialog_o *this, const MethodInfo *method)
{
  struct System_Action_bool__int__o *closeFunc; // x8

  closeFunc = this->fields.closeFunc;
  if ( !closeFunc )
    sub_2213CDC(this, method);
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

  if ( (byte_596B8D8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_596B8D8 = 1;
  }
  imageIdList = this->fields.imageIdList;
  if ( !imageIdList
    || (closeFunc = this->fields.closeFunc,
        imageIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                  imageIdList,
                                                                  this->fields.selectedIndex,
                                                                  (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__),
        !closeFunc) )
  {
    sub_2213CDC(imageIdList, method);
  }
  ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))closeFunc->fields.invoke_impl)(
    closeFunc->fields.method_code,
    1,
    (unsigned int)imageIdList,
    closeFunc->fields.method);
}