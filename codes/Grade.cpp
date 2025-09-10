void Grade___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  const MethodInfo *v4; // x3
  struct System_String_array *v5; // x19
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct Grade_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  __int64 v18; // x19
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct Grade_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  __int64 v26; // x19
  int32_t v27; // w1
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  struct Grade_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  __int64 v34; // x19
  int32_t v35; // w1
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  struct Grade_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  __int64 v42; // x19
  int32_t v43; // w1
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  struct Grade_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  __int64 v50; // x19
  int32_t v51; // w1
  const MethodInfo *v52; // x3
  int32_t v53; // w1
  struct Grade_StaticFields *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  __int64 v58; // x19
  int32_t v59; // w1
  const MethodInfo *v60; // x3
  int32_t v61; // w1
  struct Grade_StaticFields *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3

  if ( (byte_4C261D1 & 1) == 0 )
  {
    sub_1C2D490(&Grade_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_20431/*"img_listbg_04"*/);
    sub_1C2D490(&StringLiteral_20428/*"img_listbg_01"*/);
    sub_1C2D490(&StringLiteral_20438/*"img_mastername_line1"*/);
    sub_1C2D490(&StringLiteral_20352/*"img_commonbg_04"*/);
    sub_1C2D490(&StringLiteral_20189/*"icon_grade_1"*/);
    sub_1C2D490(&StringLiteral_20441/*"img_masterprofile_bg2"*/);
    sub_1C2D490(&StringLiteral_19643/*"frame_master_bg1"*/);
    sub_1C2D490(&StringLiteral_20440/*"img_masterprofile_bg1"*/);
    sub_1C2D490(&StringLiteral_23669/*"status_master_frame"*/);
    sub_1C2D490(&StringLiteral_20430/*"img_listbg_03"*/);
    sub_1C2D490(&StringLiteral_20437/*"img_masterform_bg"*/);
    sub_1C2D490(&StringLiteral_20439/*"img_mastername_line2"*/);
    sub_1C2D490(&StringLiteral_19642/*"frame_master_bg"*/);
    sub_1C2D490(&StringLiteral_23670/*"status_master_frame1"*/);
    byte_4C261D1 = 1;
  }
  v1 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v5 = (struct System_String_array *)v1;
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_27;
  v6 = StringLiteral_20189/*"icon_grade_1"*/;
  *(_QWORD *)(v1 + 40) = StringLiteral_20189/*"icon_grade_1"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v1 + 40), v6, v3, v4);
  Grade_TypeInfo->static_fields->gradeIconFileList = v5;
  sub_1C2D434((CGThumbnailListItem_o *)Grade_TypeInfo->static_fields, (int32_t)v5, v7, v8);
  v1 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v10 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v11 = StringLiteral_20440/*"img_masterprofile_bg1"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20440/*"img_masterprofile_bg1"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), v11, v3, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_27;
  v13 = StringLiteral_20441/*"img_masterprofile_bg2"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_20441/*"img_masterprofile_bg2"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 40), v13, v3, v12);
  static_fields = Grade_TypeInfo->static_fields;
  static_fields->masterProfileBgFileList = (struct System_String_array *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->masterProfileBgFileList, v10, v15, v16);
  v1 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v18 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v19 = StringLiteral_20438/*"img_mastername_line1"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20438/*"img_mastername_line1"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), v19, v3, v17);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_27;
  v21 = StringLiteral_20439/*"img_mastername_line2"*/;
  *(_QWORD *)(v18 + 40) = StringLiteral_20439/*"img_mastername_line2"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v18 + 40), v21, v3, v20);
  v22 = Grade_TypeInfo->static_fields;
  v22->masterProfileBgLineFileList = (struct System_String_array *)v18;
  sub_1C2D434((CGThumbnailListItem_o *)&v22->masterProfileBgLineFileList, v18, v23, v24);
  v1 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v26 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v27 = StringLiteral_20352/*"img_commonbg_04"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20352/*"img_commonbg_04"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), v27, v3, v25);
  if ( *(_DWORD *)(v26 + 24) <= 1u )
    goto LABEL_27;
  v29 = StringLiteral_20437/*"img_masterform_bg"*/;
  *(_QWORD *)(v26 + 40) = StringLiteral_20437/*"img_masterform_bg"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 40), v29, v3, v28);
  v30 = Grade_TypeInfo->static_fields;
  v30->masterEquipBgFileList = (struct System_String_array *)v26;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->masterEquipBgFileList, v26, v31, v32);
  v1 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v34 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v35 = StringLiteral_19642/*"frame_master_bg"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_19642/*"frame_master_bg"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), v35, v3, v33);
  if ( *(_DWORD *)(v34 + 24) <= 1u )
    goto LABEL_27;
  v37 = StringLiteral_19643/*"frame_master_bg1"*/;
  *(_QWORD *)(v34 + 40) = StringLiteral_19643/*"frame_master_bg1"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v34 + 40), v37, v3, v36);
  v38 = Grade_TypeInfo->static_fields;
  v38->battleIconBgFileList = (struct System_String_array *)v34;
  sub_1C2D434((CGThumbnailListItem_o *)&v38->battleIconBgFileList, v34, v39, v40);
  v1 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v42 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v43 = StringLiteral_23669/*"status_master_frame"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_23669/*"status_master_frame"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), v43, v3, v41);
  if ( *(_DWORD *)(v42 + 24) <= 1u )
    goto LABEL_27;
  v45 = StringLiteral_23670/*"status_master_frame1"*/;
  *(_QWORD *)(v42 + 40) = StringLiteral_23670/*"status_master_frame1"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v42 + 40), v45, v3, v44);
  v46 = Grade_TypeInfo->static_fields;
  v46->mainMstIconBgFileList = (struct System_String_array *)v42;
  sub_1C2D434((CGThumbnailListItem_o *)&v46->mainMstIconBgFileList, v42, v47, v48);
  v1 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v50 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v51 = StringLiteral_20428/*"img_listbg_01"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_20428/*"img_listbg_01"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), v51, v3, v49),
        *(_DWORD *)(v50 + 24) <= 1u) )
  {
LABEL_27:
    sub_1C2D6F4(v1, v2, v3);
  }
  v53 = StringLiteral_20430/*"img_listbg_03"*/;
  *(_QWORD *)(v50 + 40) = StringLiteral_20430/*"img_listbg_03"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v50 + 40), v53, v3, v52);
  v54 = Grade_TypeInfo->static_fields;
  v54->supportBgFileList = (struct System_String_array *)v50;
  sub_1C2D434((CGThumbnailListItem_o *)&v54->supportBgFileList, v50, v55, v56);
  v1 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v1 )
LABEL_28:
    sub_1C2D6EC(v1, v2);
  v58 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v59 = StringLiteral_20428/*"img_listbg_01"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20428/*"img_listbg_01"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), v59, v3, v57);
  if ( *(_DWORD *)(v58 + 24) <= 1u )
    goto LABEL_27;
  v61 = StringLiteral_20431/*"img_listbg_04"*/;
  *(_QWORD *)(v58 + 40) = StringLiteral_20431/*"img_listbg_04"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v58 + 40), v61, v3, v60);
  v62 = Grade_TypeInfo->static_fields;
  v62->followerBgFileList = (struct System_String_array *)v58;
  sub_1C2D434((CGThumbnailListItem_o *)&v62->followerBgFileList, v58, v63, v64);
}


void Grade___ctor(Grade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *Grade__GetBattleIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *battleIconBgFileList; // x8

  if ( (byte_4C261CD & 1) == 0 )
  {
    sub_1C2D490(&Grade_TypeInfo);
    byte_4C261CD = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  battleIconBgFileList = v4->static_fields->battleIconBgFileList;
  if ( !battleIconBgFileList )
    sub_1C2D6EC(v4, method);
  if ( LODWORD(battleIconBgFileList->max_length) <= gradeKind )
    sub_1C2D6F4(v4, method, v2);
  return battleIconBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetFollowerBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *followerBgFileList; // x8

  if ( (byte_4C261D0 & 1) == 0 )
  {
    sub_1C2D490(&Grade_TypeInfo);
    byte_4C261D0 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  followerBgFileList = v4->static_fields->followerBgFileList;
  if ( !followerBgFileList )
    sub_1C2D6EC(v4, method);
  if ( LODWORD(followerBgFileList->max_length) <= gradeKind )
    sub_1C2D6F4(v4, method, v2);
  return followerBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetIconImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *gradeIconFileList; // x8

  if ( (byte_4C261C9 & 1) == 0 )
  {
    sub_1C2D490(&Grade_TypeInfo);
    byte_4C261C9 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  gradeIconFileList = v4->static_fields->gradeIconFileList;
  if ( !gradeIconFileList )
    sub_1C2D6EC(v4, method);
  if ( LODWORD(gradeIconFileList->max_length) <= gradeKind )
    sub_1C2D6F4(v4, method, v2);
  return gradeIconFileList->m_Items[gradeKind];
}


int32_t Grade__GetKind(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C261C5 & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C261C5 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40206092(127, v1);
}


int32_t Grade__GetKind_40206176(UserGameEntity_o *userGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4C261C6 & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C261C6 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !userGameEntity )
    sub_1C2D6EC(v3, method);
  return (LODWORD(userGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t Grade__GetKind_40206396(OtherUserGameEntity_o *otherUserGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4C261C7 & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C261C7 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !otherUserGameEntity )
    sub_1C2D6EC(v3, method);
  return (LODWORD(otherUserGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t Grade__GetKind_40206588(FollowerInfo_o *followerInfo, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4C261C8 & 1) == 0 )
  {
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C261C8 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !followerInfo )
    sub_1C2D6EC(v3, method);
  return (LODWORD(followerInfo->fields.tutorial1) >> 27) & 1;
}


System_String_o *Grade__GetMainMstIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *mainMstIconBgFileList; // x8

  if ( (byte_4C261CE & 1) == 0 )
  {
    sub_1C2D490(&Grade_TypeInfo);
    byte_4C261CE = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  mainMstIconBgFileList = v4->static_fields->mainMstIconBgFileList;
  if ( !mainMstIconBgFileList )
    sub_1C2D6EC(v4, method);
  if ( LODWORD(mainMstIconBgFileList->max_length) <= gradeKind )
    sub_1C2D6F4(v4, method, v2);
  return mainMstIconBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetMasterEquipBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *masterEquipBgFileList; // x8

  if ( (byte_4C261CC & 1) == 0 )
  {
    sub_1C2D490(&Grade_TypeInfo);
    byte_4C261CC = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  masterEquipBgFileList = v4->static_fields->masterEquipBgFileList;
  if ( !masterEquipBgFileList )
    sub_1C2D6EC(v4, method);
  if ( LODWORD(masterEquipBgFileList->max_length) <= gradeKind )
    sub_1C2D6F4(v4, method, v2);
  return masterEquipBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetMasterProfileBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *masterProfileBgFileList; // x8

  if ( (byte_4C261CA & 1) == 0 )
  {
    sub_1C2D490(&Grade_TypeInfo);
    byte_4C261CA = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  masterProfileBgFileList = v4->static_fields->masterProfileBgFileList;
  if ( !masterProfileBgFileList )
    sub_1C2D6EC(v4, method);
  if ( LODWORD(masterProfileBgFileList->max_length) <= gradeKind )
    sub_1C2D6F4(v4, method, v2);
  return masterProfileBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetMasterProfileBgLineImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *masterProfileBgLineFileList; // x8

  if ( (byte_4C261CB & 1) == 0 )
  {
    sub_1C2D490(&Grade_TypeInfo);
    byte_4C261CB = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  masterProfileBgLineFileList = v4->static_fields->masterProfileBgLineFileList;
  if ( !masterProfileBgLineFileList )
    sub_1C2D6EC(v4, method);
  if ( LODWORD(masterProfileBgLineFileList->max_length) <= gradeKind )
    sub_1C2D6F4(v4, method, v2);
  return masterProfileBgLineFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetSupportBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *supportBgFileList; // x8

  if ( (byte_4C261CF & 1) == 0 )
  {
    sub_1C2D490(&Grade_TypeInfo);
    byte_4C261CF = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  supportBgFileList = v4->static_fields->supportBgFileList;
  if ( !supportBgFileList )
    sub_1C2D6EC(v4, method);
  if ( LODWORD(supportBgFileList->max_length) <= gradeKind )
    sub_1C2D6F4(v4, method, v2);
  return supportBgFileList->m_Items[gradeKind];
}