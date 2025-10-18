void Grade___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_String_array *v4; // x19
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  struct Grade_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x19
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  struct Grade_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x19
  int32_t v31; // w1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  struct Grade_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x19
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  struct Grade_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x19
  int32_t v51; // w1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  struct Grade_StaticFields *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x19
  int32_t v61; // w1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w1
  struct Grade_StaticFields *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  __int64 v70; // x19
  int32_t v71; // w1
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int32_t v74; // w1
  struct Grade_StaticFields *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3

  if ( (byte_4C41E99 & 1) == 0 )
  {
    sub_1C37058(&Grade_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_20446/*"img_listbg_04"*/);
    sub_1C37058(&StringLiteral_20443/*"img_listbg_01"*/);
    sub_1C37058(&StringLiteral_20453/*"img_mastername_line1"*/);
    sub_1C37058(&StringLiteral_20367/*"img_commonbg_04"*/);
    sub_1C37058(&StringLiteral_20204/*"icon_grade_1"*/);
    sub_1C37058(&StringLiteral_20456/*"img_masterprofile_bg2"*/);
    sub_1C37058(&StringLiteral_19658/*"frame_master_bg1"*/);
    sub_1C37058(&StringLiteral_20455/*"img_masterprofile_bg1"*/);
    sub_1C37058(&StringLiteral_23691/*"status_master_frame"*/);
    sub_1C37058(&StringLiteral_20445/*"img_listbg_03"*/);
    sub_1C37058(&StringLiteral_20452/*"img_masterform_bg"*/);
    sub_1C37058(&StringLiteral_20454/*"img_mastername_line2"*/);
    sub_1C37058(&StringLiteral_19657/*"frame_master_bg"*/);
    sub_1C37058(&StringLiteral_23692/*"status_master_frame1"*/);
    byte_4C41E99 = 1;
  }
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v4 = (struct System_String_array *)v1;
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_27;
  v5 = StringLiteral_20204/*"icon_grade_1"*/;
  *(_QWORD *)(v1 + 40) = StringLiteral_20204/*"icon_grade_1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 40), v5, v2, v3);
  Grade_TypeInfo->static_fields->gradeIconFileList = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)Grade_TypeInfo->static_fields, (int32_t)v4, v6, v7);
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v10 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v11 = StringLiteral_20455/*"img_masterprofile_bg1"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20455/*"img_masterprofile_bg1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v11, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_27;
  v14 = StringLiteral_20456/*"img_masterprofile_bg2"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_20456/*"img_masterprofile_bg2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 40), v14, v12, v13);
  static_fields = Grade_TypeInfo->static_fields;
  static_fields->masterProfileBgFileList = (struct System_String_array *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->masterProfileBgFileList, v10, v16, v17);
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v20 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v21 = StringLiteral_20453/*"img_mastername_line1"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20453/*"img_mastername_line1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v21, v18, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_27;
  v24 = StringLiteral_20454/*"img_mastername_line2"*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_20454/*"img_mastername_line2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 40), v24, v22, v23);
  v25 = Grade_TypeInfo->static_fields;
  v25->masterProfileBgLineFileList = (struct System_String_array *)v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&v25->masterProfileBgLineFileList, v20, v26, v27);
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v30 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v31 = StringLiteral_20367/*"img_commonbg_04"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20367/*"img_commonbg_04"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v31, v28, v29);
  if ( *(_DWORD *)(v30 + 24) <= 1u )
    goto LABEL_27;
  v34 = StringLiteral_20452/*"img_masterform_bg"*/;
  *(_QWORD *)(v30 + 40) = StringLiteral_20452/*"img_masterform_bg"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 40), v34, v32, v33);
  v35 = Grade_TypeInfo->static_fields;
  v35->masterEquipBgFileList = (struct System_String_array *)v30;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35->masterEquipBgFileList, v30, v36, v37);
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v40 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v41 = StringLiteral_19657/*"frame_master_bg"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_19657/*"frame_master_bg"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v41, v38, v39);
  if ( *(_DWORD *)(v40 + 24) <= 1u )
    goto LABEL_27;
  v44 = StringLiteral_19658/*"frame_master_bg1"*/;
  *(_QWORD *)(v40 + 40) = StringLiteral_19658/*"frame_master_bg1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v40 + 40), v44, v42, v43);
  v45 = Grade_TypeInfo->static_fields;
  v45->battleIconBgFileList = (struct System_String_array *)v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&v45->battleIconBgFileList, v40, v46, v47);
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v50 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v51 = StringLiteral_23691/*"status_master_frame"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_23691/*"status_master_frame"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v51, v48, v49);
  if ( *(_DWORD *)(v50 + 24) <= 1u )
    goto LABEL_27;
  v54 = StringLiteral_23692/*"status_master_frame1"*/;
  *(_QWORD *)(v50 + 40) = StringLiteral_23692/*"status_master_frame1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v50 + 40), v54, v52, v53);
  v55 = Grade_TypeInfo->static_fields;
  v55->mainMstIconBgFileList = (struct System_String_array *)v50;
  sub_1C36FFC((CGThumbnailListItem_o *)&v55->mainMstIconBgFileList, v50, v56, v57);
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v60 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v61 = StringLiteral_20443/*"img_listbg_01"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_20443/*"img_listbg_01"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v61, v58, v59),
        *(_DWORD *)(v60 + 24) <= 1u) )
  {
LABEL_27:
    sub_1C372BC(v1);
  }
  v64 = StringLiteral_20445/*"img_listbg_03"*/;
  *(_QWORD *)(v60 + 40) = StringLiteral_20445/*"img_listbg_03"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v60 + 40), v64, v62, v63);
  v65 = Grade_TypeInfo->static_fields;
  v65->supportBgFileList = (struct System_String_array *)v60;
  sub_1C36FFC((CGThumbnailListItem_o *)&v65->supportBgFileList, v60, v66, v67);
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
LABEL_28:
    sub_1C372B4(v1);
  v70 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v71 = StringLiteral_20443/*"img_listbg_01"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20443/*"img_listbg_01"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v71, v68, v69);
  if ( *(_DWORD *)(v70 + 24) <= 1u )
    goto LABEL_27;
  v74 = StringLiteral_20446/*"img_listbg_04"*/;
  *(_QWORD *)(v70 + 40) = StringLiteral_20446/*"img_listbg_04"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v70 + 40), v74, v72, v73);
  v75 = Grade_TypeInfo->static_fields;
  v75->followerBgFileList = (struct System_String_array *)v70;
  sub_1C36FFC((CGThumbnailListItem_o *)&v75->followerBgFileList, v70, v76, v77);
}


void Grade___ctor(Grade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *Grade__GetBattleIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *battleIconBgFileList; // x8

  if ( (byte_4C41E95 & 1) == 0 )
  {
    sub_1C37058(&Grade_TypeInfo);
    byte_4C41E95 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  battleIconBgFileList = v3->static_fields->battleIconBgFileList;
  if ( !battleIconBgFileList )
    sub_1C372B4(v3);
  if ( LODWORD(battleIconBgFileList->max_length) <= gradeKind )
    sub_1C372BC(v3);
  return battleIconBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetFollowerBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *followerBgFileList; // x8

  if ( (byte_4C41E98 & 1) == 0 )
  {
    sub_1C37058(&Grade_TypeInfo);
    byte_4C41E98 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  followerBgFileList = v3->static_fields->followerBgFileList;
  if ( !followerBgFileList )
    sub_1C372B4(v3);
  if ( LODWORD(followerBgFileList->max_length) <= gradeKind )
    sub_1C372BC(v3);
  return followerBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetIconImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *gradeIconFileList; // x8

  if ( (byte_4C41E91 & 1) == 0 )
  {
    sub_1C37058(&Grade_TypeInfo);
    byte_4C41E91 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  gradeIconFileList = v3->static_fields->gradeIconFileList;
  if ( !gradeIconFileList )
    sub_1C372B4(v3);
  if ( LODWORD(gradeIconFileList->max_length) <= gradeKind )
    sub_1C372BC(v3);
  return gradeIconFileList->m_Items[gradeKind];
}


int32_t Grade__GetKind(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C41E8D & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C41E8D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40427704(127, v1);
}


int32_t Grade__GetKind_40427788(UserGameEntity_o *userGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4C41E8E & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C41E8E = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !userGameEntity )
    sub_1C372B4(v3);
  return (LODWORD(userGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t Grade__GetKind_40428008(OtherUserGameEntity_o *otherUserGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4C41E8F & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C41E8F = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !otherUserGameEntity )
    sub_1C372B4(v3);
  return (LODWORD(otherUserGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t Grade__GetKind_40428200(FollowerInfo_o *followerInfo, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4C41E90 & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C41E90 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !followerInfo )
    sub_1C372B4(v3);
  return (LODWORD(followerInfo->fields.tutorial1) >> 27) & 1;
}


System_String_o *Grade__GetMainMstIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *mainMstIconBgFileList; // x8

  if ( (byte_4C41E96 & 1) == 0 )
  {
    sub_1C37058(&Grade_TypeInfo);
    byte_4C41E96 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  mainMstIconBgFileList = v3->static_fields->mainMstIconBgFileList;
  if ( !mainMstIconBgFileList )
    sub_1C372B4(v3);
  if ( LODWORD(mainMstIconBgFileList->max_length) <= gradeKind )
    sub_1C372BC(v3);
  return mainMstIconBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetMasterEquipBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterEquipBgFileList; // x8

  if ( (byte_4C41E94 & 1) == 0 )
  {
    sub_1C37058(&Grade_TypeInfo);
    byte_4C41E94 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterEquipBgFileList = v3->static_fields->masterEquipBgFileList;
  if ( !masterEquipBgFileList )
    sub_1C372B4(v3);
  if ( LODWORD(masterEquipBgFileList->max_length) <= gradeKind )
    sub_1C372BC(v3);
  return masterEquipBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetMasterProfileBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterProfileBgFileList; // x8

  if ( (byte_4C41E92 & 1) == 0 )
  {
    sub_1C37058(&Grade_TypeInfo);
    byte_4C41E92 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterProfileBgFileList = v3->static_fields->masterProfileBgFileList;
  if ( !masterProfileBgFileList )
    sub_1C372B4(v3);
  if ( LODWORD(masterProfileBgFileList->max_length) <= gradeKind )
    sub_1C372BC(v3);
  return masterProfileBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetMasterProfileBgLineImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterProfileBgLineFileList; // x8

  if ( (byte_4C41E93 & 1) == 0 )
  {
    sub_1C37058(&Grade_TypeInfo);
    byte_4C41E93 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterProfileBgLineFileList = v3->static_fields->masterProfileBgLineFileList;
  if ( !masterProfileBgLineFileList )
    sub_1C372B4(v3);
  if ( LODWORD(masterProfileBgLineFileList->max_length) <= gradeKind )
    sub_1C372BC(v3);
  return masterProfileBgLineFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetSupportBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *supportBgFileList; // x8

  if ( (byte_4C41E97 & 1) == 0 )
  {
    sub_1C37058(&Grade_TypeInfo);
    byte_4C41E97 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  supportBgFileList = v3->static_fields->supportBgFileList;
  if ( !supportBgFileList )
    sub_1C372B4(v3);
  if ( LODWORD(supportBgFileList->max_length) <= gradeKind )
    sub_1C372BC(v3);
  return supportBgFileList->m_Items[gradeKind];
}