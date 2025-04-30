void __fastcall SkillUpExtraResultWindowComponent___ctor(
        SkillUpExtraResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A52236 & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A52236 = 1;
  }
  this->fields.detailTextFontSize = 16;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpExtraResultWindowComponent__CloseToNext(
        SkillUpExtraResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4A52235 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_SkillUpExtraResultWindowComponent___c__DisplayClass22_0__CloseToNext_b__0__, v5);
    sub_1B863B8(&SkillUpExtraResultWindowComponent___c__DisplayClass22_0_TypeInfo, v6);
    byte_4A52235 = 1;
  }
  v7 = sub_1B86604(SkillUpExtraResultWindowComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B86614(v8, v9);
  *(_QWORD *)(v7 + 16) = callback;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  v12 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_SkillUpExtraResultWindowComponent___c__DisplayClass22_0__CloseToNext_b__0__,
    0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpExtraResultWindowComponent__OpenSkillChangeResultInfo(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UILabel_o *skillChangeInfoDetailOld; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  UISprite_o *windowBgSprite; // x27
  UnityEngine_Component_o *skillChangeInfoTitle; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x27
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  System_String_o *v40; // x27
  System_String_o *v41; // x0
  UILabel_o *v42; // x27
  int32_t v43; // w19
  const MethodInfo *v44; // x7
  int32_t id; // [xsp+10h] [xbp-70h] BYREF
  int32_t svtId; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *resultText; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A52232 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1B863B8(&int_TypeInfo, v18);
    sub_1B863B8(&LocalizationManager_TypeInfo, v19);
    sub_1B863B8(&Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__, v20);
    sub_1B863B8(&string_TypeInfo, v21);
    sub_1B863B8(&StringLiteral_20082/*"img_combine_arrow_sp"*/, v22);
    sub_1B863B8(&StringLiteral_3825/*"COSTUME_CHANGE_SKILL_TITLE_{0}_{1}"*/, v23);
    sub_1B863B8(&StringLiteral_20275/*"img_skillwindow_sp"*/, v24);
    sub_1B863B8(&StringLiteral_20034/*"img_arrow_change"*/, v25);
    sub_1B863B8(&StringLiteral_3824/*"COSTUME_CHANGE_SKILL_TITLE"*/, v26);
    byte_4A52232 = 1;
  }
  resultText = 0LL;
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailOld;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0LL);
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0LL);
  skillChangeInfoDetailOld = this->fields.skillExtraInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0LL);
  v28 = Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1B863D0(Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__);
  v29 = (System_Reflection_MethodBase_o *)sub_1B8639C(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 6, 0, 0LL);
  skillChangeInfoDetailOld = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillChangeInfoDetailOld, 1, 0LL);
  windowBgSprite = this->fields.windowBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(windowBgSprite, (System_String_o *)StringLiteral_20275/*"img_skillwindow_sp"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(this->fields.arrowSprite, (System_String_o *)StringLiteral_20034/*"img_arrow_change"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite1,
    (System_String_o *)StringLiteral_20082/*"img_combine_arrow_sp"*/,
    0LL);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite2,
    (System_String_o *)StringLiteral_20082/*"img_combine_arrow_sp"*/,
    0LL);
  skillChangeInfoDetailOld = (UILabel_o *)this->fields.skillChangeInfo;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillChangeInfoDetailOld, 1, 0LL);
  skillChangeInfoTitle = (UnityEngine_Component_o *)this->fields.skillChangeInfoTitle;
  if ( !svtCostumeEnt )
  {
    BasicHelper__SetActiveSafely(skillChangeInfoTitle, 0, 0LL);
    skillChangeInfoDetailOld = this->fields.skillChangeInfoTitle;
    if ( skillChangeInfoDetailOld )
    {
      UILabel__set_text(skillChangeInfoDetailOld, string_TypeInfo->static_fields->Empty, 0LL);
      v43 = oldSkillId;
      goto LABEL_19;
    }
LABEL_20:
    sub_1B86614(skillChangeInfoDetailOld, *(_QWORD *)&oldSkillId);
  }
  BasicHelper__SetActiveSafely(skillChangeInfoTitle, 1, 0LL);
  svtId = svtCostumeEnt->fields.svtId;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtId, v32, v33, v34);
  id = svtCostumeEnt->fields.id;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v36, v37, v38);
  v40 = System_String__Format_61686468((System_String_o *)StringLiteral_3825/*"COSTUME_CHANGE_SKILL_TITLE_{0}_{1}"*/, v35, v39, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  LocalizationManager__TryGet(&resultText, v40, v41, 0LL);
  v42 = this->fields.skillChangeInfoTitle;
  skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(
                                            resultText,
                                            (Il2CppObject *)svtCostumeEnt->fields.name,
                                            0LL);
  v43 = oldSkillId;
  if ( !v42 )
    goto LABEL_20;
  UILabel__set_text(v42, (System_String_o *)skillChangeInfoDetailOld, 0LL);
LABEL_19:
  SkillUpExtraResultWindowComponent__SetSkillInfo(
    this,
    v43,
    oldSkillLv,
    nowSkillId,
    nowSkillLv,
    exNowSkillId,
    exNowSkillLv,
    v44);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpExtraResultWindowComponent__SetSkillInfo(
        SkillUpExtraResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        int32_t exNowSkillId,
        int32_t exNowSkillLv,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UILabel_o *skillChangeInfoDetailOld; // x0
  UILabel_o *skillChangeInfoSubTitleOld; // x26
  UILabel_o *skillChangeInfoNameOld; // x24
  System_String_o *v24; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x24
  const MethodInfo *v26; // x2
  UILabel_o *skillChangeInfoNameNow; // x22
  System_String_o *v28; // x0
  UILabel_o *skillExtraInfoNameNow; // x20
  System_String_o *v30; // x0
  System_String_o *v31; // [xsp+8h] [xbp-A8h] BYREF
  System_String_o *v32; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v33; // [xsp+18h] [xbp-98h] BYREF
  System_String_o *text; // [xsp+20h] [xbp-90h] BYREF
  System_String_o *v35; // [xsp+28h] [xbp-88h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-80h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v38; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A52233 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&oldSkillId);
    sub_1B863B8(&DataManager_TypeInfo, v15);
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v16);
    sub_1B863B8(&LocalizationManager_TypeInfo, v17);
    sub_1B863B8(&StringLiteral_6886/*"GET_SKILL_NAME"*/, v18);
    sub_1B863B8(&StringLiteral_2916/*"BEFORE_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/, v19);
    sub_1B863B8(&StringLiteral_1940/*"AFTER_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/, v20);
    byte_4A52233 = 1;
  }
  v38 = 0LL;
  entity = 0LL;
  detail = 0LL;
  name = 0LL;
  text = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailOld;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0LL);
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0LL);
  skillChangeInfoDetailOld = this->fields.skillExtraInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0LL);
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillChangeInfoDetailOld = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2916/*"BEFORE_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_42;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)skillChangeInfoDetailOld, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  skillChangeInfoDetailOld = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)skillChangeInfoDetailOld,
         &entity,
         oldSkillId,
         (const MethodInfo_32142CC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    skillChangeInfoDetailOld = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_42;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)entity, &name, &detail, oldSkillLv, 0LL);
    skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6886/*"GET_SKILL_NAME"*/, 0LL);
    skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(v24, (Il2CppObject *)name, 0LL);
    if ( !skillChangeInfoNameOld )
      goto LABEL_42;
    UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)skillChangeInfoDetailOld, 0LL);
    WrapControlText__textBBCodeAdjust(
      this->fields.skillChangeInfoDetailOld,
      detail,
      this->fields.detailTextFontSize,
      0,
      0LL);
  }
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillChangeInfoDetailOld = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1940/*"AFTER_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_42;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)skillChangeInfoDetailOld, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  skillChangeInfoDetailOld = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)skillChangeInfoDetailOld,
         &v38,
         nowSkillId,
         (const MethodInfo_32142CC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    skillChangeInfoDetailOld = (UILabel_o *)v38;
    if ( !v38 )
      goto LABEL_42;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)v38, &v35, &text, nowSkillLv, 0LL);
    skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_6886/*"GET_SKILL_NAME"*/, 0LL);
    skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(v28, (Il2CppObject *)v35, 0LL);
    if ( !skillChangeInfoNameNow )
      goto LABEL_42;
    UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)skillChangeInfoDetailOld, 0LL);
    WrapControlText__textBBCodeAdjust(
      this->fields.skillChangeInfoDetailNow,
      text,
      this->fields.detailTextFontSize,
      0,
      0LL);
  }
  if ( exNowSkillId < 1 )
  {
    SkillUpExtraResultWindowComponent__SetupLayout(this, 0, v26);
    GameObjectHelper__SetActiveSafely(this->fields.skillExtraInfo, 0, 0LL);
  }
  else
  {
    SkillUpExtraResultWindowComponent__SetupLayout(this, 1, v26);
    GameObjectHelper__SetActiveSafely(this->fields.skillExtraInfo, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    skillChangeInfoDetailOld = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !skillChangeInfoDetailOld )
      goto LABEL_42;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)skillChangeInfoDetailOld,
           &v33,
           exNowSkillId,
           (const MethodInfo_32142CC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      skillChangeInfoDetailOld = (UILabel_o *)v33;
      if ( v33 )
      {
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v33, &v32, &v31, exNowSkillLv, 0LL);
        skillExtraInfoNameNow = this->fields.skillExtraInfoNameNow;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_6886/*"GET_SKILL_NAME"*/, 0LL);
        skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(v30, (Il2CppObject *)v32, 0LL);
        if ( skillExtraInfoNameNow )
        {
          UILabel__set_text(skillExtraInfoNameNow, (System_String_o *)skillChangeInfoDetailOld, 0LL);
          WrapControlText__textBBCodeAdjust(
            this->fields.skillExtraInfoDetailNow,
            v31,
            this->fields.detailTextFontSize,
            0,
            0LL);
          return;
        }
      }
LABEL_42:
      sub_1B86614(skillChangeInfoDetailOld, *(_QWORD *)&oldSkillId);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpExtraResultWindowComponent__SetupLayout(
        SkillUpExtraResultWindowComponent_o *this,
        bool isExtra,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct SkillUpExtraResultWindowComponent_LayoutData_array *layoutDatas; // x21
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  float *p_y; // x23
  UnityEngine_Object_o *v11; // x20
  float v12; // s8
  float v13; // s10
  float v14; // s9
  float v15; // s11
  float v16; // s1
  float v17; // s0

  if ( (byte_4A52234 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isExtra);
    byte_4A52234 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.layoutDatas, 0LL);
  if ( !IsNullOrEmpty )
  {
    layoutDatas = this->fields.layoutDatas;
    if ( !layoutDatas )
      sub_1B86614(IsNullOrEmpty, v6);
    v8 = *(_QWORD *)&layoutDatas->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      p_y = &layoutDatas->m_Items[0].fields.ExtraPosition.fields.y;
      do
      {
        if ( v9 >= (unsigned int)v8 )
          sub_1B8661C(IsNullOrEmpty, v6);
        v11 = *(UnityEngine_Object_o **)(p_y - 5);
        v12 = *(p_y - 3);
        v13 = *(p_y - 2);
        v14 = *(p_y - 1);
        v15 = *p_y;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        IsNullOrEmpty = UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
        if ( !IsNullOrEmpty )
        {
          if ( isExtra )
            v16 = v15;
          else
            v16 = v13;
          if ( isExtra )
            v17 = v14;
          else
            v17 = v12;
          GameObjectExtensions__SetLocalPosition_34382288(
            (UnityEngine_GameObject_o *)v11,
            *(UnityEngine_Vector2_o *)(&v16 - 1),
            0LL);
        }
        LODWORD(v8) = layoutDatas->max_length;
        ++v9;
        p_y += 6;
      }
      while ( (__int64)v9 < (int)v8 );
    }
  }
}


void __fastcall SkillUpExtraResultWindowComponent__ValidateSerializedField(
        SkillUpExtraResultWindowComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SkillUpExtraResultWindowComponent___c__DisplayClass22_0___ctor(
        SkillUpExtraResultWindowComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SkillUpExtraResultWindowComponent___c__DisplayClass22_0___CloseToNext_b__0(
        SkillUpExtraResultWindowComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}