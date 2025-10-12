void MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct MaterialEventLogListViewItemDraw_StaticFields *v7; // x8

  if ( (byte_4C32BD8 & 1) == 0 )
  {
    sub_1C32C20(&MaterialEventLogListViewItemDraw_TypeInfo);
    sub_1C32C20(&StringLiteral_20457/*"img_menuboard_03"*/);
    sub_1C32C20(&StringLiteral_20456/*"img_menuboard_01"*/);
    byte_4C32BD8 = 1;
  }
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->BASE_SP_NAME_DEFAULT = (struct System_String_o *)StringLiteral_20456/*"img_menuboard_01"*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)MaterialEventLogListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_20456/*"img_menuboard_01"*/,
    v1,
    v2);
  v3 = StringLiteral_20457/*"img_menuboard_03"*/;
  static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  static_fields->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_20457/*"img_menuboard_03"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->BASE_SP_NAME_SVT, v3, v5, v6);
  v7 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v7->LABEL_X_DEFAULT = 0x4230000040000000LL;
  *(_OWORD *)&v7->LABEL_W_DEFAULT = xmmword_C0E0C0;
  *(_OWORD *)&v7->LABEL_MAX_LINE_SVT = xmmword_C0D450;
}


void MaterialEventLogListViewItemDraw___ctor(MaterialEventLogListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool MaterialEventLogListViewItemDraw__IsEnableSelect(
        MaterialEventLogListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *notSelectObj; // x0

  notSelectObj = this->fields.notSelectObj;
  if ( !notSelectObj )
    sub_1C32E7C(0);
  return !UnityEngine_GameObject__get_activeSelf(notSelectObj, 0);
}


void MaterialEventLogListViewItemDraw__LateUpdateItem(
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
    ItemIconComponent__SetColor((ItemIconComponent_o *)this, v10, 0);
    this = (MaterialEventLogListViewItemDraw_o *)v5->fields.mFaceMaskSp;
    if ( !this )
LABEL_9:
      sub_1C32E7C(this);
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UIWidget__set_color((UIWidget_o *)this, v11, 0);
  }
}


void MaterialEventLogListViewItemDraw__SetEnableSelect(
        MaterialEventLogListViewItemDraw_o *this,
        bool isSelect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *notSelectObj; // x0

  notSelectObj = this->fields.notSelectObj;
  if ( !notSelectObj )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(notSelectObj, !isSelect, 0);
}


void MaterialEventLogListViewItemDraw__SetFaceImage(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        bool is_disp,
        const MethodInfo *method)
{
  MaterialEventLogListViewItemDraw_o **v6; // x19
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x21
  MaterialEventLogListViewItemDraw_o *v8; // x19

  v6 = (MaterialEventLogListViewItemDraw_o **)this;
  if ( (byte_4C32BD6 & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_1C32C20(&MaterialEventLogListViewItemDraw_TypeInfo);
    byte_4C32BD6 = 1;
  }
  if ( !item )
    goto LABEL_14;
  this = v6[6];
  if ( !this )
    goto LABEL_14;
  info_k__BackingField = item->fields._info_k__BackingField;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, is_disp, 0);
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
    0);
  this = v6[8];
  if ( !this )
    goto LABEL_14;
  this = (MaterialEventLogListViewItemDraw_o *)UISprite__GetAtlasSprite((UISprite_o *)this, 0);
  v8 = this;
  if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
  if ( !v8 )
LABEL_14:
    sub_1C32E7C(this);
  LODWORD(v8->fields.mBaseSp) = MaterialEventLogListViewItemDraw_TypeInfo->static_fields->FACE_MASK_SP_W - 1;
}


void MaterialEventLogListViewItemDraw__SetInput(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


void MaterialEventLogListViewItemDraw__SetItem(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        int32_t mode,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x25
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  System_String_o **onChange; // x8
  MaterialEventLogListViewItemDraw_c *v15; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v17; // x9
  float v18; // s8
  UnityEngine_GameObject_o *v19; // x19
  __int64 v20; // x10
  __int64 v21; // x9
  int32_t v22; // w22
  __int64 v23; // x9
  int32_t *p_LABEL_MAX_LINE_MAP; // x8
  int32_t v25; // w23
  struct MaterialEventLogListViewItem_Info_o *v26; // x8
  struct UILabel_o *v27; // x23
  System_String_o *mText; // x24
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  struct MaterialEventLogListViewItem_Info_o *v32; // x8
  struct UILabel_o *notSelectLabel; // x21
  System_String_o *playLimitCountMessage; // x1
  Il2CppObject *Master_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v37; // x22
  System_String_o *v38; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v41; // x25
  struct MaterialEventLogListViewItem_Info_o *v42; // x8
  bool v43; // w1
  struct MaterialEventLogListViewItem_Info_o *v44; // x8
  struct MaterialEventLogListViewItem_Info_o *v45; // x8
  UILabel_o *v46; // x21
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x2
  __int64 v49; // x10

  if ( (byte_4C32BD5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_VoiceMaterialCondMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&MaterialEventLogListViewItemDraw_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C32C20(&StringLiteral_8822/*"MYROOM_EMPTY_GALLERY_FOLDER_TEXT"*/);
    sub_1C32C20(&StringLiteral_8587/*"MATERIAL_PROGRESS_SUFFIX"*/);
    byte_4C32BD5 = 1;
  }
  if ( item )
  {
    info_k__BackingField = item->fields._info_k__BackingField;
    if ( info_k__BackingField )
    {
      if ( mode )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !byte_4C313D6 )
        {
          sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D6 = 1;
        }
        GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
        UISprite__set_spriteName(mBaseSp, *onChange, 0);
        mLabel = (UILabel_o *)this->fields.mBaseSp;
        if ( !mLabel )
          goto LABEL_84;
        ((void (__fastcall *)(UILabel_o *, const MethodInfo *))mLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
          mLabel,
          mLabel->klass->vtable._33_MakePixelPerfect.method);
        mLabel = this->fields.mLabel;
        if ( !mLabel )
          goto LABEL_84;
        UILabel__set_fontSize(mLabel, info_k__BackingField->fields.font_size, 0);
        v15 = MaterialEventLogListViewItemDraw_TypeInfo;
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          v17 = 16;
          if ( (flag & 2) != 0 )
            v17 = 20;
          v18 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v17);
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v15 = MaterialEventLogListViewItemDraw_TypeInfo;
          v20 = 16;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          if ( (flag & 2) != 0 )
            v20 = 20;
          v18 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v20);
          if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
            v15 = MaterialEventLogListViewItemDraw_TypeInfo;
            v49 = 28;
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            if ( (flag & 2) != 0 )
              v49 = 32;
            v22 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v49);
            if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
              v15 = MaterialEventLogListViewItemDraw_TypeInfo;
              static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            }
            goto LABEL_29;
          }
        }
        v21 = 28;
        if ( (flag & 2) != 0 )
          v21 = 32;
        v22 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v21);
LABEL_29:
        v23 = 36;
        if ( (flag & 2) != 0 )
          v23 = 40;
        if ( item->fields._kind_k__BackingField == 5 )
        {
          if ( !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          }
          p_LABEL_MAX_LINE_MAP = &static_fields->LABEL_MAX_LINE_MAP;
        }
        else
        {
          p_LABEL_MAX_LINE_MAP = (int32_t *)((char *)static_fields + v23);
        }
        mLabel = this->fields.mLabel;
        if ( mLabel )
        {
          v25 = *p_LABEL_MAX_LINE_MAP;
          UILabel__set_overflowMethod(mLabel, 2, 0);
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            UILabel__set_maxLineCount(mLabel, v25, 0);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0);
              if ( (flag & 2) == 0
                && !info_k__BackingField->fields.isMovedQuest
                && item->fields._kind_k__BackingField == 5 )
              {
                v26 = item->fields._info_k__BackingField;
                if ( !v26 )
                  goto LABEL_84;
                if ( v26->fields.clear_phase_max < v26->fields.phase_max )
                {
                  v27 = this->fields.mLabel;
                  if ( !v27 )
                    goto LABEL_84;
                  mText = v27->fields.mText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8587/*"MATERIAL_PROGRESS_SUFFIX"*/, 0);
                  v30 = System_String__Concat_63518544(mText, v29, 0);
                  UILabel__set_text(v27, v30, 0);
                }
              }
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0);
                GameObjectExtensions__SetLocalPositionX(v31, v18, 0);
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  UILabel__SetCondensedScale(mLabel, v22, 0, 0);
                  if ( info_k__BackingField->fields.isGallery && info_k__BackingField->fields.isEmptyGalleryFolder )
                  {
                    v32 = item->fields._info_k__BackingField;
                    if ( !v32 )
                      goto LABEL_84;
                    v32->fields.flag |= 5u;
                    mLabel = (UILabel_o *)this->fields.notSelectObj;
                    if ( !mLabel )
                      goto LABEL_84;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, 1, 0);
                    notSelectLabel = this->fields.notSelectLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    mLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8822/*"MYROOM_EMPTY_GALLERY_FOLDER_TEXT"*/, 0);
                    if ( !notSelectLabel )
                      goto LABEL_84;
                    playLimitCountMessage = (System_String_o *)mLabel;
                    mLabel = notSelectLabel;
                  }
                  else
                  {
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_VoiceMaterialCondMaster___);
                    voiceId = info_k__BackingField->fields.voiceId;
                    v37 = (VoiceMaterialCondMaster_o *)Master_object;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48923628(voiceId, 0);
                    mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v38, 0);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                      goto LABEL_67;
                    svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                    voicePrefix = info_k__BackingField->fields.voicePrefix;
                    v41 = info_k__BackingField->fields.voiceId;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48923628(v41, 0);
                    if ( !v37 )
                      goto LABEL_84;
                    mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                            v37,
                                            svtVoiceId,
                                            voicePrefix,
                                            (System_String_o *)mLabel,
                                            limitCount,
                                            0);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                    {
LABEL_67:
                      v42 = item->fields._info_k__BackingField;
                      if ( !v42 )
                        goto LABEL_84;
                      v42->fields.flag &= 0xFFFFFFFA;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_84;
                      v43 = 0;
                    }
                    else
                    {
                      v44 = item->fields._info_k__BackingField;
                      if ( !v44 )
                        goto LABEL_84;
                      v44->fields.flag |= 5u;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_84;
                      v43 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v43, 0);
                    v45 = item->fields._info_k__BackingField;
                    if ( !v45 )
                      goto LABEL_84;
                    mLabel = this->fields.notSelectLabel;
                    if ( !mLabel )
                      goto LABEL_84;
                    playLimitCountMessage = v45->fields.playLimitCountMessage;
                  }
                  UILabel__set_text(mLabel, playLimitCountMessage, 0);
                  mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
                  v46 = this->fields.notSelectLabel;
                  if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
                  if ( v46 )
                  {
                    UILabel__SetCondensedScale(
                      v46,
                      MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_W_NOT_SELECT,
                      0,
                      0);
                    MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v47);
                    MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v48);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_84:
        sub_1C32E7C(mLabel);
      }
    }
    else
    {
      v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_4C313D1 )
      {
        sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      GameObjectExtensions__SetLocalScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
  }
}


void MaterialEventLogListViewItemDraw__SetLastTimeIcon(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Component_o *mLastTimeIcon; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x20
  __int64 v10; // x9
  __int64 v11; // x8
  int v12; // w9
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x8
  __int64 v16; // x8
  int v17; // w8
  MyRoomParamsManager_c *v18; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v20; // x0
  __int64 v21; // x8
  BalanceConfig_c *v22; // x8
  MaterialEventLogListViewItemDraw___c_c *v23; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v26; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  __int64 v31; // x9
  __int64 v32; // x8
  MyRoomParamsManager_c *v33; // x0
  int32_t LastPlayQuestId_k__BackingField; // w22
  __int64 v35; // x8
  __int64 v36; // x8
  int v37; // w8
  __int64 v38; // x8
  __int64 v39; // x9
  int v40; // w9
  int v41; // w8
  __int64 v42; // x8
  __int64 v43; // x8
  __int64 v44; // x8
  __int64 v45; // x8
  BalanceConfig_c *v46; // x0
  System_Int32_array *v47; // x22
  System_Func_int__bool__o *v48; // x23
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  int v53; // w8
  __int64 v54; // x8
  __int64 v55; // x8
  System_String_o *v56; // x20
  System_String_o *v57; // x0

  if ( (byte_4C32BD7 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&MyRoomParamsManager_TypeInfo);
    sub_1C32C20(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__);
    sub_1C32C20(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__);
    sub_1C32C20(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
    sub_1C32C20(&MaterialEventLogListViewItemDraw___c_TypeInfo);
    sub_1C32C20(&StringLiteral_13605/*"TUTORIAL_QUEST_ID1"*/);
    sub_1C32C20(&StringLiteral_6400/*"FES_WAR_ID"*/);
    sub_1C32C20(&StringLiteral_8584/*"MATERIAL_MAP_EPILOGUE_TITLE"*/);
    byte_4C32BD7 = 1;
  }
  v5 = sub_1C32E6C(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_214;
  *(_QWORD *)(v5 + 16) = item;
  v9 = v5 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)item, v7, v8);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_214;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0);
  if ( !mLastTimeIcon )
    goto LABEL_214;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0);
  v10 = *(_QWORD *)v9;
  if ( !*(_QWORD *)v9 )
    return;
  v11 = *(_QWORD *)(v10 + 128);
  if ( !v11 || *(_BYTE *)(v11 + 209) )
    return;
  v12 = *(_DWORD *)(v10 + 120);
  if ( v12 == 1 )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v23 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v22->static_fields->MainInterludeWarIdOnMaterial;
    if ( !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo);
      v23 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    _9__26_0 = v23->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = MaterialEventLogListViewItemDraw___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__26_0,
        v26,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        0);
      static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = _9__26_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v28, v29);
    }
    mLastTimeIcon = (UnityEngine_Component_o *)BasicHelper__Any_int__51143952(
                                                 MainInterludeWarIdOnMaterial,
                                                 (System_Func_T__bool__o *)_9__26_0,
                                                 (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      return;
    v30 = *(_QWORD *)v9;
    if ( !*(_QWORD *)v9 )
      goto LABEL_214;
    v31 = *(_QWORD *)(v30 + 128);
    if ( !v31 )
      goto LABEL_214;
    if ( *(_BYTE *)(v31 + 181) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4C32C0E )
      {
        sub_1C32C20(&MyRoomParamsManager_TypeInfo);
        byte_4C32C0E = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v30 = *(_QWORD *)v9;
      if ( !*(_QWORD *)v9 )
        goto LABEL_214;
      v31 = *(_QWORD *)(v30 + 128);
      if ( !v31 )
        goto LABEL_214;
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 56) == *(_DWORD *)(v31 + 44) )
        goto LABEL_205;
    }
    if ( *(_BYTE *)(v31 + 180) )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v30 = *(_QWORD *)v9;
        if ( !*(_QWORD *)v9 )
          goto LABEL_214;
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v32 = *(_QWORD *)(v30 + 128);
      if ( !v32 )
        goto LABEL_214;
      mLastTimeIcon = *(UnityEngine_Component_o **)(mLastTimeIcon[7].fields.m_CachedPtr + 40);
      if ( !mLastTimeIcon )
        goto LABEL_214;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             *(_DWORD *)(v32 + 40),
             (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_205;
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4C32C0A )
    {
      sub_1C32C20(&MyRoomParamsManager_TypeInfo);
      byte_4C32C0A = 1;
    }
    v33 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v33 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v33->static_fields->_LastPlayQuestId_k__BackingField;
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13605/*"TUTORIAL_QUEST_ID1"*/, 0);
    if ( LastPlayQuestId_k__BackingField == (_DWORD)mLastTimeIcon )
    {
      if ( !*(_QWORD *)v9 )
        goto LABEL_214;
      v35 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
      if ( !v35 )
        goto LABEL_214;
      if ( !*(_DWORD *)(v35 + 40) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_214;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0);
        if ( !mLastTimeIcon )
          goto LABEL_214;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4C32C0B )
    {
      sub_1C32C20(&MyRoomParamsManager_TypeInfo);
      byte_4C32C0B = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v9 || (v36 = *(_QWORD *)(*(_QWORD *)v9 + 128LL)) == 0 )
LABEL_214:
      sub_1C32E7C(mLastTimeIcon);
    v37 = *(_DWORD *)(v36 + 40);
    if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16) != v37 )
    {
      if ( v37 == -1 )
        return;
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4C32C0B )
      {
        sub_1C32C20(&MyRoomParamsManager_TypeInfo);
        byte_4C32C0B = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( *(_QWORD *)v9 )
      {
        v38 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
        if ( v38 )
        {
          v39 = 1374389535LL * *(int *)(mLastTimeIcon[7].fields.m_CachedPtr + 16);
          v40 = (v39 >> 37) + ((unsigned __int64)v39 >> 63);
          v41 = *(_DWORD *)(v38 + 40) / 1000 - 10;
LABEL_204:
          if ( v40 != v41 )
            return;
          goto LABEL_205;
        }
      }
      goto LABEL_214;
    }
LABEL_157:
    if ( v37 == -1 )
      return;
    goto LABEL_205;
  }
  if ( v12 == 3 )
  {
    if ( *(_DWORD *)(v11 + 36) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4C32C0F )
      {
        sub_1C32C20(&MyRoomParamsManager_TypeInfo);
        byte_4C32C0F = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v9 )
        goto LABEL_214;
      v42 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
      if ( !v42 )
        goto LABEL_214;
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 20) == *(_DWORD *)(v42 + 36) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_214;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0);
        if ( !mLastTimeIcon )
          goto LABEL_214;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
      }
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v9 )
      goto LABEL_214;
    v43 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
    if ( !v43 )
      goto LABEL_214;
    mLastTimeIcon = *(UnityEngine_Component_o **)(mLastTimeIcon[7].fields.m_CachedPtr + 40);
    if ( !mLastTimeIcon )
      goto LABEL_214;
    mLastTimeIcon = (UnityEngine_Component_o *)System_Collections_Generic_List_int___Contains(
                                                 (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                                                 *(_DWORD *)(v43 + 40),
                                                 (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      goto LABEL_205;
    if ( !*(_QWORD *)v9 )
      goto LABEL_214;
    v44 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
    if ( !v44 )
      goto LABEL_214;
    if ( *(_BYTE *)(v44 + 181) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4C32C0E )
      {
        sub_1C32C20(&MyRoomParamsManager_TypeInfo);
        byte_4C32C0E = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v9 )
        goto LABEL_214;
      v45 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
      if ( !v45 )
        goto LABEL_214;
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 56) == *(_DWORD *)(v45 + 44) )
        goto LABEL_205;
    }
    v46 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v46 = BalanceConfig_TypeInfo;
    }
    v47 = v46->static_fields->MainInterludeWarIdOnMaterial;
    v48 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v48,
      (Il2CppObject *)v5,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      0);
    if ( !BasicHelper__Any_int__51143952(
            v47,
            (System_Func_T__bool__o *)v48,
            (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168) )
      return;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4C32C0B )
    {
      sub_1C32C20(&MyRoomParamsManager_TypeInfo);
      byte_4C32C0B = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v9 )
      goto LABEL_214;
    v49 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
    if ( !v49 )
      goto LABEL_214;
    v37 = *(_DWORD *)(v49 + 40);
    if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16) != v37 )
      return;
    goto LABEL_157;
  }
  if ( v12 != 5 )
    return;
  mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6400/*"FES_WAR_ID"*/, 0);
  v13 = *(_QWORD *)v9;
  if ( !*(_QWORD *)v9 )
    goto LABEL_214;
  v14 = *(_QWORD *)(v13 + 128);
  if ( !v14 )
    goto LABEL_214;
  if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v14 + 40) )
  {
    if ( *(_BYTE *)(v14 + 181) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4C32C0E )
      {
        sub_1C32C20(&MyRoomParamsManager_TypeInfo);
        byte_4C32C0E = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v13 = *(_QWORD *)v9;
      if ( !*(_QWORD *)v9 )
        goto LABEL_214;
      v14 = *(_QWORD *)(v13 + 128);
      if ( !v14 )
        goto LABEL_214;
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 56) == *(_DWORD *)(v14 + 44) )
        goto LABEL_205;
    }
    if ( !*(_BYTE *)(v14 + 180) )
    {
LABEL_176:
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4C32C0A )
      {
        sub_1C32C20(&MyRoomParamsManager_TypeInfo);
        byte_4C32C0A = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v9 )
        goto LABEL_214;
      v51 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
      if ( !v51 )
        goto LABEL_214;
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 12) == *(_DWORD *)(v51 + 44) )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4C32C0B )
        {
          sub_1C32C20(&MyRoomParamsManager_TypeInfo);
          byte_4C32C0B = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v9 )
          goto LABEL_214;
        v52 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
        if ( !v52 )
          goto LABEL_214;
        v53 = *(_DWORD *)(v52 + 40);
        if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16) == v53 && v53 != -1 )
          goto LABEL_205;
      }
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4C32C0D )
      {
        sub_1C32C20(&MyRoomParamsManager_TypeInfo);
        byte_4C32C0D = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v9 )
        goto LABEL_214;
      v54 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
      if ( !v54 )
        goto LABEL_214;
      v41 = *(_DWORD *)(v54 + 44);
      v40 = *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 32);
      goto LABEL_204;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v13 = *(_QWORD *)v9;
      if ( !*(_QWORD *)v9 )
        goto LABEL_214;
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v50 = *(_QWORD *)(v13 + 128);
    if ( v50 )
    {
      mLastTimeIcon = *(UnityEngine_Component_o **)(mLastTimeIcon[7].fields.m_CachedPtr + 40);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               *(_DWORD *)(v50 + 40),
               (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
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
  if ( !byte_4C32C0A )
  {
    sub_1C32C20(&MyRoomParamsManager_TypeInfo);
    byte_4C32C0A = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !*(_QWORD *)v9 )
    goto LABEL_214;
  v15 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
  if ( !v15 )
    goto LABEL_214;
  if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 12) != *(_DWORD *)(v15 + 44) )
    return;
  if ( !LODWORD(mLastTimeIcon[9].monitor) )
    j_il2cpp_runtime_class_init_0(mLastTimeIcon);
  if ( !byte_4C32C0B )
  {
    sub_1C32C20(&MyRoomParamsManager_TypeInfo);
    byte_4C32C0B = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !*(_QWORD *)v9 )
    goto LABEL_214;
  v16 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
  if ( !v16 )
    goto LABEL_214;
  v17 = *(_DWORD *)(v16 + 40);
  if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16) != v17 || v17 == -1 )
    return;
  if ( !LODWORD(mLastTimeIcon[9].monitor) )
    j_il2cpp_runtime_class_init_0(mLastTimeIcon);
  if ( !byte_4C32C0C )
  {
    sub_1C32C20(&MyRoomParamsManager_TypeInfo);
    byte_4C32C0C = 1;
  }
  v18 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v18 = MyRoomParamsManager_TypeInfo;
  }
  LastPlayTitle_k__BackingField = v18->static_fields->_LastPlayTitle_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8584/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
  mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v20, 0);
  if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
  {
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4C32C0C )
    {
      sub_1C32C20(&MyRoomParamsManager_TypeInfo);
      byte_4C32C0C = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v9 )
      goto LABEL_214;
    v21 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
    if ( !v21 )
      goto LABEL_214;
    if ( !System_String__op_Equality(
            *(System_String_o **)(mLastTimeIcon[7].fields.m_CachedPtr + 24),
            *(System_String_o **)(v21 + 16),
            0) )
      return;
    goto LABEL_205;
  }
  if ( !*(_QWORD *)v9 )
    goto LABEL_214;
  v55 = *(_QWORD *)(*(_QWORD *)v9 + 128LL);
  if ( !v55 )
    goto LABEL_214;
  v56 = *(System_String_o **)(v55 + 16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_8584/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
  if ( System_String__op_Inequality(v56, v57, 0) )
  {
LABEL_205:
    mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
    if ( mLastTimeIcon )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0);
      if ( mLastTimeIcon )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
        return;
      }
    }
    goto LABEL_214;
  }
}


void MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C32BD9 & 1) == 0 )
  {
    sub_1C32C20(&MaterialEventLogListViewItemDraw___c_TypeInfo);
    byte_4C32BD9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(MaterialEventLogListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void MaterialEventLogListViewItemDraw___c___ctor(
        MaterialEventLogListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialEventLogListViewItemDraw___c___SetLastTimeIcon_b__26_0(
        MaterialEventLogListViewItemDraw___c_o *this,
        int32_t interludeWarId,
        const MethodInfo *method)
{
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_4C32BDA & 1) == 0 )
  {
    sub_1C32C20(&MyRoomParamsManager_TypeInfo);
    byte_4C32BDA = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4C32C0B )
  {
    sub_1C32C20(&MyRoomParamsManager_TypeInfo);
    byte_4C32C0B = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  return v4->static_fields->_LastPlayWarId_k__BackingField == interludeWarId;
}


void MaterialEventLogListViewItemDraw___c__DisplayClass26_0___ctor(
        MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialEventLogListViewItemDraw___c__DisplayClass26_0___SetLastTimeIcon_b__1(
        MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *this,
        int32_t interludeWarId,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_o *item; // x8
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  item = this->fields.item;
  if ( !item || (info_k__BackingField = item->fields._info_k__BackingField) == 0 )
    sub_1C32E7C(this);
  return info_k__BackingField->fields.war_id == interludeWarId;
}