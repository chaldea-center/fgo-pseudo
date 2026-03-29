void SkillUpExtraResultWindowComponent___ctor(SkillUpExtraResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D34BFB & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D34BFB = 1;
  }
  this->fields.detailTextFontSize = 16;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SkillUpExtraResultWindowComponent__CloseToNext(
        SkillUpExtraResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x20

  if ( (byte_4D34BFA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SkillUpExtraResultWindowComponent___c__DisplayClass22_0__CloseToNext_b__0__);
    sub_1C93AD4(&SkillUpExtraResultWindowComponent___c__DisplayClass22_0_TypeInfo);
    byte_4D34BFA = 1;
  }
  v5 = sub_1C93D20(SkillUpExtraResultWindowComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_SkillUpExtraResultWindowComponent___c__DisplayClass22_0__CloseToNext_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillUpExtraResultWindowComponent__OpenSkillChangeResultInfo(
        SkillUpExtraResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        int32_t exNowSkillId,
        int32_t exNowSkillLv,
        ServantCostumeEntity_o *svtCostumeEnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UILabel_o *skillChangeInfoDetailOld; // x0
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  UISprite_o *windowBgSprite; // x27
  UnityEngine_Component_o *skillChangeInfoTitle; // x0
  Il2CppObject *v23; // x27
  Il2CppObject *v24; // x0
  System_String_o *v25; // x27
  System_String_o *v26; // x0
  UILabel_o *v27; // x27
  int32_t v28; // w19
  const MethodInfo *v29; // x7
  int32_t id; // [xsp+10h] [xbp-70h] BYREF
  int32_t svtId; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *resultText; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D34BF7 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_20589/*"img_combine_arrow_sp"*/);
    sub_1C93AD4(&StringLiteral_3867/*"COSTUME_CHANGE_SKILL_TITLE_{0}_{1}"*/);
    sub_1C93AD4(&StringLiteral_20811/*"img_skillwindow_sp"*/);
    sub_1C93AD4(&StringLiteral_20529/*"img_arrow_change"*/);
    sub_1C93AD4(&StringLiteral_3866/*"COSTUME_CHANGE_SKILL_TITLE"*/);
    byte_4D34BF7 = 1;
  }
  resultText = 0;
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailOld;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  skillChangeInfoDetailOld = this->fields.skillExtraInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  v19 = Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1C93AEC(Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__);
  v20 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 6, 0, 0);
  skillChangeInfoDetailOld = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillChangeInfoDetailOld, 1, 0);
  windowBgSprite = this->fields.windowBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(windowBgSprite, (System_String_o *)StringLiteral_20811/*"img_skillwindow_sp"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.arrowSprite, (System_String_o *)StringLiteral_20529/*"img_arrow_change"*/, 0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite1,
    (System_String_o *)StringLiteral_20589/*"img_combine_arrow_sp"*/,
    0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite2,
    (System_String_o *)StringLiteral_20589/*"img_combine_arrow_sp"*/,
    0);
  skillChangeInfoDetailOld = (UILabel_o *)this->fields.skillChangeInfo;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillChangeInfoDetailOld, 1, 0);
  skillChangeInfoTitle = (UnityEngine_Component_o *)this->fields.skillChangeInfoTitle;
  if ( !svtCostumeEnt )
  {
    BasicHelper__SetActiveSafely(skillChangeInfoTitle, 0, 0);
    skillChangeInfoDetailOld = this->fields.skillChangeInfoTitle;
    if ( skillChangeInfoDetailOld )
    {
      UILabel__set_text(skillChangeInfoDetailOld, string_TypeInfo->static_fields->Empty, 0);
      v28 = oldSkillId;
      goto LABEL_19;
    }
LABEL_20:
    sub_1C93D2C(skillChangeInfoDetailOld, *(_QWORD *)&oldSkillId);
  }
  BasicHelper__SetActiveSafely(skillChangeInfoTitle, 1, 0);
  svtId = svtCostumeEnt->fields.svtId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtId);
  id = svtCostumeEnt->fields.id;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v25 = System_String__Format_64467032((System_String_o *)StringLiteral_3867/*"COSTUME_CHANGE_SKILL_TITLE_{0}_{1}"*/, v23, v24, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3866/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0);
  LocalizationManager__TryGet(&resultText, v25, v26, 0);
  v27 = this->fields.skillChangeInfoTitle;
  skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(
                                            resultText,
                                            (Il2CppObject *)svtCostumeEnt->fields.name,
                                            0);
  v28 = oldSkillId;
  if ( !v27 )
    goto LABEL_20;
  UILabel__set_text(v27, (System_String_o *)skillChangeInfoDetailOld, 0);
LABEL_19:
  SkillUpExtraResultWindowComponent__SetSkillInfo(
    this,
    v28,
    oldSkillLv,
    nowSkillId,
    nowSkillLv,
    exNowSkillId,
    exNowSkillLv,
    v29);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillUpExtraResultWindowComponent__SetSkillInfo(
        SkillUpExtraResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        int32_t exNowSkillId,
        int32_t exNowSkillLv,
        const MethodInfo *method)
{
  UILabel_o *skillChangeInfoDetailOld; // x0
  UILabel_o *skillChangeInfoSubTitleOld; // x26
  UILabel_o *skillChangeInfoNameOld; // x24
  System_String_o *v18; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x24
  const MethodInfo *v20; // x2
  UILabel_o *skillChangeInfoNameNow; // x22
  System_String_o *v22; // x0
  UILabel_o *skillExtraInfoNameNow; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // [xsp+8h] [xbp-A8h] BYREF
  System_String_o *v26; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v27; // [xsp+18h] [xbp-98h] BYREF
  System_String_o *text; // [xsp+20h] [xbp-90h] BYREF
  System_String_o *v29; // [xsp+28h] [xbp-88h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-80h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v32; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4D34BF8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_6997/*"GET_SKILL_NAME"*/);
    sub_1C93AD4(&StringLiteral_2914/*"BEFORE_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/);
    sub_1C93AD4(&StringLiteral_1924/*"AFTER_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/);
    byte_4D34BF8 = 1;
  }
  v32 = 0;
  entity = 0;
  detail = 0;
  name = 0;
  text = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v25 = 0;
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailOld;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  skillChangeInfoDetailOld = this->fields.skillExtraInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillChangeInfoDetailOld = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2914/*"BEFORE_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/, 0);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_42;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)skillChangeInfoDetailOld, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  skillChangeInfoDetailOld = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)skillChangeInfoDetailOld,
         &entity,
         oldSkillId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    skillChangeInfoDetailOld = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_42;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)entity, &name, &detail, oldSkillLv, 0);
    skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6997/*"GET_SKILL_NAME"*/, 0);
    skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(v18, (Il2CppObject *)name, 0);
    if ( !skillChangeInfoNameOld )
      goto LABEL_42;
    UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)skillChangeInfoDetailOld, 0);
    WrapControlText__textBBCodeAdjust(
      this->fields.skillChangeInfoDetailOld,
      detail,
      this->fields.detailTextFontSize,
      0,
      0);
  }
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillChangeInfoDetailOld = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1924/*"AFTER_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/, 0);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_42;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)skillChangeInfoDetailOld, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  skillChangeInfoDetailOld = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)skillChangeInfoDetailOld,
         &v32,
         nowSkillId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    skillChangeInfoDetailOld = (UILabel_o *)v32;
    if ( !v32 )
      goto LABEL_42;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)v32, &v29, &text, nowSkillLv, 0);
    skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6997/*"GET_SKILL_NAME"*/, 0);
    skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(v22, (Il2CppObject *)v29, 0);
    if ( !skillChangeInfoNameNow )
      goto LABEL_42;
    UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)skillChangeInfoDetailOld, 0);
    WrapControlText__textBBCodeAdjust(
      this->fields.skillChangeInfoDetailNow,
      text,
      this->fields.detailTextFontSize,
      0,
      0);
  }
  if ( exNowSkillId < 1 )
  {
    SkillUpExtraResultWindowComponent__SetupLayout(this, 0, v20);
    GameObjectHelper__SetActiveSafely(this->fields.skillExtraInfo, 0, 0);
  }
  else
  {
    SkillUpExtraResultWindowComponent__SetupLayout(this, 1, v20);
    GameObjectHelper__SetActiveSafely(this->fields.skillExtraInfo, 1, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    skillChangeInfoDetailOld = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !skillChangeInfoDetailOld )
      goto LABEL_42;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)skillChangeInfoDetailOld,
           &v27,
           exNowSkillId,
           (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      skillChangeInfoDetailOld = (UILabel_o *)v27;
      if ( v27 )
      {
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v27, &v26, &v25, exNowSkillLv, 0);
        skillExtraInfoNameNow = this->fields.skillExtraInfoNameNow;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6997/*"GET_SKILL_NAME"*/, 0);
        skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(v24, (Il2CppObject *)v26, 0);
        if ( skillExtraInfoNameNow )
        {
          UILabel__set_text(skillExtraInfoNameNow, (System_String_o *)skillChangeInfoDetailOld, 0);
          WrapControlText__textBBCodeAdjust(
            this->fields.skillExtraInfoDetailNow,
            v25,
            this->fields.detailTextFontSize,
            0,
            0);
          return;
        }
      }
LABEL_42:
      sub_1C93D2C(skillChangeInfoDetailOld, *(_QWORD *)&oldSkillId);
    }
  }
}


void SkillUpExtraResultWindowComponent__SetupLayout(
        SkillUpExtraResultWindowComponent_o *this,
        bool isExtra,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct SkillUpExtraResultWindowComponent_LayoutData_array *layoutDatas; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  float *p_y; // x23
  UnityEngine_Object_o *v11; // x20
  float v12; // s8
  float v13; // s10
  float v14; // s9
  float v15; // s11
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4

  if ( (byte_4D34BF9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34BF9 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.layoutDatas, 0);
  if ( !IsNullOrEmpty )
  {
    layoutDatas = this->fields.layoutDatas;
    if ( !layoutDatas )
      sub_1C93D2C(IsNullOrEmpty, v6);
    max_length = layoutDatas->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      p_y = &layoutDatas->m_Items[0].fields.ExtraPosition.fields.y;
      do
      {
        if ( v9 >= (unsigned int)max_length )
          sub_1C93D34(IsNullOrEmpty);
        v11 = *(UnityEngine_Object_o **)(p_y - 5);
        v12 = *(p_y - 3);
        v13 = *(p_y - 2);
        v14 = *(p_y - 1);
        v15 = *p_y;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        IsNullOrEmpty = UnityEngine_Object__op_Equality(v11, 0, 0);
        if ( !IsNullOrEmpty )
        {
          if ( isExtra )
            v17.fields.y = v15;
          else
            v17.fields.y = v13;
          if ( isExtra )
            v17.fields.x = v14;
          else
            v17.fields.x = v12;
          GameObjectExtensions__SetLocalPosition_36745064((UnityEngine_GameObject_o *)v11, v17, 0);
        }
        LODWORD(max_length) = layoutDatas->max_length;
        ++v9;
        p_y += 6;
      }
      while ( (__int64)v9 < (int)max_length );
    }
  }
}


void SkillUpExtraResultWindowComponent__ValidateSerializedField(
        SkillUpExtraResultWindowComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void SkillUpExtraResultWindowComponent___c__DisplayClass22_0___ctor(
        SkillUpExtraResultWindowComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillUpExtraResultWindowComponent___c__DisplayClass22_0___CloseToNext_b__0(
        SkillUpExtraResultWindowComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}