void PhotoCampaignStaffCostumeSelectDialog___ctor(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BBE7 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596BBE7 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t PhotoCampaignStaffCostumeSelectDialog__GetSelectedStaffCostumeIdx(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        int32_t staffId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0

  if ( (byte_596BBE5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_596BBE5 = 1;
  }
  dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
  if ( !dicSelectedStaffCostume )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         dicSelectedStaffCostume,
         staffId,
         (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
    if ( dicSelectedStaffCostume )
      return System_Collections_Generic_Dictionary_int__int___get_Item(
               dicSelectedStaffCostume,
               staffId,
               (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
LABEL_8:
    sub_2213CDC(dicSelectedStaffCostume, *(_QWORD *)&staffId);
  }
  return -1;
}


void PhotoCampaignStaffCostumeSelectDialog__Init(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *photoCampaignAtlas; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_Dictionary_int__int__o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_596BBDE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBDE = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0),
        (titleLabel = this->fields.decideButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0),
        (titleLabel = this->fields.cancelButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, **(System_String_o ***)(qword_5984390 + 184), 0),
        (titleLabel = (UILabel_o *)this->fields.staffCostumeSelectListViewManager) == 0) )
  {
LABEL_13:
    sub_2213CDC(titleLabel, atlas);
  }
  StaffCostumeSelectListViewManager__DestroyList((StaffCostumeSelectListViewManager_o *)titleLabel, 0);
  photoCampaignAtlas = (UnityEngine_Object_o *)this->fields.photoCampaignAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Equality(photoCampaignAtlas, 0, 0) )
  {
    this->fields.photoCampaignAtlas = atlas;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.photoCampaignAtlas,
      (int32_t)atlas,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v15,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicSelectedStaffCostume = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicSelectedStaffCostume,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PhotoCampaignStaffCostumeSelectDialog__LoadSelectedStaffCostume(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  System_String_o *String; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+30h] [xbp-60h] BYREF
  int32_t result[2]; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_596BBE4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_2213A60(&StringLiteral_11069/*"PhotoStaffCostumeSelectIndex2026"*/);
    byte_596BBE4 = 1;
  }
  *(_QWORD *)result = 0;
  memset(&v15, 0, sizeof(v15));
  String = UnityEngine_PlayerPrefs__GetString((System_String_o *)StringLiteral_11069/*"PhotoStaffCostumeSelectIndex2026"*/, 0, 0);
  if ( !System_String__IsNullOrEmpty(String, 0) )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4, v5);
    Dictionary = JsonManager__getDictionary(String, 0);
    if ( !Dictionary )
      sub_2213CDC(0, v7);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v14,
      (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
      (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v15 = v14;
    v14.fields._dictionary = 0;
    *(_QWORD *)&v14.fields._version = &v15;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v15,
              (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      current = v15.fields._current;
      v9 = System_Int32__TryParse((System_String_o *)v15.fields._current.fields.key, &result[1], 0);
      if ( v9 )
      {
        if ( !current.fields.value )
          sub_2213CDC(v9, v10);
        v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current.fields.value->klass->vtable[3].methodPtr)(
                                   current.fields.value,
                                   current.fields.value->klass->vtable[3].method);
        if ( System_Int32__TryParse(v11, result, 0) )
        {
          dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
          if ( !dicSelectedStaffCostume )
            sub_2213CDC(0, v12);
          System_Collections_Generic_Dictionary_int__int___Add(
            dicSelectedStaffCostume,
            result[1],
            result[0],
            (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v15,
      (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  }
}


void PhotoCampaignStaffCostumeSelectDialog__OnClickCancel(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596BBE1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__);
    sub_2213A60(&Method_PhotoCampaignStaffCostumeSelectDialog__OnClickCancel_b__13_0__);
    byte_596BBE1 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoCampaignStaffCostumeSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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

  if ( (byte_596BBE0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__);
    sub_2213A60(&Method_PhotoCampaignStaffCostumeSelectDialog__OnClickDecide_b__12_0__);
    byte_596BBE0 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoCampaignStaffCostumeSelectDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PhotoCampaignStaffCostumeSelectDialog__OnClickDecide_b__12_0__,
      0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596BBE6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__);
    byte_596BBE6 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    if ( this->fields.currentSelectStaffPhotoCostumeIdx != selectStaffPhotoCostumeIdx )
    {
      v5 = Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__;
      if ( (*((_BYTE *)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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
          v9 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo),
          System_Action_int____ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__,
            0),
          !v8) )
    {
      sub_2213CDC(staffCostumeSelectListViewManager, *(_QWORD *)&selectStaffPhotoCostumeIdx);
    }
    StaffCostumeSelectListViewManager__SetMode(v8, 2, v9, 0);
  }
}


void PhotoCampaignStaffCostumeSelectDialog__OnEnable(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596BBE2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/);
    byte_596BBE2 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  int32_t SelectedStaffCostumeIdx; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t v22; // w8
  PhotoCampaignStaffCostumeSelectDialog___c_c *v23; // x0
  struct PhotoCampaignStaffCostumeSelectDialog___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__11_0; // x21
  Il2CppObject *v26; // x22
  struct PhotoCampaignStaffCostumeSelectDialog___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  UnityEngine_GameObject_o *object; // x0
  __int64 v36; // x1
  StaffCostumeSelectListViewManager_o *staffCostumeSelectListViewManager; // x20
  System_Action_int__o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20

  if ( (byte_596BBDF & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_StaffPhotoCostumeEntity__int___);
    sub_2213A60(&System_Func_StaffPhotoCostumeEntity__int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__);
    sub_2213A60(&Method_PhotoCampaignStaffCostumeSelectDialog___c__Open_b__11_0__);
    sub_2213A60(&PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_12819/*"STAFF_COSTUME_SELECT_DIALOG_WARNING"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12818/*"STAFF_COSTUME_SELECT_DIALOG_TITLE"*/);
    byte_596BBDF = 1;
  }
  PhotoCampaignStaffCostumeSelectDialog__Init(this, 0, *(const MethodInfo **)&staffPhotoId);
  this->fields.closeFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.currentSelectStaffPhotoId = staffPhotoId;
  PhotoCampaignStaffCostumeSelectDialog__LoadSelectedStaffCostume(this, v17);
  SelectedStaffCostumeIdx = PhotoCampaignStaffCostumeSelectDialog__GetSelectedStaffCostumeIdx(this, staffPhotoId, v18);
  if ( baseStaffCostumeIdx >= 0 )
    v22 = baseStaffCostumeIdx;
  else
    v22 = SelectedStaffCostumeIdx;
  this->fields.currentSelectStaffPhotoCostumeIdx = v22;
  if ( v22 < 0 )
  {
    v23 = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo;
    if ( !*(&PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo, v20, v21);
      v23 = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__11_0 = (System_Func_object__int__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !*(&v23->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v23, v20, v21);
        static_fields = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_StaffPhotoCostumeEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__11_0,
        v26,
        Method_PhotoCampaignStaffCostumeSelectDialog___c__Open_b__11_0__,
        0);
      v27 = PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->static_fields;
      v27->__9__11_0 = (struct System_Func_StaffPhotoCostumeEntity__int__o *)_9__11_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->__9__11_0, (int32_t)_9__11_0, v28, v29, v30, v31, v32, v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)staffPhotoCostumeEntityList,
                                                                 (System_Func_TSource__TKey__o *)_9__11_0,
                                                                 (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_StaffPhotoCostumeEntity__int___);
    object = (UnityEngine_GameObject_o *)System_Linq_Enumerable__First_object_(
                                           v34,
                                           (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity___);
    if ( !object )
LABEL_25:
      sub_2213CDC(object, v36);
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
  v38 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v38,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignStaffCostumeSelectDialog_OnClickSelectListViewItem__,
    0);
  if ( !staffCostumeSelectListViewManager )
    goto LABEL_25;
  StaffCostumeSelectListViewManager__SetMode(staffCostumeSelectListViewManager, 2, v38, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12818/*"STAFF_COSTUME_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, (System_String_o *)object, 0);
  warningLabel = this->fields.warningLabel;
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12819/*"STAFF_COSTUME_SELECT_DIALOG_WARNING"*/, 0);
  if ( !warningLabel )
    goto LABEL_25;
  UILabel__set_text(warningLabel, (System_String_o *)object, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_25;
  UILabel__set_text(decideButtonLabel, (System_String_o *)object, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  object = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
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
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0
  int key_high; // x26^4
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+10h] [xbp-70h] BYREF
  int v14; // [xsp+38h] [xbp-48h] BYREF
  int key; // [xsp+3Ch] [xbp-44h] BYREF

  if ( (byte_596BBE3 & 1) == 0 )
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
    sub_2213A60(&StringLiteral_11069/*"PhotoStaffCostumeSelectIndex2026"*/);
    byte_596BBE3 = 1;
  }
  key = 0;
  memset(&v13, 0, 32);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
  if ( !dicSelectedStaffCostume )
    sub_2213CDC(0, v4);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    &v13,
    dicSelectedStaffCostume,
    (const MethodInfo_3F92FF8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v13,
            (const MethodInfo_4156B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key_high = HIDWORD(v13.fields._current.fields.key);
    key = (int)v13.fields._current.fields.key;
    v7 = (Il2CppObject *)System_Int32__ToString((int32_t)&key, 0);
    v14 = key_high;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v14);
    if ( !v3 )
      sub_2213CDC(v8, v9);
    System_Collections_Generic_Dictionary_object__object___Add(
      v3,
      v7,
      v8,
      (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v13,
    (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v10, v11);
  v12 = JsonManager__toJson((Il2CppObject *)v3, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(v12, 0) )
  {
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11069/*"PhotoStaffCostumeSelectIndex2026"*/, v12, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void PhotoCampaignStaffCostumeSelectDialog___OnClickCancel_b__13_0(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_596BBE9 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool__int___);
    byte_596BBE9 = 1;
  }
  ActionExtensions__Call_bool__int_(
    (System_Action_T1__T2__o *)this->fields.closeFunc,
    0,
    -1,
    (const MethodInfo_37000F4 *)Method_ActionExtensions_Call_bool__int___);
}


void PhotoCampaignStaffCostumeSelectDialog___OnClickDecide_b__12_0(
        PhotoCampaignStaffCostumeSelectDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *dicSelectedStaffCostume; // x0
  const MethodInfo *v4; // x1

  if ( (byte_596BBE8 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool__int___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_596BBE8 = 1;
  }
  dicSelectedStaffCostume = this->fields.dicSelectedStaffCostume;
  if ( !dicSelectedStaffCostume )
    sub_2213CDC(0, method);
  System_Collections_Generic_Dictionary_int__int___set_Item(
    dicSelectedStaffCostume,
    this->fields.currentSelectStaffPhotoId,
    this->fields.currentSelectStaffPhotoCostumeIdx,
    (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  PhotoCampaignStaffCostumeSelectDialog__SaveSelectedStaffCostume(this, v4);
  ActionExtensions__Call_bool__int_(
    (System_Action_T1__T2__o *)this->fields.closeFunc,
    1,
    this->fields.currentSelectStaffPhotoCostumeIdx,
    (const MethodInfo_37000F4 *)Method_ActionExtensions_Call_bool__int___);
}


void PhotoCampaignStaffCostumeSelectDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BBEA & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo);
    byte_596BBEA = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->static_fields->__9 = (struct PhotoCampaignStaffCostumeSelectDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PhotoCampaignStaffCostumeSelectDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return staffPhotoCostumeEntity->fields.dispOrder;
}