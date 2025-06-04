void __fastcall Grade___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  struct System_String_array *v21; // x19
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  __int64 v26; // x19
  int32_t v27; // w1
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  struct Grade_StaticFields *static_fields; // x0
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
  const MethodInfo *v65; // x3
  __int64 v66; // x19
  int32_t v67; // w1
  const MethodInfo *v68; // x3
  int32_t v69; // w1
  struct Grade_StaticFields *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x3
  __int64 v74; // x19
  int32_t v75; // w1
  const MethodInfo *v76; // x3
  int32_t v77; // w1
  struct Grade_StaticFields *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3

  if ( (byte_4B00F49 & 1) == 0 )
  {
    sub_1BC3008(&Grade_TypeInfo, v1);
    sub_1BC3008(&string___TypeInfo, v2);
    sub_1BC3008(&StringLiteral_20245/*"img_listbg_04"*/, v3);
    sub_1BC3008(&StringLiteral_20242/*"img_listbg_01"*/, v4);
    sub_1BC3008(&StringLiteral_20252/*"img_mastername_line1"*/, v5);
    sub_1BC3008(&StringLiteral_20170/*"img_commonbg_04"*/, v6);
    sub_1BC3008(&StringLiteral_20010/*"icon_grade_1"*/, v7);
    sub_1BC3008(&StringLiteral_20255/*"img_masterprofile_bg2"*/, v8);
    sub_1BC3008(&StringLiteral_19472/*"frame_master_bg1"*/, v9);
    sub_1BC3008(&StringLiteral_20254/*"img_masterprofile_bg1"*/, v10);
    sub_1BC3008(&StringLiteral_23457/*"status_master_frame"*/, v11);
    sub_1BC3008(&StringLiteral_20244/*"img_listbg_03"*/, v12);
    sub_1BC3008(&StringLiteral_20251/*"img_masterform_bg"*/, v13);
    sub_1BC3008(&StringLiteral_20253/*"img_mastername_line2"*/, v14);
    sub_1BC3008(&StringLiteral_19471/*"frame_master_bg"*/, v15);
    sub_1BC3008(&StringLiteral_23458/*"status_master_frame1"*/, v16);
    byte_4B00F49 = 1;
  }
  v17 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v21 = (struct System_String_array *)v17;
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_27;
  v22 = StringLiteral_20010/*"icon_grade_1"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_20010/*"icon_grade_1"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 40), v22, v19, v20);
  Grade_TypeInfo->static_fields->gradeIconFileList = v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)Grade_TypeInfo->static_fields, (int32_t)v21, v23, v24);
  v17 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v26 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v27 = StringLiteral_20254/*"img_masterprofile_bg1"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20254/*"img_masterprofile_bg1"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 32), v27, v19, v25);
  if ( *(_DWORD *)(v26 + 24) <= 1u )
    goto LABEL_27;
  v29 = StringLiteral_20255/*"img_masterprofile_bg2"*/;
  *(_QWORD *)(v26 + 40) = StringLiteral_20255/*"img_masterprofile_bg2"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 40), v29, v19, v28);
  static_fields = Grade_TypeInfo->static_fields;
  static_fields->masterProfileBgFileList = (struct System_String_array *)v26;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->masterProfileBgFileList, v26, v31, v32);
  v17 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v34 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v35 = StringLiteral_20252/*"img_mastername_line1"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20252/*"img_mastername_line1"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 32), v35, v19, v33);
  if ( *(_DWORD *)(v34 + 24) <= 1u )
    goto LABEL_27;
  v37 = StringLiteral_20253/*"img_mastername_line2"*/;
  *(_QWORD *)(v34 + 40) = StringLiteral_20253/*"img_mastername_line2"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v34 + 40), v37, v19, v36);
  v38 = Grade_TypeInfo->static_fields;
  v38->masterProfileBgLineFileList = (struct System_String_array *)v34;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v38->masterProfileBgLineFileList, v34, v39, v40);
  v17 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v42 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v43 = StringLiteral_20170/*"img_commonbg_04"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20170/*"img_commonbg_04"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 32), v43, v19, v41);
  if ( *(_DWORD *)(v42 + 24) <= 1u )
    goto LABEL_27;
  v45 = StringLiteral_20251/*"img_masterform_bg"*/;
  *(_QWORD *)(v42 + 40) = StringLiteral_20251/*"img_masterform_bg"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v42 + 40), v45, v19, v44);
  v46 = Grade_TypeInfo->static_fields;
  v46->masterEquipBgFileList = (struct System_String_array *)v42;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v46->masterEquipBgFileList, v42, v47, v48);
  v17 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v50 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v51 = StringLiteral_19471/*"frame_master_bg"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_19471/*"frame_master_bg"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 32), v51, v19, v49);
  if ( *(_DWORD *)(v50 + 24) <= 1u )
    goto LABEL_27;
  v53 = StringLiteral_19472/*"frame_master_bg1"*/;
  *(_QWORD *)(v50 + 40) = StringLiteral_19472/*"frame_master_bg1"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 40), v53, v19, v52);
  v54 = Grade_TypeInfo->static_fields;
  v54->battleIconBgFileList = (struct System_String_array *)v50;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v54->battleIconBgFileList, v50, v55, v56);
  v17 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v58 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v59 = StringLiteral_23457/*"status_master_frame"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_23457/*"status_master_frame"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 32), v59, v19, v57);
  if ( *(_DWORD *)(v58 + 24) <= 1u )
    goto LABEL_27;
  v61 = StringLiteral_23458/*"status_master_frame1"*/;
  *(_QWORD *)(v58 + 40) = StringLiteral_23458/*"status_master_frame1"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v58 + 40), v61, v19, v60);
  v62 = Grade_TypeInfo->static_fields;
  v62->mainMstIconBgFileList = (struct System_String_array *)v58;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v62->mainMstIconBgFileList, v58, v63, v64);
  v17 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v66 = v17;
  if ( !*(_DWORD *)(v17 + 24)
    || (v67 = StringLiteral_20242/*"img_listbg_01"*/,
        *(_QWORD *)(v17 + 32) = StringLiteral_20242/*"img_listbg_01"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 32), v67, v19, v65),
        *(_DWORD *)(v66 + 24) <= 1u) )
  {
LABEL_27:
    sub_1BC326C(v17, v18, v19);
  }
  v69 = StringLiteral_20244/*"img_listbg_03"*/;
  *(_QWORD *)(v66 + 40) = StringLiteral_20244/*"img_listbg_03"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v66 + 40), v69, v19, v68);
  v70 = Grade_TypeInfo->static_fields;
  v70->supportBgFileList = (struct System_String_array *)v66;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v70->supportBgFileList, v66, v71, v72);
  v17 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !v17 )
LABEL_28:
    sub_1BC3264(v17, v18);
  v74 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v75 = StringLiteral_20242/*"img_listbg_01"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20242/*"img_listbg_01"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 32), v75, v19, v73);
  if ( *(_DWORD *)(v74 + 24) <= 1u )
    goto LABEL_27;
  v77 = StringLiteral_20245/*"img_listbg_04"*/;
  *(_QWORD *)(v74 + 40) = StringLiteral_20245/*"img_listbg_04"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v74 + 40), v77, v19, v76);
  v78 = Grade_TypeInfo->static_fields;
  v78->followerBgFileList = (struct System_String_array *)v74;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v78->followerBgFileList, v74, v79, v80);
}


void __fastcall Grade___ctor(Grade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall Grade__GetBattleIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *battleIconBgFileList; // x8

  if ( (byte_4B00F45 & 1) == 0 )
  {
    sub_1BC3008(&Grade_TypeInfo, method);
    byte_4B00F45 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  battleIconBgFileList = v4->static_fields->battleIconBgFileList;
  if ( !battleIconBgFileList )
    sub_1BC3264(v4, method);
  if ( battleIconBgFileList->max_length <= gradeKind )
    sub_1BC326C(v4, method, v2);
  return battleIconBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetFollowerBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *followerBgFileList; // x8

  if ( (byte_4B00F48 & 1) == 0 )
  {
    sub_1BC3008(&Grade_TypeInfo, method);
    byte_4B00F48 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  followerBgFileList = v4->static_fields->followerBgFileList;
  if ( !followerBgFileList )
    sub_1BC3264(v4, method);
  if ( followerBgFileList->max_length <= gradeKind )
    sub_1BC326C(v4, method, v2);
  return followerBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetIconImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *gradeIconFileList; // x8

  if ( (byte_4B00F41 & 1) == 0 )
  {
    sub_1BC3008(&Grade_TypeInfo, method);
    byte_4B00F41 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  gradeIconFileList = v4->static_fields->gradeIconFileList;
  if ( !gradeIconFileList )
    sub_1BC3264(v4, method);
  if ( gradeIconFileList->max_length <= gradeKind )
    sub_1BC326C(v4, method, v2);
  return gradeIconFileList->m_Items[gradeKind];
}


int32_t __fastcall Grade__GetKind(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B00F3D & 1) == 0 )
  {
    sub_1BC3008(&TutorialFlag_TypeInfo, v1);
    byte_4B00F3D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_39466584(127, v1);
}


int32_t __fastcall Grade__GetKind_39466668(UserGameEntity_o *userGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4B00F3E & 1) == 0 )
  {
    sub_1BC3008(&TutorialFlag_TypeInfo, method);
    byte_4B00F3E = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !userGameEntity )
    sub_1BC3264(v3, method);
  return (LODWORD(userGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t __fastcall Grade__GetKind_39466888(OtherUserGameEntity_o *otherUserGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4B00F3F & 1) == 0 )
  {
    sub_1BC3008(&TutorialFlag_TypeInfo, method);
    byte_4B00F3F = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !otherUserGameEntity )
    sub_1BC3264(v3, method);
  return (LODWORD(otherUserGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t __fastcall Grade__GetKind_39467080(FollowerInfo_o *followerInfo, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4B00F40 & 1) == 0 )
  {
    sub_1BC3008(&TutorialFlag_TypeInfo, method);
    byte_4B00F40 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !followerInfo )
    sub_1BC3264(v3, method);
  return (LODWORD(followerInfo->fields.tutorial1) >> 27) & 1;
}


System_String_o *__fastcall Grade__GetMainMstIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *mainMstIconBgFileList; // x8

  if ( (byte_4B00F46 & 1) == 0 )
  {
    sub_1BC3008(&Grade_TypeInfo, method);
    byte_4B00F46 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  mainMstIconBgFileList = v4->static_fields->mainMstIconBgFileList;
  if ( !mainMstIconBgFileList )
    sub_1BC3264(v4, method);
  if ( mainMstIconBgFileList->max_length <= gradeKind )
    sub_1BC326C(v4, method, v2);
  return mainMstIconBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterEquipBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *masterEquipBgFileList; // x8

  if ( (byte_4B00F44 & 1) == 0 )
  {
    sub_1BC3008(&Grade_TypeInfo, method);
    byte_4B00F44 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  masterEquipBgFileList = v4->static_fields->masterEquipBgFileList;
  if ( !masterEquipBgFileList )
    sub_1BC3264(v4, method);
  if ( masterEquipBgFileList->max_length <= gradeKind )
    sub_1BC326C(v4, method, v2);
  return masterEquipBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterProfileBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *masterProfileBgFileList; // x8

  if ( (byte_4B00F42 & 1) == 0 )
  {
    sub_1BC3008(&Grade_TypeInfo, method);
    byte_4B00F42 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  masterProfileBgFileList = v4->static_fields->masterProfileBgFileList;
  if ( !masterProfileBgFileList )
    sub_1BC3264(v4, method);
  if ( masterProfileBgFileList->max_length <= gradeKind )
    sub_1BC326C(v4, method, v2);
  return masterProfileBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterProfileBgLineImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *masterProfileBgLineFileList; // x8

  if ( (byte_4B00F43 & 1) == 0 )
  {
    sub_1BC3008(&Grade_TypeInfo, method);
    byte_4B00F43 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  masterProfileBgLineFileList = v4->static_fields->masterProfileBgLineFileList;
  if ( !masterProfileBgLineFileList )
    sub_1BC3264(v4, method);
  if ( masterProfileBgLineFileList->max_length <= gradeKind )
    sub_1BC326C(v4, method, v2);
  return masterProfileBgLineFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetSupportBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *supportBgFileList; // x8

  if ( (byte_4B00F47 & 1) == 0 )
  {
    sub_1BC3008(&Grade_TypeInfo, method);
    byte_4B00F47 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v4 = Grade_TypeInfo;
  }
  supportBgFileList = v4->static_fields->supportBgFileList;
  if ( !supportBgFileList )
    sub_1BC3264(v4, method);
  if ( supportBgFileList->max_length <= gradeKind )
    sub_1BC326C(v4, method, v2);
  return supportBgFileList->m_Items[gradeKind];
}