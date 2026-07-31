void MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct MaterialEventLogListViewItemDraw_StaticFields *v16; // x8

  if ( (byte_593364F & 1) == 0 )
  {
    sub_21FFC50(&MaterialEventLogListViewItemDraw_TypeInfo);
    sub_21FFC50(&StringLiteral_21407/*"img_menuboard_03"*/);
    sub_21FFC50(&StringLiteral_21406/*"img_menuboard_01"*/);
    byte_593364F = 1;
  }
  v7 = StringLiteral_21406/*"img_menuboard_01"*/;
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->BASE_SP_NAME_DEFAULT = (struct System_String_o *)StringLiteral_21406/*"img_menuboard_01"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MaterialEventLogListViewItemDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_21407/*"img_menuboard_03"*/;
  static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  static_fields->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_21407/*"img_menuboard_03"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->BASE_SP_NAME_SVT, v8, v10, v11, v12, v13, v14, v15);
  v16 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v16->LABEL_X_DEFAULT = 0x4230000040000000LL;
  *(_OWORD *)&v16->LABEL_W_DEFAULT = xmmword_E94310;
  *(_OWORD *)&v16->LABEL_MAX_LINE_SVT = xmmword_E93480;
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
    sub_21FFECC(0, method);
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
    v10.fields.a = a;
    v10.fields.r = r;
    v10.fields.g = g;
    ItemIconComponent__SetColor((ItemIconComponent_o *)this, v10, 0);
    this = (MaterialEventLogListViewItemDraw_o *)v5->fields.mFaceMaskSp;
    if ( !this )
LABEL_9:
      sub_21FFECC(this, item);
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UIWidget__set_color((UIWidget_o *)this, v11, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialEventLogListViewItemDraw__SetEnableSelect(
        MaterialEventLogListViewItemDraw_o *this,
        bool isSelect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *notSelectObj; // x0

  notSelectObj = this->fields.notSelectObj;
  if ( !notSelectObj )
    sub_21FFECC(0, isSelect);
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
  __int64 v8; // x2
  MaterialEventLogListViewItemDraw_o *v9; // x19

  v6 = (MaterialEventLogListViewItemDraw_o **)this;
  if ( (byte_593364D & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_21FFC50(&MaterialEventLogListViewItemDraw_TypeInfo);
    byte_593364D = 1;
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
    1,
    0);
  this = v6[8];
  if ( !this )
    goto LABEL_14;
  this = (MaterialEventLogListViewItemDraw_o *)UISprite__GetAtlasSprite((UISprite_o *)this, 0);
  v9 = this;
  if ( !*(&MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, item, v8);
  if ( !v9 )
LABEL_14:
    sub_21FFECC(this, item);
  LODWORD(v9->fields.mBaseSp) = MaterialEventLogListViewItemDraw_TypeInfo->static_fields->FACE_MASK_SP_W - 1;
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
  __int64 v12; // x2
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  int v16; // w8
  System_String_o **p_monitor; // x8
  UnityEngine_GameObject_o *v18; // x19
  __int64 v19; // x2
  MaterialEventLogListViewItemDraw_c *v20; // x0
  int v21; // w8
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  float LABEL_X_SVT; // s8
  struct MaterialEventLogListViewItemDraw_StaticFields *v24; // x8
  int32_t LABEL_W_SVT; // w22
  int32_t *p_LABEL_MAX_LINE_SVT; // x8
  int32_t v27; // w23
  __int64 v28; // x2
  struct MaterialEventLogListViewItem_Info_o *v29; // x8
  struct UILabel_o *v30; // x23
  System_String_o *mText; // x24
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  __int64 v35; // x2
  struct MaterialEventLogListViewItem_Info_o *v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  struct UILabel_o *notSelectLabel; // x21
  System_String_o *playLimitCountMessage; // x1
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *Master_object; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  System_String_o *v45; // x0
  __int64 v46; // x2
  int32_t svtVoiceId; // w23
  int32_t voicePrefix; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v49; // x25
  struct MaterialEventLogListViewItem_Info_o *v50; // x8
  bool v51; // w1
  struct MaterialEventLogListViewItem_Info_o *v52; // x8
  struct MaterialEventLogListViewItem_Info_o *v53; // x8
  __int64 v54; // x2
  UILabel_o *v55; // x21
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x2

  if ( (byte_593364C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_VoiceMaterialCondMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&MaterialEventLogListViewItemDraw_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&StringLiteral_9175/*"MYROOM_EMPTY_GALLERY_FOLDER_TEXT"*/);
    sub_21FFC50(&StringLiteral_8938/*"MATERIAL_PROGRESS_SUFFIX"*/);
    byte_593364C = 1;
  }
  if ( item )
  {
    info_k__BackingField = item->fields._info_k__BackingField;
    if ( info_k__BackingField )
    {
      if ( mode )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !byte_5931945 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931945 = 1;
        }
        GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        flag = info_k__BackingField->fields.flag;
        mBaseSp = this->fields.mBaseSp;
        mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        v16 = *(&MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
        if ( (flag & 2) != 0 )
        {
          if ( !v16 )
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v11, v12);
            mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
          }
          p_monitor = (System_String_o **)&mLabel->fields.onChange->monitor;
        }
        else
        {
          if ( !v16 )
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v11, v12);
            mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
          }
          p_monitor = (System_String_o **)mLabel->fields.onChange;
        }
        if ( !mBaseSp )
          goto LABEL_85;
        UISprite__set_spriteName(mBaseSp, *p_monitor, 0);
        mLabel = (UILabel_o *)this->fields.mBaseSp;
        if ( !mLabel )
          goto LABEL_85;
        ((void (__fastcall *)(UILabel_o *, const MethodInfo *))mLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
          mLabel,
          mLabel->klass->vtable._33_MakePixelPerfect.method);
        mLabel = this->fields.mLabel;
        if ( !mLabel )
          goto LABEL_85;
        UILabel__set_fontSize(mLabel, info_k__BackingField->fields.font_size, 0);
        v20 = MaterialEventLogListViewItemDraw_TypeInfo;
        v21 = *(&MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
        if ( (flag & 2) != 0 )
        {
          if ( v21 )
          {
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            LABEL_X_SVT = static_fields->LABEL_X_SVT;
          }
          else
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v11, v19);
            v20 = MaterialEventLogListViewItemDraw_TypeInfo;
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            LABEL_X_SVT = static_fields->LABEL_X_SVT;
            if ( !*(&MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v11, v19);
              v20 = MaterialEventLogListViewItemDraw_TypeInfo;
              static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
              LABEL_W_SVT = static_fields->LABEL_W_SVT;
              if ( !*(&MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v11, v19);
                v20 = MaterialEventLogListViewItemDraw_TypeInfo;
                static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
              }
              goto LABEL_29;
            }
          }
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
LABEL_29:
          p_LABEL_MAX_LINE_SVT = &static_fields->LABEL_MAX_LINE_SVT;
LABEL_33:
          if ( item->fields._kind_k__BackingField == 5 )
          {
            if ( !*(&v20->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v20, v11, v19);
              v20 = MaterialEventLogListViewItemDraw_TypeInfo;
            }
            p_LABEL_MAX_LINE_SVT = &v20->static_fields->LABEL_MAX_LINE_MAP;
          }
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            v27 = *p_LABEL_MAX_LINE_SVT;
            UILabel__set_overflowMethod(mLabel, 2, 0);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_maxLineCount(mLabel, v27, 0);
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0);
                if ( (flag & 2) == 0
                  && !info_k__BackingField->fields.isMovedQuest
                  && item->fields._kind_k__BackingField == 5 )
                {
                  v29 = item->fields._info_k__BackingField;
                  if ( !v29 )
                    goto LABEL_85;
                  if ( v29->fields.clear_phase_max < v29->fields.phase_max )
                  {
                    v30 = this->fields.mLabel;
                    if ( !v30 )
                      goto LABEL_85;
                    mText = v30->fields.mText;
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v28);
                    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8938/*"MATERIAL_PROGRESS_SUFFIX"*/, 0);
                    v33 = System_String__Concat_75438412(mText, v32, 0);
                    UILabel__set_text(v30, v33, 0);
                  }
                }
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0);
                  GameObjectExtensions__SetLocalPositionX(v34, LABEL_X_SVT, 0);
                  mLabel = this->fields.mLabel;
                  if ( mLabel )
                  {
                    UILabel__SetCondensedScale(mLabel, LABEL_W_SVT, 0, 0);
                    if ( info_k__BackingField->fields.isGallery && info_k__BackingField->fields.isEmptyGalleryFolder )
                    {
                      v36 = item->fields._info_k__BackingField;
                      if ( !v36 )
                        goto LABEL_85;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      v36->fields.flag |= 5u;
                      if ( !mLabel )
                        goto LABEL_85;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, 1, 0);
                      notSelectLabel = this->fields.notSelectLabel;
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
                      mLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9175/*"MYROOM_EMPTY_GALLERY_FOLDER_TEXT"*/, 0);
                      if ( !notSelectLabel )
                        goto LABEL_85;
                      playLimitCountMessage = (System_String_o *)mLabel;
                      mLabel = notSelectLabel;
                    }
                    else
                    {
                      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v35);
                      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_VoiceMaterialCondMaster___);
                      voiceId = info_k__BackingField->fields.voiceId;
                      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(
                          CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
                          v41,
                          v42);
                      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(voiceId, 0);
                      mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v45, 0);
                      if ( ((unsigned __int8)mLabel & 1) != 0 )
                        goto LABEL_68;
                      svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                      voicePrefix = info_k__BackingField->fields.voicePrefix;
                      v49 = info_k__BackingField->fields.voiceId;
                      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(
                          CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
                          v11,
                          v46);
                      mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(
                                              v49,
                                              0);
                      if ( !Master_object )
                        goto LABEL_85;
                      mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                              (VoiceMaterialCondMaster_o *)Master_object,
                                              svtVoiceId,
                                              voicePrefix,
                                              (System_String_o *)mLabel,
                                              limitCount,
                                              0);
                      if ( ((unsigned __int8)mLabel & 1) != 0 )
                      {
LABEL_68:
                        v50 = item->fields._info_k__BackingField;
                        if ( !v50 )
                          goto LABEL_85;
                        mLabel = (UILabel_o *)this->fields.notSelectObj;
                        v50->fields.flag &= 0xFFFFFFFA;
                        if ( !mLabel )
                          goto LABEL_85;
                        v51 = 0;
                      }
                      else
                      {
                        v52 = item->fields._info_k__BackingField;
                        if ( !v52 )
                          goto LABEL_85;
                        mLabel = (UILabel_o *)this->fields.notSelectObj;
                        v52->fields.flag |= 5u;
                        if ( !mLabel )
                          goto LABEL_85;
                        v51 = 1;
                      }
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v51, 0);
                      v53 = item->fields._info_k__BackingField;
                      if ( !v53 )
                        goto LABEL_85;
                      mLabel = this->fields.notSelectLabel;
                      if ( !mLabel )
                        goto LABEL_85;
                      playLimitCountMessage = v53->fields.playLimitCountMessage;
                    }
                    UILabel__set_text(mLabel, playLimitCountMessage, 0);
                    mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
                    v55 = this->fields.notSelectLabel;
                    if ( !*(&MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v11, v54);
                    if ( v55 )
                    {
                      UILabel__SetCondensedScale(
                        v55,
                        MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_W_NOT_SELECT,
                        0,
                        0);
                      MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v56);
                      MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v57);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_85:
          sub_21FFECC(mLabel, v11);
        }
        if ( v21 )
        {
          v24 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = v24->LABEL_X_DEFAULT;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v11, v19);
          v20 = MaterialEventLogListViewItemDraw_TypeInfo;
          v24 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = v24->LABEL_X_DEFAULT;
          if ( !*(&MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v11, v19);
            v20 = MaterialEventLogListViewItemDraw_TypeInfo;
            v24 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            LABEL_W_SVT = v24->LABEL_W_CONDENSED;
            if ( !*(&MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v11, v19);
              v20 = MaterialEventLogListViewItemDraw_TypeInfo;
              v24 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            }
            goto LABEL_32;
          }
        }
        LABEL_W_SVT = v24->LABEL_W_CONDENSED;
LABEL_32:
        p_LABEL_MAX_LINE_SVT = &v24->LABEL_MAX_LINE_DEFAULT;
        goto LABEL_33;
      }
    }
    else
    {
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !byte_5931940 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      GameObjectExtensions__SetLocalScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
  }
}


void MaterialEventLogListViewItemDraw__SetLastTimeIcon(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 mLastTimeIcon; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x20
  __int64 v15; // x2
  long double v16; // q0
  __int64 v17; // x9
  __int64 v18; // x8
  int v19; // w9
  __int64 v20; // x2
  long double v21; // q0
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x2
  long double v25; // q0
  __int64 v26; // x8
  __int64 v27; // x2
  long double v28; // q0
  __int64 v29; // x8
  int v30; // w8
  __int64 v31; // x1
  __int64 v32; // x2
  System_String_o *v33; // x21
  System_String_o *v34; // x0
  __int64 v35; // x2
  long double v36; // q0
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  __int64 v40; // x2
  long double v41; // q0
  __int64 v42; // x8
  __int64 v43; // x8
  BalanceConfig_c *v44; // x0
  System_Int32_array *v45; // x22
  System_Func_int__bool__o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  long double v49; // q0
  __int64 v50; // x8
  int v51; // w8
  BalanceConfig_c *v52; // x8
  MaterialEventLogListViewItemDraw___c_c *v53; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v57; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  __int64 v65; // x2
  long double v66; // q0
  __int64 v67; // x8
  __int64 v68; // x9
  __int64 v69; // x8
  __int64 v70; // x2
  long double v71; // q0
  __int64 v72; // x8
  __int64 v73; // x8
  int v74; // w8
  __int64 v75; // x8
  __int64 v76; // x8
  int v77; // w21
  __int64 v78; // x2
  long double v79; // q0
  __int64 v80; // x8
  __int64 v81; // x2
  __int64 v82; // x8
  int v83; // w9
  __int64 v84; // x1
  __int64 v85; // x2
  Il2CppObject *Master_object; // x21
  long double v87; // q0
  __int64 v88; // x8
  __int64 v89; // x8
  System_String_o *v90; // x20
  System_String_o *v91; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593364E & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__);
    sub_21FFC50(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__);
    sub_21FFC50(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
    sub_21FFC50(&MaterialEventLogListViewItemDraw___c_TypeInfo);
    sub_21FFC50(&StringLiteral_14134/*"TUTORIAL_QUEST_ID1"*/);
    sub_21FFC50(&StringLiteral_6660/*"FES_WAR_ID"*/);
    sub_21FFC50(&StringLiteral_8935/*"MATERIAL_MAP_EPILOGUE_TITLE"*/);
    byte_593364E = 1;
  }
  entity = 0;
  v5 = sub_21FFEBC(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_162;
  *(_QWORD *)(v5 + 16) = item;
  v14 = v5 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)item, v8, v9, v10, v11, v12, v13);
  mLastTimeIcon = (__int64)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_162;
  mLastTimeIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLastTimeIcon, 0);
  if ( !mLastTimeIcon )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0);
  v17 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    return;
  v18 = *(_QWORD *)(v17 + 128);
  if ( !v18 || *(_BYTE *)(v18 + 209) )
    return;
  v19 = *(_DWORD *)(v17 + 120);
  if ( v19 == 1 )
  {
    v52 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v15);
      v52 = BalanceConfig_TypeInfo;
    }
    v53 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v52->static_fields->MainInterludeWarIdOnMaterial;
    if ( !*(&MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo, v7, v15);
      v53 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    static_fields = v53->static_fields;
    _9__26_0 = static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !*(&v53->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v53, v7, v15);
        static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      }
      v57 = (Il2CppObject *)static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__26_0,
        v57,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        0);
      v58 = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      v58->__9__26_0 = _9__26_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v58->__9__26_0, (int32_t)_9__26_0, v59, v60, v61, v62, v63, v64);
    }
    mLastTimeIcon = BasicHelper__Any_int__58574768(
                      MainInterludeWarIdOnMaterial,
                      (System_Func_T__bool__o *)_9__26_0,
                      (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
    if ( (mLastTimeIcon & 1) != 0 )
      return;
    v67 = *(_QWORD *)v14;
    if ( !*(_QWORD *)v14 )
      goto LABEL_162;
    v68 = *(_QWORD *)(v67 + 128);
    if ( !v68 )
      goto LABEL_162;
    if ( *(_BYTE *)(v68 + 181) )
    {
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v66 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v65);
      mLastTimeIcon = sub_2635958(0, v66);
LABEL_113:
      if ( !*(_QWORD *)v14 )
        goto LABEL_162;
      v75 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( !v75 )
        goto LABEL_162;
      if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v75 + 44) )
        return;
      goto LABEL_116;
    }
    if ( *(_BYTE *)(v68 + 180) )
    {
      mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v65);
        v67 = *(_QWORD *)v14;
        if ( !*(_QWORD *)v14 )
          goto LABEL_162;
        mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
      }
      v76 = *(_QWORD *)(v67 + 128);
      if ( !v76 )
        goto LABEL_162;
      mLastTimeIcon = *(_QWORD *)(*(_QWORD *)(mLastTimeIcon + 184) + 40LL);
      if ( !mLastTimeIcon )
        goto LABEL_162;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             *(_DWORD *)(v76 + 40),
             (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_116;
      }
    }
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v66 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v65);
    v77 = sub_26358B8(0, v66);
    mLastTimeIcon = ConstantMaster__getValue((System_String_o *)StringLiteral_14134/*"TUTORIAL_QUEST_ID1"*/, 0);
    if ( v77 == (_DWORD)mLastTimeIcon )
    {
      if ( !*(_QWORD *)v14 )
        goto LABEL_162;
      v80 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( !v80 )
        goto LABEL_162;
      if ( !*(_DWORD *)(v80 + 40) )
      {
        mLastTimeIcon = (__int64)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_162;
        mLastTimeIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLastTimeIcon, 0);
        if ( !mLastTimeIcon )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
      }
    }
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v79 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v78);
    mLastTimeIcon = sub_2635908(0, v79);
    if ( *(_QWORD *)v14 )
    {
      v82 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( v82 )
      {
        v83 = *(_DWORD *)(v82 + 40);
        if ( (_DWORD)mLastTimeIcon == v83 )
        {
          if ( (_DWORD)mLastTimeIcon == -1 )
            return;
          if ( *(int *)(v82 + 44) <= 0 )
            goto LABEL_116;
        }
        if ( v83 < 1 )
          return;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v81);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
        if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v87 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v84, v85);
        mLastTimeIcon = sub_2635908(0, v87);
        if ( Master_object )
        {
          if ( !DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                  &entity,
                  mLastTimeIcon,
                  (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
            return;
          mLastTimeIcon = (__int64)entity;
          if ( entity )
          {
            mLastTimeIcon = WarEntity__GetPrioredMaterialParentWarId((WarEntity_o *)entity, 0);
            if ( *(_QWORD *)v14 )
            {
              v88 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
              if ( v88 )
              {
                if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v88 + 40) )
                  return;
                mLastTimeIcon = (__int64)this->fields.mLastTimeIcon;
                if ( mLastTimeIcon )
                {
                  mLastTimeIcon = (__int64)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)mLastTimeIcon,
                                             0);
                  if ( mLastTimeIcon )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_162:
    sub_21FFECC(mLastTimeIcon, v7);
  }
  if ( v19 == 3 )
  {
    if ( *(_DWORD *)(v18 + 36) )
    {
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v16 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v15);
      mLastTimeIcon = sub_26359F8(0, v16);
      if ( !*(_QWORD *)v14 )
        goto LABEL_162;
      v38 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( !v38 )
        goto LABEL_162;
      if ( (_DWORD)mLastTimeIcon == *(_DWORD *)(v38 + 36) )
      {
        mLastTimeIcon = (__int64)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_162;
        mLastTimeIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLastTimeIcon, 0);
        if ( !mLastTimeIcon )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
      }
    }
    mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v15);
      mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v14 )
      goto LABEL_162;
    v39 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
    if ( !v39 )
      goto LABEL_162;
    mLastTimeIcon = *(_QWORD *)(*(_QWORD *)(mLastTimeIcon + 184) + 40LL);
    if ( !mLastTimeIcon )
      goto LABEL_162;
    mLastTimeIcon = System_Collections_Generic_List_int___Contains(
                      (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                      *(_DWORD *)(v39 + 40),
                      (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( (mLastTimeIcon & 1) != 0 )
      goto LABEL_116;
    if ( !*(_QWORD *)v14 )
      goto LABEL_162;
    v42 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
    if ( !v42 )
      goto LABEL_162;
    if ( *(_BYTE *)(v42 + 181) )
    {
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v41 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v40);
      mLastTimeIcon = sub_2635958(0, v41);
      if ( !*(_QWORD *)v14 )
        goto LABEL_162;
      v43 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( !v43 )
        goto LABEL_162;
      if ( (_DWORD)mLastTimeIcon == *(_DWORD *)(v43 + 44) )
        goto LABEL_116;
    }
    v44 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v40);
      v44 = BalanceConfig_TypeInfo;
    }
    v45 = v44->static_fields->MainInterludeWarIdOnMaterial;
    v46 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v46,
      (Il2CppObject *)v5,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      0);
    if ( BasicHelper__Any_int__58574768(
           v45,
           (System_Func_T__bool__o *)v46,
           (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032) )
    {
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v49 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v47, v48);
      mLastTimeIcon = sub_2635908(0, v49);
      if ( !*(_QWORD *)v14 )
        goto LABEL_162;
      v50 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( !v50 )
        goto LABEL_162;
      v51 = *(_DWORD *)(v50 + 40);
      if ( (_DWORD)mLastTimeIcon != v51 || v51 == -1 )
        return;
      goto LABEL_116;
    }
    return;
  }
  if ( v19 != 5 )
    return;
  mLastTimeIcon = ConstantMaster__getValue((System_String_o *)StringLiteral_6660/*"FES_WAR_ID"*/, 0);
  v22 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_162;
  v23 = *(_QWORD *)(v22 + 128);
  if ( !v23 )
    goto LABEL_162;
  if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v23 + 40) )
  {
    if ( *(_BYTE *)(v23 + 181) )
    {
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v21 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v20);
      mLastTimeIcon = sub_2635958(0, v21);
      v22 = *(_QWORD *)v14;
      if ( !*(_QWORD *)v14 )
        goto LABEL_162;
      v23 = *(_QWORD *)(v22 + 128);
      if ( !v23 )
        goto LABEL_162;
      if ( (_DWORD)mLastTimeIcon == *(_DWORD *)(v23 + 44) )
        goto LABEL_116;
    }
    if ( !*(_BYTE *)(v23 + 180) )
    {
LABEL_99:
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v21 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v20);
      mLastTimeIcon = sub_26358B8(0, v21);
      if ( !*(_QWORD *)v14 )
        goto LABEL_162;
      v72 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
      if ( !v72 )
        goto LABEL_162;
      if ( (_DWORD)mLastTimeIcon == *(_DWORD *)(v72 + 44) )
      {
        if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v71 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v70);
        mLastTimeIcon = sub_2635908(0, v71);
        if ( !*(_QWORD *)v14 )
          goto LABEL_162;
        v73 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
        if ( !v73 )
          goto LABEL_162;
        v74 = *(_DWORD *)(v73 + 40);
        if ( (_DWORD)mLastTimeIcon == v74 && v74 != -1 )
          goto LABEL_116;
      }
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v71 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v70);
      mLastTimeIcon = sub_26359A8(0, v71);
      goto LABEL_113;
    }
    mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v20);
      v22 = *(_QWORD *)v14;
      if ( !*(_QWORD *)v14 )
        goto LABEL_162;
      mLastTimeIcon = (__int64)MyRoomParamsManager_TypeInfo;
    }
    v69 = *(_QWORD *)(v22 + 128);
    if ( v69 )
    {
      mLastTimeIcon = *(_QWORD *)(*(_QWORD *)(mLastTimeIcon + 184) + 40LL);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               *(_DWORD *)(v69 + 40),
               (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          goto LABEL_116;
        }
        goto LABEL_99;
      }
    }
    goto LABEL_162;
  }
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v21 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v20);
  mLastTimeIcon = sub_26358B8(0, v21);
  if ( !*(_QWORD *)v14 )
    goto LABEL_162;
  v26 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
  if ( !v26 )
    goto LABEL_162;
  if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v26 + 44) )
    return;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v25 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v24);
  mLastTimeIcon = sub_2635908(0, v25);
  if ( !*(_QWORD *)v14 )
    goto LABEL_162;
  v29 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
  if ( !v29 )
    goto LABEL_162;
  v30 = *(_DWORD *)(v29 + 40);
  if ( (_DWORD)mLastTimeIcon != v30 || v30 == -1 )
    return;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v28 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v27);
  v33 = (System_String_o *)sub_2621AE8(0, v28);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8935/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
  mLastTimeIcon = System_String__op_Equality(v33, v34, 0);
  if ( (mLastTimeIcon & 1) != 0 )
  {
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v36 = j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v7, v35);
    mLastTimeIcon = sub_2621AE8(0, v36);
    if ( !*(_QWORD *)v14 )
      goto LABEL_162;
    v37 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
    if ( !v37 )
      goto LABEL_162;
    if ( !System_String__op_Equality((System_String_o *)mLastTimeIcon, *(System_String_o **)(v37 + 16), 0) )
      return;
    goto LABEL_116;
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_162;
  v89 = *(_QWORD *)(*(_QWORD *)v14 + 128LL);
  if ( !v89 )
    goto LABEL_162;
  v90 = *(System_String_o **)(v89 + 16);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v35);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_8935/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0);
  if ( System_String__op_Inequality(v90, v91, 0) )
  {
LABEL_116:
    mLastTimeIcon = (__int64)this->fields.mLastTimeIcon;
    if ( mLastTimeIcon )
    {
      mLastTimeIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLastTimeIcon, 0);
      if ( mLastTimeIcon )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0);
        return;
      }
    }
    goto LABEL_162;
  }
}


void MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933650 & 1) == 0 )
  {
    sub_21FFC50(&MaterialEventLogListViewItemDraw___c_TypeInfo);
    byte_5933650 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(MaterialEventLogListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields,
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


// local variable allocation has failed, the output may be wrong!
bool MaterialEventLogListViewItemDraw___c___SetLastTimeIcon_b__26_0(
        MaterialEventLogListViewItemDraw___c_o *this,
        int32_t interludeWarId,
        const MethodInfo *method)
{
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933651 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933651 = 1;
  }
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId, method);
  if ( !byte_59335D7 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_59335D7 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId, method);
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


// local variable allocation has failed, the output may be wrong!
bool MaterialEventLogListViewItemDraw___c__DisplayClass26_0___SetLastTimeIcon_b__1(
        MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *this,
        int32_t interludeWarId,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_o *item; // x8
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  item = this->fields.item;
  if ( !item || (info_k__BackingField = item->fields._info_k__BackingField) == 0 )
    sub_21FFECC(this, *(_QWORD *)&interludeWarId);
  return info_k__BackingField->fields.war_id == interludeWarId;
}