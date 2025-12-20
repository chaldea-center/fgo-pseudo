void MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct MaterialEventLogListViewItemDraw_StaticFields *v15; // x8

  if ( (byte_4D279C0 & 1) == 0 )
  {
    sub_1C94098(&MaterialEventLogListViewItemDraw_TypeInfo);
    sub_1C94098(&StringLiteral_20637/*"img_menuboard_03"*/);
    sub_1C94098(&StringLiteral_20636/*"img_menuboard_01"*/);
    byte_4D279C0 = 1;
  }
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->BASE_SP_NAME_DEFAULT = (struct System_String_o *)StringLiteral_20636/*"img_menuboard_01"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)MaterialEventLogListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_20636/*"img_menuboard_01"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20637/*"img_menuboard_03"*/;
  static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  static_fields->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_20637/*"img_menuboard_03"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->BASE_SP_NAME_SVT, v7, v9, v10, v11, v12, v13, v14);
  v15 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v15->LABEL_X_DEFAULT = 0x4230000040000000LL;
  *(_OWORD *)&v15->LABEL_W_DEFAULT = xmmword_D00220;
  *(_OWORD *)&v15->LABEL_MAX_LINE_SVT = xmmword_CFF5C0;
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
    sub_1C942F0(0, method);
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
      sub_1C942F0(this, item);
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
    sub_1C942F0(0, isSelect);
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
  if ( (byte_4D279BE & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_1C94098(&MaterialEventLogListViewItemDraw_TypeInfo);
    byte_4D279BE = 1;
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
    sub_1C942F0(this, item);
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
  __int64 v11; // x1
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  System_String_o **onChange; // x8
  MaterialEventLogListViewItemDraw_c *v16; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v18; // x9
  float v19; // s8
  UnityEngine_GameObject_o *v20; // x19
  __int64 v21; // x10
  __int64 v22; // x9
  int32_t v23; // w22
  __int64 v24; // x9
  int32_t *p_LABEL_MAX_LINE_MAP; // x8
  int32_t v26; // w23
  struct MaterialEventLogListViewItem_Info_o *v27; // x8
  struct UILabel_o *v28; // x23
  System_String_o *mText; // x24
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  struct MaterialEventLogListViewItem_Info_o *v33; // x8
  struct UILabel_o *notSelectLabel; // x21
  System_String_o *playLimitCountMessage; // x1
  Il2CppObject *Master_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v38; // x22
  System_String_o *v39; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v42; // x25
  struct MaterialEventLogListViewItem_Info_o *v43; // x8
  bool v44; // w1
  struct MaterialEventLogListViewItem_Info_o *v45; // x8
  struct MaterialEventLogListViewItem_Info_o *v46; // x8
  UILabel_o *v47; // x21
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  __int64 v50; // x10

  if ( (byte_4D279BD & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_VoiceMaterialCondMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&MaterialEventLogListViewItemDraw_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C94098(&StringLiteral_8843/*"MYROOM_EMPTY_GALLERY_FOLDER_TEXT"*/);
    sub_1C94098(&StringLiteral_8608/*"MATERIAL_PROGRESS_SUFFIX"*/);
    byte_4D279BD = 1;
  }
  if ( item )
  {
    info_k__BackingField = item->fields._info_k__BackingField;
    if ( info_k__BackingField )
    {
      if ( mode )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !byte_4D25F1E )
        {
          sub_1C94098(&UnityEngine_Vector3_TypeInfo);
          byte_4D25F1E = 1;
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
        v16 = MaterialEventLogListViewItemDraw_TypeInfo;
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          v18 = 16;
          if ( (flag & 2) != 0 )
            v18 = 20;
          v19 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v18);
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v16 = MaterialEventLogListViewItemDraw_TypeInfo;
          v21 = 16;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          if ( (flag & 2) != 0 )
            v21 = 20;
          v19 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v21);
          if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
            v16 = MaterialEventLogListViewItemDraw_TypeInfo;
            v50 = 28;
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            if ( (flag & 2) != 0 )
              v50 = 32;
            v23 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v50);
            if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
              v16 = MaterialEventLogListViewItemDraw_TypeInfo;
              static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            }
            goto LABEL_29;
          }
        }
        v22 = 28;
        if ( (flag & 2) != 0 )
          v22 = 32;
        v23 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v22);
LABEL_29:
        v24 = 36;
        if ( (flag & 2) != 0 )
          v24 = 40;
        if ( item->fields._kind_k__BackingField == 5 )
        {
          if ( !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          }
          p_LABEL_MAX_LINE_MAP = &static_fields->LABEL_MAX_LINE_MAP;
        }
        else
        {
          p_LABEL_MAX_LINE_MAP = (int32_t *)((char *)static_fields + v24);
        }
        mLabel = this->fields.mLabel;
        if ( mLabel )
        {
          v26 = *p_LABEL_MAX_LINE_MAP;
          UILabel__set_overflowMethod(mLabel, 2, 0);
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            UILabel__set_maxLineCount(mLabel, v26, 0);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0);
              if ( (flag & 2) == 0
                && !info_k__BackingField->fields.isMovedQuest
                && item->fields._kind_k__BackingField == 5 )
              {
                v27 = item->fields._info_k__BackingField;
                if ( !v27 )
                  goto LABEL_84;
                if ( v27->fields.clear_phase_max < v27->fields.phase_max )
                {
                  v28 = this->fields.mLabel;
                  if ( !v28 )
                    goto LABEL_84;
                  mText = v28->fields.mText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8608/*"MATERIAL_PROGRESS_SUFFIX"*/, 0);
                  v31 = System_String__Concat_64417744(mText, v30, 0);
                  UILabel__set_text(v28, v31, 0);
                }
              }
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0);
                GameObjectExtensions__SetLocalPositionX(v32, v19, 0);
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  UILabel__SetCondensedScale(mLabel, v23, 0, 0);
                  if ( info_k__BackingField->fields.isGallery && info_k__BackingField->fields.isEmptyGalleryFolder )
                  {
                    v33 = item->fields._info_k__BackingField;
                    if ( !v33 )
                      goto LABEL_84;
                    v33->fields.flag |= 5u;
                    mLabel = (UILabel_o *)this->fields.notSelectObj;
                    if ( !mLabel )
                      goto LABEL_84;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, 1, 0);
                    notSelectLabel = this->fields.notSelectLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    mLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MYROOM_EMPTY_GALLERY_FOLDER_TEXT"*/, 0);
                    if ( !notSelectLabel )
                      goto LABEL_84;
                    playLimitCountMessage = (System_String_o *)mLabel;
                    mLabel = notSelectLabel;
                  }
                  else
                  {
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_VoiceMaterialCondMaster___);
                    voiceId = info_k__BackingField->fields.voiceId;
                    v38 = (VoiceMaterialCondMaster_o *)Master_object;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(voiceId, 0);
                    mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v39, 0);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                      goto LABEL_67;
                    svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                    voicePrefix = info_k__BackingField->fields.voicePrefix;
                    v42 = info_k__BackingField->fields.voiceId;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(v42, 0);
                    if ( !v38 )
                      goto LABEL_84;
                    mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                            v38,
                                            svtVoiceId,
                                            voicePrefix,
                                            (System_String_o *)mLabel,
                                            limitCount,
                                            0);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                    {
LABEL_67:
                      v43 = item->fields._info_k__BackingField;
                      if ( !v43 )
                        goto LABEL_84;
                      v43->fields.flag &= 0xFFFFFFFA;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_84;
                      v44 = 0;
                    }
                    else
                    {
                      v45 = item->fields._info_k__BackingField;
                      if ( !v45 )
                        goto LABEL_84;
                      v45->fields.flag |= 5u;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_84;
                      v44 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v44, 0);
                    v46 = item->fields._info_k__BackingField;
                    if ( !v46 )
                      goto LABEL_84;
                    mLabel = this->fields.notSelectLabel;
                    if ( !mLabel )
                      goto LABEL_84;
                    playLimitCountMessage = v46->fields.playLimitCountMessage;
                  }
                  UILabel__set_text(mLabel, playLimitCountMessage, 0);
                  mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
                  v47 = this->fields.notSelectLabel;
                  if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
                  if ( v47 )
                  {
                    UILabel__SetCondensedScale(
                      v47,
                      MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_W_NOT_SELECT,
                      0,
                      0);
                    MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v48);
                    MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v49);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_84:
        sub_1C942F0(mLabel, v11);
      }
    }
    else
    {
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_4D25F19 )
      {
        sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F19 = 1;
      }
      GameObjectExtensions__SetLocalScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x20
  __int64 v15; // x9
  __int64 v16; // x8
  int v17; // w9
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x8
  __int64 v21; // x8
  int v22; // w8
  MyRoomParamsManager_c *v23; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v25; // x0
  __int64 v26; // x8
  BalanceConfig_c *v27; // x8
  MaterialEventLogListViewItemDraw___c_c *v28; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v31; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x8
  __int64 v40; // x9
  __int64 v41; // x8
  MyRoomParamsManager_c *v42; // x0
  int32_t LastPlayQuestId_k__BackingField; // w21
  __int64 v44; // x8
  __int64 v45; // x8
  int v46; // w10
  int v47; // w9
  Il2CppObject *Master_object; // x21
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  __int64 v53; // x8
  BalanceConfig_c *v54; // x0
  System_Int32_array *v55; // x22
  System_Func_int__bool__o *v56; // x23
  __int64 v57; // x8
  int v58; // w8
  __int64 v59; // x8
  __int64 v60; // x8
  __int64 v61; // x8
  int v62; // w8
  __int64 v63; // x8
  __int64 v64; // x8
  System_String_o *v65; // x20
  System_String_o *v66; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D279BF & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_BasicHelper_Any_int____79047624);
    sub_1C94098(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&MyRoomParamsManager_TypeInfo);
    sub_1C94098(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__);
    sub_1C94098(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__);
    sub_1C94098(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
    sub_1C94098(&MaterialEventLogListViewItemDraw___c_TypeInfo);
    sub_1C94098(&StringLiteral_13662/*"TUTORIAL_QUEST_ID1"*/);
    sub_1C94098(&StringLiteral_6408/*"FES_WAR_ID"*/);
    sub_1C94098(&StringLiteral_8605/*"MATERIAL_MAP_EPILOGUE_TITLE"*/);
    byte_4D279BF = 1;
  }
  entity = 0;
  v5 = sub_1C942E4(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_221;
  *(_QWORD *)(v5 + 16) = item;
  v14 = v5 + 16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)item, v8, v9, v10, v11, v12, v13);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_221;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0);
  if ( !mLastTimeIcon )
    goto LABEL_221;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0);
  v15 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    return;
  v16 = *(_QWORD *)(v15 + 128);
  if ( !v16 || *(_BYTE *)(v16 + 209) )
    return;
  v17 = *(_DWORD *)(v15 + 120);
  if ( v17 == 1 )
  {
    v27 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    v28 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v27->static_fields->MainInterludeWarIdOnMaterial;
    if ( !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo);
      v28 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    _9__26_0 = v28->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = MaterialEventLogListViewItemDraw___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v28->static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__26_0,
        v31,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        0);
      static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = _9__26_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__26_0,
        (int32_t)_9__26_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    mLastTimeIcon = (UnityEngine_Component_o *)BasicHelper__Any_int__51925480(
                                                 MainInterludeWarIdOnMaterial,
                                                 (System_Func_T__bool__o *)_9__26_0,
                                                 (const MethodInfo_31851E8 *)Method_BasicHelper_Any_int____79047624);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      return;
    v39 = *(_QWORD *)v14;
    if ( !*(_QWORD *)v14 )
      goto LABEL_221;
    v40 = *(_QWORD *)(v39 + 128);
    if ( !v40 )
      goto LABEL_221;
    if ( *(_BYTE *)(v40 + 181) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4D279F6 )
      {
        sub_1C94098(&MyRoomParamsManager_TypeInfo);
        byte_4D279F6 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v39 = *(_QWORD *)v14;
      if ( !*(_QWORD *)v14 )
        goto LABEL_221;
      v40 = *(_QWORD *)(v39 + 128);
      if ( !v40 )
        goto LABEL_221;
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 56) == *(_DWORD *)(v40 + 44) )
        goto LABEL_218;
    }
    if ( *(_BYTE *)(v40 + 180) )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v39 = *(_QWORD *)v14;
        if ( !*(_QWORD *)v14 )
          goto LABEL_221;
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v41 = *(_QWORD *)(v39 + 128);
      if ( !v41 )
        goto LABEL_221;
      mLastTimeIcon = *(UnityEngine_Component_o **)(mLastTimeIcon[7].fields.m_CachedPtr + 40);
      if ( !mLastTimeIcon )
        goto LABEL_221;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             *(_DWORD *)(v41 + 40),
             (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_218;
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4D279F2 )
    {
      sub_1C94098(&MyRoomParamsManager_TypeInfo);
      byte_4D279F2 = 1;
    }
    v42 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v42 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v42->static_fields->_LastPlayQuestId_k__BackingField;
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13662/*"TUTORIAL_QUEST_ID1"*/, 0);
    if ( LastPlayQuestId_k__BackingField == (_DWORD)mLastTimeIcon )
    {
      if ( !*(_QWORD *)v14 )
        goto LABEL_221;
      v44 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( !v44 )
        goto LABEL_221;
      if ( !*(_DWORD *)(v44 + 40) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_221;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0);
        if ( !mLastTimeIcon )
          goto LABEL_221;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4D279F3 )
    {
      sub_1C94098(&MyRoomParamsManager_TypeInfo);
      byte_4D279F3 = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( *(_QWORD *)v14 )
    {
      v45 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( v45 )
      {
        v46 = *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16);
        v47 = *(_DWORD *)(v45 + 40);
        if ( v46 == v47 )
        {
          if ( v46 == -1 )
            return;
          if ( *(int *)(v45 + 44) <= 0 )
            goto LABEL_218;
        }
        if ( v47 < 1 )
          return;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        if ( !byte_4D279F3 )
        {
          sub_1C94098(&MyRoomParamsManager_TypeInfo);
          byte_4D279F3 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( Master_object )
        {
          if ( !DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                  &entity,
                  *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16),
                  (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
            return;
          mLastTimeIcon = (UnityEngine_Component_o *)entity;
          if ( entity )
          {
            mLastTimeIcon = (UnityEngine_Component_o *)WarEntity__GetPrioredMaterialParentWarId(
                                                         (WarEntity_o *)entity,
                                                         0);
            if ( *(_QWORD *)v14 )
            {
              v49 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
              if ( v49 )
              {
                if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v49 + 40) )
                  return;
                goto LABEL_218;
              }
            }
          }
        }
      }
    }
LABEL_221:
    sub_1C942F0(mLastTimeIcon, v7);
  }
  if ( v17 == 3 )
  {
    if ( *(_DWORD *)(v16 + 36) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4D279F7 )
      {
        sub_1C94098(&MyRoomParamsManager_TypeInfo);
        byte_4D279F7 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v14 )
        goto LABEL_221;
      v50 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( !v50 )
        goto LABEL_221;
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 20) == *(_DWORD *)(v50 + 36) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_221;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0);
        if ( !mLastTimeIcon )
          goto LABEL_221;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
      }
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v14 )
      goto LABEL_221;
    v51 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
    if ( !v51 )
      goto LABEL_221;
    mLastTimeIcon = *(UnityEngine_Component_o **)(mLastTimeIcon[7].fields.m_CachedPtr + 40);
    if ( !mLastTimeIcon )
      goto LABEL_221;
    mLastTimeIcon = (UnityEngine_Component_o *)System_Collections_Generic_List_int___Contains(
                                                 (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                                                 *(_DWORD *)(v51 + 40),
                                                 (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      goto LABEL_218;
    if ( !*(_QWORD *)v14 )
      goto LABEL_221;
    v52 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
    if ( !v52 )
      goto LABEL_221;
    if ( *(_BYTE *)(v52 + 181) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4D279F6 )
      {
        sub_1C94098(&MyRoomParamsManager_TypeInfo);
        byte_4D279F6 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v14 )
        goto LABEL_221;
      v53 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( !v53 )
        goto LABEL_221;
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 56) == *(_DWORD *)(v53 + 44) )
        goto LABEL_218;
    }
    v54 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v54 = BalanceConfig_TypeInfo;
    }
    v55 = v54->static_fields->MainInterludeWarIdOnMaterial;
    v56 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v56,
      (Il2CppObject *)v5,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      0);
    if ( BasicHelper__Any_int__51925480(
           v55,
           (System_Func_T__bool__o *)v56,
           (const MethodInfo_31851E8 *)Method_BasicHelper_Any_int____79047624) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4D279F3 )
      {
        sub_1C94098(&MyRoomParamsManager_TypeInfo);
        byte_4D279F3 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v14 )
        goto LABEL_221;
      v57 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( !v57 )
        goto LABEL_221;
      v58 = *(_DWORD *)(v57 + 40);
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16) != v58 || v58 == -1 )
        return;
      goto LABEL_218;
    }
    return;
  }
  if ( v17 != 5 )
    return;
  mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6408/*"FES_WAR_ID"*/, 0);
  v18 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_221;
  v19 = *(_QWORD *)(v18 + 128);
  if ( !v19 )
    goto LABEL_221;
  if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v19 + 40) )
  {
    if ( *(_BYTE *)(v19 + 181) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4D279F6 )
      {
        sub_1C94098(&MyRoomParamsManager_TypeInfo);
        byte_4D279F6 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v18 = *(_QWORD *)v14;
      if ( !*(_QWORD *)v14 )
        goto LABEL_221;
      v19 = *(_QWORD *)(v18 + 128);
      if ( !v19 )
        goto LABEL_221;
      if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 56) == *(_DWORD *)(v19 + 44) )
        goto LABEL_218;
    }
    if ( !*(_BYTE *)(v19 + 180) )
      goto LABEL_184;
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v18 = *(_QWORD *)v14;
      if ( !*(_QWORD *)v14 )
        goto LABEL_221;
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v59 = *(_QWORD *)(v18 + 128);
    if ( v59 )
    {
      mLastTimeIcon = *(UnityEngine_Component_o **)(mLastTimeIcon[7].fields.m_CachedPtr + 40);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               *(_DWORD *)(v59 + 40),
               (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          goto LABEL_218;
        }
LABEL_184:
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        if ( !byte_4D279F2 )
        {
          sub_1C94098(&MyRoomParamsManager_TypeInfo);
          byte_4D279F2 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v14 )
          goto LABEL_221;
        v60 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
        if ( !v60 )
          goto LABEL_221;
        if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 12) != *(_DWORD *)(v60 + 44) )
          goto LABEL_224;
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4D279F3 )
        {
          sub_1C94098(&MyRoomParamsManager_TypeInfo);
          byte_4D279F3 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v14 )
          goto LABEL_221;
        v61 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
        if ( !v61 )
          goto LABEL_221;
        v62 = *(_DWORD *)(v61 + 40);
        if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16) != v62 || v62 == -1 )
        {
LABEL_224:
          if ( !LODWORD(mLastTimeIcon[9].monitor) )
            j_il2cpp_runtime_class_init_0(mLastTimeIcon);
          if ( !byte_4D279F5 )
          {
            sub_1C94098(&MyRoomParamsManager_TypeInfo);
            byte_4D279F5 = 1;
          }
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
          if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
          }
          if ( !*(_QWORD *)v14 )
            goto LABEL_221;
          v63 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
          if ( !v63 )
            goto LABEL_221;
          if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 32) != *(_DWORD *)(v63 + 44) )
            return;
        }
        goto LABEL_218;
      }
    }
    goto LABEL_221;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4D279F2 )
  {
    sub_1C94098(&MyRoomParamsManager_TypeInfo);
    byte_4D279F2 = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_221;
  v20 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
  if ( !v20 )
    goto LABEL_221;
  if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 12) != *(_DWORD *)(v20 + 44) )
    return;
  if ( !LODWORD(mLastTimeIcon[9].monitor) )
    j_il2cpp_runtime_class_init_0(mLastTimeIcon);
  if ( !byte_4D279F3 )
  {
    sub_1C94098(&MyRoomParamsManager_TypeInfo);
    byte_4D279F3 = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_221;
  v21 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
  if ( !v21 )
    goto LABEL_221;
  v22 = *(_DWORD *)(v21 + 40);
  if ( *(_DWORD *)(mLastTimeIcon[7].fields.m_CachedPtr + 16) != v22 || v22 == -1 )
    return;
  if ( !LODWORD(mLastTimeIcon[9].monitor) )
    j_il2cpp_runtime_class_init_0(mLastTimeIcon);
  if ( !byte_4D279F4 )
  {
    sub_1C94098(&MyRoomParamsManager_TypeInfo);
    byte_4D279F4 = 1;
  }
  v23 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v23 = MyRoomParamsManager_TypeInfo;
  }
  LastPlayTitle_k__BackingField = v23->static_fields->_LastPlayTitle_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8605/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
  mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v25, 0);
  if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
  {
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4D279F4 )
    {
      sub_1C94098(&MyRoomParamsManager_TypeInfo);
      byte_4D279F4 = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v14 )
      goto LABEL_221;
    v26 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
    if ( !v26 )
      goto LABEL_221;
    if ( !System_String__op_Equality(
            *(System_String_o **)(mLastTimeIcon[7].fields.m_CachedPtr + 24),
            *(System_String_o **)(v26 + 16),
            0) )
      return;
    goto LABEL_218;
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_221;
  v64 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
  if ( !v64 )
    goto LABEL_221;
  v65 = *(System_String_o **)(v64 + 16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8605/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
  if ( System_String__op_Inequality(v65, v66, 0) )
  {
LABEL_218:
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
    goto LABEL_221;
  }
}


void MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D279C1 & 1) == 0 )
  {
    sub_1C94098(&MaterialEventLogListViewItemDraw___c_TypeInfo);
    byte_4D279C1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(MaterialEventLogListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4D279C2 & 1) == 0 )
  {
    sub_1C94098(&MyRoomParamsManager_TypeInfo);
    byte_4D279C2 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4D279F3 )
  {
    sub_1C94098(&MyRoomParamsManager_TypeInfo);
    byte_4D279F3 = 1;
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
    sub_1C942F0(this, interludeWarId);
  return info_k__BackingField->fields.war_id == interludeWarId;
}