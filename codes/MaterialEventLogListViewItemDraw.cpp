void __fastcall MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *v9; // x8

  if ( (byte_4B117F1 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialEventLogListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20581/*"img_menuboard_03"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_20580/*"img_menuboard_01"*/, v5, v6);
    byte_4B117F1 = 1;
  }
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->BASE_SP_NAME_DEFAULT = (struct System_String_o *)StringLiteral_20580/*"img_menuboard_01"*/;
  sub_1BCA784(MaterialEventLogListViewItemDraw_TypeInfo->static_fields, StringLiteral_20580/*"img_menuboard_01"*/);
  v7 = StringLiteral_20581/*"img_menuboard_03"*/;
  static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  static_fields->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_20581/*"img_menuboard_03"*/;
  sub_1BCA784(&static_fields->BASE_SP_NAME_SVT, v7);
  v9 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v9->LABEL_X_DEFAULT = 0x4230000040000000LL;
  *(_OWORD *)&v9->LABEL_W_DEFAULT = xmmword_BD3D70;
  *(_OWORD *)&v9->LABEL_MAX_LINE_SVT = xmmword_BD3180;
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
    sub_1BCAA3C(0LL, method);
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
      sub_1BCAA3C(this, item);
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UIWidget__set_color((UIWidget_o *)this, v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewItemDraw__SetEnableSelect(
        MaterialEventLogListViewItemDraw_o *this,
        bool isSelect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *notSelectObj; // x0

  notSelectObj = this->fields.notSelectObj;
  if ( !notSelectObj )
    sub_1BCAA3C(0LL, isSelect);
  UnityEngine_GameObject__SetActive(notSelectObj, !isSelect, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B117EF & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_1BCA7E0(&MaterialEventLogListViewItemDraw_TypeInfo, item, is_disp);
    byte_4B117EF = 1;
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
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, item);
  if ( !v8 )
LABEL_14:
    sub_1BCAA3C(this, item);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewItemDraw__SetItem(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        int32_t mode,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x25
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v23; // x1
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  System_String_o **onChange; // x8
  MaterialEventLogListViewItemDraw_c *v28; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v30; // x9
  float v31; // s8
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_GameObject_o *v34; // x19
  __int64 v35; // x10
  __int64 v36; // x9
  int32_t v37; // w22
  __int64 v38; // x9
  int32_t *p_LABEL_MAX_LINE_MAP; // x8
  int32_t v40; // w23
  struct MaterialEventLogListViewItem_Info_o *v41; // x8
  struct UILabel_o *v42; // x23
  System_String_o *mText; // x24
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v48; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v50; // x22
  System_String_o *v51; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v54; // x25
  struct MaterialEventLogListViewItem_Info_o *v55; // x8
  bool v56; // w1
  struct MaterialEventLogListViewItem_Info_o *v57; // x8
  struct MaterialEventLogListViewItem_Info_o *v58; // x8
  UILabel_o *notSelectLabel; // x21
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x2
  __int64 v62; // x10

  if ( (byte_4B117EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&MaterialEventLogListViewItemDraw_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_8686/*"MATERIAL_PROGRESS_SUFFIX"*/, v17, v18);
    byte_4B117EE = 1;
  }
  if ( item )
  {
    info_k__BackingField = item->fields._info_k__BackingField;
    if ( info_k__BackingField )
    {
      if ( mode )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4B109C6 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v21);
          byte_4B109C6 = 1;
        }
        GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        flag = info_k__BackingField->fields.flag;
        mBaseSp = this->fields.mBaseSp;
        mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v23);
          mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        }
        if ( !mBaseSp )
          goto LABEL_74;
        onChange = (System_String_o **)mLabel->fields.onChange;
        if ( (flag & 2) != 0 )
          ++onChange;
        UISprite__set_spriteName(mBaseSp, *onChange, 0LL);
        mLabel = (UILabel_o *)this->fields.mBaseSp;
        if ( !mLabel )
          goto LABEL_74;
        ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))mLabel->klass->vtable._33_MakePixelPerfect.method)(
          mLabel,
          mLabel->klass->vtable._34_get_minWidth.methodPtr);
        mLabel = this->fields.mLabel;
        if ( !mLabel )
          goto LABEL_74;
        UILabel__set_fontSize(mLabel, info_k__BackingField->fields.font_size, 0LL);
        v28 = MaterialEventLogListViewItemDraw_TypeInfo;
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          v30 = 16LL;
          if ( (flag & 2) != 0 )
            v30 = 20LL;
          v31 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v30);
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v23);
          v28 = MaterialEventLogListViewItemDraw_TypeInfo;
          v35 = 16LL;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          if ( (flag & 2) != 0 )
            v35 = 20LL;
          v31 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v35);
          if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v23);
            v28 = MaterialEventLogListViewItemDraw_TypeInfo;
            v62 = 28LL;
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            if ( (flag & 2) != 0 )
              v62 = 32LL;
            v37 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v62);
            if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v23);
              v28 = MaterialEventLogListViewItemDraw_TypeInfo;
              static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            }
            goto LABEL_29;
          }
        }
        v36 = 28LL;
        if ( (flag & 2) != 0 )
          v36 = 32LL;
        v37 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v36);
LABEL_29:
        v38 = 36LL;
        if ( (flag & 2) != 0 )
          v38 = 40LL;
        if ( item->fields._kind_k__BackingField == 5 )
        {
          if ( !v28->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v28, v23);
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          }
          p_LABEL_MAX_LINE_MAP = &static_fields->LABEL_MAX_LINE_MAP;
        }
        else
        {
          p_LABEL_MAX_LINE_MAP = (int32_t *)((char *)static_fields + v38);
        }
        mLabel = this->fields.mLabel;
        if ( mLabel )
        {
          v40 = *p_LABEL_MAX_LINE_MAP;
          UILabel__set_overflowMethod(mLabel, 2, 0LL);
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            UILabel__set_maxLineCount(mLabel, v40, 0LL);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0LL);
              if ( (flag & 2) == 0
                && !info_k__BackingField->fields.isMovedQuest
                && item->fields._kind_k__BackingField == 5 )
              {
                v41 = item->fields._info_k__BackingField;
                if ( !v41 )
                  goto LABEL_74;
                if ( v41->fields.clear_phase_max < v41->fields.phase_max )
                {
                  v42 = this->fields.mLabel;
                  if ( !v42 )
                    goto LABEL_74;
                  mText = v42->fields.mText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
                  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8686/*"MATERIAL_PROGRESS_SUFFIX"*/, 0LL);
                  v45 = System_String__Concat_62401220(mText, v44, 0LL);
                  UILabel__set_text(v42, v45, 0LL);
                }
              }
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0LL);
                GameObjectExtensions__SetLocalPositionX(v46, v31, 0LL);
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  UILabel__SetCondensedScale(mLabel, v37, 0LL);
                  mLabel = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( mLabel )
                  {
                    MasterData_object = DataManager__GetMasterData_object_(
                                          (DataManager_o *)mLabel,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
                    voiceId = info_k__BackingField->fields.voiceId;
                    v50 = (VoiceMaterialCondMaster_o *)MasterData_object;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v48);
                    v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(voiceId, 0LL);
                    mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v51, 0LL);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                      goto LABEL_58;
                    svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                    voicePrefix = info_k__BackingField->fields.voicePrefix;
                    v54 = info_k__BackingField->fields.voiceId;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v23);
                    mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(
                                            v54,
                                            0LL);
                    if ( !v50 )
                      goto LABEL_74;
                    mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                            v50,
                                            svtVoiceId,
                                            voicePrefix,
                                            (System_String_o *)mLabel,
                                            limitCount,
                                            0LL);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                    {
LABEL_58:
                      v55 = item->fields._info_k__BackingField;
                      if ( !v55 )
                        goto LABEL_74;
                      v55->fields.flag &= 0xFFFFFFFA;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_74;
                      v56 = 0;
                    }
                    else
                    {
                      v57 = item->fields._info_k__BackingField;
                      if ( !v57 )
                        goto LABEL_74;
                      v57->fields.flag |= 5u;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_74;
                      v56 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v56, 0LL);
                    v58 = item->fields._info_k__BackingField;
                    if ( v58 )
                    {
                      mLabel = this->fields.notSelectLabel;
                      if ( mLabel )
                      {
                        UILabel__set_text(mLabel, v58->fields.playLimitCountMessage, 0LL);
                        mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
                        notSelectLabel = this->fields.notSelectLabel;
                        if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo, v23);
                        if ( notSelectLabel )
                        {
                          UILabel__SetCondensedScale(
                            notSelectLabel,
                            MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_W_NOT_SELECT,
                            0LL);
                          MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v60);
                          MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v61);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_74:
        sub_1BCAA3C(mLabel, v23);
      }
    }
    else
    {
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v32, v33);
        byte_4B109C1 = 1;
      }
      GameObjectExtensions__SetLocalScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw__SetLastTimeIcon(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x21
  UnityEngine_Component_o *mLastTimeIcon; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppClass *klass; // x9
  Il2CppClass *v37; // x8
  int interopData; // w9
  __int64 v39; // x2
  Il2CppClass *v40; // x8
  Il2CppClass *v41; // x9
  Il2CppClass *v42; // x8
  Il2CppClass *v43; // x8
  unsigned int v44; // w8
  MyRoomParamsManager_c *v45; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v47; // x0
  __int64 v48; // x2
  Il2CppClass *v49; // x8
  BalanceConfig_c *v50; // x8
  MaterialEventLogListViewItemDraw___c_c *v51; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v54; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x0
  __int64 v56; // x2
  Il2CppClass *v57; // x8
  Il2CppClass *v58; // x9
  Il2CppClass *v59; // x8
  MyRoomParamsManager_c *v60; // x0
  int32_t LastPlayQuestId_k__BackingField; // w22
  __int64 v62; // x2
  Il2CppClass *v63; // x8
  Il2CppClass *v64; // x8
  unsigned int bits; // w8
  Il2CppClass *v66; // x8
  __int64 v67; // x9
  int v68; // w9
  int v69; // w8
  Il2CppClass *v70; // x8
  Il2CppClass *v71; // x8
  __int64 v72; // x2
  __int64 v73; // x3
  Il2CppClass *v74; // x8
  Il2CppClass *v75; // x8
  BalanceConfig_c *v76; // x0
  System_Int32_array *v77; // x22
  System_Func_int__bool__o *v78; // x23
  __int64 v79; // x2
  Il2CppClass *v80; // x8
  Il2CppClass *v81; // x8
  Il2CppClass *v82; // x8
  Il2CppClass *v83; // x8
  unsigned int v84; // w8
  Il2CppClass *v85; // x8
  Il2CppClass *v86; // x8
  System_String_o *name; // x20
  System_String_o *v88; // x0

  if ( (byte_4B117F0 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, method);
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, v6, v7);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__, v16, v17);
    sub_1BCA7E0(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__, v18, v19);
    sub_1BCA7E0(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&MaterialEventLogListViewItemDraw___c_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_13676/*"TUTORIAL_QUEST_ID1"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_6487/*"FES_WAR_ID"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_8683/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v28, v29);
    byte_4B117F0 = 1;
  }
  v30 = (Il2CppObject *)sub_1BCAA2C(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, item, method, v3);
  System_Object___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_212;
  v30[1].klass = (Il2CppClass *)item;
  v33 = v30 + 1;
  sub_1BCA784(&v30[1], item);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_212;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !mLastTimeIcon )
    goto LABEL_212;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0LL);
  klass = v33->klass;
  if ( !v33->klass )
    return;
  v37 = klass->_1.klass;
  if ( !v37 )
    return;
  interopData = (int)klass->_1.interopData;
  if ( interopData == 1 )
  {
    v50 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v32);
      v50 = BalanceConfig_TypeInfo;
    }
    v51 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v50->static_fields->MainInterludeWarIdOnMaterial;
    if ( !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo, v32);
      v51 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    _9__26_0 = v51->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51, v32);
        v51 = MaterialEventLogListViewItemDraw___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v51->static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v32, v34, v35);
      System_Func_int__bool____ctor(
        _9__26_0,
        v54,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        0LL);
      static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = _9__26_0;
      sub_1BCA784(&static_fields->__9__26_0, _9__26_0);
    }
    mLastTimeIcon = (UnityEngine_Component_o *)BasicHelper__Any_int__49273364(
                                                 MainInterludeWarIdOnMaterial,
                                                 (System_Func_T__bool__o *)_9__26_0,
                                                 (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      return;
    v57 = v33->klass;
    if ( !v33->klass )
      goto LABEL_212;
    v58 = v57->_1.klass;
    if ( !v58 )
      goto LABEL_212;
    if ( BYTE5(v58->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      if ( !byte_4B11852 )
      {
        sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v56);
        byte_4B11852 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v57 = v33->klass;
      if ( !v33->klass )
        goto LABEL_212;
      v58 = v57->_1.klass;
      if ( !v58 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v58->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    if ( BYTE4(v58->_1.interfaceOffsets) )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
        v57 = v33->klass;
        if ( !v33->klass )
          goto LABEL_212;
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v59 = v57->_1.klass;
      if ( !v59 )
        goto LABEL_212;
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( !mLastTimeIcon )
        goto LABEL_212;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             v59->_1.byval_arg.bits,
             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_203;
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
    if ( !byte_4B1175E )
    {
      sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v56);
      byte_4B1175E = 1;
    }
    v60 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      v60 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v60->static_fields->_LastPlayQuestId_k__BackingField;
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13676/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( LastPlayQuestId_k__BackingField == (_DWORD)mLastTimeIcon )
    {
      if ( !v33->klass )
        goto LABEL_212;
      v63 = v33->klass->_1.klass;
      if ( !v63 )
        goto LABEL_212;
      if ( !v63->_1.byval_arg.bits )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_212;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( !mLastTimeIcon )
          goto LABEL_212;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
    if ( !byte_4B1175F )
    {
      sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v62);
      byte_4B1175F = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v33->klass || (v64 = v33->klass->_1.klass) == 0LL )
LABEL_212:
      sub_1BCAA3C(mLastTimeIcon, v32);
    bits = v64->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != bits )
    {
      if ( bits == -1 )
        return;
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon, v32);
      if ( !byte_4B1175F )
      {
        sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v62);
        byte_4B1175F = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v33->klass )
        goto LABEL_212;
      v66 = v33->klass->_1.klass;
      if ( !v66 )
        goto LABEL_212;
      v67 = 1374389535LL * *(int *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL);
      v68 = (v67 >> 37) + ((unsigned __int64)v67 >> 63);
      v69 = (signed int)v66->_1.byval_arg.bits / 1000 - 10;
LABEL_202:
      if ( v68 != v69 )
        return;
LABEL_203:
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
      goto LABEL_212;
    }
LABEL_155:
    if ( bits == -1 )
      return;
    goto LABEL_203;
  }
  if ( interopData == 3 )
  {
    if ( HIDWORD(v37->_1.byval_arg.data) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      if ( !byte_4B11853 )
      {
        sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v34);
        byte_4B11853 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v33->klass )
        goto LABEL_212;
      v70 = v33->klass->_1.klass;
      if ( !v70 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 20LL) == HIDWORD(v70->_1.byval_arg.data) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_212;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( !mLastTimeIcon )
          goto LABEL_212;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
      }
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v33->klass )
      goto LABEL_212;
    v71 = v33->klass->_1.klass;
    if ( !v71 )
      goto LABEL_212;
    mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
    if ( !mLastTimeIcon )
      goto LABEL_212;
    mLastTimeIcon = (UnityEngine_Component_o *)System_Collections_Generic_List_int___Contains(
                                                 (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                                                 v71->_1.byval_arg.bits,
                                                 (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      goto LABEL_203;
    if ( !v33->klass )
      goto LABEL_212;
    v74 = v33->klass->_1.klass;
    if ( !v74 )
      goto LABEL_212;
    if ( BYTE5(v74->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      if ( !byte_4B11852 )
      {
        sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v72);
        byte_4B11852 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v33->klass )
        goto LABEL_212;
      v75 = v33->klass->_1.klass;
      if ( !v75 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v75->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    v76 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v32);
      v76 = BalanceConfig_TypeInfo;
    }
    v77 = v76->static_fields->MainInterludeWarIdOnMaterial;
    v78 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v32, v72, v73);
    System_Func_int__bool____ctor(
      v78,
      v30,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      0LL);
    if ( !BasicHelper__Any_int__49273364(
            v77,
            (System_Func_T__bool__o *)v78,
            (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176) )
      return;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
    if ( !byte_4B1175F )
    {
      sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v79);
      byte_4B1175F = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v33->klass )
      goto LABEL_212;
    v80 = v33->klass->_1.klass;
    if ( !v80 )
      goto LABEL_212;
    bits = v80->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != bits )
      return;
    goto LABEL_155;
  }
  if ( interopData != 5 )
    return;
  mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6487/*"FES_WAR_ID"*/, 0LL);
  v40 = v33->klass;
  if ( !v33->klass )
    goto LABEL_212;
  v41 = v40->_1.klass;
  if ( !v41 )
    goto LABEL_212;
  if ( (_DWORD)mLastTimeIcon != v41->_1.byval_arg.bits )
  {
    if ( BYTE5(v41->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      if ( !byte_4B11852 )
      {
        sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v39);
        byte_4B11852 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v40 = v33->klass;
      if ( !v33->klass )
        goto LABEL_212;
      v41 = v40->_1.klass;
      if ( !v41 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v41->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    if ( !BYTE4(v41->_1.interfaceOffsets) )
    {
LABEL_174:
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      if ( !byte_4B1175E )
      {
        sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v39);
        byte_4B1175E = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v33->klass )
        goto LABEL_212;
      v82 = v33->klass->_1.klass;
      if ( !v82 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(&v82->_1.byval_arg.bits + 1) )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon, v32);
        if ( !byte_4B1175F )
        {
          sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v39);
          byte_4B1175F = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !v33->klass )
          goto LABEL_212;
        v83 = v33->klass->_1.klass;
        if ( !v83 )
          goto LABEL_212;
        v84 = v83->_1.byval_arg.bits;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v84 && v84 != -1 )
          goto LABEL_203;
      }
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon, v32);
      if ( !byte_4B11761 )
      {
        sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v39);
        byte_4B11761 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v33->klass )
        goto LABEL_212;
      v85 = v33->klass->_1.klass;
      if ( !v85 )
        goto LABEL_212;
      v69 = *(&v85->_1.byval_arg.bits + 1);
      v68 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL);
      goto LABEL_202;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      v40 = v33->klass;
      if ( !v33->klass )
        goto LABEL_212;
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v81 = v40->_1.klass;
    if ( v81 )
    {
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               v81->_1.byval_arg.bits,
               (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          goto LABEL_203;
        }
        goto LABEL_174;
      }
    }
    goto LABEL_212;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
  if ( !byte_4B1175E )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v39);
    byte_4B1175E = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !v33->klass )
    goto LABEL_212;
  v42 = v33->klass->_1.klass;
  if ( !v42 )
    goto LABEL_212;
  if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(&v42->_1.byval_arg.bits + 1) )
  {
    if ( !LODWORD(mLastTimeIcon[9].monitor) )
      j_il2cpp_runtime_class_init_0(mLastTimeIcon, v32);
    if ( !byte_4B1175F )
    {
      sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v39);
      byte_4B1175F = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v33->klass )
      goto LABEL_212;
    v43 = v33->klass->_1.klass;
    if ( !v43 )
      goto LABEL_212;
    v44 = v43->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v44 && v44 != -1 )
    {
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon, v32);
      if ( !byte_4B11760 )
      {
        sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v39);
        byte_4B11760 = 1;
      }
      v45 = MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
        v45 = MyRoomParamsManager_TypeInfo;
      }
      LastPlayTitle_k__BackingField = v45->static_fields->_LastPlayTitle_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_8683/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v47, 0LL);
      if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      {
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
        if ( !byte_4B11760 )
        {
          sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v32, v48);
          byte_4B11760 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v32);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !v33->klass )
          goto LABEL_212;
        v49 = v33->klass->_1.klass;
        if ( !v49 )
          goto LABEL_212;
        if ( !System_String__op_Equality(
                *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                (System_String_o *)v49->_1.name,
                0LL) )
          return;
        goto LABEL_203;
      }
      if ( !v33->klass )
        goto LABEL_212;
      v86 = v33->klass->_1.klass;
      if ( !v86 )
        goto LABEL_212;
      name = (System_String_o *)v86->_1.name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_8683/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      if ( System_String__op_Inequality(name, v88, 0LL) )
        goto LABEL_203;
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B117F2 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialEventLogListViewItemDraw___c_TypeInfo, v1, v2);
    byte_4B117F2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MaterialEventLogListViewItemDraw___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v4;
  sub_1BCA784(MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields, v4);
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

  if ( (byte_4B117F3 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId, method);
    byte_4B117F3 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
  if ( !byte_4B1175F )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId, method);
    byte_4B1175F = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewItemDraw___c__DisplayClass26_0___SetLastTimeIcon_b__1(
        MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *this,
        int32_t interludeWarId,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_o *item; // x8
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  item = this->fields.item;
  if ( !item || (info_k__BackingField = item->fields._info_k__BackingField) == 0LL )
    sub_1BCAA3C(this, *(_QWORD *)&interludeWarId);
  return info_k__BackingField->fields.war_id == interludeWarId;
}