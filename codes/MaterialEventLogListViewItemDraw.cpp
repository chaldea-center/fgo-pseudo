void __fastcall MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *v5; // x8

  if ( (byte_49F7C10 & 1) == 0 )
  {
    sub_1B640C8(&MaterialEventLogListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20282/*"img_menuboard_03"*/, v2);
    sub_1B640C8(&StringLiteral_20281/*"img_menuboard_01"*/, v3);
    byte_49F7C10 = 1;
  }
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->BASE_SP_NAME_DEFAULT = (struct System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/;
  sub_1B6406C(MaterialEventLogListViewItemDraw_TypeInfo->static_fields);
  static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  static_fields->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_20282/*"img_menuboard_03"*/;
  sub_1B6406C(&static_fields->BASE_SP_NAME_SVT);
  v5 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v5->LABEL_X_DEFAULT = 0x4230000040000000LL;
  *(_OWORD *)&v5->LABEL_W_DEFAULT = xmmword_BA4350;
  *(_OWORD *)&v5->LABEL_MAX_LINE_SVT = xmmword_BA37D0;
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
    sub_1B64324(0LL);
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
      sub_1B64324(this);
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
    sub_1B64324(0LL);
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
  if ( (byte_49F7C0E & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_1B640C8(&MaterialEventLogListViewItemDraw_TypeInfo, item);
    byte_49F7C0E = 1;
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
    sub_1B64324(this);
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
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x25
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  System_String_o **onChange; // x8
  MaterialEventLogListViewItemDraw_c *v21; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v23; // x9
  float v24; // s8
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x19
  __int64 v27; // x10
  __int64 v28; // x9
  int32_t v29; // w22
  __int64 v30; // x9
  int32_t *p_LABEL_MAX_LINE_MAP; // x8
  int32_t v32; // w23
  struct MaterialEventLogListViewItem_Info_o *v33; // x8
  struct UILabel_o *v34; // x23
  System_String_o *mText; // x24
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  Il2CppObject *MasterData_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v41; // x22
  System_String_o *v42; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v45; // x25
  struct MaterialEventLogListViewItem_Info_o *v46; // x8
  bool v47; // w1
  struct MaterialEventLogListViewItem_Info_o *v48; // x8
  struct MaterialEventLogListViewItem_Info_o *v49; // x8
  UILabel_o *notSelectLabel; // x21
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x2
  __int64 v53; // x10

  if ( (byte_49F7C0D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&MaterialEventLogListViewItemDraw_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&StringLiteral_8520/*"MATERIAL_PROGRESS_SUFFIX"*/, v13);
    byte_49F7C0D = 1;
  }
  if ( item )
  {
    info_k__BackingField = item->fields._info_k__BackingField;
    if ( info_k__BackingField )
    {
      if ( mode )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !byte_49F7116 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v15);
          byte_49F7116 = 1;
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
        v21 = MaterialEventLogListViewItemDraw_TypeInfo;
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          v23 = 16LL;
          if ( (flag & 2) != 0 )
            v23 = 20LL;
          v24 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v23);
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v21 = MaterialEventLogListViewItemDraw_TypeInfo;
          v27 = 16LL;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          if ( (flag & 2) != 0 )
            v27 = 20LL;
          v24 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v27);
          if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
            v21 = MaterialEventLogListViewItemDraw_TypeInfo;
            v53 = 28LL;
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            if ( (flag & 2) != 0 )
              v53 = 32LL;
            v29 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v53);
            if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
              v21 = MaterialEventLogListViewItemDraw_TypeInfo;
              static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            }
            goto LABEL_29;
          }
        }
        v28 = 28LL;
        if ( (flag & 2) != 0 )
          v28 = 32LL;
        v29 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v28);
LABEL_29:
        v30 = 36LL;
        if ( (flag & 2) != 0 )
          v30 = 40LL;
        if ( item->fields._kind_k__BackingField == 5 )
        {
          if ( !v21->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v21);
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          }
          p_LABEL_MAX_LINE_MAP = &static_fields->LABEL_MAX_LINE_MAP;
        }
        else
        {
          p_LABEL_MAX_LINE_MAP = (int32_t *)((char *)static_fields + v30);
        }
        mLabel = this->fields.mLabel;
        if ( mLabel )
        {
          v32 = *p_LABEL_MAX_LINE_MAP;
          UILabel__set_overflowMethod(mLabel, 2, 0LL);
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            UILabel__set_maxLineCount(mLabel, v32, 0LL);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0LL);
              if ( (flag & 2) == 0
                && !info_k__BackingField->fields.isMovedQuest
                && item->fields._kind_k__BackingField == 5 )
              {
                v33 = item->fields._info_k__BackingField;
                if ( !v33 )
                  goto LABEL_74;
                if ( v33->fields.clear_phase_max < v33->fields.phase_max )
                {
                  v34 = this->fields.mLabel;
                  if ( !v34 )
                    goto LABEL_74;
                  mText = v34->fields.mText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8520/*"MATERIAL_PROGRESS_SUFFIX"*/, 0LL);
                  v37 = System_String__Concat_61375396(mText, v36, 0LL);
                  UILabel__set_text(v34, v37, 0LL);
                }
              }
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0LL);
                GameObjectExtensions__SetLocalPositionX(v38, v24, 0LL);
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  UILabel__SetCondensedScale(mLabel, v29, 0LL);
                  mLabel = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( mLabel )
                  {
                    MasterData_object = DataManager__GetMasterData_object_(
                                          (DataManager_o *)mLabel,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
                    voiceId = info_k__BackingField->fields.voiceId;
                    v41 = (VoiceMaterialCondMaster_o *)MasterData_object;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(voiceId, 0LL);
                    mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v42, 0LL);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                      goto LABEL_58;
                    svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                    voicePrefix = info_k__BackingField->fields.voicePrefix;
                    v45 = info_k__BackingField->fields.voiceId;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(
                                            v45,
                                            0LL);
                    if ( !v41 )
                      goto LABEL_74;
                    mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                            v41,
                                            svtVoiceId,
                                            voicePrefix,
                                            (System_String_o *)mLabel,
                                            limitCount,
                                            0LL);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                    {
LABEL_58:
                      v46 = item->fields._info_k__BackingField;
                      if ( !v46 )
                        goto LABEL_74;
                      v46->fields.flag &= 0xFFFFFFFA;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_74;
                      v47 = 0;
                    }
                    else
                    {
                      v48 = item->fields._info_k__BackingField;
                      if ( !v48 )
                        goto LABEL_74;
                      v48->fields.flag |= 5u;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_74;
                      v47 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v47, 0LL);
                    v49 = item->fields._info_k__BackingField;
                    if ( v49 )
                    {
                      mLabel = this->fields.notSelectLabel;
                      if ( mLabel )
                      {
                        UILabel__set_text(mLabel, v49->fields.playLimitCountMessage, 0LL);
                        mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
                        notSelectLabel = this->fields.notSelectLabel;
                        if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
                        if ( notSelectLabel )
                        {
                          UILabel__SetCondensedScale(
                            notSelectLabel,
                            MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_W_NOT_SELECT,
                            0LL);
                          MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v51);
                          MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v52);
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
        sub_1B64324(mLabel);
      }
    }
    else
    {
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v25);
        byte_49F7111 = 1;
      }
      GameObjectExtensions__SetLocalScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  Il2CppObject *v17; // x21
  UnityEngine_Component_o *mLastTimeIcon; // x0
  Il2CppObject *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppClass *klass; // x9
  Il2CppClass *v23; // x8
  int interopData; // w9
  __int64 v25; // x1
  Il2CppClass *v26; // x8
  Il2CppClass *v27; // x9
  Il2CppClass *v28; // x8
  Il2CppClass *v29; // x8
  unsigned int v30; // w8
  MyRoomParamsManager_c *v31; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v33; // x0
  __int64 v34; // x1
  Il2CppClass *v35; // x8
  BalanceConfig_c *v36; // x8
  MaterialEventLogListViewItemDraw___c_c *v37; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v40; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x0
  __int64 v42; // x1
  Il2CppClass *v43; // x8
  Il2CppClass *v44; // x9
  Il2CppClass *v45; // x8
  MyRoomParamsManager_c *v46; // x0
  int32_t LastPlayQuestId_k__BackingField; // w22
  __int64 v48; // x1
  Il2CppClass *v49; // x8
  Il2CppClass *v50; // x8
  unsigned int bits; // w8
  Il2CppClass *v52; // x8
  __int64 v53; // x9
  int v54; // w9
  int v55; // w8
  Il2CppClass *v56; // x8
  Il2CppClass *v57; // x8
  __int64 v58; // x1
  __int64 v59; // x2
  Il2CppClass *v60; // x8
  Il2CppClass *v61; // x8
  BalanceConfig_c *v62; // x0
  System_Int32_array *v63; // x22
  System_Func_int__bool__o *v64; // x23
  __int64 v65; // x1
  Il2CppClass *v66; // x8
  Il2CppClass *v67; // x8
  Il2CppClass *v68; // x8
  Il2CppClass *v69; // x8
  unsigned int v70; // w8
  Il2CppClass *v71; // x8
  Il2CppClass *v72; // x8
  System_String_o *name; // x20
  System_String_o *v74; // x0

  if ( (byte_49F7C0F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, item);
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, v5);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&MyRoomParamsManager_TypeInfo, v9);
    sub_1B640C8(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__, v10);
    sub_1B640C8(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__, v11);
    sub_1B640C8(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, v12);
    sub_1B640C8(&MaterialEventLogListViewItemDraw___c_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_13444/*"TUTORIAL_QUEST_ID1"*/, v14);
    sub_1B640C8(&StringLiteral_6336/*"FES_WAR_ID"*/, v15);
    sub_1B640C8(&StringLiteral_8517/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v16);
    byte_49F7C0F = 1;
  }
  v17 = (Il2CppObject *)sub_1B64314(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, item, method);
  System_Object___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_212;
  v17[1].klass = (Il2CppClass *)item;
  v19 = v17 + 1;
  sub_1B6406C(&v17[1]);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_212;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !mLastTimeIcon )
    goto LABEL_212;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0LL);
  klass = v19->klass;
  if ( !v19->klass )
    return;
  v23 = klass->_1.klass;
  if ( !v23 )
    return;
  interopData = (int)klass->_1.interopData;
  if ( interopData == 1 )
  {
    v36 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = BalanceConfig_TypeInfo;
    }
    v37 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v36->static_fields->MainInterludeWarIdOnMaterial;
    if ( !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo);
      v37 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    _9__26_0 = v37->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = MaterialEventLogListViewItemDraw___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v37->static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v20, v21);
      System_Func_int__bool____ctor(
        _9__26_0,
        v40,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        0LL);
      static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = _9__26_0;
      sub_1B6406C(&static_fields->__9__26_0);
    }
    mLastTimeIcon = (UnityEngine_Component_o *)BasicHelper__Any_int__48383472(
                                                 MainInterludeWarIdOnMaterial,
                                                 (System_Func_T__bool__o *)_9__26_0,
                                                 (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      return;
    v43 = v19->klass;
    if ( !v19->klass )
      goto LABEL_212;
    v44 = v43->_1.klass;
    if ( !v44 )
      goto LABEL_212;
    if ( BYTE5(v44->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_49F7C72 )
      {
        sub_1B640C8(&MyRoomParamsManager_TypeInfo, v42);
        byte_49F7C72 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v43 = v19->klass;
      if ( !v19->klass )
        goto LABEL_212;
      v44 = v43->_1.klass;
      if ( !v44 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v44->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    if ( BYTE4(v44->_1.interfaceOffsets) )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v43 = v19->klass;
        if ( !v19->klass )
          goto LABEL_212;
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v45 = v43->_1.klass;
      if ( !v45 )
        goto LABEL_212;
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( !mLastTimeIcon )
        goto LABEL_212;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             v45->_1.byval_arg.bits,
             (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_203;
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_49F7B7D )
    {
      sub_1B640C8(&MyRoomParamsManager_TypeInfo, v42);
      byte_49F7B7D = 1;
    }
    v46 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v46 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v46->static_fields->_LastPlayQuestId_k__BackingField;
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13444/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( LastPlayQuestId_k__BackingField == (_DWORD)mLastTimeIcon )
    {
      if ( !v19->klass )
        goto LABEL_212;
      v49 = v19->klass->_1.klass;
      if ( !v49 )
        goto LABEL_212;
      if ( !v49->_1.byval_arg.bits )
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
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_49F7B7E )
    {
      sub_1B640C8(&MyRoomParamsManager_TypeInfo, v48);
      byte_49F7B7E = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v19->klass || (v50 = v19->klass->_1.klass) == 0LL )
LABEL_212:
      sub_1B64324(mLastTimeIcon);
    bits = v50->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != bits )
    {
      if ( bits == -1 )
        return;
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_49F7B7E )
      {
        sub_1B640C8(&MyRoomParamsManager_TypeInfo, v48);
        byte_49F7B7E = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v19->klass )
        goto LABEL_212;
      v52 = v19->klass->_1.klass;
      if ( !v52 )
        goto LABEL_212;
      v53 = 1374389535LL * *(int *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL);
      v54 = (v53 >> 37) + ((unsigned __int64)v53 >> 63);
      v55 = (signed int)v52->_1.byval_arg.bits / 1000 - 10;
LABEL_202:
      if ( v54 != v55 )
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
    if ( HIDWORD(v23->_1.byval_arg.data) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_49F7C73 )
      {
        sub_1B640C8(&MyRoomParamsManager_TypeInfo, v20);
        byte_49F7C73 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v19->klass )
        goto LABEL_212;
      v56 = v19->klass->_1.klass;
      if ( !v56 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 20LL) == HIDWORD(v56->_1.byval_arg.data) )
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
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v19->klass )
      goto LABEL_212;
    v57 = v19->klass->_1.klass;
    if ( !v57 )
      goto LABEL_212;
    mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
    if ( !mLastTimeIcon )
      goto LABEL_212;
    mLastTimeIcon = (UnityEngine_Component_o *)System_Collections_Generic_List_int___Contains(
                                                 (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                                                 v57->_1.byval_arg.bits,
                                                 (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      goto LABEL_203;
    if ( !v19->klass )
      goto LABEL_212;
    v60 = v19->klass->_1.klass;
    if ( !v60 )
      goto LABEL_212;
    if ( BYTE5(v60->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_49F7C72 )
      {
        sub_1B640C8(&MyRoomParamsManager_TypeInfo, v58);
        byte_49F7C72 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v19->klass )
        goto LABEL_212;
      v61 = v19->klass->_1.klass;
      if ( !v61 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v61->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    v62 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v62 = BalanceConfig_TypeInfo;
    }
    v63 = v62->static_fields->MainInterludeWarIdOnMaterial;
    v64 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v58, v59);
    System_Func_int__bool____ctor(
      v64,
      v17,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      0LL);
    if ( !BasicHelper__Any_int__48383472(
            v63,
            (System_Func_T__bool__o *)v64,
            (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408) )
      return;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_49F7B7E )
    {
      sub_1B640C8(&MyRoomParamsManager_TypeInfo, v65);
      byte_49F7B7E = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v19->klass )
      goto LABEL_212;
    v66 = v19->klass->_1.klass;
    if ( !v66 )
      goto LABEL_212;
    bits = v66->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != bits )
      return;
    goto LABEL_155;
  }
  if ( interopData != 5 )
    return;
  mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6336/*"FES_WAR_ID"*/, 0LL);
  v26 = v19->klass;
  if ( !v19->klass )
    goto LABEL_212;
  v27 = v26->_1.klass;
  if ( !v27 )
    goto LABEL_212;
  if ( (_DWORD)mLastTimeIcon != v27->_1.byval_arg.bits )
  {
    if ( BYTE5(v27->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_49F7C72 )
      {
        sub_1B640C8(&MyRoomParamsManager_TypeInfo, v25);
        byte_49F7C72 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v26 = v19->klass;
      if ( !v19->klass )
        goto LABEL_212;
      v27 = v26->_1.klass;
      if ( !v27 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v27->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    if ( !BYTE4(v27->_1.interfaceOffsets) )
    {
LABEL_174:
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_49F7B7D )
      {
        sub_1B640C8(&MyRoomParamsManager_TypeInfo, v25);
        byte_49F7B7D = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v19->klass )
        goto LABEL_212;
      v68 = v19->klass->_1.klass;
      if ( !v68 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(&v68->_1.byval_arg.bits + 1) )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_49F7B7E )
        {
          sub_1B640C8(&MyRoomParamsManager_TypeInfo, v25);
          byte_49F7B7E = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !v19->klass )
          goto LABEL_212;
        v69 = v19->klass->_1.klass;
        if ( !v69 )
          goto LABEL_212;
        v70 = v69->_1.byval_arg.bits;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v70 && v70 != -1 )
          goto LABEL_203;
      }
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_49F7B80 )
      {
        sub_1B640C8(&MyRoomParamsManager_TypeInfo, v25);
        byte_49F7B80 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v19->klass )
        goto LABEL_212;
      v71 = v19->klass->_1.klass;
      if ( !v71 )
        goto LABEL_212;
      v55 = *(&v71->_1.byval_arg.bits + 1);
      v54 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL);
      goto LABEL_202;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v26 = v19->klass;
      if ( !v19->klass )
        goto LABEL_212;
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v67 = v26->_1.klass;
    if ( v67 )
    {
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               v67->_1.byval_arg.bits,
               (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          goto LABEL_203;
        }
        goto LABEL_174;
      }
    }
    goto LABEL_212;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_49F7B7D )
  {
    sub_1B640C8(&MyRoomParamsManager_TypeInfo, v25);
    byte_49F7B7D = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !v19->klass )
    goto LABEL_212;
  v28 = v19->klass->_1.klass;
  if ( !v28 )
    goto LABEL_212;
  if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(&v28->_1.byval_arg.bits + 1) )
  {
    if ( !LODWORD(mLastTimeIcon[9].monitor) )
      j_il2cpp_runtime_class_init_0(mLastTimeIcon);
    if ( !byte_49F7B7E )
    {
      sub_1B640C8(&MyRoomParamsManager_TypeInfo, v25);
      byte_49F7B7E = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v19->klass )
      goto LABEL_212;
    v29 = v19->klass->_1.klass;
    if ( !v29 )
      goto LABEL_212;
    v30 = v29->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v30 && v30 != -1 )
    {
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_49F7B7F )
      {
        sub_1B640C8(&MyRoomParamsManager_TypeInfo, v25);
        byte_49F7B7F = 1;
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
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8517/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v33, 0LL);
      if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      {
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        if ( !byte_49F7B7F )
        {
          sub_1B640C8(&MyRoomParamsManager_TypeInfo, v34);
          byte_49F7B7F = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !v19->klass )
          goto LABEL_212;
        v35 = v19->klass->_1.klass;
        if ( !v35 )
          goto LABEL_212;
        if ( !System_String__op_Equality(
                *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                (System_String_o *)v35->_1.name,
                0LL) )
          return;
        goto LABEL_203;
      }
      if ( !v19->klass )
        goto LABEL_212;
      v72 = v19->klass->_1.klass;
      if ( !v72 )
        goto LABEL_212;
      name = (System_String_o *)v72->_1.name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_8517/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      if ( System_String__op_Inequality(name, v74, 0LL) )
        goto LABEL_203;
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F7C11 & 1) == 0 )
  {
    sub_1B640C8(&MaterialEventLogListViewItemDraw___c_TypeInfo, v1);
    byte_49F7C11 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MaterialEventLogListViewItemDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v3;
  sub_1B6406C(MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields);
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

  if ( (byte_49F7C12 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
    byte_49F7C12 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_49F7B7E )
  {
    sub_1B640C8(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
    byte_49F7B7E = 1;
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
    sub_1B64324(this);
  return info_k__BackingField->fields.war_id == interludeWarId;
}