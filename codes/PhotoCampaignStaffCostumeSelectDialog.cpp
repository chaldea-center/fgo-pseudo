void __fastcall PhotoCampaignStaffCostumeSelectDialog___ctor(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B17C00 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B17C00 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PhotoCampaignStaffCostumeSelectDialog__GetSelectedStaffCostumeIdx(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        int32_t staffId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0

  if ( (byte_4B17BFE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&staffId);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    byte_4B17BFE = 1;
  }
  dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
  if ( !dicSelectedStaffCostume )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedStaffCostume,
         staffId,
         (const MethodInfo_3318A18 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
    if ( dicSelectedStaffCostume )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedStaffCostume,
               staffId,
               (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_1BCB254(dicSelectedStaffCostume, *(_QWORD *)&staffId);
  }
  return -1;
}


void __fastcall PhotoCampaignStaffCostumeSelectDialog__Init(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *photoCampaignAtlas; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_int__int__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B17BF7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, atlas);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&string_TypeInfo, v7);
    byte_4B17BF7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = this->fields.decideButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = this->fields.cancelButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = (UILabel_o *)this->fields.staffCostumeSelectListViewManager) == 0LL) )
  {
LABEL_13:
    sub_1BCB254(titleLabel, atlas);
  }
  StaffCostumeSelectListViewManager__DestroyList((StaffCostumeSelectListViewManager_o *)titleLabel, 0LL);
  photoCampaignAtlas = (UnityEngine_Object_o *)this->fields.photoCampaignAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(photoCampaignAtlas, 0LL, 0LL) )
  {
    this->fields.photoCampaignAtlas = atlas;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.photoCampaignAtlas, (int32_t)atlas, v10, v11);
  }
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_3317E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedStaffCostume = v12;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.dicSelectedStaffCostume, (int32_t)v12, v13, v14);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoCampaignStaffCostumeSelectDialog__LoadSelectedStaffCostume(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *String; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v13; // x1
  Il2CppObject *value; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+30h] [xbp-60h] BYREF
  int32_t result[2]; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_4B17BFD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v6);
    sub_1BCAFF8(&JsonManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9);
    sub_1BCAFF8(&StringLiteral_10543/*"PhotoStaffCostumeSelectIndex2025"*/, v10);
    byte_4B17BFD = 1;
  }
  memset(&v21, 0, sizeof(v21));
  *(_QWORD *)result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)StringLiteral_10543/*"PhotoStaffCostumeSelectIndex2025"*/, 0LL, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = JsonManager__getDictionary(String, 0LL);
    if ( !Dictionary )
      sub_1BCB254(0LL, v13);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v20,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_33861A8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v21,
              (const MethodInfo_348120C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      value = v21.fields._current.fields.value;
      v15 = System_Int32__TryParse((System_String_o *)v21.fields._current.fields.key, &result[1], 0LL);
      if ( v15 )
      {
        if ( !value )
          sub_1BCB254(v15, v16);
        v17 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                   value,
                                   value->klass->vtable[4].methodPtr);
        if ( System_Int32__TryParse(v17, result, 0LL) )
        {
          dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
          if ( !dicSelectedStaffCostume )
            sub_1BCB254(0LL, v18);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedStaffCostume,
            result[1],
            result[0],
            (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v21,
      (const MethodInfo_348132C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void __fastcall PhotoCampaignStaffCostumeSelectDialog__OnClickCancel(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B17BFA & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__, v3);
    sub_1BCAFF8(&Method_PhotoCampaignStaffCostumeSelectDialog__OnClickCancel_b__13_0__, v4);
    byte_4B17BFA = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PhotoCampaignStaffCostumeSelectDialog__OnClickCancel_b__13_0__,
      0LL);
    BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall PhotoCampaignStaffCostumeSelectDialog__OnClickDecide(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B17BF9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__, v3);
    sub_1BCAFF8(&Method_PhotoCampaignStaffCostumeSelectDialog__OnClickDecide_b__12_0__, v4);
    byte_4B17BF9 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PhotoCampaignStaffCostumeSelectDialog__OnClickDecide_b__12_0__,
      0LL);
    BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignStaffCostumeSelectDialog__OnClickSelectListViewItem(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        int32_t selectStaffPhotoCostumeIdx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  StaffCostumeSelectListViewManager_o *staffCostumeSelectListViewManager; // x0
  StaffCostumeSelectListViewManager_o *v9; // x20
  System_Action_int__o *v10; // x21

  if ( (byte_4B17BFF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, *(_QWORD *)&selectStaffPhotoCostumeIdx);
    sub_1BCAFF8(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__, v5);
    byte_4B17BFF = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    if ( this->fields.currentSelectStaffPhotoCostumeIdx != selectStaffPhotoCostumeIdx )
    {
      v6 = Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__;
      if ( (*((_BYTE *)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BCB010(Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__);
      v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    }
    staffCostumeSelectListViewManager = this->fields.staffCostumeSelectListViewManager;
    this->fields.currentSelectStaffPhotoCostumeIdx = selectStaffPhotoCostumeIdx;
    if ( !staffCostumeSelectListViewManager
      || (StaffCostumeSelectListViewManager__ModifyItem(
            staffCostumeSelectListViewManager,
            selectStaffPhotoCostumeIdx,
            0LL),
          v9 = this->fields.staffCostumeSelectListViewManager,
          v10 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo),
          System_Action_int____ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__,
            0LL),
          !v9) )
    {
      sub_1BCB254(staffCostumeSelectListViewManager, *(_QWORD *)&selectStaffPhotoCostumeIdx);
    }
    StaffCostumeSelectListViewManager__SetMode(v9, 2, v10, 0LL);
  }
}


void __fastcall PhotoCampaignStaffCostumeSelectDialog__OnEnable(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B17BFB & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15515/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4B17BFB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_44083552(transform, (System_String_o *)StringLiteral_15515/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignStaffCostumeSelectDialog__Open(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        System_Action_bool__int__o *closeCallback,
        int32_t staffPhotoId,
        int32_t baseStaffCostumeIdx,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o *staffPhotoCostumeEntityList,
        const MethodInfo *method)
{
  __int64 v11; // x1
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t SelectedStaffCostumeIdx; // w0
  int32_t v27; // w8
  PhotoCampaignStaffCostumeSelectDialog___c_c *v28; // x0
  System_Func_object__int__o *_9__11_0; // x21
  Il2CppObject *v30; // x22
  struct PhotoCampaignStaffCostumeSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  UnityEngine_GameObject_o *object; // x0
  __int64 v36; // x1
  StaffCostumeSelectListViewManager_o *staffCostumeSelectListViewManager; // x20
  System_Action_int__o *v38; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20

  if ( (byte_4B17BF8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, closeCallback);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity___, v11);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderBy_StaffPhotoCostumeEntity__int___, v12);
    sub_1BCAFF8(&System_Func_StaffPhotoCostumeEntity__int__TypeInfo, v13);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__, v15);
    sub_1BCAFF8(&Method_PhotoCampaignStaffCostumeSelectDialog___c__Open_b__11_0__, v16);
    sub_1BCAFF8(&PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_12196/*"STAFF_COSTUME_SELECT_DIALOG_WARNING"*/, v18);
    sub_1BCAFF8(&StringLiteral_3651/*"COMMON_CONFIRM_DECIDE"*/, v19);
    sub_1BCAFF8(&StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, v20);
    sub_1BCAFF8(&StringLiteral_12195/*"STAFF_COSTUME_SELECT_DIALOG_TITLE"*/, v21);
    byte_4B17BF8 = 1;
  }
  PhotoCampaignStaffCostumeSelectDialog__Init(this, 0LL, *(const MethodInfo **)&staffPhotoId);
  this->fields.closeFunc = closeCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v22, v23);
  this->fields.currentSelectStaffPhotoId = staffPhotoId;
  PhotoCampaignStaffCostumeSelectDialog__LoadSelectedStaffCostume(this, v24);
  SelectedStaffCostumeIdx = PhotoCampaignStaffCostumeSelectDialog__GetSelectedStaffCostumeIdx(this, staffPhotoId, v25);
  if ( baseStaffCostumeIdx >= 0 )
    v27 = baseStaffCostumeIdx;
  else
    v27 = SelectedStaffCostumeIdx;
  this->fields.currentSelectStaffPhotoCostumeIdx = v27;
  if ( (v27 & 0x80000000) != 0 )
  {
    v28 = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo;
    if ( !PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo);
      v28 = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__int__o *)v28->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__11_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_StaffPhotoCostumeEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__11_0,
        v30,
        Method_PhotoCampaignStaffCostumeSelectDialog___c__Open_b__11_0__,
        0LL);
      static_fields = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_StaffPhotoCostumeEntity__int__o *)_9__11_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v32, v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)staffPhotoCostumeEntityList,
                                                                 (System_Func_TSource__TKey__o *)_9__11_0,
                                                                 (const MethodInfo_3046148 *)Method_System_Linq_Enumerable_OrderBy_StaffPhotoCostumeEntity__int___);
    object = (UnityEngine_GameObject_o *)System_Linq_Enumerable__First_object_(
                                           v34,
                                           (const MethodInfo_303D3A4 *)Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity___);
    if ( !object )
LABEL_25:
      sub_1BCB254(object, v36);
    this->fields.currentSelectStaffPhotoCostumeIdx = *((_DWORD *)&object->fields + 1);
  }
  object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !object )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(object, 1, 0LL);
  object = (UnityEngine_GameObject_o *)this->fields.staffCostumeSelectListViewManager;
  if ( !object )
    goto LABEL_25;
  StaffCostumeSelectListViewManager__CreateList(
    (StaffCostumeSelectListViewManager_o *)object,
    staffPhotoCostumeEntityList,
    this->fields.currentSelectStaffPhotoCostumeIdx,
    this->fields.photoCampaignAtlas,
    0LL);
  staffCostumeSelectListViewManager = this->fields.staffCostumeSelectListViewManager;
  v38 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v38,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__,
    0LL);
  if ( !staffCostumeSelectListViewManager )
    goto LABEL_25;
  StaffCostumeSelectListViewManager__SetMode(staffCostumeSelectListViewManager, 2, v38, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12195/*"STAFF_COSTUME_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, (System_String_o *)object, 0LL);
  warningLabel = this->fields.warningLabel;
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12196/*"STAFF_COSTUME_SELECT_DIALOG_WARNING"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_25;
  UILabel__set_text(warningLabel, (System_String_o *)object, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3651/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_25;
  UILabel__set_text(decideButtonLabel, (System_String_o *)object, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_25;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)object, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall PhotoCampaignStaffCostumeSelectDialog__SaveSelectedStaffCostume(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_object__object__o *v14; // x19
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0
  int key_high; // x26^4
  Il2CppObject *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x19
  __int128 v25[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+20h] [xbp-70h] BYREF
  int key; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4B17BFC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v8);
    sub_1BCAFF8(&int_TypeInfo, v9);
    sub_1BCAFF8(&JsonManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v12);
    sub_1BCAFF8(&StringLiteral_10543/*"PhotoStaffCostumeSelectIndex2025"*/, v13);
    byte_4B17BFC = 1;
  }
  memset(&v26, 0, 32);
  key = 0;
  v14 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v14,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
  if ( !dicSelectedStaffCostume )
    sub_1BCB254(0LL, v15);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v25,
    dicSelectedStaffCostume,
    (const MethodInfo_3318C04 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v26.fields._dictionary = v25[0];
  v26.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v25[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v26,
            (const MethodInfo_3471394 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v26.fields._current.fields.key);
    key = (int)v26.fields._current.fields.key;
    v18 = (Il2CppObject *)System_Int32__ToString((int32_t)&key, 0LL);
    LODWORD(v25[0]) = key_high;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v25, v19, v20, v21);
    if ( !v14 )
      sub_1BCB254(v22, v23);
    System_Collections_Generic_Dictionary_object__object___Add(
      v14,
      v18,
      v22,
      (const MethodInfo_3385D78 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v26,
    (const MethodInfo_3471494 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v24 = JsonManager__toJson((Il2CppObject *)v14, 0, 0, 0LL);
  if ( !System_String__IsNullOrEmpty(v24, 0LL) )
  {
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10543/*"PhotoStaffCostumeSelectIndex2025"*/, v24, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall PhotoCampaignStaffCostumeSelectDialog___OnClickCancel_b__13_0(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B17C02 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool__int___, method);
    byte_4B17C02 = 1;
  }
  ActionExtensions__Call_bool__int_(
    (System_Action_T1__T2__o *)this->fields.closeFunc,
    0,
    -1,
    (const MethodInfo_2F6A328 *)Method_ActionExtensions_Call_bool__int___);
}


void __fastcall PhotoCampaignStaffCostumeSelectDialog___OnClickDecide_b__12_0(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B17C01 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool__int___, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v3);
    byte_4B17C01 = 1;
  }
  dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
  if ( !dicSelectedStaffCostume )
    sub_1BCB254(0LL, method);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedStaffCostume,
    this->fields.currentSelectStaffPhotoId,
    this->fields.currentSelectStaffPhotoCostumeIdx,
    (const MethodInfo_3318818 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  PhotoCampaignStaffCostumeSelectDialog__SaveSelectedStaffCostume(this, v5);
  ActionExtensions__Call_bool__int_(
    (System_Action_T1__T2__o *)this->fields.closeFunc,
    1,
    this->fields.currentSelectStaffPhotoCostumeIdx,
    (const MethodInfo_2F6A328 *)Method_ActionExtensions_Call_bool__int___);
}


void __fastcall PhotoCampaignStaffCostumeSelectDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B17C03 & 1) == 0 )
  {
    sub_1BCAFF8(&PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo, v1);
    byte_4B17C03 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->static_fields->__9 = (struct PhotoCampaignStaffCostumeSelectDialog___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall PhotoCampaignStaffCostumeSelectDialog___c___ctor(
        PhotoCampaignStaffCostumeSelectDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall PhotoCampaignStaffCostumeSelectDialog___c___Open_b__11_0(
        PhotoCampaignStaffCostumeSelectDialog___c_o *this,
        StaffPhotoCostumeEntity_o *staffPhotoCostumeEntity,
        const MethodInfo *method)
{
  if ( !staffPhotoCostumeEntity )
    sub_1BCB254(this, 0LL);
  return staffPhotoCostumeEntity->fields.dispOrder;
}