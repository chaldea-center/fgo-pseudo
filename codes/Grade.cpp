void Grade___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_String_array *v5; // x19
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x19
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct Grade_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x19
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  struct Grade_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x19
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  struct Grade_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x19
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  struct Grade_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x19
  int32_t v52; // w1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  struct Grade_StaticFields *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x19
  int32_t v62; // w1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w1
  struct Grade_StaticFields *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x19
  int32_t v72; // w1
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w1
  struct Grade_StaticFields *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3

  if ( (byte_4C55C3B & 1) == 0 )
  {
    sub_1C3E564(&Grade_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_20464/*"img_listbg_04"*/);
    sub_1C3E564(&StringLiteral_20461/*"img_listbg_01"*/);
    sub_1C3E564(&StringLiteral_20471/*"img_mastername_line1"*/);
    sub_1C3E564(&StringLiteral_20385/*"img_commonbg_04"*/);
    sub_1C3E564(&StringLiteral_20222/*"icon_grade_1"*/);
    sub_1C3E564(&StringLiteral_20474/*"img_masterprofile_bg2"*/);
    sub_1C3E564(&StringLiteral_19676/*"frame_master_bg1"*/);
    sub_1C3E564(&StringLiteral_20473/*"img_masterprofile_bg1"*/);
    sub_1C3E564(&StringLiteral_23711/*"status_master_frame"*/);
    sub_1C3E564(&StringLiteral_20463/*"img_listbg_03"*/);
    sub_1C3E564(&StringLiteral_20470/*"img_masterform_bg"*/);
    sub_1C3E564(&StringLiteral_20472/*"img_mastername_line2"*/);
    sub_1C3E564(&StringLiteral_19675/*"frame_master_bg"*/);
    sub_1C3E564(&StringLiteral_23712/*"status_master_frame1"*/);
    byte_4C55C3B = 1;
  }
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v5 = (struct System_String_array *)v1;
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_27;
  v6 = StringLiteral_20222/*"icon_grade_1"*/;
  *(_QWORD *)(v1 + 40) = StringLiteral_20222/*"icon_grade_1"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v1 + 40), v6, v3, v4);
  Grade_TypeInfo->static_fields->gradeIconFileList = v5;
  sub_1C3E508((CGThumbnailListItem_o *)Grade_TypeInfo->static_fields, (int32_t)v5, v7, v8);
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v11 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v12 = StringLiteral_20473/*"img_masterprofile_bg1"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20473/*"img_masterprofile_bg1"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v1 + 32), v12, v9, v10);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_27;
  v15 = StringLiteral_20474/*"img_masterprofile_bg2"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_20474/*"img_masterprofile_bg2"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v11 + 40), v15, v13, v14);
  static_fields = Grade_TypeInfo->static_fields;
  static_fields->masterProfileBgFileList = (struct System_String_array *)v11;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->masterProfileBgFileList, v11, v17, v18);
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v21 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v22 = StringLiteral_20471/*"img_mastername_line1"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20471/*"img_mastername_line1"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v1 + 32), v22, v19, v20);
  if ( *(_DWORD *)(v21 + 24) <= 1u )
    goto LABEL_27;
  v25 = StringLiteral_20472/*"img_mastername_line2"*/;
  *(_QWORD *)(v21 + 40) = StringLiteral_20472/*"img_mastername_line2"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v21 + 40), v25, v23, v24);
  v26 = Grade_TypeInfo->static_fields;
  v26->masterProfileBgLineFileList = (struct System_String_array *)v21;
  sub_1C3E508((CGThumbnailListItem_o *)&v26->masterProfileBgLineFileList, v21, v27, v28);
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v31 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v32 = StringLiteral_20385/*"img_commonbg_04"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20385/*"img_commonbg_04"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v1 + 32), v32, v29, v30);
  if ( *(_DWORD *)(v31 + 24) <= 1u )
    goto LABEL_27;
  v35 = StringLiteral_20470/*"img_masterform_bg"*/;
  *(_QWORD *)(v31 + 40) = StringLiteral_20470/*"img_masterform_bg"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v31 + 40), v35, v33, v34);
  v36 = Grade_TypeInfo->static_fields;
  v36->masterEquipBgFileList = (struct System_String_array *)v31;
  sub_1C3E508((CGThumbnailListItem_o *)&v36->masterEquipBgFileList, v31, v37, v38);
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v41 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v42 = StringLiteral_19675/*"frame_master_bg"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_19675/*"frame_master_bg"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v1 + 32), v42, v39, v40);
  if ( *(_DWORD *)(v41 + 24) <= 1u )
    goto LABEL_27;
  v45 = StringLiteral_19676/*"frame_master_bg1"*/;
  *(_QWORD *)(v41 + 40) = StringLiteral_19676/*"frame_master_bg1"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v41 + 40), v45, v43, v44);
  v46 = Grade_TypeInfo->static_fields;
  v46->battleIconBgFileList = (struct System_String_array *)v41;
  sub_1C3E508((CGThumbnailListItem_o *)&v46->battleIconBgFileList, v41, v47, v48);
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v51 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v52 = StringLiteral_23711/*"status_master_frame"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_23711/*"status_master_frame"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v1 + 32), v52, v49, v50);
  if ( *(_DWORD *)(v51 + 24) <= 1u )
    goto LABEL_27;
  v55 = StringLiteral_23712/*"status_master_frame1"*/;
  *(_QWORD *)(v51 + 40) = StringLiteral_23712/*"status_master_frame1"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v51 + 40), v55, v53, v54);
  v56 = Grade_TypeInfo->static_fields;
  v56->mainMstIconBgFileList = (struct System_String_array *)v51;
  sub_1C3E508((CGThumbnailListItem_o *)&v56->mainMstIconBgFileList, v51, v57, v58);
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
    goto LABEL_28;
  v61 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v62 = StringLiteral_20461/*"img_listbg_01"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_20461/*"img_listbg_01"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v1 + 32), v62, v59, v60),
        *(_DWORD *)(v61 + 24) <= 1u) )
  {
LABEL_27:
    sub_1C3E7C8(v1, v2);
  }
  v65 = StringLiteral_20463/*"img_listbg_03"*/;
  *(_QWORD *)(v61 + 40) = StringLiteral_20463/*"img_listbg_03"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v61 + 40), v65, v63, v64);
  v66 = Grade_TypeInfo->static_fields;
  v66->supportBgFileList = (struct System_String_array *)v61;
  sub_1C3E508((CGThumbnailListItem_o *)&v66->supportBgFileList, v61, v67, v68);
  v1 = sub_1C3E60C(string___TypeInfo, 2);
  if ( !v1 )
LABEL_28:
    sub_1C3E7C0(v1, v2);
  v71 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_27;
  v72 = StringLiteral_20461/*"img_listbg_01"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20461/*"img_listbg_01"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v1 + 32), v72, v69, v70);
  if ( *(_DWORD *)(v71 + 24) <= 1u )
    goto LABEL_27;
  v75 = StringLiteral_20464/*"img_listbg_04"*/;
  *(_QWORD *)(v71 + 40) = StringLiteral_20464/*"img_listbg_04"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v71 + 40), v75, v73, v74);
  v76 = Grade_TypeInfo->static_fields;
  v76->followerBgFileList = (struct System_String_array *)v71;
  sub_1C3E508((CGThumbnailListItem_o *)&v76->followerBgFileList, v71, v77, v78);
}


void Grade___ctor(Grade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *Grade__GetBattleIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *battleIconBgFileList; // x8

  if ( (byte_4C55C37 & 1) == 0 )
  {
    sub_1C3E564(&Grade_TypeInfo);
    byte_4C55C37 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  battleIconBgFileList = v3->static_fields->battleIconBgFileList;
  if ( !battleIconBgFileList )
    sub_1C3E7C0(v3, method);
  if ( LODWORD(battleIconBgFileList->max_length) <= gradeKind )
    sub_1C3E7C8(v3, method);
  return battleIconBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetFollowerBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *followerBgFileList; // x8

  if ( (byte_4C55C3A & 1) == 0 )
  {
    sub_1C3E564(&Grade_TypeInfo);
    byte_4C55C3A = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  followerBgFileList = v3->static_fields->followerBgFileList;
  if ( !followerBgFileList )
    sub_1C3E7C0(v3, method);
  if ( LODWORD(followerBgFileList->max_length) <= gradeKind )
    sub_1C3E7C8(v3, method);
  return followerBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetIconImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *gradeIconFileList; // x8

  if ( (byte_4C55C33 & 1) == 0 )
  {
    sub_1C3E564(&Grade_TypeInfo);
    byte_4C55C33 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  gradeIconFileList = v3->static_fields->gradeIconFileList;
  if ( !gradeIconFileList )
    sub_1C3E7C0(v3, method);
  if ( LODWORD(gradeIconFileList->max_length) <= gradeKind )
    sub_1C3E7C8(v3, method);
  return gradeIconFileList->m_Items[gradeKind];
}


int32_t Grade__GetKind(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4C55C2F & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C2F = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40473944(127, v1);
}


int32_t Grade__GetKind_40474028(UserGameEntity_o *userGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4C55C30 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C30 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !userGameEntity )
    sub_1C3E7C0(v3, method);
  return (LODWORD(userGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t Grade__GetKind_40474248(OtherUserGameEntity_o *otherUserGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4C55C31 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C31 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !otherUserGameEntity )
    sub_1C3E7C0(v3, method);
  return (LODWORD(otherUserGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t Grade__GetKind_40474440(FollowerInfo_o *followerInfo, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4C55C32 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C32 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !followerInfo )
    sub_1C3E7C0(v3, method);
  return (LODWORD(followerInfo->fields.tutorial1) >> 27) & 1;
}


System_String_o *Grade__GetMainMstIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *mainMstIconBgFileList; // x8

  if ( (byte_4C55C38 & 1) == 0 )
  {
    sub_1C3E564(&Grade_TypeInfo);
    byte_4C55C38 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  mainMstIconBgFileList = v3->static_fields->mainMstIconBgFileList;
  if ( !mainMstIconBgFileList )
    sub_1C3E7C0(v3, method);
  if ( LODWORD(mainMstIconBgFileList->max_length) <= gradeKind )
    sub_1C3E7C8(v3, method);
  return mainMstIconBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetMasterEquipBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterEquipBgFileList; // x8

  if ( (byte_4C55C36 & 1) == 0 )
  {
    sub_1C3E564(&Grade_TypeInfo);
    byte_4C55C36 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterEquipBgFileList = v3->static_fields->masterEquipBgFileList;
  if ( !masterEquipBgFileList )
    sub_1C3E7C0(v3, method);
  if ( LODWORD(masterEquipBgFileList->max_length) <= gradeKind )
    sub_1C3E7C8(v3, method);
  return masterEquipBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetMasterProfileBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterProfileBgFileList; // x8

  if ( (byte_4C55C34 & 1) == 0 )
  {
    sub_1C3E564(&Grade_TypeInfo);
    byte_4C55C34 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterProfileBgFileList = v3->static_fields->masterProfileBgFileList;
  if ( !masterProfileBgFileList )
    sub_1C3E7C0(v3, method);
  if ( LODWORD(masterProfileBgFileList->max_length) <= gradeKind )
    sub_1C3E7C8(v3, method);
  return masterProfileBgFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetMasterProfileBgLineImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterProfileBgLineFileList; // x8

  if ( (byte_4C55C35 & 1) == 0 )
  {
    sub_1C3E564(&Grade_TypeInfo);
    byte_4C55C35 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterProfileBgLineFileList = v3->static_fields->masterProfileBgLineFileList;
  if ( !masterProfileBgLineFileList )
    sub_1C3E7C0(v3, method);
  if ( LODWORD(masterProfileBgLineFileList->max_length) <= gradeKind )
    sub_1C3E7C8(v3, method);
  return masterProfileBgLineFileList->m_Items[gradeKind];
}


System_String_o *Grade__GetSupportBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *supportBgFileList; // x8

  if ( (byte_4C55C39 & 1) == 0 )
  {
    sub_1C3E564(&Grade_TypeInfo);
    byte_4C55C39 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  supportBgFileList = v3->static_fields->supportBgFileList;
  if ( !supportBgFileList )
    sub_1C3E7C0(v3, method);
  if ( LODWORD(supportBgFileList->max_length) <= gradeKind )
    sub_1C3E7C8(v3, method);
  return supportBgFileList->m_Items[gradeKind];
}