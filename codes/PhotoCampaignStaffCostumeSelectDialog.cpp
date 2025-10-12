void PhotoCampaignStaffCostumeSelectDialog___ctor(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C33007 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C33007 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int32_t PhotoCampaignStaffCostumeSelectDialog__GetSelectedStaffCostumeIdx(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        int32_t staffId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0

  if ( (byte_4C33005 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4C33005 = 1;
  }
  dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
  if ( !dicSelectedStaffCostume )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedStaffCostume,
         staffId,
         (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
    if ( dicSelectedStaffCostume )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedStaffCostume,
               staffId,
               (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_1C32E7C(dicSelectedStaffCostume);
  }
  return -1;
}


void PhotoCampaignStaffCostumeSelectDialog__Init(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *photoCampaignAtlas; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__int__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C32FFE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    byte_4C32FFE = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0),
        (titleLabel = this->fields.decideButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0),
        (titleLabel = this->fields.cancelButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0),
        (titleLabel = (UILabel_o *)this->fields.staffCostumeSelectListViewManager) == 0) )
  {
LABEL_13:
    sub_1C32E7C(titleLabel);
  }
  StaffCostumeSelectListViewManager__DestroyList((StaffCostumeSelectListViewManager_o *)titleLabel, 0);
  photoCampaignAtlas = (UnityEngine_Object_o *)this->fields.photoCampaignAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(photoCampaignAtlas, 0, 0) )
  {
    this->fields.photoCampaignAtlas = atlas;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.photoCampaignAtlas, (int32_t)atlas, v7, v8);
  }
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedStaffCostume = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dicSelectedStaffCostume, (int32_t)v9, v10, v11);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PhotoCampaignStaffCostumeSelectDialog__LoadSelectedStaffCostume(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  System_String_o *String; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  _BOOL8 v6; // x0
  System_String_o *v7; // x0
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v9; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v10; // [xsp+30h] [xbp-60h] BYREF
  int32_t result[2]; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_4C33004 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C32C20(&StringLiteral_10624/*"PhotoStaffCostumeSelectIndex2025"*/);
    byte_4C33004 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  *(_QWORD *)result = 0;
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)StringLiteral_10624/*"PhotoStaffCostumeSelectIndex2025"*/, 0, 0);
  if ( !System_String__IsNullOrEmpty(String, 0) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0);
    if ( !Dictionary )
      sub_1C32E7C(0);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v9,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v10 = v9;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v10,
              (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      current = v10.fields._current;
      v6 = System_Int32__TryParse((System_String_o *)v10.fields._current.fields.key, &result[1], 0);
      if ( v6 )
      {
        if ( !current.fields.value )
          sub_1C32E7C(v6);
        v7 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
                                  current.fields.value,
                                  current.fields.value->klass->vtable[3].method);
        if ( System_Int32__TryParse(v7, result, 0) )
        {
          dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
          if ( !dicSelectedStaffCostume )
            sub_1C32E7C(0);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedStaffCostume,
            result[1],
            result[0],
            (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v10,
      (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void PhotoCampaignStaffCostumeSelectDialog__OnClickCancel(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C33001 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__);
    sub_1C32C20(&Method_PhotoCampaignStaffCostumeSelectDialog__OnClickCancel_b__13_0__);
    byte_4C33001 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PhotoCampaignStaffCostumeSelectDialog__OnClickCancel_b__13_0__,
      0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void PhotoCampaignStaffCostumeSelectDialog__OnClickDecide(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C33000 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__);
    sub_1C32C20(&Method_PhotoCampaignStaffCostumeSelectDialog__OnClickDecide_b__12_0__);
    byte_4C33000 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PhotoCampaignStaffCostumeSelectDialog__OnClickDecide_b__12_0__,
      0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void PhotoCampaignStaffCostumeSelectDialog__OnClickSelectListViewItem(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        int32_t selectStaffPhotoCostumeIdx,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  StaffCostumeSelectListViewManager_o *staffCostumeSelectListViewManager; // x0
  StaffCostumeSelectListViewManager_o *v8; // x20
  System_Action_int__o *v9; // x21

  if ( (byte_4C33006 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__);
    byte_4C33006 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    if ( this->fields.currentSelectStaffPhotoCostumeIdx != selectStaffPhotoCostumeIdx )
    {
      v5 = Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__;
      if ( (*((_BYTE *)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C32C38(Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    }
    staffCostumeSelectListViewManager = this->fields.staffCostumeSelectListViewManager;
    this->fields.currentSelectStaffPhotoCostumeIdx = selectStaffPhotoCostumeIdx;
    if ( !staffCostumeSelectListViewManager
      || (StaffCostumeSelectListViewManager__ModifyItem(
            staffCostumeSelectListViewManager,
            selectStaffPhotoCostumeIdx,
            0),
          v8 = this->fields.staffCostumeSelectListViewManager,
          v9 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo),
          System_Action_int____ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__,
            0),
          !v8) )
    {
      sub_1C32E7C(staffCostumeSelectListViewManager);
    }
    StaffCostumeSelectListViewManager__SetMode(v8, 2, v9, 0);
  }
}


void PhotoCampaignStaffCostumeSelectDialog__OnEnable(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C33002 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15647/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4C33002 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_15647/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoCampaignStaffCostumeSelectDialog__Open(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        System_Action_bool__int__o *closeCallback,
        int32_t staffPhotoId,
        int32_t baseStaffCostumeIdx,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o *staffPhotoCostumeEntityList,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  int32_t SelectedStaffCostumeIdx; // w0
  int32_t v16; // w8
  PhotoCampaignStaffCostumeSelectDialog___c_c *v17; // x0
  System_Func_object__int__o *_9__11_0; // x21
  Il2CppObject *v19; // x22
  struct PhotoCampaignStaffCostumeSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  UnityEngine_GameObject_o *object; // x0
  StaffCostumeSelectListViewManager_o *staffCostumeSelectListViewManager; // x20
  System_Action_int__o *v26; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20

  if ( (byte_4C32FFF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_StaffPhotoCostumeEntity__int___);
    sub_1C32C20(&System_Func_StaffPhotoCostumeEntity__int__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__);
    sub_1C32C20(&Method_PhotoCampaignStaffCostumeSelectDialog___c__Open_b__11_0__);
    sub_1C32C20(&PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo);
    sub_1C32C20(&StringLiteral_12297/*"STAFF_COSTUME_SELECT_DIALOG_WARNING"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_12296/*"STAFF_COSTUME_SELECT_DIALOG_TITLE"*/);
    byte_4C32FFF = 1;
  }
  PhotoCampaignStaffCostumeSelectDialog__Init(this, 0, *(const MethodInfo **)&staffPhotoId);
  this->fields.closeFunc = closeCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v11, v12);
  this->fields.currentSelectStaffPhotoId = staffPhotoId;
  PhotoCampaignStaffCostumeSelectDialog__LoadSelectedStaffCostume(this, v13);
  SelectedStaffCostumeIdx = PhotoCampaignStaffCostumeSelectDialog__GetSelectedStaffCostumeIdx(this, staffPhotoId, v14);
  if ( baseStaffCostumeIdx >= 0 )
    v16 = baseStaffCostumeIdx;
  else
    v16 = SelectedStaffCostumeIdx;
  this->fields.currentSelectStaffPhotoCostumeIdx = v16;
  if ( v16 < 0 )
  {
    v17 = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo;
    if ( !PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo);
      v17 = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__int__o *)v17->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__11_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_StaffPhotoCostumeEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__11_0,
        v19,
        Method_PhotoCampaignStaffCostumeSelectDialog___c__Open_b__11_0__,
        0);
      static_fields = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_StaffPhotoCostumeEntity__int__o *)_9__11_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v21, v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)staffPhotoCostumeEntityList,
                                                                 (System_Func_TSource__TKey__o *)_9__11_0,
                                                                 (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_StaffPhotoCostumeEntity__int___);
    object = (UnityEngine_GameObject_o *)System_Linq_Enumerable__First_object_(
                                           v23,
                                           (const MethodInfo_3103CC8 *)Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity___);
    if ( !object )
LABEL_25:
      sub_1C32E7C(object);
    this->fields.currentSelectStaffPhotoCostumeIdx = HIDWORD(object->fields.m_CachedPtr);
  }
  object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !object )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(object, 1, 0);
  object = (UnityEngine_GameObject_o *)this->fields.staffCostumeSelectListViewManager;
  if ( !object )
    goto LABEL_25;
  StaffCostumeSelectListViewManager__CreateList(
    (StaffCostumeSelectListViewManager_o *)object,
    staffPhotoCostumeEntityList,
    this->fields.currentSelectStaffPhotoCostumeIdx,
    this->fields.photoCampaignAtlas,
    0);
  staffCostumeSelectListViewManager = this->fields.staffCostumeSelectListViewManager;
  v26 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v26,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__,
    0);
  if ( !staffCostumeSelectListViewManager )
    goto LABEL_25;
  StaffCostumeSelectListViewManager__SetMode(staffCostumeSelectListViewManager, 2, v26, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12296/*"STAFF_COSTUME_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, (System_String_o *)object, 0);
  warningLabel = this->fields.warningLabel;
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12297/*"STAFF_COSTUME_SELECT_DIALOG_WARNING"*/, 0);
  if ( !warningLabel )
    goto LABEL_25;
  UILabel__set_text(warningLabel, (System_String_o *)object, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_25;
  UILabel__set_text(decideButtonLabel, (System_String_o *)object, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_25;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)object, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void PhotoCampaignStaffCostumeSelectDialog__SaveSelectedStaffCostume(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x19
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0
  int key_high; // x26^4
  Il2CppObject *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  System_String_o *v14; // x19
  _OWORD v15[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+20h] [xbp-70h] BYREF
  int key; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4C33003 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1C32C20(&StringLiteral_10624/*"PhotoStaffCostumeSelectIndex2025"*/);
    byte_4C33003 = 1;
  }
  memset(&v16, 0, 32);
  key = 0;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
  if ( !dicSelectedStaffCostume )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v15,
    dicSelectedStaffCostume,
    (const MethodInfo_33E763C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v16.fields._dictionary = v15[0];
  v16.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v15[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v16,
            (const MethodInfo_3545214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v16.fields._current.fields.key);
    key = (int)v16.fields._current.fields.key;
    v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&key, 0);
    LODWORD(v15[0]) = key_high;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v15, v7, v8, v9, v10, v11, v12);
    if ( !v3 )
      sub_1C32E7C(v13);
    System_Collections_Generic_Dictionary_object__object___Add(
      v3,
      v6,
      v13,
      (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v16,
    (const MethodInfo_3545314 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(v14, 0) )
  {
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10624/*"PhotoStaffCostumeSelectIndex2025"*/, v14, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void PhotoCampaignStaffCostumeSelectDialog___OnClickCancel_b__13_0(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C33009 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_bool__int___);
    byte_4C33009 = 1;
  }
  ActionExtensions__Call_bool__int_(
    (System_Action_T1__T2__o *)this->fields.closeFunc,
    0,
    -1,
    (const MethodInfo_3029F1C *)Method_ActionExtensions_Call_bool__int___);
}


void PhotoCampaignStaffCostumeSelectDialog___OnClickDecide_b__12_0(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C33008 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_bool__int___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_4C33008 = 1;
  }
  dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
  if ( !dicSelectedStaffCostume )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedStaffCostume,
    this->fields.currentSelectStaffPhotoId,
    this->fields.currentSelectStaffPhotoCostumeIdx,
    (const MethodInfo_33E7250 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  PhotoCampaignStaffCostumeSelectDialog__SaveSelectedStaffCostume(this, v4);
  ActionExtensions__Call_bool__int_(
    (System_Action_T1__T2__o *)this->fields.closeFunc,
    1,
    this->fields.currentSelectStaffPhotoCostumeIdx,
    (const MethodInfo_3029F1C *)Method_ActionExtensions_Call_bool__int___);
}


void PhotoCampaignStaffCostumeSelectDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3300A & 1) == 0 )
  {
    sub_1C32C20(&PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo);
    byte_4C3300A = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->static_fields->__9 = (struct PhotoCampaignStaffCostumeSelectDialog___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void PhotoCampaignStaffCostumeSelectDialog___c___ctor(
        PhotoCampaignStaffCostumeSelectDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t PhotoCampaignStaffCostumeSelectDialog___c___Open_b__11_0(
        PhotoCampaignStaffCostumeSelectDialog___c_o *this,
        StaffPhotoCostumeEntity_o *staffPhotoCostumeEntity,
        const MethodInfo *method)
{
  if ( !staffPhotoCostumeEntity )
    sub_1C32E7C(this);
  return staffPhotoCostumeEntity->fields.dispOrder;
}