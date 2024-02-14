void __fastcall MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct MaterialEventLogListViewItemDraw_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  MaterialEventLogListViewItemDraw_c *v20; // x8

  if ( (byte_4214DAC & 1) == 0 )
  {
    sub_B0D8A4(&MaterialEventLogListViewItemDraw_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19595/*"img_menuboard_03"*/, v8);
    sub_B0D8A4(&StringLiteral_19594/*"img_menuboard_01"*/, v9);
    byte_4214DAC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19594/*"img_menuboard_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19594/*"img_menuboard_01"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_19595/*"img_menuboard_03"*/;
  v12->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_19595/*"img_menuboard_03"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->BASE_SP_NAME_SVT, v13, v14, v15, v16, v17, v18, v19);
  v20 = MaterialEventLogListViewItemDraw_TypeInfo;
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_X_DEFAULT = 2.0;
  v20->static_fields->LABEL_X_SVT = 44.0;
  v20->static_fields->LABEL_W_DEFAULT = 418;
  v20->static_fields->LABEL_W_CONDENSED = 400;
  v20->static_fields->LABEL_W_SVT = 330;
  v20->static_fields->LABEL_MAX_LINE_DEFAULT = 2;
  v20->static_fields->LABEL_MAX_LINE_SVT = 1;
  v20->static_fields->LABEL_MAX_LINE_MAP = 1;
  v20->static_fields->FACE_MASK_SP_W = 115;
  v20->static_fields->LABEL_W_NOT_SELECT = 400;
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
    sub_B0D97C(0LL);
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
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
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
    r = mBaseSp->fields.mColor.fields.r;
    g = mBaseSp->fields.mColor.fields.g;
    b = mBaseSp->fields.mColor.fields.b;
    a = mBaseSp->fields.mColor.fields.a;
    v10.fields.r = r;
    v10.fields.g = g;
    v10.fields.b = b;
    v10.fields.a = a;
    ItemIconComponent__SetColor((ItemIconComponent_o *)this, v10, 0LL);
    this = (MaterialEventLogListViewItemDraw_o *)v5->fields.mFaceMaskSp;
    if ( !this )
LABEL_9:
      sub_B0D97C(this);
    v11.fields.r = r;
    v11.fields.g = g;
    v11.fields.b = b;
    v11.fields.a = a;
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
    sub_B0D97C(0LL);
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
  if ( (byte_4214DAA & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_B0D8A4(&MaterialEventLogListViewItemDraw_TypeInfo, item);
    byte_4214DAA = 1;
  }
  if ( !item )
    goto LABEL_15;
  this = v6[5];
  if ( !this )
    goto LABEL_15;
  info_k__BackingField = item->fields._info_k__BackingField;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, is_disp, 0LL);
  if ( !is_disp )
    return;
  if ( !info_k__BackingField )
    goto LABEL_15;
  this = v6[6];
  if ( !this )
    goto LABEL_15;
  ItemIconComponent__SetFaceImage(
    (ItemIconComponent_o *)this,
    info_k__BackingField->fields.svt_id,
    info_k__BackingField->fields.limit_count,
    -1,
    1,
    0,
    0LL);
  this = v6[7];
  if ( !this )
    goto LABEL_15;
  this = (MaterialEventLogListViewItemDraw_o *)UISprite__GetAtlasSprite((UISprite_o *)this, 0LL);
  v8 = this;
  if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
  }
  if ( !v8 )
LABEL_15:
    sub_B0D97C(this);
  LODWORD(v8->fields.mLabel) = MaterialEventLogListViewItemDraw_TypeInfo->static_fields->FACE_MASK_SP_W - 1;
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
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x25
  UnityEngine_GameObject_o *v15; // x22
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  System_String_o **p_monitor; // x8
  UnityEngine_GameObject_o *gameObject; // x19
  MaterialEventLogListViewItemDraw_c *v21; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  float LABEL_X_SVT; // s8
  int32_t LABEL_W_SVT; // w22
  struct MaterialEventLogListViewItemDraw_StaticFields *v25; // x8
  int32_t *p_LABEL_MAX_LINE_SVT; // x8
  int32_t v27; // w23
  struct MaterialEventLogListViewItem_Info_o *v28; // x8
  struct UILabel_o *v29; // x23
  System_String_o *mText; // x24
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v36; // x22
  System_String_o *v37; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v40; // x25
  struct MaterialEventLogListViewItem_Info_o *v41; // x8
  struct MaterialEventLogListViewItem_Info_o *v42; // x8
  bool v43; // w1
  struct MaterialEventLogListViewItem_Info_o *v44; // x8
  struct MaterialEventLogListViewItem_Info_o *v45; // x8
  struct MaterialEventLogListViewItem_Info_o *v46; // x8
  UILabel_o *notSelectLabel; // x21
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4214DA9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, item);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&MaterialEventLogListViewItemDraw_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&StringLiteral_8689/*"MATERIAL_PROGRESS_SUFFIX"*/, v13);
    byte_4214DA9 = 1;
  }
  if ( item )
  {
    info_k__BackingField = item->fields._info_k__BackingField;
    if ( !info_k__BackingField )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalScale(gameObject, zero, 0LL);
      return;
    }
    if ( mode )
    {
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v15, one, 0LL);
      flag = info_k__BackingField->fields.flag;
      mBaseSp = this->fields.mBaseSp;
      mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
      if ( (flag & 2) != 0 )
      {
        if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        }
        p_monitor = (System_String_o **)&mLabel->fields.onPostFill->monitor;
        if ( !mBaseSp )
          goto LABEL_90;
      }
      else
      {
        if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        }
        p_monitor = (System_String_o **)mLabel->fields.onPostFill;
        if ( !mBaseSp )
          goto LABEL_90;
      }
      UISprite__set_spriteName(mBaseSp, *p_monitor, 0LL);
      mLabel = (UILabel_o *)this->fields.mBaseSp;
      if ( !mLabel )
        goto LABEL_90;
      ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))mLabel->klass->vtable._33_MakePixelPerfect.method)(
        mLabel,
        mLabel->klass->vtable._34_get_minWidth.methodPtr);
      mLabel = this->fields.mLabel;
      if ( !mLabel )
        goto LABEL_90;
      UILabel__set_fontSize(mLabel, info_k__BackingField->fields.font_size, 0LL);
      v21 = MaterialEventLogListViewItemDraw_TypeInfo;
      if ( (flag & 2) != 0 )
      {
        if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = static_fields->LABEL_X_SVT;
LABEL_23:
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
LABEL_40:
          p_LABEL_MAX_LINE_SVT = &static_fields->LABEL_MAX_LINE_SVT;
LABEL_45:
          if ( item->fields._kind_k__BackingField == 5 )
          {
            if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v21);
              v21 = MaterialEventLogListViewItemDraw_TypeInfo;
            }
            p_LABEL_MAX_LINE_SVT = &v21->static_fields->LABEL_MAX_LINE_MAP;
          }
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            v27 = *p_LABEL_MAX_LINE_SVT;
            UILabel__set_overflowMethod(mLabel, 2, 0LL);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_maxLineCount(mLabel, v27, 0LL);
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0LL);
                if ( (flag & 2) == 0
                  && !info_k__BackingField->fields.isMovedQuest
                  && item->fields._kind_k__BackingField == 5 )
                {
                  v28 = item->fields._info_k__BackingField;
                  if ( !v28 )
                    goto LABEL_90;
                  if ( v28->fields.clear_phase_max < v28->fields.phase_max )
                  {
                    v29 = this->fields.mLabel;
                    if ( !v29 )
                      goto LABEL_90;
                    mText = v29->fields.mText;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8689/*"MATERIAL_PROGRESS_SUFFIX"*/, 0LL);
                    v32 = System_String__Concat_43849904(mText, v31, 0LL);
                    UILabel__set_text(v29, v32, 0LL);
                  }
                }
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0LL);
                  GameObjectExtensions__SetLocalPositionX(v33, LABEL_X_SVT, 0LL);
                  mLabel = this->fields.mLabel;
                  if ( mLabel )
                  {
                    UILabel__SetCondensedScale(mLabel, LABEL_W_SVT, 0LL);
                    mLabel = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( mLabel )
                    {
                      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)mLabel,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
                      voiceId = info_k__BackingField->fields.voiceId;
                      v36 = (VoiceMaterialCondMaster_o *)MasterData_WarQuestSelectionMaster;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                      }
                      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(voiceId, 0LL);
                      mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v37, 0LL);
                      if ( ((unsigned __int8)mLabel & 1) != 0 )
                        goto LABEL_75;
                      svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                      voicePrefix = info_k__BackingField->fields.voicePrefix;
                      v40 = info_k__BackingField->fields.voiceId;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                      }
                      mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(
                                              v40,
                                              0LL);
                      if ( !v36 )
                        goto LABEL_90;
                      mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                              v36,
                                              svtVoiceId,
                                              voicePrefix,
                                              (System_String_o *)mLabel,
                                              limitCount,
                                              0LL);
                      if ( ((unsigned __int8)mLabel & 1) != 0 )
                      {
LABEL_75:
                        v41 = item->fields._info_k__BackingField;
                        if ( !v41 )
                          goto LABEL_90;
                        v41->fields.flag &= ~1u;
                        v42 = item->fields._info_k__BackingField;
                        if ( !v42 )
                          goto LABEL_90;
                        v42->fields.flag &= ~4u;
                        mLabel = (UILabel_o *)this->fields.notSelectObj;
                        if ( !mLabel )
                          goto LABEL_90;
                        v43 = 0;
                      }
                      else
                      {
                        v44 = item->fields._info_k__BackingField;
                        if ( !v44 )
                          goto LABEL_90;
                        v44->fields.flag |= 1u;
                        v45 = item->fields._info_k__BackingField;
                        if ( !v45 )
                          goto LABEL_90;
                        v45->fields.flag |= 4u;
                        mLabel = (UILabel_o *)this->fields.notSelectObj;
                        if ( !mLabel )
                          goto LABEL_90;
                        v43 = 1;
                      }
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v43, 0LL);
                      v46 = item->fields._info_k__BackingField;
                      if ( !v46 )
                        goto LABEL_90;
                      mLabel = this->fields.notSelectLabel;
                      if ( !mLabel )
                        goto LABEL_90;
                      UILabel__set_text(mLabel, v46->fields.playLimitCountMessage, 0LL);
                      mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
                      notSelectLabel = this->fields.notSelectLabel;
                      if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
                      }
                      if ( !notSelectLabel )
                        goto LABEL_90;
                      UILabel__SetCondensedScale(
                        notSelectLabel,
                        MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_W_NOT_SELECT,
                        0LL);
                      MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v48);
                      MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v49);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_90:
          sub_B0D97C(mLabel);
        }
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = static_fields->LABEL_X_SVT;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v21 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = static_fields->LABEL_X_SVT;
          if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_23;
        }
        if ( v21->_2.cctor_finished )
        {
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
          if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_40;
        }
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        }
        goto LABEL_40;
      }
      if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      {
        v25 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v25->LABEL_X_DEFAULT;
LABEL_26:
        LABEL_W_SVT = v25->LABEL_W_CONDENSED;
LABEL_44:
        p_LABEL_MAX_LINE_SVT = &v25->LABEL_MAX_LINE_DEFAULT;
        goto LABEL_45;
      }
      if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        v25 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v25->LABEL_X_DEFAULT;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
        v21 = MaterialEventLogListViewItemDraw_TypeInfo;
        v25 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v25->LABEL_X_DEFAULT;
        if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_26;
      }
      if ( v21->_2.cctor_finished )
      {
        LABEL_W_SVT = v25->LABEL_W_CONDENSED;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = MaterialEventLogListViewItemDraw_TypeInfo;
        v25 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_W_SVT = v25->LABEL_W_CONDENSED;
        if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_44;
      }
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = MaterialEventLogListViewItemDraw_TypeInfo;
        v25 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
      }
      goto LABEL_44;
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
  __int64 v17; // x1
  __int64 v18; // x21
  UnityEngine_Component_o *mLastTimeIcon; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x9
  __int64 v30; // x8
  int v31; // w9
  __int64 v32; // x1
  __int64 v33; // x8
  __int64 v34; // x9
  __int64 v35; // x8
  __int64 v36; // x8
  int v37; // w8
  MyRoomParamsManager_c *v38; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x8
  BalanceConfig_c *v43; // x8
  MaterialEventLogListViewItemDraw___c_c *v44; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v48; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x8
  __int64 v58; // x9
  __int64 v59; // x8
  MyRoomParamsManager_c *v60; // x0
  int32_t LastPlayQuestId_k__BackingField; // w22
  __int64 v62; // x1
  __int64 v63; // x8
  __int64 v64; // x8
  int v65; // w8
  __int64 v66; // x8
  __int64 v67; // x9
  int v68; // w9
  int v69; // w8
  __int64 v70; // x8
  __int64 v71; // x8
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x8
  __int64 v75; // x8
  BalanceConfig_c *v76; // x0
  System_Int32_array *v77; // x22
  System_Func_int__bool__o *v78; // x23
  __int64 v79; // x1
  __int64 v80; // x8
  __int64 v81; // x8
  __int64 v82; // x8
  __int64 v83; // x8
  int v84; // w8
  __int64 v85; // x8
  __int64 v86; // x8
  System_String_o *v87; // x20
  System_String_o *v88; // x0

  if ( (byte_4214DAB & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, item);
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, v5);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v10);
    sub_B0D8A4(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__, v11);
    sub_B0D8A4(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__, v12);
    sub_B0D8A4(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, v13);
    sub_B0D8A4(&MaterialEventLogListViewItemDraw___c_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_13572/*"TUTORIAL_QUEST_ID1"*/, v15);
    sub_B0D8A4(&StringLiteral_6350/*"FES_WAR_ID"*/, v16);
    sub_B0D8A4(&StringLiteral_8686/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v17);
    byte_4214DAB = 1;
  }
  v18 = sub_B0D974(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, item, method);
  MaterialEventLogListViewItemDraw___c__DisplayClass26_0___ctor(
    (MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_251;
  *(_QWORD *)(v18 + 16) = item;
  v26 = v18 + 16;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)item, v20, v21, v22, v23, v24, v25);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_251;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !mLastTimeIcon )
    goto LABEL_251;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0LL);
  v29 = *(_QWORD *)v26;
  if ( !*(_QWORD *)v26 )
    return;
  v30 = *(_QWORD *)(v29 + 120);
  if ( !v30 )
    return;
  v31 = *(_DWORD *)(v29 + 112);
  if ( v31 == 1 )
  {
    v43 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v43 = BalanceConfig_TypeInfo;
    }
    v44 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v43->static_fields->MainInterludeWarIdOnMaterial;
    if ( (BYTE3(MaterialEventLogListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo);
      v44 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    static_fields = v44->static_fields;
    _9__26_0 = static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v27, v28);
      System_Func_int__bool____ctor(
        _9__26_0,
        v48,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
      v49 = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      v49->__9__26_0 = _9__26_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v49->__9__26_0,
        (System_Int32_array **)_9__26_0,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    mLastTimeIcon = (UnityEngine_Component_o *)BasicHelper__Any_int__24145568(
                                                 MainInterludeWarIdOnMaterial,
                                                 (System_Func_T__bool__o *)_9__26_0,
                                                 (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      return;
    v57 = *(_QWORD *)v26;
    if ( !*(_QWORD *)v26 )
      goto LABEL_251;
    v58 = *(_QWORD *)(v57 + 120);
    if ( !v58 )
      goto LABEL_251;
    if ( *(_BYTE *)(v58 + 181) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4213E80 )
      {
        sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v56);
        byte_4213E80 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v57 = *(_QWORD *)v26;
      if ( !*(_QWORD *)v26 )
        goto LABEL_251;
      v58 = *(_QWORD *)(v57 + 120);
      if ( !v58 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v58 + 44) )
        goto LABEL_241;
    }
    if ( *(_BYTE *)(v58 + 180) )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v57 = *(_QWORD *)v26;
        if ( !*(_QWORD *)v26 )
          goto LABEL_251;
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v59 = *(_QWORD *)(v57 + 120);
      if ( !v59 )
        goto LABEL_251;
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( !mLastTimeIcon )
        goto LABEL_251;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             *(_DWORD *)(v59 + 40),
             (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_241;
      }
    }
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_4213E81 )
    {
      sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v56);
      byte_4213E81 = 1;
    }
    v60 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v60 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v60->static_fields->_LastPlayQuestId_k__BackingField;
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13572/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( LastPlayQuestId_k__BackingField == (_DWORD)mLastTimeIcon )
    {
      if ( !*(_QWORD *)v26 )
        goto LABEL_251;
      v63 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
      if ( !v63 )
        goto LABEL_251;
      if ( !*(_DWORD *)(v63 + 40) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_251;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( !mLastTimeIcon )
          goto LABEL_251;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
      }
    }
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_421277F )
    {
      sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v62);
      byte_421277F = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v26 || (v64 = *(_QWORD *)(*(_QWORD *)v26 + 120LL)) == 0 )
LABEL_251:
      sub_B0D97C(mLastTimeIcon);
    v65 = *(_DWORD *)(v64 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != v65 )
    {
      if ( v65 == -1 )
        return;
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_421277F )
      {
        sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v62);
        byte_421277F = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v26 )
        goto LABEL_251;
      v66 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
      if ( !v66 )
        goto LABEL_251;
      v67 = 1374389535LL * *(int *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL);
      v68 = (v67 >> 37) + ((unsigned __int64)v67 >> 63);
      v69 = *(_DWORD *)(v66 + 40) / 1000 - 10;
LABEL_240:
      if ( v68 != v69 )
        return;
LABEL_241:
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
      goto LABEL_251;
    }
LABEL_184:
    if ( v65 == -1 )
      return;
    goto LABEL_241;
  }
  if ( v31 == 3 )
  {
    if ( *(_DWORD *)(v30 + 36) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4213E82 )
      {
        sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v27);
        byte_4213E82 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v26 )
        goto LABEL_251;
      v70 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
      if ( !v70 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 20LL) == *(_DWORD *)(v70 + 36) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_251;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( !mLastTimeIcon )
          goto LABEL_251;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
      }
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v26 )
      goto LABEL_251;
    v71 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
    if ( !v71 )
      goto LABEL_251;
    mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
    if ( !mLastTimeIcon )
      goto LABEL_251;
    mLastTimeIcon = (UnityEngine_Component_o *)System_Collections_Generic_List_int___Contains(
                                                 (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                                                 *(_DWORD *)(v71 + 40),
                                                 (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      goto LABEL_241;
    if ( !*(_QWORD *)v26 )
      goto LABEL_251;
    v74 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
    if ( !v74 )
      goto LABEL_251;
    if ( *(_BYTE *)(v74 + 181) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4213E80 )
      {
        sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v72);
        byte_4213E80 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v26 )
        goto LABEL_251;
      v75 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
      if ( !v75 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v75 + 44) )
        goto LABEL_241;
    }
    v76 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v76 = BalanceConfig_TypeInfo;
    }
    v77 = v76->static_fields->MainInterludeWarIdOnMaterial;
    v78 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v72, v73);
    System_Func_int__bool____ctor(
      v78,
      (Il2CppObject *)v18,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    if ( !BasicHelper__Any_int__24145568(
            v77,
            (System_Func_T__bool__o *)v78,
            (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
      return;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_421277F )
    {
      sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v79);
      byte_421277F = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v26 )
      goto LABEL_251;
    v80 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
    if ( !v80 )
      goto LABEL_251;
    v65 = *(_DWORD *)(v80 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != v65 )
      return;
    goto LABEL_184;
  }
  if ( v31 != 5 )
    return;
  mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6350/*"FES_WAR_ID"*/, 0LL);
  v33 = *(_QWORD *)v26;
  if ( !*(_QWORD *)v26 )
    goto LABEL_251;
  v34 = *(_QWORD *)(v33 + 120);
  if ( !v34 )
    goto LABEL_251;
  if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v34 + 40) )
  {
    if ( *(_BYTE *)(v34 + 181) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4213E80 )
      {
        sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v32);
        byte_4213E80 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v33 = *(_QWORD *)v26;
      if ( !*(_QWORD *)v26 )
        goto LABEL_251;
      v34 = *(_QWORD *)(v33 + 120);
      if ( !v34 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v34 + 44) )
        goto LABEL_241;
    }
    if ( !*(_BYTE *)(v34 + 180) )
    {
LABEL_206:
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4213E81 )
      {
        sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v32);
        byte_4213E81 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v26 )
        goto LABEL_251;
      v82 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
      if ( !v82 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(_DWORD *)(v82 + 44) )
      {
        if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_421277F )
        {
          sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v32);
          byte_421277F = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v26 )
          goto LABEL_251;
        v83 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
        if ( !v83 )
          goto LABEL_251;
        v84 = *(_DWORD *)(v83 + 40);
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v84 && v84 != -1 )
          goto LABEL_241;
      }
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4213E84 )
      {
        sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v32);
        byte_4213E84 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v26 )
        goto LABEL_251;
      v85 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
      if ( !v85 )
        goto LABEL_251;
      v69 = *(_DWORD *)(v85 + 44);
      v68 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL);
      goto LABEL_240;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v33 = *(_QWORD *)v26;
      if ( !*(_QWORD *)v26 )
        goto LABEL_251;
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v81 = *(_QWORD *)(v33 + 120);
    if ( v81 )
    {
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               *(_DWORD *)(v81 + 40),
               (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          goto LABEL_241;
        }
        goto LABEL_206;
      }
    }
    goto LABEL_251;
  }
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  if ( !byte_4213E81 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v32);
    byte_4213E81 = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !*(_QWORD *)v26 )
    goto LABEL_251;
  v35 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
  if ( !v35 )
    goto LABEL_251;
  if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(_DWORD *)(v35 + 44) )
  {
    if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
      j_il2cpp_runtime_class_init_0(mLastTimeIcon);
    if ( !byte_421277F )
    {
      sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v32);
      byte_421277F = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v26 )
      goto LABEL_251;
    v36 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
    if ( !v36 )
      goto LABEL_251;
    v37 = *(_DWORD *)(v36 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v37 && v37 != -1 )
    {
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4213E83 )
      {
        sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v32);
        byte_4213E83 = 1;
      }
      v38 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v38 = MyRoomParamsManager_TypeInfo;
      }
      LastPlayTitle_k__BackingField = v38->static_fields->_LastPlayTitle_k__BackingField;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8686/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v40, 0LL);
      if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      {
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        }
        if ( !byte_4213E83 )
        {
          sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v41);
          byte_4213E83 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v26 )
          goto LABEL_251;
        v42 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
        if ( !v42 )
          goto LABEL_251;
        if ( !System_String__op_Equality(
                *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                *(System_String_o **)(v42 + 16),
                0LL) )
          return;
        goto LABEL_241;
      }
      if ( !*(_QWORD *)v26 )
        goto LABEL_251;
      v86 = *(_QWORD *)(*(_QWORD *)v26 + 120LL);
      if ( !v86 )
        goto LABEL_251;
      v87 = *(System_String_o **)(v86 + 16);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_8686/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      if ( System_String__op_Inequality(v87, v88, 0LL) )
        goto LABEL_241;
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_421271B & 1) == 0 )
  {
    sub_B0D8A4(&MaterialEventLogListViewItemDraw___c_TypeInfo, v1);
    byte_421271B = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MaterialEventLogListViewItemDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_421271C & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
    byte_421271C = 1;
  }
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  if ( !byte_421277F )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
    byte_421277F = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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
    sub_B0D97C(this);
  return info_k__BackingField->fields.war_id == interludeWarId;
}