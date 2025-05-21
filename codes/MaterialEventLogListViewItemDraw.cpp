void __fastcall MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MaterialEventLogListViewItemDraw_StaticFields *v10; // x8

  if ( (byte_4B3FD8D & 1) == 0 )
  {
    sub_1BDB878(&MaterialEventLogListViewItemDraw_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_20471/*"img_menuboard_03"*/, v4);
    sub_1BDB878(&StringLiteral_20470/*"img_menuboard_01"*/, v5);
    byte_4B3FD8D = 1;
  }
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->BASE_SP_NAME_DEFAULT = (struct System_String_o *)StringLiteral_20470/*"img_menuboard_01"*/;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)MaterialEventLogListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_20470/*"img_menuboard_01"*/,
    v2,
    v3);
  v6 = StringLiteral_20471/*"img_menuboard_03"*/;
  static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  static_fields->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_20471/*"img_menuboard_03"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->BASE_SP_NAME_SVT, v6, v8, v9);
  v10 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v10->LABEL_X_DEFAULT = 0x4230000040000000LL;
  *(_OWORD *)&v10->LABEL_W_DEFAULT = xmmword_BEC1C0;
  *(_OWORD *)&v10->LABEL_MAX_LINE_SVT = xmmword_BEB570;
}


void __fastcall MaterialEventLogListViewItemDraw___ctor(
        MaterialEventLogListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall MaterialEventLogListViewItemDraw__IsEnableSelect(
        MaterialEventLogListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *notSelectObj; // x0

  notSelectObj = this->fields.notSelectObj;
  if ( !notSelectObj )
    sub_1BDBAD4(0LL, method);
  return !UnityEngine_GameObject__get_activeSelf(notSelectObj, 0LL);
}


void __fastcall MaterialEventLogListViewItemDraw__LateUpdateItem(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  struct UISprite_o *mBaseSp; // x8
  MaterialEventLogListViewItemDraw_o *v5; // x19
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item && mode && item->fields._info_k__BackingField )
  {
    mBaseSp = this->fields.mBaseSp;
    v5 = this;
    if ( !mBaseSp )
      goto LABEL_9;
    this = (MaterialEventLogListViewItemDraw_o *)this->fields.mFaceIcon;
    if ( !this )
      goto LABEL_9;
    b = mBaseSp->fields.mColor.fields.b;
    a = mBaseSp->fields.mColor.fields.a;
    r = mBaseSp->fields.mColor.fields.r;
    g = mBaseSp->fields.mColor.fields.g;
    v10.fields.b = b;
    v10.fields.r = r;
    v10.fields.g = g;
    v10.fields.a = a;
    ItemIconComponent__SetColor((ItemIconComponent_o *)this, v10, 0LL);
    this = (MaterialEventLogListViewItemDraw_o *)v5->fields.mFaceMaskSp;
    if ( !this )
LABEL_9:
      sub_1BDBAD4(this, item);
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UIWidget__set_color((UIWidget_o *)this, v11, 0LL);
  }
}


void __fastcall MaterialEventLogListViewItemDraw__SetEnableSelect(
        MaterialEventLogListViewItemDraw_o *this,
        bool isSelect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *notSelectObj; // x0

  notSelectObj = this->fields.notSelectObj;
  if ( !notSelectObj )
    sub_1BDBAD4(0LL, isSelect);
  UnityEngine_GameObject__SetActive(notSelectObj, !isSelect, 0LL);
}


void __fastcall MaterialEventLogListViewItemDraw__SetFaceImage(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        bool is_disp,
        const MethodInfo *method)
{
  MaterialEventLogListViewItemDraw_o **v6; // x19
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x21
  MaterialEventLogListViewItemDraw_o *v8; // x19

  v6 = (MaterialEventLogListViewItemDraw_o **)this;
  if ( (byte_4B3FD8B & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_1BDB878(&MaterialEventLogListViewItemDraw_TypeInfo, item);
    byte_4B3FD8B = 1;
  }
  if ( !item )
    goto LABEL_14;
  this = v6[6];
  if ( !this )
    goto LABEL_14;
  info_k__BackingField = item->fields._info_k__BackingField;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, is_disp, 0LL);
  if ( !is_disp )
    return;
  if ( !info_k__BackingField )
    goto LABEL_14;
  this = v6[7];
  if ( !this )
    goto LABEL_14;
  ItemIconComponent__SetFaceImage(
    (ItemIconComponent_o *)this,
    info_k__BackingField->fields.svt_id,
    info_k__BackingField->fields.limit_count,
    -1,
    1,
    0,
    0LL);
  this = v6[8];
  if ( !this )
    goto LABEL_14;
  this = (MaterialEventLogListViewItemDraw_o *)UISprite__GetAtlasSprite((UISprite_o *)this, 0LL);
  v8 = this;
  if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
  if ( !v8 )
LABEL_14:
    sub_1BDBAD4(this, item);
  LODWORD(v8->fields.mBaseSp) = MaterialEventLogListViewItemDraw_TypeInfo->static_fields->FACE_MASK_SP_W - 1;
}


void __fastcall MaterialEventLogListViewItemDraw__SetInput(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


void __fastcall MaterialEventLogListViewItemDraw__SetItem(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        int32_t mode,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x25
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v18; // x1
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  System_String_o **onChange; // x8
  MaterialEventLogListViewItemDraw_c *v23; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v25; // x9
  float v26; // s8
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x19
  __int64 v29; // x10
  __int64 v30; // x9
  int32_t v31; // w22
  __int64 v32; // x9
  int32_t *p_LABEL_MAX_LINE_MAP; // x8
  int32_t v34; // w23
  struct MaterialEventLogListViewItem_Info_o *v35; // x8
  struct UILabel_o *v36; // x23
  System_String_o *mText; // x24
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  struct MaterialEventLogListViewItem_Info_o *v41; // x8
  struct UILabel_o *notSelectLabel; // x21
  System_String_o *playLimitCountMessage; // x1
  Il2CppObject *Master_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v46; // x22
  System_String_o *v47; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v50; // x25
  struct MaterialEventLogListViewItem_Info_o *v51; // x8
  bool v52; // w1
  struct MaterialEventLogListViewItem_Info_o *v53; // x8
  struct MaterialEventLogListViewItem_Info_o *v54; // x8
  UILabel_o *v55; // x21
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x2
  __int64 v58; // x10

  if ( (byte_4B3FD8A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_VoiceMaterialCondMaster___, item);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&MaterialEventLogListViewItemDraw_TypeInfo, v11);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_8814/*"MYROOM_EMPTY_GALLERY_FOLDER_TEXT"*/, v13);
    sub_1BDB878(&StringLiteral_8580/*"MATERIAL_PROGRESS_SUFFIX"*/, v14);
    byte_4B3FD8A = 1;
  }
  if ( item )
  {
    info_k__BackingField = item->fields._info_k__BackingField;
    if ( info_k__BackingField )
    {
      if ( mode )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4B3E916 )
        {
          sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v16);
          byte_4B3E916 = 1;
        }
        GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        flag = info_k__BackingField->fields.flag;
        mBaseSp = this->fields.mBaseSp;
        mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        }
        if ( !mBaseSp )
          goto LABEL_84;
        onChange = (System_String_o **)mLabel->fields.onChange;
        if ( (flag & 2) != 0 )
          ++onChange;
        UISprite__set_spriteName(mBaseSp, *onChange, 0LL);
        mLabel = (UILabel_o *)this->fields.mBaseSp;
        if ( !mLabel )
          goto LABEL_84;
        ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))mLabel->klass->vtable._33_MakePixelPerfect.method)(
          mLabel,
          mLabel->klass->vtable._34_get_minWidth.methodPtr);
        mLabel = this->fields.mLabel;
        if ( !mLabel )
          goto LABEL_84;
        UILabel__set_fontSize(mLabel, info_k__BackingField->fields.font_size, 0LL);
        v23 = MaterialEventLogListViewItemDraw_TypeInfo;
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          v25 = 16LL;
          if ( (flag & 2) != 0 )
            v25 = 20LL;
          v26 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v25);
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v23 = MaterialEventLogListViewItemDraw_TypeInfo;
          v29 = 16LL;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          if ( (flag & 2) != 0 )
            v29 = 20LL;
          v26 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v29);
          if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
            v23 = MaterialEventLogListViewItemDraw_TypeInfo;
            v58 = 28LL;
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            if ( (flag & 2) != 0 )
              v58 = 32LL;
            v31 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v58);
            if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
              v23 = MaterialEventLogListViewItemDraw_TypeInfo;
              static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            }
            goto LABEL_29;
          }
        }
        v30 = 28LL;
        if ( (flag & 2) != 0 )
          v30 = 32LL;
        v31 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v30);
LABEL_29:
        v32 = 36LL;
        if ( (flag & 2) != 0 )
          v32 = 40LL;
        if ( item->fields._kind_k__BackingField == 5 )
        {
          if ( !v23->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v23);
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          }
          p_LABEL_MAX_LINE_MAP = &static_fields->LABEL_MAX_LINE_MAP;
        }
        else
        {
          p_LABEL_MAX_LINE_MAP = (int32_t *)((char *)static_fields + v32);
        }
        mLabel = this->fields.mLabel;
        if ( mLabel )
        {
          v34 = *p_LABEL_MAX_LINE_MAP;
          UILabel__set_overflowMethod(mLabel, 2, 0LL);
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            UILabel__set_maxLineCount(mLabel, v34, 0LL);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0LL);
              if ( (flag & 2) == 0
                && !info_k__BackingField->fields.isMovedQuest
                && item->fields._kind_k__BackingField == 5 )
              {
                v35 = item->fields._info_k__BackingField;
                if ( !v35 )
                  goto LABEL_84;
                if ( v35->fields.clear_phase_max < v35->fields.phase_max )
                {
                  v36 = this->fields.mLabel;
                  if ( !v36 )
                    goto LABEL_84;
                  mText = v36->fields.mText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8580/*"MATERIAL_PROGRESS_SUFFIX"*/, 0LL);
                  v39 = System_String__Concat_62572260(mText, v38, 0LL);
                  UILabel__set_text(v36, v39, 0LL);
                }
              }
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0LL);
                GameObjectExtensions__SetLocalPositionX(v40, v26, 0LL);
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  UILabel__SetCondensedScale(mLabel, v31, 0, 0LL);
                  if ( info_k__BackingField->fields.isGallery && info_k__BackingField->fields.isEmptyGalleryFolder )
                  {
                    v41 = item->fields._info_k__BackingField;
                    if ( !v41 )
                      goto LABEL_84;
                    v41->fields.flag |= 5u;
                    mLabel = (UILabel_o *)this->fields.notSelectObj;
                    if ( !mLabel )
                      goto LABEL_84;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, 1, 0LL);
                    notSelectLabel = this->fields.notSelectLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    mLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8814/*"MYROOM_EMPTY_GALLERY_FOLDER_TEXT"*/, 0LL);
                    if ( !notSelectLabel )
                      goto LABEL_84;
                    playLimitCountMessage = (System_String_o *)mLabel;
                    mLabel = notSelectLabel;
                  }
                  else
                  {
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_VoiceMaterialCondMaster___);
                    voiceId = info_k__BackingField->fields.voiceId;
                    v46 = (VoiceMaterialCondMaster_o *)Master_object;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(voiceId, 0LL);
                    mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v47, 0LL);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                      goto LABEL_67;
                    svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                    voicePrefix = info_k__BackingField->fields.voicePrefix;
                    v50 = info_k__BackingField->fields.voiceId;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48263560(
                                            v50,
                                            0LL);
                    if ( !v46 )
                      goto LABEL_84;
                    mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                            v46,
                                            svtVoiceId,
                                            voicePrefix,
                                            (System_String_o *)mLabel,
                                            limitCount,
                                            0LL);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                    {
LABEL_67:
                      v51 = item->fields._info_k__BackingField;
                      if ( !v51 )
                        goto LABEL_84;
                      v51->fields.flag &= 0xFFFFFFFA;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_84;
                      v52 = 0;
                    }
                    else
                    {
                      v53 = item->fields._info_k__BackingField;
                      if ( !v53 )
                        goto LABEL_84;
                      v53->fields.flag |= 5u;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_84;
                      v52 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v52, 0LL);
                    v54 = item->fields._info_k__BackingField;
                    if ( !v54 )
                      goto LABEL_84;
                    mLabel = this->fields.notSelectLabel;
                    if ( !mLabel )
                      goto LABEL_84;
                    playLimitCountMessage = v54->fields.playLimitCountMessage;
                  }
                  UILabel__set_text(mLabel, playLimitCountMessage, 0LL);
                  mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
                  v55 = this->fields.notSelectLabel;
                  if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
                  if ( v55 )
                  {
                    UILabel__SetCondensedScale(
                      v55,
                      MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_W_NOT_SELECT,
                      0,
                      0LL);
                    MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v56);
                    MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v57);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_84:
        sub_1BDBAD4(mLabel, v18);
      }
    }
    else
    {
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !byte_4B3E911 )
      {
        sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v27);
        byte_4B3E911 = 1;
      }
      GameObjectExtensions__SetLocalScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw__SetLastTimeIcon(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
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
  __int64 v16; // x1
  __int64 v17; // x21
  UnityEngine_Component_o *mLastTimeIcon; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x20
  __int64 v23; // x9
  __int64 v24; // x8
  int v25; // w9
  __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x8
  __int64 v29; // x8
  int v30; // w8
  MyRoomParamsManager_c *v31; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v33; // x0
  __int64 v34; // x8
  BalanceConfig_c *v35; // x8
  MaterialEventLogListViewItemDraw___c_c *v36; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v39; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x8
  __int64 v44; // x9
  __int64 v45; // x8
  MyRoomParamsManager_c *v46; // x0
  int32_t LastPlayQuestId_k__BackingField; // w22
  __int64 v48; // x8
  __int64 v49; // x8
  int v50; // w8
  __int64 v51; // x8
  __int64 v52; // x9
  int v53; // w9
  int v54; // w8
  __int64 v55; // x8
  __int64 v56; // x8
  __int64 v57; // x8
  __int64 v58; // x8
  BalanceConfig_c *v59; // x0
  System_Int32_array *v60; // x22
  System_Func_int__bool__o *v61; // x23
  __int64 v62; // x8
  __int64 v63; // x8
  __int64 v64; // x8
  __int64 v65; // x8
  int v66; // w8
  __int64 v67; // x8
  __int64 v68; // x8
  System_String_o *v69; // x20
  System_String_o *v70; // x0

  if ( (byte_4B3FD8C & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, item);
    sub_1BDB878(&Method_BasicHelper_Any_int____77076928, v5);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&MyRoomParamsManager_TypeInfo, v9);
    sub_1BDB878(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__, v10);
    sub_1BDB878(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__, v11);
    sub_1BDB878(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, v12);
    sub_1BDB878(&MaterialEventLogListViewItemDraw___c_TypeInfo, v13);
    sub_1BDB878(&StringLiteral_13578/*"TUTORIAL_QUEST_ID1"*/, v14);
    sub_1BDB878(&StringLiteral_6412/*"FES_WAR_ID"*/, v15);
    sub_1BDB878(&StringLiteral_8577/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v16);
    byte_4B3FD8C = 1;
  }
  v17 = sub_1BDBAC4(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_214;
  *(_QWORD *)(v17 + 16) = item;
  v22 = v17 + 16;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)item, v20, v21);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_214;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !mLastTimeIcon )
    goto LABEL_214;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0LL);
  v23 = *(_QWORD *)v22;
  if ( !*(_QWORD *)v22 )
    return;
  v24 = *(_QWORD *)(v23 + 120);
  if ( !v24 || *(_BYTE *)(v24 + 209) )
    return;
  v25 = *(_DWORD *)(v23 + 112);
  if ( v25 == 1 )
  {
    v35 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    v36 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v35->static_fields->MainInterludeWarIdOnMaterial;
    if ( !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo);
      v36 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    _9__26_0 = v36->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = MaterialEventLogListViewItemDraw___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v36->static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__26_0,
        v39,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        0LL);
      static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = _9__26_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v41, v42);
    }
    mLastTimeIcon = (UnityEngine_Component_o *)BasicHelper__Any_int__50449276(
                                                 MainInterludeWarIdOnMaterial,
                                                 (System_Func_T__bool__o *)_9__26_0,
                                                 (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      return;
    v43 = *(_QWORD *)v22;
    if ( !*(_QWORD *)v22 )
      goto LABEL_214;
    v44 = *(_QWORD *)(v43 + 120);
    if ( !v44 )
      goto LABEL_214;
    if ( *(_BYTE *)(v44 + 181) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4B3FE1A )
      {
        sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B3FE1A = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v43 = *(_QWORD *)v22;
      if ( !*(_QWORD *)v22 )
        goto LABEL_214;
      v44 = *(_QWORD *)(v43 + 120);
      if ( !v44 )
        goto LABEL_214;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v44 + 44) )
        goto LABEL_205;
    }
    if ( *(_BYTE *)(v44 + 180) )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v43 = *(_QWORD *)v22;
        if ( !*(_QWORD *)v22 )
          goto LABEL_214;
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v45 = *(_QWORD *)(v43 + 120);
      if ( !v45 )
        goto LABEL_214;
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( !mLastTimeIcon )
        goto LABEL_214;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             *(_DWORD *)(v45 + 40),
             (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_205;
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4B3FD3C )
    {
      sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
      byte_4B3FD3C = 1;
    }
    v46 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v46 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v46->static_fields->_LastPlayQuestId_k__BackingField;
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13578/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( LastPlayQuestId_k__BackingField == (_DWORD)mLastTimeIcon )
    {
      if ( !*(_QWORD *)v22 )
        goto LABEL_214;
      v48 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
      if ( !v48 )
        goto LABEL_214;
      if ( !*(_DWORD *)(v48 + 40) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_214;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( !mLastTimeIcon )
          goto LABEL_214;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4B3FD3D )
    {
      sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
      byte_4B3FD3D = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v22 || (v49 = *(_QWORD *)(*(_QWORD *)v22 + 120LL)) == 0 )
LABEL_214:
      sub_1BDBAD4(mLastTimeIcon, v19);
    v50 = *(_DWORD *)(v49 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != v50 )
    {
      if ( v50 == -1 )
        return;
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4B3FD3D )
      {
        sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B3FD3D = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( *(_QWORD *)v22 )
      {
        v51 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
        if ( v51 )
        {
          v52 = 1374389535LL * *(int *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL);
          v53 = (v52 >> 37) + ((unsigned __int64)v52 >> 63);
          v54 = *(_DWORD *)(v51 + 40) / 1000 - 10;
LABEL_204:
          if ( v53 != v54 )
            return;
          goto LABEL_205;
        }
      }
      goto LABEL_214;
    }
LABEL_157:
    if ( v50 == -1 )
      return;
    goto LABEL_205;
  }
  if ( v25 == 3 )
  {
    if ( *(_DWORD *)(v24 + 36) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4B3FE1B )
      {
        sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B3FE1B = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v22 )
        goto LABEL_214;
      v55 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
      if ( !v55 )
        goto LABEL_214;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 20LL) == *(_DWORD *)(v55 + 36) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_214;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( !mLastTimeIcon )
          goto LABEL_214;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
      }
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v22 )
      goto LABEL_214;
    v56 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
    if ( !v56 )
      goto LABEL_214;
    mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
    if ( !mLastTimeIcon )
      goto LABEL_214;
    mLastTimeIcon = (UnityEngine_Component_o *)System_Collections_Generic_List_int___Contains(
                                                 (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                                                 *(_DWORD *)(v56 + 40),
                                                 (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      goto LABEL_205;
    if ( !*(_QWORD *)v22 )
      goto LABEL_214;
    v57 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
    if ( !v57 )
      goto LABEL_214;
    if ( *(_BYTE *)(v57 + 181) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4B3FE1A )
      {
        sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B3FE1A = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v22 )
        goto LABEL_214;
      v58 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
      if ( !v58 )
        goto LABEL_214;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v58 + 44) )
        goto LABEL_205;
    }
    v59 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v59 = BalanceConfig_TypeInfo;
    }
    v60 = v59->static_fields->MainInterludeWarIdOnMaterial;
    v61 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v61,
      (Il2CppObject *)v17,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      0LL);
    if ( !BasicHelper__Any_int__50449276(
            v60,
            (System_Func_T__bool__o *)v61,
            (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928) )
      return;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4B3FD3D )
    {
      sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
      byte_4B3FD3D = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v22 )
      goto LABEL_214;
    v62 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
    if ( !v62 )
      goto LABEL_214;
    v50 = *(_DWORD *)(v62 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != v50 )
      return;
    goto LABEL_157;
  }
  if ( v25 != 5 )
    return;
  mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6412/*"FES_WAR_ID"*/, 0LL);
  v26 = *(_QWORD *)v22;
  if ( !*(_QWORD *)v22 )
    goto LABEL_214;
  v27 = *(_QWORD *)(v26 + 120);
  if ( !v27 )
    goto LABEL_214;
  if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v27 + 40) )
  {
    if ( *(_BYTE *)(v27 + 181) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4B3FE1A )
      {
        sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B3FE1A = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v26 = *(_QWORD *)v22;
      if ( !*(_QWORD *)v22 )
        goto LABEL_214;
      v27 = *(_QWORD *)(v26 + 120);
      if ( !v27 )
        goto LABEL_214;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v27 + 44) )
        goto LABEL_205;
    }
    if ( !*(_BYTE *)(v27 + 180) )
    {
LABEL_176:
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4B3FD3C )
      {
        sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B3FD3C = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v22 )
        goto LABEL_214;
      v64 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
      if ( !v64 )
        goto LABEL_214;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(_DWORD *)(v64 + 44) )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4B3FD3D )
        {
          sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
          byte_4B3FD3D = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v22 )
          goto LABEL_214;
        v65 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
        if ( !v65 )
          goto LABEL_214;
        v66 = *(_DWORD *)(v65 + 40);
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v66 && v66 != -1 )
          goto LABEL_205;
      }
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4B3FD3F )
      {
        sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B3FD3F = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v22 )
        goto LABEL_214;
      v67 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
      if ( !v67 )
        goto LABEL_214;
      v54 = *(_DWORD *)(v67 + 44);
      v53 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL);
      goto LABEL_204;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v26 = *(_QWORD *)v22;
      if ( !*(_QWORD *)v22 )
        goto LABEL_214;
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v63 = *(_QWORD *)(v26 + 120);
    if ( v63 )
    {
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               *(_DWORD *)(v63 + 40),
               (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          goto LABEL_205;
        }
        goto LABEL_176;
      }
    }
    goto LABEL_214;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4B3FD3C )
  {
    sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
    byte_4B3FD3C = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !*(_QWORD *)v22 )
    goto LABEL_214;
  v28 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
  if ( !v28 )
    goto LABEL_214;
  if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) != *(_DWORD *)(v28 + 44) )
    return;
  if ( !LODWORD(mLastTimeIcon[9].monitor) )
    j_il2cpp_runtime_class_init_0(mLastTimeIcon);
  if ( !byte_4B3FD3D )
  {
    sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
    byte_4B3FD3D = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !*(_QWORD *)v22 )
    goto LABEL_214;
  v29 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
  if ( !v29 )
    goto LABEL_214;
  v30 = *(_DWORD *)(v29 + 40);
  if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != v30 || v30 == -1 )
    return;
  if ( !LODWORD(mLastTimeIcon[9].monitor) )
    j_il2cpp_runtime_class_init_0(mLastTimeIcon);
  if ( !byte_4B3FD3E )
  {
    sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
    byte_4B3FD3E = 1;
  }
  v31 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v31 = MyRoomParamsManager_TypeInfo;
  }
  LastPlayTitle_k__BackingField = v31->static_fields->_LastPlayTitle_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8577/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
  mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v33, 0LL);
  if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
  {
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4B3FD3E )
    {
      sub_1BDB878(&MyRoomParamsManager_TypeInfo, v19);
      byte_4B3FD3E = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v22 )
      goto LABEL_214;
    v34 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
    if ( !v34 )
      goto LABEL_214;
    if ( !System_String__op_Equality(
            *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
            *(System_String_o **)(v34 + 16),
            0LL) )
      return;
    goto LABEL_205;
  }
  if ( !*(_QWORD *)v22 )
    goto LABEL_214;
  v68 = *(_QWORD *)(*(_QWORD *)v22 + 120LL);
  if ( !v68 )
    goto LABEL_214;
  v69 = *(System_String_o **)(v68 + 16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_8577/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
  if ( System_String__op_Inequality(v69, v70, 0LL) )
  {
LABEL_205:
    mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
    if ( mLastTimeIcon )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
      if ( mLastTimeIcon )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
        return;
      }
    }
    goto LABEL_214;
  }
}


void __fastcall MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B3FD8E & 1) == 0 )
  {
    sub_1BDB878(&MaterialEventLogListViewItemDraw___c_TypeInfo, v1);
    byte_4B3FD8E = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(MaterialEventLogListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall MaterialEventLogListViewItemDraw___c___ctor(
        MaterialEventLogListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewItemDraw___c___SetLastTimeIcon_b__26_0(
        MaterialEventLogListViewItemDraw___c_o *this,
        int32_t interludeWarId,
        const MethodInfo *method)
{
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_4B3FD8F & 1) == 0 )
  {
    sub_1BDB878(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
    byte_4B3FD8F = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4B3FD3D )
  {
    sub_1BDB878(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
    byte_4B3FD3D = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  return v4->static_fields->_LastPlayWarId_k__BackingField == interludeWarId;
}


void __fastcall MaterialEventLogListViewItemDraw___c__DisplayClass26_0___ctor(
        MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialEventLogListViewItemDraw___c__DisplayClass26_0___SetLastTimeIcon_b__1(
        MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *this,
        int32_t interludeWarId,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_o *item; // x8
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  item = this->fields.item;
  if ( !item || (info_k__BackingField = item->fields._info_k__BackingField) == 0LL )
    sub_1BDBAD4(this, interludeWarId);
  return info_k__BackingField->fields.war_id == interludeWarId;
}