void __fastcall PhotoTargetSelectDialog___ctor(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  unsigned int v6; // w8
  __int64 v7; // x1
  unsigned int v8; // w8

  if ( (byte_4C1D820 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Vector2___TypeInfo, v3);
    byte_4C1D820 = 1;
  }
  v4 = sub_1C3B80C(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v4 )
    goto LABEL_16;
  v6 = *(_DWORD *)(v4 + 24);
  v7 = v4;
  if ( !v6
    || (*(_QWORD *)(v4 + 32) = 0xC1C80000C35E0000LL, v6 == 1)
    || (*(_QWORD *)(v4 + 40) = 0xC1C8000000000000LL, v6 <= 2) )
  {
LABEL_15:
    sub_1C3B9C8(v4, v7);
  }
  *(_QWORD *)(v4 + 48) = 0xC1C80000435E0000LL;
  this->fields.threeBtnPos = (struct UnityEngine_Vector2_array *)v4;
  sub_1C3B708(&this->fields.threeBtnPos);
  v4 = sub_1C3B80C(UnityEngine_Vector2___TypeInfo, 4LL);
  if ( !v4 )
LABEL_16:
    sub_1C3B9C0(v4, v5);
  v8 = *(_DWORD *)(v4 + 24);
  v7 = v4;
  if ( !v8 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 32) = 0x41300000C30C0000LL;
  if ( v8 == 1 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 40) = 0x41300000430C0000LL;
  if ( v8 <= 2 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 48) = 0xC2780000C30C0000LL;
  if ( v8 == 3 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 56) = 0xC2780000430C0000LL;
  this->fields.fourBtnPos = (struct UnityEngine_Vector2_array *)v4;
  sub_1C3B708(&this->fields.fourBtnPos);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog__Awake(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog__CloseDialog(
        PhotoTargetSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PhotoTargetSelectDialog___c__DisplayClass33_0_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x20

  if ( (byte_4C1D81E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_PhotoTargetSelectDialog___c__DisplayClass33_0__CloseDialog_b__0__, v5);
    sub_1C3B764(&PhotoTargetSelectDialog___c__DisplayClass33_0_TypeInfo, v6);
    byte_4C1D81E = 1;
  }
  v7 = (PhotoTargetSelectDialog___c__DisplayClass33_0_o *)sub_1C3B9B0(PhotoTargetSelectDialog___c__DisplayClass33_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass33_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_1C3B9C0(v8, v9);
  v7->fields.__4__this = this;
  sub_1C3B708(&v7->fields);
  v7->fields.callback = callback;
  sub_1C3B708(&v7->fields.callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v7,
    Method_PhotoTargetSelectDialog___c__DisplayClass33_0__CloseDialog_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall PhotoTargetSelectDialog__Init(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoTargetSelectDialog__OnClickDecideButton(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PhotoTargetSelectDialog___c__DisplayClass31_0_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4C1D81C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1C3B764(&Method_PhotoTargetSelectDialog_OnClickDecideButton__, v5);
    sub_1C3B764(&Method_PhotoTargetSelectDialog___c__DisplayClass31_0__OnClickDecideButton_b__0__, v6);
    sub_1C3B764(&PhotoTargetSelectDialog___c__DisplayClass31_0_TypeInfo, v7);
    byte_4C1D81C = 1;
  }
  v8 = (PhotoTargetSelectDialog___c__DisplayClass31_0_o *)sub_1C3B9B0(PhotoTargetSelectDialog___c__DisplayClass31_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass31_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C3B9C0(v9, v10);
  v8->fields.type = type;
  if ( this->fields.state == 2 )
  {
    v11 = Method_PhotoTargetSelectDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C3B77C(Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C3B748(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 8 * (v8->fields.type == 3), 0, 0LL);
    v8->fields.callback = this->fields.decideCallBack;
    sub_1C3B708(&v8->fields);
    this->fields.decideCallBack = 0LL;
    sub_1C3B708(&this->fields.decideCallBack);
    v13 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)v8,
      Method_PhotoTargetSelectDialog___c__DisplayClass31_0__OnClickDecideButton_b__0__,
      0LL);
    PhotoTargetSelectDialog__CloseDialog(this, v13, v14);
  }
}


void __fastcall PhotoTargetSelectDialog__OnClickMasterButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 1, v2);
}


void __fastcall PhotoTargetSelectDialog__OnClickNoneButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 3, v2);
}


void __fastcall PhotoTargetSelectDialog__OnClickServantButton(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 0, v2);
}


void __fastcall PhotoTargetSelectDialog__OnClickStaffButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 2, v2);
}


void __fastcall PhotoTargetSelectDialog__OnclickCancelButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *cancelCallBack; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C1D81D & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoTargetSelectDialog_OnclickCancelButton__, method);
    byte_4C1D81D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoTargetSelectDialog_OnclickCancelButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnclickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    cancelCallBack = this->fields.cancelCallBack;
    this->fields.cancelCallBack = 0LL;
    sub_1C3B708(&this->fields.cancelCallBack);
    PhotoTargetSelectDialog__CloseDialog(this, cancelCallBack, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoTargetSelectDialog__Open(
        PhotoTargetSelectDialog_o *this,
        int32_t selectedTargetType,
        int32_t index,
        System_Action_PhotoUtility_TargetType__o *decide,
        System_Action_o *cancel,
        System_Action_bool__o *setMaskMethod,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x20

  if ( (byte_4C1D81A & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&selectedTargetType);
    sub_1C3B764(&System_Action_TypeInfo, v13);
    sub_1C3B764(&Method_PhotoTargetSelectDialog___c__DisplayClass25_0__Open_b__0__, v14);
    sub_1C3B764(&PhotoTargetSelectDialog___c__DisplayClass25_0_TypeInfo, v15);
    byte_4C1D81A = 1;
  }
  v16 = sub_1C3B9B0(PhotoTargetSelectDialog___c__DisplayClass25_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass25_0___ctor((PhotoTargetSelectDialog___c__DisplayClass25_0_o *)v16, 0LL);
  if ( !v16 )
    sub_1C3B9C0(v17, v18);
  *(_QWORD *)(v16 + 16) = setMaskMethod;
  sub_1C3B708(v16 + 16);
  *(_QWORD *)(v16 + 24) = this;
  sub_1C3B708(v16 + 24);
  if ( !this->fields.state )
  {
    PhotoTargetSelectDialog__SetBtn(this, selectedTargetType, index, v19);
    this->fields.decideCallBack = decide;
    sub_1C3B708(&this->fields.decideCallBack);
    this->fields.cancelCallBack = cancel;
    sub_1C3B708(&this->fields.cancelCallBack);
    ActionExtensions__Call_bool_(
      *(System_Action_T__o **)(v16 + 16),
      1,
      (const MethodInfo_2F42210 *)Method_ActionExtensions_Call_bool___);
    this->fields.state = 1;
    v20 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v16,
      Method_PhotoTargetSelectDialog___c__DisplayClass25_0__Open_b__0__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoTargetSelectDialog__SetBtn(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
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
  __int64 v22; // x1
  __int64 *v23; // x8
  System_String_o *v24; // x1
  UILabel_o *titleLabel; // x0
  __int64 *v26; // x8
  UILabel_o *servantButtonLabel; // x21
  UILabel_o *masterButtonLabel; // x21
  UILabel_o *staffButtonLabel; // x21
  UILabel_o *noneButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  UILabel_o *staffButtonMaskLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_Vector2_array *threeBtnPos; // x8
  struct UnityEngine_Vector2_array *v35; // x8
  struct UnityEngine_Vector2_array *v36; // x8
  struct UnityEngine_Vector2_array *v37; // x8
  char v38; // w1
  UnityEngine_GameObject_o *v39; // x0
  struct UnityEngine_Vector2_array *fourBtnPos; // x8
  struct UnityEngine_Vector2_array *v41; // x8
  struct UnityEngine_Vector2_array *v42; // x8
  struct UnityEngine_Vector2_array *v43; // x8

  if ( (byte_4C1D81B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_StaffPhotoMaster___, *(_QWORD *)&type);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&LocalizationManager_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_10586/*"QUEST_CALDEA_NONE"*/, v9);
    sub_1C3B764(&StringLiteral_10595/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/, v10);
    sub_1C3B764(&StringLiteral_10594/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, v11);
    sub_1C3B764(&StringLiteral_10590/*"QUEST_CLEAR_BEFORE_TERMINAL_MESSAGE_"*/, v12);
    sub_1C3B764(&StringLiteral_10589/*"QUEST_CHAPTER_CLOSED_SPECIAL_311_2"*/, v13);
    sub_1C3B764(&StringLiteral_10588/*"QUEST_CHAPTER_CLOSED_SPECIAL_311"*/, v14);
    sub_1C3B764(&StringLiteral_10597/*"QUEST_CLEAR_CHANGE_ACTION_STORY"*/, v15);
    sub_1C3B764(&StringLiteral_10593/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_EQUIP"*/, v16);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v17);
    sub_1C3B764(&StringLiteral_10587/*"QUEST_CHAPTER_CLOSED"*/, v18);
    sub_1C3B764(&StringLiteral_10592/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, v19);
    sub_1C3B764(&StringLiteral_10591/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION"*/, v20);
    sub_1C3B764(&StringLiteral_10596/*"QUEST_CLEAR_CHANGE_ACTION_POWERUP_FORMAT"*/, v21);
    sub_1C3B764(&StringLiteral_1/*""*/, v22);
    byte_4C1D81B = 1;
  }
  switch ( index )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = &StringLiteral_10587/*"QUEST_CHAPTER_CLOSED"*/;
      goto LABEL_15;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = &StringLiteral_10597/*"QUEST_CLEAR_CHANGE_ACTION_STORY"*/;
      goto LABEL_15;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = &StringLiteral_10596/*"QUEST_CLEAR_CHANGE_ACTION_POWERUP_FORMAT"*/;
LABEL_15:
      v24 = LocalizationManager__Get((System_String_o *)*v23, 0LL);
      goto LABEL_17;
  }
  v24 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_17:
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_84;
  UILabel__set_text(titleLabel, v24, 0LL);
  if ( index )
  {
    if ( index == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_10590/*"QUEST_CLEAR_BEFORE_TERMINAL_MESSAGE_"*/;
    }
    else
    {
      if ( index != 1 )
      {
        v24 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_32;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_10589/*"QUEST_CHAPTER_CLOSED_SPECIAL_311_2"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = &StringLiteral_10586/*"QUEST_CALDEA_NONE"*/;
  }
  v24 = LocalizationManager__Get((System_String_o *)*v26, 0LL);
LABEL_32:
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_84;
  UILabel__set_text(titleLabel, v24, 0LL);
  servantButtonLabel = this->fields.servantButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10592/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  if ( !servantButtonLabel )
    goto LABEL_84;
  UILabel__set_text(servantButtonLabel, (System_String_o *)titleLabel, 0LL);
  masterButtonLabel = this->fields.masterButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10588/*"QUEST_CHAPTER_CLOSED_SPECIAL_311"*/, 0LL);
  if ( !masterButtonLabel )
    goto LABEL_84;
  UILabel__set_text(masterButtonLabel, (System_String_o *)titleLabel, 0LL);
  staffButtonLabel = this->fields.staffButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10593/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_EQUIP"*/, 0LL);
  if ( !staffButtonLabel )
    goto LABEL_84;
  UILabel__set_text(staffButtonLabel, (System_String_o *)titleLabel, 0LL);
  noneButtonLabel = this->fields.noneButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10591/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION"*/, 0LL);
  if ( !noneButtonLabel )
    goto LABEL_84;
  UILabel__set_text(noneButtonLabel, (System_String_o *)titleLabel, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_84;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)titleLabel, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  if ( !titleLabel )
    goto LABEL_84;
  titleLabel = (UILabel_o *)StaffPhotoMaster__GetEnableEntityNum((StaffPhotoMaster_o *)titleLabel, -1, 0LL);
  if ( type != 2 )
  {
    staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
    this->fields.isEnableStaffBtn = (int)titleLabel > 0;
    if ( (int)titleLabel > 0 )
    {
      v24 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !staffButtonMaskLabel )
        goto LABEL_84;
      goto LABEL_57;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10594/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
    v24 = (System_String_o *)titleLabel;
    if ( staffButtonMaskLabel )
      goto LABEL_57;
LABEL_84:
    sub_1C3B9C0(titleLabel, v24);
  }
  staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
  this->fields.isEnableStaffBtn = (int)titleLabel > 1;
  if ( (int)titleLabel <= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10595/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/, 0LL);
    v24 = (System_String_o *)titleLabel;
  }
  else
  {
    v24 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !staffButtonMaskLabel )
    goto LABEL_84;
LABEL_57:
  UILabel__set_text(staffButtonMaskLabel, v24, 0LL);
  titleLabel = (UILabel_o *)this->fields.staffButton;
  if ( !titleLabel )
    goto LABEL_84;
  ((void (__fastcall *)(UILabel_o *, bool, Il2CppMethodPointer))titleLabel->klass->vtable._5_get_isAnchoredVertically.method)(
    titleLabel,
    this->fields.isEnableStaffBtn,
    titleLabel->klass->vtable._6_get_canBeAnchored.methodPtr);
  if ( (type | 2) == 3 )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 64.0, 0LL);
    threeBtnPos = this->fields.threeBtnPos;
    if ( !threeBtnPos )
      goto LABEL_84;
    if ( threeBtnPos->max_length )
    {
      GameObjectExtensions__SetLocalPosition_34963288(
        this->fields.servantButtonObj,
        *(UnityEngine_Vector2_o *)&threeBtnPos->m_Items[0].fields.y,
        0LL);
      v35 = this->fields.threeBtnPos;
      if ( !v35 )
        goto LABEL_84;
      if ( v35->max_length > 1 )
      {
        GameObjectExtensions__SetLocalPosition_34963288(
          this->fields.staffButtonObj,
          *(UnityEngine_Vector2_o *)&v35->m_Items[1].fields.y,
          0LL);
        v36 = this->fields.threeBtnPos;
        if ( !v36 )
          goto LABEL_84;
        if ( v36->max_length > 2 )
        {
          GameObjectExtensions__SetLocalPosition_34963288(
            this->fields.masterButtonObj,
            *(UnityEngine_Vector2_o *)&v36->m_Items[2].fields.y,
            0LL);
          v37 = this->fields.threeBtnPos;
          if ( !v37 )
            goto LABEL_84;
          if ( v37->max_length > 2 )
          {
            GameObjectExtensions__SetLocalPosition_34963288(
              this->fields.noneButtonObj,
              *(UnityEngine_Vector2_o *)&v37->m_Items[2].fields.y,
              0LL);
            titleLabel = (UILabel_o *)this->fields.masterButtonObj;
            if ( !titleLabel )
              goto LABEL_84;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, type != 1, 0LL);
            titleLabel = (UILabel_o *)this->fields.noneButtonObj;
            if ( !titleLabel )
              goto LABEL_84;
            v38 = type == 1;
            goto LABEL_83;
          }
        }
      }
    }
LABEL_85:
    sub_1C3B9C8(titleLabel, v24);
  }
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_84;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v39, 100.0, 0LL);
  fourBtnPos = this->fields.fourBtnPos;
  if ( !fourBtnPos )
    goto LABEL_84;
  if ( !fourBtnPos->max_length )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_34963288(
    this->fields.servantButtonObj,
    *(UnityEngine_Vector2_o *)&fourBtnPos->m_Items[0].fields.y,
    0LL);
  v41 = this->fields.fourBtnPos;
  if ( !v41 )
    goto LABEL_84;
  if ( v41->max_length <= 1 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_34963288(
    this->fields.staffButtonObj,
    *(UnityEngine_Vector2_o *)&v41->m_Items[1].fields.y,
    0LL);
  v42 = this->fields.fourBtnPos;
  if ( !v42 )
    goto LABEL_84;
  if ( v42->max_length <= 2 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_34963288(
    this->fields.masterButtonObj,
    *(UnityEngine_Vector2_o *)&v42->m_Items[2].fields.y,
    0LL);
  v43 = this->fields.fourBtnPos;
  if ( !v43 )
    goto LABEL_84;
  if ( v43->max_length <= 3 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_34963288(
    this->fields.noneButtonObj,
    *(UnityEngine_Vector2_o *)&v43->m_Items[3].fields.y,
    0LL);
  titleLabel = (UILabel_o *)this->fields.masterButtonObj;
  if ( !titleLabel )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
  titleLabel = (UILabel_o *)this->fields.noneButtonObj;
  if ( !titleLabel )
    goto LABEL_84;
  v38 = 1;
LABEL_83:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v38, 0LL);
}


UnityEngine_GameObject_o *__fastcall PhotoTargetSelectDialog__get_closeBtnObject(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C1D81F & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1D81F = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C3B9C0(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass25_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass25_0___Open_b__0(
        PhotoTargetSelectDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct PhotoTargetSelectDialog_o *_4__this; // x8

  if ( (byte_4C1D821 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_bool___, method);
    byte_4C1D821 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_2F42210 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(v3, v4);
  _4__this->fields.state = 2;
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass31_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass31_0___OnClickDecideButton_b__0(
        PhotoTargetSelectDialog___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1D822 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_PhotoUtility_TargetType___, method);
    byte_4C1D822 = 1;
  }
  ActionExtensions__Call_Int32Enum_(
    (System_Action_T__o *)this->fields.callback,
    this->fields.type,
    (const MethodInfo_2F422B0 *)Method_ActionExtensions_Call_PhotoUtility_TargetType___);
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass33_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass33_0___CloseDialog_b__0(
        PhotoTargetSelectDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  PhotoTargetSelectDialog_o *_4__this; // x0
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  PhotoTargetSelectDialog__Init(_4__this, 0LL);
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0LL);
}